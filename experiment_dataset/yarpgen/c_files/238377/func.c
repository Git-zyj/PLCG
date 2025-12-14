/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238377
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned char) -5380960294898043454LL);
                            arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) arr_2 [(_Bool)1] [i_0 - 2] [i_1 - 1])));
                        }
                    } 
                } 
                var_11 ^= ((/* implicit */long long int) ((var_4) && (((/* implicit */_Bool) var_1))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_4 = 4; i_4 < 8; i_4 += 1) 
    {
        arr_14 [(short)4] = ((/* implicit */unsigned char) 5380960294898043442LL);
        var_12 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
    }
}
