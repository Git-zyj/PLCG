/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194412
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_14 += ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))) ^ (((/* implicit */int) ((signed char) arr_5 [i_1] [i_1] [i_1])))))));
                    arr_6 [i_0] [i_0] |= ((/* implicit */short) max((arr_2 [i_2]), (max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_2 [i_2])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(arr_5 [i_3] [i_1] [i_1]))))));
                        /* LoopSeq 3 */
                        for (int i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -257848541)) ? (((var_9) << (((((((/* implicit */int) arr_7 [i_1] [i_4] [i_2])) + (65))) - (20))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -8353001150406715366LL)) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_1]))))))));
                            arr_15 [i_0] [(unsigned short)6] [i_4] [i_0] [(unsigned short)6] = ((/* implicit */unsigned int) arr_9 [6LL] [i_1] [5ULL] [i_3]);
                        }
                        for (int i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_5] [i_5] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3]))) : (arr_16 [i_3] [i_5] [i_3] [14ULL] [i_3]))))));
                            arr_19 [i_5] [(_Bool)1] [i_2] [i_1] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)15470))));
                        }
                        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            arr_23 [i_6] = ((/* implicit */_Bool) arr_9 [i_0] [(signed char)15] [i_1] [i_0]);
                            arr_24 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (arr_5 [i_0] [i_2] [i_2])));
                            var_15 = ((/* implicit */signed char) var_7);
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                        /* LoopSeq 1 */
                        for (int i_8 = 2; i_8 < 21; i_8 += 2) 
                        {
                            var_17 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                            var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_1] [(unsigned short)20] [i_8 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_21 [i_1] [i_1] [i_1]))));
                        }
                        arr_29 [i_0] [11U] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_7])) / (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [9U])) ? (((/* implicit */int) arr_3 [3LL])) : (((/* implicit */int) (unsigned short)17191))))));
                        var_19 = ((/* implicit */unsigned int) (~(7119571412511490068LL)));
                        var_20 |= ((/* implicit */signed char) (+(arr_12 [i_0] [i_0] [i_0] [i_0] [18ULL] [8U] [i_7])));
                    }
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [(signed char)10] [i_1] [i_1] [i_9])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-1))))) == (max((((/* implicit */long long int) 817667401)), (var_10)))))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_9]), (arr_12 [i_0] [i_0] [9] [i_2] [i_0] [9] [3U])))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((-7940375776614790494LL), (2133776175171832341LL)))) && ((!(((/* implicit */_Bool) var_0))))))) : (-1462148649)));
                        arr_33 [i_0] [i_0] [i_2] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_4 [15LL] [i_1] [i_0])))) ? (((unsigned int) 6110931871093711009ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_9] [i_9] [7LL] [i_1] [i_1] [i_0] [i_0]))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        for (signed char i_11 = 2; i_11 < 20; i_11 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) arr_16 [i_0] [i_11] [i_2] [i_10] [8]);
                                arr_38 [i_1] &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_32 [i_11] [i_1] [i_2] [i_1])), (var_0)))) : (11055705191994390046ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_10 + 1] [i_11 - 2] [i_11] [i_11 - 1] [i_11] [i_11] [i_11 - 1])) ? (1462148649) : (((/* implicit */int) (_Bool)1)))))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_26 [i_10 + 1] [i_10 + 1] [i_10 + 1]) > (arr_26 [i_10 + 1] [i_11] [i_11])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_10 + 1] [i_10 + 1] [i_10])))))));
                                var_25 = ((/* implicit */unsigned short) var_1);
                                arr_39 [i_0] [i_1] [i_0] [i_10] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((arr_36 [i_0] [i_10 + 1] [i_2] [i_2] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) max((var_6), (((/* implicit */signed char) var_1))))) : ((-(817667387)))))));
                            }
                        } 
                    } 
                    arr_40 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0] [8] [i_1] [8] [i_1])) ? (((unsigned int) (~(arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) (unsigned short)17191);
}
