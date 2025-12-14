/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247025
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
    var_20 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) arr_6 [15ULL] [i_1] [15ULL] [17LL]);
                    var_22 = min((arr_1 [i_2]), (((/* implicit */int) arr_3 [i_1 + 1] [i_2])));
                    arr_7 [i_0 - 2] [i_0 + 3] [i_0] [i_2] = ((/* implicit */unsigned short) arr_0 [i_0 - 3]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) 3920613434U);
    var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)12700))));
    var_25 = ((/* implicit */int) -8499066214607827181LL);
}
