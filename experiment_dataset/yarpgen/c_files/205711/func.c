/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205711
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) var_7);
                arr_4 [i_1] [i_0] = ((/* implicit */short) max((min((var_7), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 272843663)), (268402688U)))))), (min((((/* implicit */unsigned long long int) -629279142)), (14605458818345235448ULL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 4; i_2 < 16; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_7 [i_2] [i_3]))));
                    arr_11 [i_2] [i_2] [i_4] = ((/* implicit */signed char) var_9);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) 1865750207)), (9223372036854775791LL)));
                                var_17 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> ((((+(((/* implicit */int) arr_5 [i_4 - 3])))) - (175))))))));
                                var_18 = ((long long int) ((((((((/* implicit */int) arr_3 [i_5] [i_2] [i_2])) % (((/* implicit */int) arr_15 [i_6] [i_5] [i_4] [i_3] [i_2 - 1] [i_2 - 1])))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(short)5] [i_3] [i_4] [i_4])))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) min((var_19), (arr_15 [i_2] [i_3] [i_3] [i_3] [i_2] [i_3])));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_8);
}
