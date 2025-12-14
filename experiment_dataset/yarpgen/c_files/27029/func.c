/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27029
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4294967295U)) ? (4294967267U) : (6U)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)12)), (var_1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_1 - 2] [i_1] [i_0 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [i_0 - 1])), (var_9))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) (-((((~(var_0))) >> (((/* implicit */int) var_7))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] [i_3] [i_2 + 3] [i_3] [i_0] = ((/* implicit */unsigned int) var_9);
                            var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_6)), (var_1)));
                            arr_11 [i_3] [i_2] [16U] [i_1 - 1] [16U] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned int) var_4)), (min((min((29U), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [(unsigned short)14])))))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0 - 1] [i_1 - 2] = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_1] [(unsigned char)12]))))), (min((min((var_1), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1582611692U)) || (var_5))))))));
            }
        } 
    } 
    var_12 ^= ((/* implicit */short) 4294967293U);
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((413500885U) ^ (4294967271U)))) ? (((/* implicit */int) ((short) 37U))) : (((/* implicit */int) arr_15 [i_4]))))));
                    arr_20 [i_4] [i_4] = ((/* implicit */short) (((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-4)) && (((/* implicit */_Bool) var_6))))))) | (((/* implicit */int) (signed char)-4))));
                    arr_21 [i_4] [i_5] [i_4] = ((short) arr_16 [i_4] [i_4] [i_6]);
                }
                var_14 = ((/* implicit */unsigned int) var_2);
                var_15 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_4])) + (((/* implicit */int) var_2))))), ((-(var_3))))) - (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4192256U)) + (var_3)))) ? (((/* implicit */unsigned long long int) 4290775040U)) : (((var_5) ? (var_3) : (((/* implicit */unsigned long long int) 37U))))))));
            }
        } 
    } 
}
