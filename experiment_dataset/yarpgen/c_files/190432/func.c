/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190432
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
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned short) var_7)), (var_4)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    arr_7 [i_0] [i_0] = min((min((var_1), (var_6))), (var_8));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [(signed char)4] [i_0] [i_0] = ((/* implicit */short) var_9);
                            arr_16 [i_0] [(_Bool)1] [i_2] [i_0] [i_4 + 2] = ((/* implicit */unsigned short) var_0);
                            var_14 = var_0;
                            var_15 = ((/* implicit */int) var_5);
                        }
                        for (short i_5 = 1; i_5 < 10; i_5 += 2) 
                        {
                            var_16 += var_8;
                            arr_19 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */int) var_8);
                            var_17 = var_1;
                        }
                        arr_20 [i_0] [(unsigned short)10] [i_2] [i_0] = var_3;
                        arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
                        var_18 = ((/* implicit */signed char) var_3);
                    }
                }
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (max((((/* implicit */unsigned long long int) max((-2036140790559452460LL), (((/* implicit */long long int) 4294967294U))))), (max((((/* implicit */unsigned long long int) var_10)), (var_9)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_9);
}
