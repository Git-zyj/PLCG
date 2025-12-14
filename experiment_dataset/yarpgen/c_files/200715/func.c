/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200715
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [3ULL] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) ((9124051318373145205ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] [i_4] = ((/* implicit */unsigned char) (short)-16655);
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)113))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (+(var_17)));
}
