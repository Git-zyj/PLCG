/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235160
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
    for (int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) var_2);
                            var_12 = var_0;
                            arr_8 [i_0] [i_0] [i_2] [i_0 + 1] = ((/* implicit */int) 2328042697U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) min((2144416154), (((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 2328042697U)) : (0LL)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0 - 2] [i_5 + 1])), ((+(((/* implicit */int) (unsigned char)94))))))) : (((2328042687U) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1))))))));
                            var_14 = ((/* implicit */unsigned int) (-(7903811500074659171ULL)));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-7136144090536429083LL), (2870428448858017944LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (signed char)-77))))) : (((/* implicit */int) (unsigned short)24041))))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) ((4472466334169878182ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((/* implicit */int) ((short) 10447820537060462552ULL))) : (max((((/* implicit */int) var_6)), (var_3)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_3))));
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (long long int i_8 = 1; i_8 < 7; i_8 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) ((unsigned char) arr_16 [i_8] [i_6]));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_14 [i_7] [0] [i_8 + 1] [i_8 - 1])), (1014464619U)))), (var_5))), (((/* implicit */unsigned long long int) ((signed char) ((-2870428448858017945LL) / (((/* implicit */long long int) ((/* implicit */int) var_6))))))))))));
                    arr_24 [i_6] [i_6] [i_8] [i_6] = ((/* implicit */short) ((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned char)5))));
                }
            } 
        } 
    } 
}
