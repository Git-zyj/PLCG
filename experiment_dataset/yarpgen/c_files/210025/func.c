/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210025
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_11))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2] [i_2 - 2])) && (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_2 + 4]))))) <= (((/* implicit */int) ((8309446923442237672LL) > (((/* implicit */long long int) ((/* implicit */int) (short)27838))))))));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */long long int) ((signed char) 2173452053453569697LL)))))) ? (var_5) : (((((/* implicit */_Bool) var_15)) ? (arr_1 [i_2] [i_2 + 3]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) (signed char)-119);
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-2)) + (2147483647))) << (((((((/* implicit */int) (short)-4718)) + (4746))) - (28)))))) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((((/* implicit */int) var_11)) + (((/* implicit */int) var_11))))));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            var_19 = ((/* implicit */short) (+(arr_10 [i_3])));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                var_20 = ((/* implicit */short) (+(((/* implicit */int) var_11))));
                arr_18 [i_5] [i_3] [i_5] &= arr_12 [i_5] [i_5] [(short)6];
                arr_19 [i_3] = ((/* implicit */signed char) -1LL);
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        {
                            arr_25 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */short) arr_24 [i_3] [i_4] [i_5] [i_6] [i_7] [i_3] [i_3]);
                            var_21 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_5))) <= (arr_10 [i_3])));
                            var_22 += ((/* implicit */short) ((((/* implicit */int) arr_21 [(short)15] [i_6] [i_5])) < (((/* implicit */int) arr_21 [i_4] [i_6] [i_7]))));
                            var_23 = ((/* implicit */long long int) (short)27848);
                            var_24 = arr_10 [i_3];
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-119)) ? (arr_20 [i_3] [i_3] [i_5] [i_3] [i_3] [i_4]) : (arr_20 [i_3] [(short)12] [i_5] [i_5] [i_5] [i_5])));
            }
        }
    }
}
