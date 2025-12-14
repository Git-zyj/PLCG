/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20117
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) ((unsigned short) 11618117656728707207ULL))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_12)), ((signed char)-26))))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) - (var_1)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (892774310U)));
                var_15 = ((((/* implicit */_Bool) min((max((((/* implicit */int) var_0)), (524287))), (((/* implicit */int) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned char) var_12)))))))) ? (((/* implicit */unsigned int) var_9)) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (3402192980U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_16 *= ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) -1368074833)) : (18446744073709551615ULL))) >= (((/* implicit */unsigned long long int) arr_4 [i_1] [8U])));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned char) (_Bool)1);
                                var_18 -= ((/* implicit */int) ((signed char) var_3));
                                var_19 = (!(((/* implicit */_Bool) 892774338U)));
                            }
                        } 
                    } 
                }
                arr_12 [0] [i_1] &= ((/* implicit */int) (unsigned short)51812);
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((var_4), (var_11)))))))));
    var_21 ^= ((/* implicit */unsigned int) 18446744073709551615ULL);
    var_22 = ((/* implicit */unsigned int) var_11);
}
