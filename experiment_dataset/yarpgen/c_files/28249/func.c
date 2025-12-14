/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28249
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((unsigned long long int) var_2));
                    var_15 = ((/* implicit */short) (-(((/* implicit */int) ((arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1]) >= (max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_9 [i_2] [i_1] [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4088))) / (arr_3 [i_4] [(unsigned char)5] [i_1])));
                                arr_16 [i_2] [(unsigned char)10] [i_2] [i_2] [i_2] = ((((/* implicit */int) var_4)) & (min((arr_14 [i_4] [i_1 + 1] [i_3 - 1] [i_3] [i_3] [i_1 + 1] [i_0]), (((/* implicit */int) var_3)))));
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */short) arr_1 [i_2] [i_1]);
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */unsigned char) ((unsigned long long int) var_0));
    var_19 = var_5;
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 10; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            {
                var_20 = ((min((arr_8 [i_5 - 1] [i_5] [i_5]), (arr_8 [i_5 - 1] [i_5] [i_5]))) << (((((/* implicit */int) arr_10 [i_6] [i_5] [i_5] [i_5] [i_5 - 1] [i_5])) - (1017))));
                var_21 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) var_8)))));
            }
        } 
    } 
}
