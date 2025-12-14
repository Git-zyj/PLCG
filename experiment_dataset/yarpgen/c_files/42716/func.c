/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42716
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) var_7);
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((arr_4 [i_1 + 1] [i_0 + 2] [i_1]) >> (((((/* implicit */int) var_4)) - (14)))))) * (((((4582693469622476207LL) + (-4582693469622476207LL))) >> (((((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) 3534470233U)))) + (9150757804291130626LL)))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                            {
                                arr_20 [i_2] [i_3] = ((/* implicit */int) ((max((((/* implicit */long long int) (~(var_7)))), ((~(9223372036854775807LL))))) / (((/* implicit */long long int) (((-(var_7))) - (((/* implicit */int) ((var_9) <= (var_9)))))))));
                                arr_21 [i_3] [i_4 + 1] [i_5] = ((/* implicit */unsigned long long int) var_8);
                            }
                            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3]))))) / (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) max((((/* implicit */short) arr_14 [i_5] [i_4] [i_3] [i_2])), (var_1)))))))));
                            var_13 = (+((-(var_9))));
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2269814212194729984ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3998286025100763468LL)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))) : (-4582693469622476202LL))))));
                            arr_22 [i_3] = ((/* implicit */short) max(((-(-6396415538413389865LL))), (((/* implicit */long long int) -597129954))));
                        }
                    } 
                } 
                var_15 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_7)))), (((((/* implicit */int) arr_14 [i_3] [i_3] [i_2] [i_2])) >= (((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15157414259032981240ULL)) ? (-3998286025100763472LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-145)))));
}
