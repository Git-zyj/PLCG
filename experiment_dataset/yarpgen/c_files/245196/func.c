/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245196
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((long long int) arr_3 [i_1 + 1] [i_1 + 4])))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-1)))) & ((~(((/* implicit */int) (unsigned short)65521))))));
                    var_16 = ((/* implicit */short) var_11);
                }
                for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    var_17 = ((/* implicit */short) (-(arr_7 [i_0])));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_0 + 1] [i_3] [i_0])) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_2 [i_0])))))));
                    arr_9 [i_0] [17ULL] [i_0] [i_0 + 1] = ((/* implicit */short) ((long long int) (-(arr_1 [i_0]))));
                }
                arr_10 [i_0] [i_1 + 3] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 + 1])))))));
            }
        } 
    } 
    var_19 = var_13;
    var_20 = var_13;
}
