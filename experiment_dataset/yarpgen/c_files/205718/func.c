/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205718
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_9 [i_0 - 1] [i_1] [i_2] = min((arr_4 [i_0]), (((/* implicit */int) ((unsigned char) var_16))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (3910309173U)));
                                arr_16 [i_4] [i_0] [i_0] [(unsigned char)1] [i_0] = ((/* implicit */short) min((min((828890060), (((/* implicit */int) (signed char)-121)))), (min(((-(var_0))), ((~(((/* implicit */int) var_7))))))));
                                arr_17 [i_0] [(short)7] [i_2] [i_0] [i_2] [(short)7] &= ((/* implicit */unsigned short) var_16);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 4; i_5 < 21; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (-(((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)48)))), ((_Bool)1)))))))));
                            arr_31 [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_26 [i_8 - 1] [i_8 - 1] [i_5 - 2])))));
                            var_22 += ((/* implicit */short) ((int) (-(((((/* implicit */int) arr_30 [i_6] [i_7] [i_8])) - (((/* implicit */int) arr_24 [i_5] [i_6] [i_7] [i_6])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    for (short i_10 = 1; i_10 < 19; i_10 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) arr_19 [0U] [i_9]);
                            arr_38 [i_5] [i_6] [i_9] [i_5] [i_9] |= ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)103)), (-828890056)));
                        }
                    } 
                } 
            }
        } 
    } 
}
