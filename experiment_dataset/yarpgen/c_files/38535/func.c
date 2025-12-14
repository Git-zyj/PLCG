/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38535
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
    var_11 = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 &= ((/* implicit */short) ((unsigned short) 17U));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    var_13 = ((/* implicit */short) arr_2 [i_1]);
                    var_14 = ((/* implicit */int) min(((unsigned short)30880), (((/* implicit */unsigned short) var_5))));
                    var_15 = ((/* implicit */unsigned int) 5563713844721355200ULL);
                    var_16 = ((/* implicit */unsigned int) var_5);
                }
            }
        } 
    } 
    var_17 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)179))));
}
