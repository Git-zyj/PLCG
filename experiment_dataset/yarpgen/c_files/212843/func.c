/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212843
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
    var_20 = ((/* implicit */short) ((((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6926301900464205728LL)))))) + (((17592186044416LL) / (((/* implicit */long long int) var_14)))))) + (9223372036854775807LL))) << (((((/* implicit */int) (short)32762)) - (32762)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_21 = ((/* implicit */int) (((((((((-(9223372036854775806LL))) & (((long long int) var_16)))) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((var_8) + (619252266514863135LL)))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -17592186044397LL)) ? (16383) : (((/* implicit */int) (short)-7324))));
        arr_4 [i_0] [1ULL] = ((/* implicit */short) (~(-8231219870578605263LL)));
        var_23 = ((/* implicit */short) ((((-6533394334149497855LL) + (9223372036854775807LL))) << (((1028592422686263741LL) - (1028592422686263741LL)))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 4; i_2 < 9; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                {
                    var_24 = ((/* implicit */int) arr_7 [i_2 + 2] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) 524287)) ? (((/* implicit */int) arr_13 [i_2 + 2] [i_1])) : (((/* implicit */int) var_18))));
                                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) -6606646144949368705LL)) || (((/* implicit */_Bool) var_5))));
                                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_16)) ? (9201580495969190934ULL) : (((/* implicit */unsigned long long int) 9223372036854775806LL)))) : (((/* implicit */unsigned long long int) (-(var_13))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 &= (+(((((/* implicit */_Bool) -17592186044410LL)) ? (-9223372036854775806LL) : (-7173535574842072202LL))));
    }
    var_29 = ((/* implicit */long long int) var_5);
    var_30 |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 17592186044396LL)))))))), (((long long int) ((((/* implicit */_Bool) 2147483647)) ? (7736749032708153299LL) : (((/* implicit */long long int) var_5)))))));
}
