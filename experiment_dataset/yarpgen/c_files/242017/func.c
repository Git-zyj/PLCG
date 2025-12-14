/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242017
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
    var_13 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((unsigned long long int) ((int) var_6));
                    arr_8 [i_1] [11LL] [i_0] = ((/* implicit */short) ((signed char) ((unsigned int) var_1)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_14 -= ((/* implicit */short) ((unsigned char) var_0));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_1] = ((/* implicit */unsigned int) var_0);
                            var_15 -= ((/* implicit */unsigned short) var_12);
                            arr_16 [i_0] [i_1] [3] [i_0] [i_4] [i_3] = ((/* implicit */_Bool) var_4);
                            var_16 = ((/* implicit */short) ((unsigned long long int) var_9));
                        }
                        arr_17 [i_0] [i_3] = ((/* implicit */_Bool) var_12);
                        arr_18 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */int) ((unsigned int) var_2));
                    }
                }
            } 
        } 
    } 
}
