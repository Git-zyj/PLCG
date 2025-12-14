/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48387
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
    var_17 = ((/* implicit */unsigned int) ((int) (~(var_2))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) -276390015))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_5))) && (((/* implicit */_Bool) max((max((4294967293U), (2U))), (((/* implicit */unsigned int) -2147483632))))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 20; i_2 += 4) 
                {
                    var_20 *= (~(((((((/* implicit */unsigned int) var_7)) <= (4294967294U))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) 3U)) ? (((/* implicit */unsigned int) 2147483647)) : (4294967277U))))));
                    arr_6 [18U] [i_0] [i_2] [7] = ((/* implicit */unsigned int) var_10);
                    var_21 -= ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == ((~(arr_0 [i_0 + 2])))))) << (((((/* implicit */_Bool) ((unsigned char) -392358302))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((12U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))) : (arr_1 [i_0 - 3]))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) min((var_22), (((int) ((var_2) <= (((/* implicit */long long int) ((/* implicit */int) (short)17156))))))));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-2147483647)))) ? (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_2))) : (((/* implicit */long long int) var_16)))))));
                            }
                        } 
                    } 
                    arr_15 [i_3] |= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? ((-(var_2))) : (((/* implicit */long long int) arr_12 [13U] [0] [i_0 - 3] [i_0 - 2]))));
                    arr_16 [(signed char)14] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)0);
                    arr_17 [i_1] [(signed char)10] [i_3] &= ((392358332) % (2012483688));
                }
                arr_18 [i_0] [i_1] = ((/* implicit */int) var_5);
            }
        } 
    } 
}
