/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54813
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
    var_14 = var_5;
    var_15 = ((/* implicit */unsigned long long int) ((-7106872802410520679LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15024)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (signed char)-28)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((var_7), (1027098257325766132ULL)))))) : (max((min((var_9), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) arr_1 [i_0]))))));
        arr_2 [i_0] = (-(((((unsigned long long int) (signed char)6)) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) var_10)))))));
        arr_4 [9] = ((/* implicit */short) min((arr_0 [i_0] [i_0]), (arr_1 [i_0])));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (short)20677)) >= (var_11)))))))));
        var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_1] [i_1]))));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) 1046411250754388819LL)) : (var_7))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)230)) != (((/* implicit */int) (short)7559))))) + (((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) arr_6 [7U]))))))) == (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_10))))))));
        var_19 = ((/* implicit */short) max((((int) ((((/* implicit */int) (unsigned char)1)) != (((/* implicit */int) (signed char)-40))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_5 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5591)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)59962)) != (((/* implicit */int) (unsigned char)182))))) : ((-(((/* implicit */int) (unsigned short)19374))))))));
        var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 1198589096U)), (arr_10 [i_2] [i_2])));
    }
}
