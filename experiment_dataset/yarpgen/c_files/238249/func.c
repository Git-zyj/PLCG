/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238249
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
    var_10 |= ((/* implicit */long long int) min(((signed char)-103), ((signed char)0)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */short) (signed char)-4);
                    var_11 = ((/* implicit */short) arr_7 [i_2] [i_1 - 1] [i_1 - 1]);
                    arr_10 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned char) ((arr_7 [i_0] [i_0] [i_0]) >> (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_12 += ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)69)))) + (((((/* implicit */int) (unsigned char)35)) - (((/* implicit */int) var_0))))));
    var_13 = ((/* implicit */short) ((unsigned char) ((int) ((var_9) | (18014398509481983ULL)))));
}
