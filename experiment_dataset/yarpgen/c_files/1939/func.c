/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1939
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
    var_16 = ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [(signed char)8] [(short)0] &= ((/* implicit */short) (+(((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (short)(-32767 - 1))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0 - 1] [i_1 + 1] [i_2 - 1] [i_3] [i_2] [i_2] [i_4 - 1] = ((/* implicit */long long int) (short)20987);
                                var_17 = ((/* implicit */unsigned char) arr_13 [i_2] [i_2] [i_1] [i_2] [i_3] [i_4]);
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [i_0] [(unsigned char)6])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (max((min((arr_10 [(short)1] [(short)0] [i_2] [i_2]), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) (short)-14552)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
