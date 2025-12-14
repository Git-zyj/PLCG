/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247448
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
    var_14 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((unsigned short) var_0));
                                var_16 = ((/* implicit */int) ((var_5) & (var_5)));
                                arr_14 [i_0] [9U] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) ((_Bool) var_3))) << (((var_13) - (14741930952745405239ULL))))) << (((var_8) - (890048401)))));
                                arr_15 [i_1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((var_9) - (2461236818550711823LL)))))) && (((/* implicit */_Bool) ((unsigned short) var_5))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 4; i_5 < 10; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_5] [i_6] [i_7] = ((/* implicit */int) ((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((long long int) var_13)))))));
                                var_17 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) var_6)));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_0))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((var_5) > (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) var_4)))))) - (((var_13) >> (((var_8) - (890048349))))))))))));
                var_20 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) var_6))) | (((int) var_5)))) | (((/* implicit */int) ((unsigned char) ((var_2) >> (((/* implicit */int) (short)15))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
    {
        for (signed char i_9 = 3; i_9 < 20; i_9 += 3) 
        {
            {
                var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((_Bool) var_12))))) < (var_13)));
                var_22 = ((/* implicit */int) var_3);
            }
        } 
    } 
}
