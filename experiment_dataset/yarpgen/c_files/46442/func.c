/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46442
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
    var_12 = ((/* implicit */signed char) min((((max((((/* implicit */unsigned long long int) var_7)), (var_6))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) min((((long long int) var_11)), (((/* implicit */long long int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_0))))))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_16 [i_1] = ((/* implicit */unsigned short) (+(((unsigned long long int) (unsigned short)63))));
                                arr_17 [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-4767)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) var_1)))) % (((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned short)49))))))) ? (-525601540) : (((/* implicit */int) (short)-12305))));
                            }
                        } 
                    } 
                    arr_18 [i_0 - 1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned short) ((short) var_7))), (var_7))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) var_2);
}
