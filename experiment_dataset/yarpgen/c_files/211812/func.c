/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211812
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
    var_11 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_1]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
                    {
                        var_13 *= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))));
                        var_14 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (!(arr_5 [i_2]))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */_Bool) arr_1 [i_1]);
                        /* LoopSeq 4 */
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_4 [i_0]);
                            var_16 = ((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2] [i_0]);
                            arr_15 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0]))));
                        }
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                        {
                            arr_19 [i_0] [(signed char)10] [i_0] [i_4] [(unsigned short)10] [(unsigned short)6] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])))))));
                            arr_20 [i_0] = ((/* implicit */unsigned short) arr_1 [i_6]);
                            var_17 ^= ((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1] [i_1] [i_4] [(short)11] [i_6]);
                        }
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                        {
                            arr_23 [i_0] [i_4] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_2] [i_4] [i_7]))))));
                            arr_24 [i_7] [i_4] [i_0] [i_2] [i_0] [i_1] [i_0 - 2] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2])))))));
                        }
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_18 = arr_17 [i_0] [i_1] [(unsigned short)8] [i_2] [i_4] [i_1] [i_8];
                            arr_27 [i_0] [i_1] [i_1] [i_2] [i_4] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [(signed char)3] [(_Bool)1] [(signed char)3] [i_1] [(unsigned short)8])))))));
                        }
                        arr_28 [i_0] [i_2] [i_4] &= ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0 - 1] [5ULL] [9ULL]))))));
                        arr_29 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) (+((-(arr_6 [i_0] [i_1] [i_4])))));
                        var_19 = ((/* implicit */short) (~((~(arr_6 [(_Bool)1] [i_1] [i_4])))));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_20 *= ((/* implicit */_Bool) (+((~(arr_25 [i_0 + 1] [i_0 + 1] [7ULL] [i_2] [i_2] [(short)6] [i_9])))));
                        arr_34 [i_0] [i_0] [i_0] [(unsigned short)11] = ((/* implicit */short) arr_16 [1ULL] [i_0 + 1] [i_0] [i_0] [i_2] [i_9] [i_9]);
                        arr_35 [i_0] [10LL] [i_0] [i_1] [i_0] [4LL] |= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)31625)))))));
                    }
                    arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(arr_8 [i_0 - 2] [i_0] [i_0] [i_0 - 1])));
                    arr_37 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_0 [i_1]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (signed char i_10 = 1; i_10 < 23; i_10 += 3) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            {
                var_22 ^= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_39 [i_11]))))))))));
                var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
}
