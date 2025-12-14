/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195444
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
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((signed char) -148245032));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) arr_0 [i_0]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    var_14 = (_Bool)0;
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_16 [i_2] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-6698)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)33479))));
                                arr_17 [i_4] = ((/* implicit */unsigned long long int) max((arr_7 [i_2] [i_3 - 1] [i_4]), (((/* implicit */unsigned short) ((signed char) arr_7 [i_3 + 3] [i_3 - 1] [i_3 - 1])))));
                                var_15 = var_0;
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) ((signed char) (short)32767))) : (min((((int) arr_6 [i_4] [i_3] [i_4])), (((/* implicit */int) arr_11 [i_3 - 1] [i_3 + 2]))))));
                }
            } 
        } 
    } 
}
