/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53862
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_12 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_13 ^= (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_14 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0]))));
            var_15 = ((/* implicit */unsigned int) var_11);
            arr_4 [i_1] [i_0] [i_1] = ((/* implicit */long long int) arr_3 [i_0] [i_1]);
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((arr_12 [i_4] [i_1] [i_1] [i_0]) ? (((/* implicit */int) arr_12 [i_4] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3]))));
                        var_17 = 591975930;
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) -7046771856235169947LL))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_5] [i_1] = ((/* implicit */unsigned int) arr_8 [i_5]);
                        var_19 = ((/* implicit */int) ((long long int) (-(161244555545548089ULL))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 12060703836653730000ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)3240)))));
                        var_20 -= ((/* implicit */unsigned short) (~(arr_3 [i_2] [i_3])));
                    }
                    var_21 -= ((/* implicit */unsigned int) (_Bool)1);
                    var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 18285499518164003516ULL)) ? (4294967280U) : (15U)))));
                    var_23 ^= ((/* implicit */unsigned long long int) (unsigned char)0);
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_7 [i_0] [i_2]))));
                }
                for (short i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                {
                    arr_20 [i_1] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) -2129552944)) ? (var_10) : (((/* implicit */unsigned int) var_3)))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_2] [i_1] [i_0])) - (((/* implicit */int) var_1)))))));
                    var_25 ^= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_0]);
                }
                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_1))));
                arr_21 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 5566114863395982425ULL))));
                arr_22 [i_1] = ((unsigned short) var_5);
            }
        }
        for (short i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            arr_26 [i_0] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (+(1888250460U)))) ? (((/* implicit */long long int) ((arr_13 [i_0] [i_0] [i_0] [i_7] [i_7] [i_7]) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_7))))) : (arr_2 [i_0] [i_7] [i_7])));
            var_27 = (+(arr_19 [i_7] [i_7] [i_7] [i_7]));
        }
        for (int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 2; i_9 < 9; i_9 += 3) 
            {
                for (unsigned short i_10 = 1; i_10 < 8; i_10 += 1) 
                {
                    {
                        var_28 = ((/* implicit */_Bool) (~(arr_15 [i_8] [i_10] [i_10 + 2] [i_10] [i_10])));
                        arr_36 [i_0] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58986))) | (18446744073709551608ULL))))));
                    }
                } 
            } 
            var_29 += ((/* implicit */short) ((unsigned long long int) arr_6 [i_0] [i_0] [i_8] [i_8]));
        }
        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_23 [i_11] [i_13])) : (((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [i_0]))))) ? (2406716852U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
                        var_31 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_44 [i_0] [i_11] [i_12] [i_13])) != (((/* implicit */int) var_1))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                arr_48 [i_0] [i_11] [i_14] = ((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) var_7)))));
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 1; i_16 < 8; i_16 += 2) 
                    {
                        {
                            var_32 *= ((/* implicit */unsigned char) 4421500548202812621ULL);
                            arr_53 [i_15] = ((/* implicit */short) arr_24 [i_0] [i_14]);
                        }
                    } 
                } 
                var_33 += ((/* implicit */long long int) arr_41 [i_0]);
                var_34 = ((/* implicit */long long int) ((int) 18446744073709551615ULL));
            }
            for (short i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                var_35 *= ((/* implicit */unsigned char) 2406716864U);
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    for (int i_19 = 1; i_19 < 7; i_19 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) arr_38 [i_0] [i_0] [i_0]))));
                            arr_61 [i_18] [i_19] [i_17] [i_17] [i_19] [i_17] [i_18] = ((/* implicit */long long int) (+(((/* implicit */int) arr_43 [i_19] [i_19] [i_19] [i_19 + 1] [i_19]))));
                            arr_62 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (short)28225))) * ((+(((/* implicit */int) arr_13 [i_0] [i_11] [i_11] [i_17] [i_18] [i_19]))))));
                            var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) arr_54 [i_0] [i_11]))));
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 1 */
        for (long long int i_20 = 0; i_20 < 10; i_20 += 1) 
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 10; i_21 += 4) 
            {
                for (int i_22 = 3; i_22 < 7; i_22 += 4) 
                {
                    {
                        arr_69 [i_20] [i_20] = ((/* implicit */short) ((unsigned char) arr_13 [i_22] [i_22] [i_22] [i_22] [i_22 - 2] [i_22 - 1]));
                        arr_70 [i_0] [i_20] [i_20] [i_20] [i_0] = ((/* implicit */unsigned short) ((_Bool) (~(var_3))));
                        var_38 *= ((/* implicit */short) arr_19 [i_21] [i_22] [i_22 - 1] [i_22]);
                    }
                } 
            } 
            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)38222)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_20] [i_20] [i_20] [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_20] [i_20] [i_0]))) / (var_10)))));
            var_40 = ((/* implicit */unsigned long long int) (-(-7046771856235169972LL)));
            var_41 = ((/* implicit */unsigned short) min((var_41), (arr_45 [i_20])));
            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_20] [i_20])))))));
        }
    }
    var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) (~(((12060703836653730008ULL) | (((/* implicit */unsigned long long int) -518478203563869568LL)))))))));
    var_44 ^= ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) var_4)) ? (2900779245175298035ULL) : (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) var_5))));
    var_45 ^= ((/* implicit */short) min((6386040237055821609ULL), (6386040237055821613ULL)));
}
