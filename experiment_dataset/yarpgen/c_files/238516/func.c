/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238516
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) (unsigned char)106)));
                    var_16 ^= ((/* implicit */signed char) ((long long int) ((unsigned long long int) ((unsigned char) arr_5 [(_Bool)1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) ((unsigned long long int) arr_1 [i_0]))));
                                var_18 = ((/* implicit */unsigned int) ((_Bool) ((unsigned short) ((unsigned long long int) var_1))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
                    var_20 &= ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) 9ULL)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((_Bool) ((unsigned char) (unsigned char)0)));
    var_22 += ((/* implicit */int) ((unsigned long long int) ((unsigned char) ((unsigned int) var_8))));
}
