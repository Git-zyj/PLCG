/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29545
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
    var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6)))) & (var_2)))));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) 9223372036854775799LL))));
    var_16 = ((/* implicit */signed char) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_2 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                    var_19 = ((/* implicit */signed char) arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) arr_8 [i_3] [i_0] [i_0] [i_0]);
                                var_21 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_9 [i_4 - 4] [4U] [4U] [i_4] [i_4 - 1]))));
                                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12419926381396613945ULL)) ? (12419926381396613945ULL) : (6026817692312937670ULL)))) ? (((/* implicit */int) ((6026817692312937662ULL) > (((/* implicit */unsigned long long int) -3796047413083409425LL))))) : (1518195736)));
    }
}
