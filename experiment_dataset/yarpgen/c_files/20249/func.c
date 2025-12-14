/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20249
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned char) ((((arr_2 [i_4 - 1]) * (((/* implicit */int) var_11)))) / (min((((/* implicit */int) arr_12 [i_4 - 1] [i_3] [i_2 - 2] [i_1] [i_0])), (((-1297621623) / (((/* implicit */int) (unsigned short)10))))))));
                                var_20 = ((/* implicit */short) (+(((((/* implicit */int) var_9)) / ((~(((/* implicit */int) (unsigned short)8718))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) 0ULL);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) max((((/* implicit */long long int) ((int) (~(((/* implicit */int) (_Bool)1)))))), (((var_1) & (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)56835)))))))));
}
