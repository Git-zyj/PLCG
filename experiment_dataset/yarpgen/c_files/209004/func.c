/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209004
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */signed char) var_1);
                    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_8))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) var_1);
                /* LoopNest 2 */
                for (short i_5 = 4; i_5 < 24; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) var_8);
                            var_14 = ((/* implicit */int) var_2);
                            var_15 |= ((/* implicit */long long int) var_9);
                            arr_17 [i_3] [i_3] [i_3] [i_6] |= ((/* implicit */unsigned char) var_4);
                            var_16 = ((/* implicit */unsigned char) var_4);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (short i_8 = 3; i_8 < 24; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) var_1);
                                arr_27 [i_4] [i_3] [i_7] [i_9 - 2] [i_9 - 2] [i_3] = ((/* implicit */unsigned int) var_1);
                                var_18 = ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 |= ((/* implicit */signed char) var_6);
    var_20 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) 
    {
        for (unsigned long long int i_11 = 3; i_11 < 17; i_11 += 1) 
        {
            {
                var_21 = ((/* implicit */short) var_8);
                var_22 = ((/* implicit */unsigned long long int) var_1);
                /* LoopNest 2 */
                for (unsigned short i_12 = 2; i_12 < 15; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        {
                            var_23 = var_5;
                            var_24 = ((/* implicit */signed char) var_6);
                            var_25 = ((/* implicit */unsigned short) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
}
