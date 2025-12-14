/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189638
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) max((2116524810), (((/* implicit */int) (unsigned char)185))));
                var_21 = ((/* implicit */unsigned char) (~(((long long int) arr_2 [i_1 - 1]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) var_17);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) (unsigned char)71);
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)70)) ? (arr_11 [i_3 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) : (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_2]))));
                            }
                        } 
                    } 
                }
                var_25 *= ((/* implicit */_Bool) (+(((long long int) var_3))));
                var_26 = (-((+(((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_8), ((unsigned char)255))))) : (-9223372036854775807LL))) >> (((((long long int) ((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) - (6989434889071316908LL)))));
}
