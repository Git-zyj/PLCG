/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225142
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
    var_12 = ((/* implicit */unsigned short) ((unsigned long long int) max((var_2), ((!(((/* implicit */_Bool) (short)-9309)))))));
    var_13 = ((/* implicit */_Bool) var_8);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) (signed char)0)) ? (var_7) : (var_9))), (((/* implicit */int) (unsigned short)25677))))));
                                var_15 = ((/* implicit */int) ((long long int) (+((~(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 9; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((min(((-(arr_14 [i_0]))), (((/* implicit */unsigned int) (unsigned char)10)))), (((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) (unsigned char)208)))))))));
                                arr_20 [i_0] [i_5] [i_2] [i_0] [i_6] [i_2] [i_5] = ((/* implicit */_Bool) ((signed char) ((unsigned char) arr_11 [i_6 - 1] [i_1] [i_2] [i_5 + 1])));
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((((_Bool) (signed char)0)) ? (max((var_7), (var_4))) : (((/* implicit */int) (unsigned char)149))))));
                    var_17 *= ((/* implicit */_Bool) (-(((int) -7826841803388889307LL))));
                }
            } 
        } 
    } 
}
