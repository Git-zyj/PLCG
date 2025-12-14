/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54614
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_5))));
        var_13 = ((unsigned char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_2 [(signed char)1] [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (((-(arr_4 [i_1]))) + ((-(((/* implicit */int) (unsigned char)255))))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_1]) : (arr_4 [i_1])));
            /* LoopSeq 1 */
            for (int i_3 = 1; i_3 < 20; i_3 += 3) 
            {
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_10 [i_2])) ^ (4294967294U)));
                var_16 = ((/* implicit */signed char) 0U);
            }
            var_17 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)94))));
        }
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_18 ^= ((/* implicit */unsigned long long int) var_1);
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                var_19 *= ((/* implicit */signed char) ((unsigned int) 4294967295U));
                var_20 = ((/* implicit */short) ((var_10) / (((/* implicit */int) (unsigned short)58109))));
                var_21 = ((/* implicit */unsigned long long int) var_1);
            }
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((arr_9 [i_1] [i_4] [i_4] [i_4]) * (arr_9 [i_1] [i_4] [i_6] [(signed char)8]))))));
                var_23 = ((/* implicit */_Bool) 26U);
            }
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_9 [i_4] [i_4] [(unsigned short)9] [i_1])))) ? ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) var_3)))))));
        }
        for (signed char i_7 = 1; i_7 < 19; i_7 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_1] [i_1]))));
            /* LoopSeq 2 */
            for (unsigned int i_8 = 1; i_8 < 21; i_8 += 1) 
            {
                var_26 &= ((/* implicit */unsigned char) arr_25 [i_7 + 4] [i_8 - 1] [(signed char)14] [18LL]);
                arr_26 [19ULL] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_9 [i_1] [i_7] [(unsigned short)2] [i_8])))) ? ((-(((/* implicit */int) (signed char)63)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && ((_Bool)1))))));
            }
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                var_27 = ((/* implicit */unsigned long long int) var_1);
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((var_10) <= (((/* implicit */int) arr_22 [i_7 - 1] [i_7 - 1])))))));
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 0))))))))));
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
    {
        arr_35 [(unsigned short)9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_10]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) : (arr_20 [i_10] [i_10] [i_10])));
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) var_3))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */short) var_10);
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) var_0))));
        arr_39 [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_16 [i_11] [i_11]))));
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 15; i_12 += 3) 
        {
            for (unsigned int i_13 = 2; i_13 < 14; i_13 += 3) 
            {
                {
                    arr_44 [i_11] [i_12] = ((/* implicit */_Bool) (+(arr_25 [i_11] [i_11] [i_11] [i_12])));
                    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (arr_21 [(signed char)4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) > (1401868805854554047ULL))))))))));
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << ((((-(var_7))) - (12858257210978307697ULL))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 15; i_14 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_15 = 1; i_15 < 12; i_15 += 3) 
        {
            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((arr_27 [(short)0]) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))))));
            arr_49 [i_14] [i_14] = ((/* implicit */int) ((signed char) arr_13 [i_14] [i_15]));
        }
        for (int i_16 = 0; i_16 < 15; i_16 += 1) 
        {
            var_36 &= ((/* implicit */unsigned char) var_0);
            var_37 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_14] [i_16])) << (((((int) arr_37 [i_14] [i_16])) - (210410794)))));
            var_38 = ((/* implicit */signed char) max((var_38), ((signed char)63)));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 1; i_17 < 14; i_17 += 3) 
        {
            for (signed char i_18 = 0; i_18 < 15; i_18 += 1) 
            {
                {
                    var_39 = ((/* implicit */_Bool) var_5);
                    var_40 = ((/* implicit */unsigned int) var_5);
                    arr_58 [i_14] [(unsigned short)2] [i_18] &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_40 [(unsigned short)7] [i_18])) <= (((/* implicit */int) (unsigned short)15311)))) && (((/* implicit */_Bool) var_2))));
                }
            } 
        } 
        var_41 = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) (_Bool)1)));
    }
    for (unsigned int i_19 = 0; i_19 < 15; i_19 += 1) /* same iter space */
    {
        var_42 = ((/* implicit */unsigned char) max((arr_17 [i_19] [3] [i_19] [i_19]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 4294967292U)), (-2404518142122302873LL))))));
        var_43 |= ((/* implicit */unsigned long long int) (-(min((arr_10 [i_19]), (((/* implicit */int) var_11))))));
        var_44 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)-3577)), (min((((3ULL) * (((/* implicit */unsigned long long int) 1U)))), (max((3ULL), (((/* implicit */unsigned long long int) arr_48 [14]))))))));
    }
    for (long long int i_20 = 0; i_20 < 22; i_20 += 1) 
    {
        var_45 += ((/* implicit */short) arr_20 [i_20] [i_20] [i_20]);
        /* LoopSeq 1 */
        for (unsigned int i_21 = 0; i_21 < 22; i_21 += 3) 
        {
            var_46 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_24 [i_20] [i_20] [i_21])) ? (arr_24 [i_20] [i_20] [i_20]) : (arr_24 [i_20] [i_21] [i_21])))));
            /* LoopNest 3 */
            for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 1) 
            {
                for (int i_23 = 0; i_23 < 22; i_23 += 1) 
                {
                    for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 3) 
                    {
                        {
                            var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87))) * (((arr_9 [(signed char)22] [(short)10] [i_23] [i_24]) * (0U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((arr_62 [i_21]), (((/* implicit */unsigned long long int) (_Bool)1))))))) : (arr_25 [i_20] [i_20] [i_20] [(unsigned char)14]))))));
                            var_48 -= ((/* implicit */unsigned int) arr_5 [(signed char)8]);
                        }
                    } 
                } 
            } 
        }
        var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_11)) - (94))))))));
        var_50 ^= ((/* implicit */int) 26U);
    }
    var_51 *= ((/* implicit */unsigned char) ((int) var_5));
}
