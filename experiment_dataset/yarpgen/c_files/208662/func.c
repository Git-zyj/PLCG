/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208662
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) var_5);
                arr_7 [i_0] = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) arr_3 [i_0])), (10382757308288007947ULL)))));
                var_13 = ((/* implicit */_Bool) 4503599627370495ULL);
            }
        } 
    } 
    var_14 &= ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) ((max((((var_12) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) (unsigned short)23637)))) - ((-(((((/* implicit */_Bool) 8727373545472ULL)) ? (arr_11 [i_2] [i_2]) : (((/* implicit */unsigned long long int) var_3))))))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                {
                    var_16 = ((/* implicit */int) max(((+(((unsigned int) arr_16 [i_2] [i_2] [i_2] [i_2])))), (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_15 [i_3])))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_21 [i_2] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_20 [i_2] [i_4] [i_4] [i_5])) < (((/* implicit */int) (_Bool)1)))) ? (4503599627370511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [i_4] [i_5])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            arr_24 [i_2] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) (~(arr_3 [i_2])));
                            arr_25 [i_2] [i_2] [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_23 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(unsigned short)9]))) : (18442240474082181120ULL)));
                        }
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_0 [i_2 - 1]))));
                        var_18 = ((/* implicit */signed char) ((int) ((((/* implicit */int) var_1)) - (((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) max((arr_12 [i_7 - 1] [i_2 - 1] [i_2 - 1]), (arr_12 [i_7 - 1] [i_2 - 1] [i_2])))) + (2147483647))) << (((min((var_5), (((/* implicit */unsigned long long int) 2824781254U)))) - (2824781254ULL)))));
                        var_20 *= ((/* implicit */_Bool) var_1);
                        arr_28 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_17 [i_2 - 1] [i_3] [i_4])), ((+(arr_14 [i_2] [i_2 - 1] [i_2 - 1] [i_2])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        arr_31 [(_Bool)1] [i_3] [i_2] = ((/* implicit */int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [(_Bool)1] [i_2 - 1] [i_2 - 1] [14U] [2ULL] [i_8]))) : (arr_29 [i_2 - 1] [i_3] [i_3] [i_3] [i_4] [i_8])))));
                        arr_32 [i_2] [i_2] = ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_19 [i_2]))))) - (((/* implicit */int) arr_12 [i_2 - 1] [i_8] [i_2 - 1])));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_10))));
                        var_22 = ((/* implicit */_Bool) (+(arr_3 [i_2])));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (arr_3 [i_2]) : (arr_3 [i_2])));
                        arr_35 [18ULL] [i_2] [i_2] [i_2 - 1] = ((/* implicit */unsigned int) arr_11 [i_2] [i_2 - 1]);
                        var_24 -= ((/* implicit */long long int) ((unsigned int) var_8));
                    }
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        var_25 ^= ((/* implicit */int) arr_18 [i_10] [i_10] [i_10] [i_10]);
                        arr_43 [i_2] [i_2] [i_10] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)11)) <= ((-(((/* implicit */int) (unsigned short)65524))))));
                        /* LoopSeq 2 */
                        for (int i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [i_2 - 1]))));
                            arr_46 [i_10] [i_3] [i_10] [i_10] [6LL] [i_12] |= ((/* implicit */unsigned short) (-(1194888603)));
                            var_27 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_12] [i_2 - 1] [i_12] [i_2 - 1] [(signed char)0] [i_2 - 1]))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_2] [i_3] [i_3] [i_2 - 1])) || (((/* implicit */_Bool) arr_20 [i_2] [i_10] [i_11] [i_12]))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_29 = 4503599627370496ULL;
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_11] [i_2 - 1] [i_10])) ? ((~(arr_34 [i_2 - 1] [i_10] [i_11] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                            var_31 = (~(((/* implicit */int) arr_45 [i_2] [i_2 - 1] [i_10] [i_11])));
                        }
                    }
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_2] [i_2] [i_2 - 1] [i_2] [i_2])) <= (((((/* implicit */_Bool) 233807339)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_10]))))));
                    arr_49 [i_10] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_41 [i_2 - 1] [i_2] [i_2])) < (2233785415175766016LL)));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */int) ((var_12) == (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (_Bool)1)))))))));
}
