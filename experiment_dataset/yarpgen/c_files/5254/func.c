/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5254
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
    var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 9219498259936679791LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_2))))))) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_16 ^= ((/* implicit */signed char) arr_6 [i_1] [9LL] [(short)13]);
                            arr_11 [i_0] [i_0] [i_0] [5LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_0] [i_0])) && (((((/* implicit */int) ((signed char) (unsigned char)27))) <= (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-264))))))));
                            arr_12 [i_0] [(short)11] [i_0] [i_0] [i_3] [i_3 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-260)) ? (((((/* implicit */int) arr_5 [i_0])) / (((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) (short)-26339)))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) arr_0 [i_2 - 2])) : (((/* implicit */int) arr_0 [i_2 - 1])))), (((/* implicit */int) (signed char)-119))));
                        }
                    } 
                } 
                var_17 += ((/* implicit */short) ((((arr_6 [i_0 - 2] [i_1] [i_1]) != (arr_6 [i_0 + 2] [12LL] [i_0]))) ? (var_0) : ((+(arr_6 [i_0 + 1] [i_1] [i_1])))));
                arr_14 [(unsigned char)12] [i_0] = ((/* implicit */short) arr_8 [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 2]);
            }
        } 
    } 
    var_18 = var_13;
    var_19 |= ((/* implicit */signed char) var_14);
}
