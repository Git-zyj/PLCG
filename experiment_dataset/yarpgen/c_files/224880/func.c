/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224880
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) (unsigned char)68)) - (37)))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned short) (unsigned char)85);
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_10 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_2 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 3] [i_1 - 3] [i_2 - 1]))) : (34359607296ULL))))))));
                arr_11 [i_2] [(unsigned char)5] [i_0] = ((((/* implicit */unsigned long long int) 5923996533441414620LL)) % (18446744039349944319ULL));
                var_14 *= ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_10 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1 - 1])), (arr_9 [i_1 - 1] [i_1 - 2] [i_1 + 1]))) << (((arr_3 [i_1 - 2] [i_1 - 1]) - (769372921)))));
            }
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0])))))));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((((/* implicit */_Bool) 3505924055U)) ? (arr_5 [i_0]) : (arr_5 [i_3]))) + (34359607271ULL)))));
            arr_14 [i_0] [i_3] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)206)) ? (18446744039349944345ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44487)))))));
            var_17 -= ((/* implicit */unsigned short) var_8);
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)163)) ? (18446744039349944354ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36996))))) << (((((((/* implicit */unsigned long long int) arr_9 [i_4] [i_5] [i_6])) * (6017609820293544074ULL))) - (798162162251123256ULL))))))));
                            var_19 ^= ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) != (34359607269ULL)))));
                            arr_23 [i_5] [i_3] [i_4] [i_4] [i_6] = min((((arr_8 [i_3]) - (arr_8 [i_0]))), (((arr_8 [i_5]) - (arr_8 [i_0]))));
                            arr_24 [i_0] [i_3] = ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
            } 
        }
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */unsigned long long int) -4357764979224750526LL)) >= (34359607297ULL))))));
    }
    var_21 = ((/* implicit */signed char) 18446744039349944358ULL);
}
