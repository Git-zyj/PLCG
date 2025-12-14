/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26662
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) arr_4 [i_3] [i_2] [i_1] [(_Bool)1]);
                            var_14 -= ((/* implicit */unsigned long long int) (signed char)-104);
                            arr_9 [i_0] [i_1 + 1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) 6732180314487919419LL)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) arr_1 [i_2] [i_2])))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)13] [i_2] [i_3 + 3])) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_0] [(unsigned char)24]))))), (arr_7 [i_0] [i_1] [i_1 + 1] [i_2])))) : (((long long int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                            var_15 = ((/* implicit */_Bool) arr_1 [i_2] [i_3]);
                        }
                    } 
                } 
                var_16 *= ((/* implicit */unsigned char) (signed char)112);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 12; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    for (short i_7 = 2; i_7 < 9; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_23 [i_4] [i_5] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_13 [i_4 + 1])), (var_8))), (((/* implicit */unsigned long long int) ((signed char) (unsigned char)254)))));
                                var_17 += ((/* implicit */short) var_11);
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_9))));
                            }
                        } 
                    } 
                } 
                arr_24 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)112)) || (((/* implicit */_Bool) arr_10 [i_4]))));
            }
        } 
    } 
}
