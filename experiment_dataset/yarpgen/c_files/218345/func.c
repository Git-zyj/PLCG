/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218345
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) var_9);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 4; i_3 < 13; i_3 += 4) 
                    {
                        var_13 &= ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_2] [i_3]);
                        var_14 = ((/* implicit */unsigned short) var_8);
                    }
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_13 [i_2] [i_1] [i_0] = (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])));
                        arr_14 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) ((unsigned char) 355683514U)))))));
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) min((((short) min((((/* implicit */long long int) var_8)), (var_5)))), (((/* implicit */short) var_9))));
    var_16 = max(((!(((/* implicit */_Bool) var_10)))), (max(((!(((/* implicit */_Bool) var_11)))), (var_2))));
}
