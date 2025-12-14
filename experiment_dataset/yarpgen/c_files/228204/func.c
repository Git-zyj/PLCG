/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228204
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((var_2) | (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)27127)))))))));
                var_16 = min((((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38397))) : (arr_1 [i_0 + 3])))), (((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27127))) == (var_1)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_13))));
    var_18 += ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) (((-(((1435164209U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4]))))))) > (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_2] [i_4])) >= (((/* implicit */int) (unsigned short)27127))))), (309916728))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                arr_18 [i_2] [i_4] [i_6] = ((/* implicit */unsigned long long int) (short)2314);
                                var_20 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)76)))) || (((/* implicit */_Bool) arr_4 [i_3 + 1] [i_3 + 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
