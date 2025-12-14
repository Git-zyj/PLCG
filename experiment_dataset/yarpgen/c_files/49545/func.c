/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49545
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
    var_20 ^= ((/* implicit */unsigned int) var_17);
    var_21 += ((/* implicit */int) var_17);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) var_10);
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_14 [0] [2U] = ((/* implicit */long long int) var_17);
                                arr_15 [i_2] [6ULL] = var_8;
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_5))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 ^= ((/* implicit */int) var_12);
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (unsigned char i_6 = 2; i_6 < 11; i_6 += 2) 
            {
                {
                    var_25 = ((/* implicit */_Bool) var_16);
                    var_26 = ((/* implicit */int) var_6);
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_18))));
                    arr_21 [i_0] [1] [i_0] [i_0] = ((/* implicit */signed char) var_19);
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */unsigned short) var_17);
        arr_23 [i_0] [6U] = ((/* implicit */unsigned int) var_5);
    }
}
