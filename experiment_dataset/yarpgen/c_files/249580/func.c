/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249580
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
    var_10 = ((/* implicit */short) ((unsigned int) ((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))))));
    var_11 *= ((/* implicit */short) (-(var_5)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [9ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-4300)))))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((int) arr_0 [i_0 + 2]))));
                    var_12 = ((/* implicit */short) ((long long int) (-(((/* implicit */int) (short)8728)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned long long int) (short)-8736);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */long long int) var_0);
                                arr_16 [i_0] [i_0] [i_0] [9] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) max((arr_13 [i_4 - 2] [(signed char)8] [i_4 - 2] [i_4] [(unsigned char)14]), (var_9)));
                                arr_17 [i_0] [i_1] [i_1] [i_2] [i_0] [i_4] [i_4 + 2] = ((/* implicit */signed char) arr_3 [i_0] [i_3] [(_Bool)1]);
                                arr_18 [i_0] [i_1] [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((signed char) arr_0 [i_0 + 1]));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0 + 1] [i_0] = ((/* implicit */short) (-((+(arr_10 [i_1])))));
                }
            } 
        } 
    } 
    var_14 = var_0;
}
