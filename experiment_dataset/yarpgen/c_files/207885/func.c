/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207885
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
    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)33))));
    var_15 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)184))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_0 [i_0])))), (var_4))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_3] [i_3 + 1] = ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */int) var_2)), (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_4 [i_0]))))))), (min((((/* implicit */long long int) (_Bool)0)), (0LL)))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_2 [i_0]))));
                            arr_10 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */signed char) (+(arr_8 [i_0] [i_1] [i_1] [i_3 - 1])));
                        }
                    } 
                } 
            }
        } 
    } 
}
