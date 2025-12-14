/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214129
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
    var_10 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [(signed char)7] [(signed char)7] [i_2] [(signed char)7] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)65506)), (min((min((8076687788388430143LL), (((/* implicit */long long int) arr_6 [i_2] [2U])))), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_6)), (var_8))))))));
                    var_11 = ((/* implicit */unsigned int) ((21) >> (((/* implicit */int) (unsigned short)29))));
                }
            } 
        } 
    } 
}
