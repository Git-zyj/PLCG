/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196338
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_13 -= ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))) & (((/* implicit */int) ((var_10) < ((~(((/* implicit */int) var_6))))))));
                                var_14 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) - ((~(var_9))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) < (var_1))))));
                                arr_14 [i_0] [i_1] [i_2] [i_4] [i_4 - 3] [i_4] [i_4 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_12)))))));
                                var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) - (((1010048118U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))));
                            }
                        } 
                    } 
                    arr_15 [i_1 + 2] [i_2] = (((~(((/* implicit */int) var_11)))) << (((((/* implicit */int) var_12)) - (46970))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (~(((2480983163763713238LL) - (2480983163763713216LL)))));
                    arr_25 [i_5] [i_5] = ((/* implicit */int) var_11);
                    var_17 *= ((/* implicit */signed char) var_5);
                }
            } 
        } 
    } 
}
