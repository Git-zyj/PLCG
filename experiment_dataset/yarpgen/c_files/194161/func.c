/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194161
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
    var_20 = ((/* implicit */unsigned char) -2025772837);
    var_21 = ((/* implicit */short) var_19);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) 2082307870U);
                                arr_14 [i_4] [i_2] [i_2] [i_0] [i_4] [i_2] [i_0] = ((/* implicit */unsigned char) 2212659425U);
                                var_23 = ((/* implicit */short) -2025772820);
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)13751);
                    arr_16 [i_2] [i_2] = ((/* implicit */unsigned char) 2082307870U);
                    var_24 = ((/* implicit */short) (-2147483647 - 1));
                    var_25 = ((/* implicit */unsigned char) 379232817U);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        arr_19 [i_5] = ((/* implicit */short) 2212659425U);
        arr_20 [i_5] = (unsigned short)60017;
        arr_21 [i_5] [(signed char)4] = ((/* implicit */int) (unsigned short)60017);
        var_26 = ((/* implicit */_Bool) 2212659442U);
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) -2025772830))));
    }
    /* vectorizable */
    for (short i_6 = 3; i_6 < 7; i_6 += 1) 
    {
        arr_24 [i_6 + 1] = ((/* implicit */short) (unsigned short)5518);
        arr_25 [i_6] = ((/* implicit */unsigned char) -2025772835);
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) 2025772835))));
    }
    var_29 = var_3;
}
