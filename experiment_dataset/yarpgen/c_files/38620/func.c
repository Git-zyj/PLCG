/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38620
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
    var_10 = ((/* implicit */unsigned int) ((short) var_2));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) arr_5 [(_Bool)0] [(unsigned short)8] [i_1 + 1] [i_1 + 1])) / (arr_0 [i_2 + 1]))) * (((/* implicit */unsigned long long int) ((long long int) arr_5 [(unsigned short)20] [i_0] [i_0] [i_2 - 4])))));
                    var_12 |= ((/* implicit */short) ((unsigned char) max(((signed char)-102), ((signed char)-61))));
                    arr_7 [i_1] [i_1] [(unsigned short)19] = ((unsigned short) (~(arr_5 [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1])));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_6))));
}
