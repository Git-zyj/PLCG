/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239125
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((arr_9 [i_3] [i_3] [i_2 + 4] [(unsigned short)17] [i_3]) <= (((var_4) ^ (((/* implicit */int) arr_1 [i_2 - 2] [i_4 + 3])))))))));
                                var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (short)-17191)), (1761861992788376538LL)));
                                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                                arr_13 [i_0] [9ULL] [i_0] [(unsigned char)13] [(unsigned char)16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -985513056))));
                                arr_14 [i_0] [i_1] [(unsigned char)11] [i_3] [i_2 + 2] = ((/* implicit */unsigned short) min((max((-985513056), (0))), (((/* implicit */int) (!(((/* implicit */_Bool) -1761861992788376539LL)))))));
                            }
                        } 
                    } 
                } 
                var_15 -= ((/* implicit */unsigned long long int) (((-(var_2))) + (-1923189742)));
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((/* implicit */long long int) (short)-17190)), (1761861992788376538LL))))));
            }
        } 
    } 
    var_17 &= ((/* implicit */unsigned short) -1433580372);
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 21; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            {
                arr_21 [6] |= ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 20; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_4))));
                            arr_28 [i_6] = ((/* implicit */int) arr_19 [i_8] [i_5]);
                        }
                    } 
                } 
            }
        } 
    } 
}
