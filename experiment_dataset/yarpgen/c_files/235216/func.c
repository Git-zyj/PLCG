/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235216
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */signed char) (+((+((-9223372036854775807LL - 1LL))))));
                var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) + (2013265920U))), (((/* implicit */unsigned int) (unsigned char)186)))))));
                var_13 = ((/* implicit */unsigned long long int) (signed char)41);
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)65524)), (var_10)))), (((((/* implicit */_Bool) (unsigned short)48)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_4 [i_1] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) (unsigned short)65486)), (((arr_4 [i_4] [i_5]) & (((/* implicit */long long int) var_2))))))));
                                var_15 = ((/* implicit */signed char) var_2);
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_14 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) | ((-(((((/* implicit */_Bool) arr_18 [i_2] [i_3] [7])) ? (((/* implicit */int) (short)-29121)) : (((/* implicit */int) var_0))))))));
                                arr_20 [i_2] [i_5] [i_5] [i_6] [i_2] [i_3] [i_2] = ((/* implicit */int) arr_11 [i_2]);
                                arr_21 [i_2] [i_6] [i_4] [i_2] [i_4] = ((/* implicit */_Bool) (unsigned short)48);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            {
                                arr_28 [i_2] [i_3] [i_4] [i_7] [i_7] = ((/* implicit */int) (unsigned char)172);
                                var_17 = ((/* implicit */signed char) arr_11 [i_2]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) (-2147483647 - 1));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (unsigned short)65522))));
}
