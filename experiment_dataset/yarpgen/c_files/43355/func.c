/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43355
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
    var_16 ^= max((var_11), (((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned char)142))))) & (((/* implicit */int) var_8)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_17 += ((/* implicit */unsigned short) arr_1 [i_0]);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        arr_8 [i_1] |= ((/* implicit */int) arr_5 [i_0] [i_0] [i_3]);
                        arr_9 [i_0] = (_Bool)1;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_0]))));
                        arr_14 [i_0] [i_1] [i_0] [i_2 - 1] [i_4] = ((/* implicit */int) ((unsigned long long int) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_2))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)9);
                    }
                    for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_0] = ((int) (~(var_4)));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 7084615147968343990ULL))));
                    }
                    arr_20 [i_0] = var_11;
                }
            } 
        } 
    } 
}
