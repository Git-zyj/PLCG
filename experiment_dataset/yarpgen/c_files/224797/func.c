/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224797
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_19 += ((/* implicit */short) ((int) min((arr_4 [i_0]), (arr_4 [i_0]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    arr_8 [13LL] [i_1] [i_0] = 8498602287042522311LL;
                    var_20 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))) >= (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_2]))) + (2251799813685120LL)))));
                    var_21 = ((/* implicit */long long int) arr_2 [i_1]);
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [(signed char)2] = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_3])) >= (((/* implicit */int) arr_10 [i_0]))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) (short)22275)) : (((/* implicit */int) (signed char)-68))))));
                            var_23 += ((/* implicit */short) ((var_8) & (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_4 + 1] [9LL] [(signed char)12] [8] [i_4 + 1])))));
                        }
                    }
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 3; i_5 < 20; i_5 += 3) 
    {
        for (short i_6 = 3; i_6 < 20; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        arr_26 [i_5] [i_7] = ((/* implicit */signed char) min((((/* implicit */long long int) (-2147483647 - 1))), (-1LL)));
                        arr_27 [i_5] [i_6 - 2] [i_7] = ((/* implicit */int) var_16);
                        arr_28 [14LL] [(signed char)4] [i_7] [i_7] [i_7] = ((/* implicit */short) (signed char)0);
                    }
                    var_24 -= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)9))));
                    /* LoopSeq 3 */
                    for (short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            arr_35 [i_5] [i_5] [i_7] [i_9] [i_7] [i_10] [15LL] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)121))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_30 [19LL] [(short)5] [i_7] [i_7] [i_6] [i_5])) <= (((/* implicit */int) (short)22275))));
                        }
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            var_26 *= var_4;
                            var_27 = ((/* implicit */signed char) 2147483647);
                            arr_39 [i_5] [i_7] [i_5] [i_5] [10LL] [(short)16] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                        }
                        for (signed char i_12 = 3; i_12 < 19; i_12 += 3) 
                        {
                            var_28 = ((/* implicit */short) (-(((/* implicit */int) var_0))));
                            arr_42 [i_7] [i_7] [3LL] [i_7] [i_7] [i_12] = ((/* implicit */signed char) -12LL);
                        }
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (((!(((/* implicit */_Bool) (+(var_17)))))) && (((/* implicit */_Bool) var_18)))))));
                    }
                    for (int i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        var_30 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_30 [i_5] [i_5] [i_5 - 1] [i_13] [i_6 - 1] [i_6 - 3]))));
                        arr_45 [i_13] [i_7] [i_7] [i_5 - 3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) min(((short)4909), ((short)-29337)))), ((~(((/* implicit */int) arr_15 [i_13]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_6] [i_7] [i_13]))))) || (((/* implicit */_Bool) arr_19 [i_5])))))) : (((long long int) min(((short)-28140), (((/* implicit */short) (signed char)9)))))));
                    }
                    /* vectorizable */
                    for (short i_14 = 2; i_14 < 18; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */int) (short)1)) >> (((2147483647) - (2147483629)))));
                        arr_48 [i_5] [i_5] [3] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) 536870911LL)))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1643181369)) || (((/* implicit */_Bool) (signed char)31))));
                    }
                    arr_49 [i_7] = ((/* implicit */long long int) (short)16152);
                }
            } 
        } 
    } 
    var_33 = var_15;
    var_34 = ((/* implicit */int) ((long long int) var_18));
}
