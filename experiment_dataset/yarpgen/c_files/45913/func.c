/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45913
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) max(((short)-24942), (max((((/* implicit */short) arr_3 [(short)14] [i_1] [i_1])), (arr_4 [i_2 - 2] [i_1 + 1] [i_1 + 4] [(unsigned short)10])))));
                    var_11 *= ((/* implicit */unsigned short) 9299692539022826222ULL);
                    var_12 = ((/* implicit */unsigned int) arr_6 [i_1] [i_1 + 4] [i_2 - 3] [i_2]);
                }
            } 
        } 
    } 
    var_13 &= ((/* implicit */unsigned char) -9208131889654592343LL);
    var_14 = ((/* implicit */long long int) ((unsigned short) var_8));
}
