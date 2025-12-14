/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20920
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
    var_18 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 -= ((/* implicit */unsigned short) (unsigned char)54);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [(unsigned char)3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4 + 2] [i_3 - 1] [i_3 + 1] [i_2 - 2])) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_4] [i_4 + 3] [i_4 + 1] [i_4 + 3] [i_4])) ? (((/* implicit */int) arr_13 [i_4] [i_4] [i_4 + 3] [i_4] [(short)14] [i_4])) : (((/* implicit */int) arr_13 [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4] [i_4] [14])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [5ULL] [i_4 - 1] [i_4 + 2] [5ULL] [i_4] [5ULL])))))));
                                arr_15 [(signed char)16] = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_4 + 2] [i_3 - 1] [i_2 - 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
