/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215487
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
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_4] [i_4] |= ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) (short)-4596)) ? (arr_5 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) (short)-4616))))));
                                var_16 = (short)-4598;
                                var_17 -= ((/* implicit */signed char) arr_13 [i_3]);
                                var_18 = ((/* implicit */short) arr_1 [i_0] [i_1]);
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */signed char) min((17825178475936270439ULL), (((/* implicit */unsigned long long int) ((signed char) (short)4597)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 2) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned int) min((((/* implicit */int) var_0)), ((-(((/* implicit */int) arr_11 [i_6] [i_7 - 2] [i_0] [i_0 - 3]))))));
                                arr_23 [(signed char)8] [(signed char)8] [(unsigned short)16] [i_6] [i_1] [(signed char)8] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)-31581)) ? ((+(((/* implicit */int) (signed char)-122)))) : (((/* implicit */int) (short)32767))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 13; i_8 += 3) 
    {
        for (unsigned int i_9 = 3; i_9 < 9; i_9 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        {
                            var_20 += ((/* implicit */signed char) max((((/* implicit */short) (unsigned char)84)), (var_0)));
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) -1349215650)) ? (((/* implicit */int) (short)31580)) : (((/* implicit */int) arr_11 [i_9] [i_9] [i_10] [i_11])))), ((+(((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    for (short i_13 = 1; i_13 < 12; i_13 += 4) 
                    {
                        {
                            var_22 |= ((/* implicit */signed char) ((((int) var_9)) < (((/* implicit */int) min((((/* implicit */unsigned short) arr_33 [i_8] [i_13 - 1] [(short)8] [i_13] [i_8])), ((unsigned short)16305))))));
                            arr_39 [i_9] [i_9] [i_12] [i_13 + 1] [i_8] = arr_5 [i_9];
                        }
                    } 
                } 
            }
        } 
    } 
}
