/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30919
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    arr_9 [i_0] = ((/* implicit */_Bool) 14734076455730765203ULL);
                    arr_10 [i_0] [i_1] = ((/* implicit */signed char) 12033940664493568103ULL);
                    var_11 = ((/* implicit */signed char) ((((long long int) (short)25408)) - (((/* implicit */long long int) arr_3 [i_0 + 2] [i_2 - 1] [i_2 + 1]))));
                    var_12 = ((/* implicit */short) 18446744073709551605ULL);
                    arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_0 [i_1]);
                }
                var_13 = ((/* implicit */signed char) ((int) ((arr_4 [i_1] [i_0 - 2]) + (2147483647))));
                var_14 = ((/* implicit */int) 12033940664493568124ULL);
                var_15 = ((/* implicit */short) (_Bool)1);
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) 4212524016239616246LL);
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) 18446744073709551605ULL))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_7);
    var_18 += ((/* implicit */short) ((long long int) ((int) 2147483647U)));
}
