/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189908
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) var_4)), (((unsigned int) (signed char)62)))), ((~(((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((unsigned int) var_8));
                                var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_0 - 1] [i_0]))));
                                var_16 ^= ((/* implicit */long long int) 248712401U);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) var_4);
                }
                var_17 = ((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1] [i_0]);
                arr_15 [i_0 - 1] [i_0] [i_0] = ((((/* implicit */_Bool) min(((+(248712401U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))))) ? (((long long int) (~(4046254897U)))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_1])) ? (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                arr_16 [i_0 - 1] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (arr_8 [i_0 - 1] [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (unsigned short)4095))));
}
