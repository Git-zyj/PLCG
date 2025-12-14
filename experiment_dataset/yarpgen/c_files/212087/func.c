/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212087
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), ((~(((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) var_12)))))))));
                    arr_7 [(unsigned short)6] |= (unsigned short)14336;
                }
                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1])))))));
            }
        } 
    } 
    var_16 = var_5;
    var_17 = ((/* implicit */long long int) var_13);
}
