/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219741
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1 + 1]);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */long long int) (unsigned short)65535);
                                var_17 = min((((/* implicit */short) arr_2 [i_1 - 1] [0])), (min((((/* implicit */short) (unsigned char)235)), (arr_6 [i_1] [i_1] [i_1]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 4) 
                {
                    for (int i_6 = 1; i_6 < 20; i_6 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)13723)), (-1766015817)))), (arr_18 [(unsigned short)17] [(unsigned short)17] [i_5] [i_5] [i_6 - 1])));
                            var_19 = ((/* implicit */int) (unsigned char)104);
                            var_20 = ((/* implicit */_Bool) arr_6 [i_1] [(unsigned short)5] [i_5]);
                            var_21 = ((/* implicit */int) (unsigned char)255);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_14);
}
