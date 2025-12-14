/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212773
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [5U] [5U] [i_0] = ((short) ((int) var_4));
                    var_12 -= ((/* implicit */unsigned char) ((signed char) ((long long int) var_0)));
                    arr_8 [i_0] = ((long long int) ((signed char) 7603472936609748583LL));
                    arr_9 [i_0 + 2] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((signed char) ((unsigned long long int) (unsigned char)12)));
                }
            } 
        } 
    } 
    var_13 |= ((/* implicit */long long int) var_6);
}
