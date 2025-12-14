/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31652
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
    var_12 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_3))))))), (var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) var_7);
                                var_14 = ((/* implicit */long long int) ((short) ((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                                arr_10 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] = ((/* implicit */unsigned char) (+(var_10)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        for (short i_6 = 2; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_15 = var_9;
                                arr_17 [i_2] [(unsigned short)7] [(unsigned short)7] = ((/* implicit */int) ((((unsigned int) max(((unsigned short)61307), (((/* implicit */unsigned short) (unsigned char)72))))) ^ (((/* implicit */unsigned int) ((int) arr_11 [i_2] [i_6] [i_6 + 1] [i_6])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
