/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191462
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = ((/* implicit */unsigned short) ((unsigned int) var_0));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        var_12 = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)16378))))), (max((((/* implicit */unsigned long long int) (short)-6496)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18))) + (arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) (short)-6496)) ? (10371670749411962968ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((short) arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((9066862808485534734ULL) | (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)42633))))) : (((arr_1 [i_0]) + (var_0)))))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)32767))) || ((!(((/* implicit */_Bool) arr_1 [i_0])))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_9)), (771614131U))) - (((unsigned int) arr_5 [i_1] [i_1]))));
        arr_10 [18ULL] [i_1] = 2702951749424002647ULL;
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(2467593724U)));
    }
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
    {
        arr_14 [i_2] [i_2] = ((/* implicit */short) (+(16831259926004644926ULL)));
        arr_15 [(short)15] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22903))) + (((((/* implicit */_Bool) arr_13 [i_2])) ? (var_7) : (arr_1 [i_2])))))) ? (max((((unsigned long long int) 18446744073709551612ULL)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32767))))))) : (max((((arr_0 [i_2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15597845698023801640ULL)) || (((/* implicit */_Bool) 4035374333U))))))));
    }
}
