/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207167
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) var_10)), (var_9)))))), ((((~(1125899906842620ULL))) << ((((~(((/* implicit */int) var_11)))) + (40688)))))));
                                arr_12 [i_3] [i_2 - 1] [15U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 1])) ? (((/* implicit */unsigned long long int) arr_9 [i_2 - 1] [(unsigned char)7] [i_2 - 1] [i_2] [i_2 - 1])) : (var_4)))) ? (max((((/* implicit */unsigned int) (short)7643)), (1661535297U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-10173)) - (((/* implicit */int) (signed char)7)))))));
                                var_17 = ((/* implicit */_Bool) min((max((((unsigned long long int) 18446744073709551610ULL)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) 8661463097318678316LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)581))) : (16517965659022869245ULL)))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_10)) : (var_8)));
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (short)-7627)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))), ((-(var_12)))));
    var_19 = ((/* implicit */signed char) 18344184024108584342ULL);
    var_20 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) <= (var_13))))));
    var_21 = ((/* implicit */signed char) var_7);
}
