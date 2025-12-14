/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235336
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
    var_10 = ((long long int) 9223372036854775782LL);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_11 = -3624888049845192789LL;
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_1] [i_4] = arr_3 [7LL] [i_0];
                                arr_15 [i_0] [i_1] [2LL] [i_1] [i_4] [i_2] = var_4;
                            }
                        } 
                    } 
                    var_12 = -9223372036854775799LL;
                }
            } 
        } 
    } 
}
