/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49588
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) min(((-(((((/* implicit */_Bool) var_14)) ? (2093298969099330458LL) : (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])))))), (((/* implicit */long long int) 67108848U))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((min((67108848U), (((/* implicit */unsigned int) -1234504953)))) < (((/* implicit */unsigned int) ((/* implicit */int) min((((arr_4 [i_0] [i_1] [i_3]) >= (((/* implicit */int) arr_1 [(unsigned short)3] [i_3])))), (((arr_6 [i_0] [i_1] [(unsigned char)6] [(unsigned char)6]) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))))))))));
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (short)-23327)) ? (67108846U) : (2843415163U))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */_Bool) (+(17206559324976825989ULL)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((var_12) >= (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (((var_9) ? (var_1) : (((/* implicit */int) var_0))))))))))));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 9; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            {
                var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned short)65535)), (var_15)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_13 [i_4]) >> (((var_2) - (1295839716U))))))))) : (((/* implicit */int) arr_14 [i_5] [i_5] [i_5]))));
                var_22 = ((/* implicit */int) var_7);
                var_23 = ((/* implicit */unsigned char) ((long long int) (-(arr_9 [i_4 + 1] [i_4 + 1]))));
            }
        } 
    } 
    var_24 &= ((/* implicit */int) var_10);
    var_25 = ((/* implicit */long long int) var_7);
}
