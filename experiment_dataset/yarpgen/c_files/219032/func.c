/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219032
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
    var_10 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)61)), (var_5)))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((signed char) var_3)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    arr_9 [i_2] = ((/* implicit */unsigned char) var_3);
                    var_11 = ((/* implicit */unsigned short) arr_3 [i_2]);
                }
                /* LoopNest 3 */
                for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    for (unsigned char i_4 = 3; i_4 < 21; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (~(min((((((/* implicit */_Bool) var_8)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (unsigned char)63)))))))));
                                var_13 = ((/* implicit */unsigned short) (~((-(((var_6) * (((/* implicit */unsigned int) arr_14 [i_5] [i_0] [i_3]))))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (~(((/* implicit */int) (unsigned char)71)))))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */long long int) var_4);
}
