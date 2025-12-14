/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244371
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 += ((/* implicit */unsigned int) (unsigned short)16718);
        var_17 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (unsigned short)48817))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_18 |= ((/* implicit */short) (((~(((/* implicit */int) (unsigned short)53758)))) <= (((/* implicit */int) (unsigned short)65145))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | (arr_3 [i_1])))) || (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (-7LL))))))));
        var_20 = ((/* implicit */short) (unsigned short)53758);
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
    {
        arr_8 [i_2] [(short)12] |= ((/* implicit */long long int) ((((/* implicit */int) (short)-6978)) | (((/* implicit */int) ((signed char) (short)7)))));
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_12))))), (((unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-25729)) && (((/* implicit */_Bool) arr_3 [i_2]))))))));
        arr_10 [i_2] = ((/* implicit */unsigned int) (short)-25729);
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)58695)) & (((/* implicit */int) (unsigned short)39381))));
    var_22 -= ((((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)-1)) + (((/* implicit */int) var_1)))), (((/* implicit */int) ((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))) >= (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48802)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6990))) : (4294967290U)))) | (var_6))));
    var_23 = ((/* implicit */unsigned char) var_12);
    var_24 = ((/* implicit */unsigned char) (((-(((/* implicit */int) ((signed char) var_3))))) > (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))) * (((/* implicit */int) (unsigned short)11778))))));
}
