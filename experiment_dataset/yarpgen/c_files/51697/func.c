/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51697
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
    var_13 = var_12;
    var_14 *= ((/* implicit */unsigned int) ((var_11) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((2147483638) - (2147483636)))))) ? ((+(2956920673U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (min((var_9), (var_1))) : (((/* implicit */long long int) max((((/* implicit */int) (signed char)-83)), (1838777450))))))));
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+(((/* implicit */int) (((-(1814758580U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_10))))))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */signed char) var_11))))) && (((/* implicit */_Bool) arr_0 [i_0])))))) : (((unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_1 [i_0])))))));
        var_17 = ((/* implicit */long long int) (unsigned char)255);
        arr_4 [(short)2] = ((/* implicit */int) var_6);
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 16; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    arr_13 [i_3] [(_Bool)1] = ((/* implicit */signed char) min(((-(((/* implicit */int) ((((/* implicit */long long int) arr_5 [i_2])) < (arr_6 [i_1])))))), (((/* implicit */int) var_5))));
                    arr_14 [i_1] [(short)17] = arr_9 [i_1] [i_2 + 4];
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_16 [i_1] [(signed char)3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)255)))) - ((~(((/* implicit */int) arr_10 [i_1] [i_5])))))))));
                arr_19 [i_5] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [9U] [i_5])) ? (arr_7 [10LL] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
            }
            arr_20 [i_1] [i_4] = ((/* implicit */short) ((arr_6 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_4] [i_4] [i_4])), (var_8)))))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned short)65530))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (2418425993U)))) ? (9223372036854775800LL) : (((/* implicit */long long int) (~(1584743995U))))));
        }
        for (unsigned char i_6 = 2; i_6 < 19; i_6 += 4) 
        {
            arr_25 [i_1] [i_6] = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_10 [i_6 + 1] [i_6 - 1])))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (154721208U))) ? ((~(((/* implicit */int) arr_23 [i_6])))) : (((/* implicit */int) arr_16 [i_6 + 1] [i_6 + 1]))))));
            /* LoopSeq 3 */
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                arr_29 [i_6] [15U] [i_1] [(short)16] = arr_16 [i_7] [i_7];
                arr_30 [i_7] [i_6] [i_1] [i_1] = ((/* implicit */unsigned short) var_10);
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        {
                            arr_36 [i_6] [i_8] [i_6] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((arr_24 [i_6 - 1] [i_6 + 1] [i_6]), (arr_24 [i_6 - 2] [i_6 - 2] [i_1])))), ((+(((3940667905056480687LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))))));
                            var_20 += var_6;
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */unsigned long long int) arr_23 [18LL]);
            }
            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned char) (unsigned char)31))) ? (((/* implicit */int) ((unsigned char) var_12))) : (((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (_Bool)1))))))));
                var_23 |= ((/* implicit */short) 1584743995U);
                var_24 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)13)) && (((/* implicit */_Bool) 9457799999708220015ULL))))), (4039514954U));
            }
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_6] [i_11])) : (arr_28 [i_1] [i_1] [i_6] [i_11])))) ? (((/* implicit */int) ((-8106009167343808234LL) != (arr_40 [i_1] [i_1])))) : (((/* implicit */int) min((var_10), (var_11))))))), (((((/* implicit */_Bool) arr_6 [i_6 - 1])) ? (((/* implicit */unsigned int) (-(-1270462005)))) : (min((arr_21 [i_1] [i_6 - 2]), (((/* implicit */unsigned int) 2147483647)))))))))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        {
                            arr_48 [i_1] [i_1] [i_11] [i_12] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [i_6 - 2] [i_6 - 1])) > (((/* implicit */int) arr_38 [i_1] [i_1] [i_6 - 1] [i_6 - 2])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_47 [i_6 + 1] [i_6 - 1])), (var_0)))) : ((+(((/* implicit */int) arr_38 [i_1] [i_6] [i_6 - 2] [i_6 + 1]))))));
                            arr_49 [i_13] [i_13] [i_13] [i_13] [i_6 - 2] = ((/* implicit */unsigned int) ((long long int) arr_38 [i_11] [(unsigned short)15] [i_6] [i_13]));
                            arr_50 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [3] = ((/* implicit */unsigned short) var_12);
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((long long int) arr_7 [i_1] [i_14] [i_15])))));
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_23 [i_1]))));
                /* LoopSeq 1 */
                for (unsigned short i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    arr_61 [i_14] = ((/* implicit */short) 2480208716U);
                    var_28 += ((((/* implicit */_Bool) arr_52 [i_14] [i_15] [i_1])) ? (((/* implicit */int) arr_52 [i_16] [18LL] [i_16])) : (((/* implicit */int) (signed char)61)));
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 0; i_17 < 20; i_17 += 4) 
                    {
                        var_29 = ((/* implicit */long long int) var_12);
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483621)) || (((/* implicit */_Bool) ((unsigned int) var_6)))));
                    }
                    arr_65 [i_14] = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_5)) + (((/* implicit */int) arr_8 [i_14]))))));
                }
            }
            var_31 = ((/* implicit */short) arr_17 [i_14] [i_14] [i_14]);
        }
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_62 [i_1] [i_1] [(unsigned char)16] [5] [i_1])))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_18 = 0; i_18 < 24; i_18 += 4) 
    {
        for (signed char i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            {
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_18] [i_19])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)6))))) : (((/* implicit */int) var_2))))) ? (((3157825992U) * (((var_2) ? (2710223301U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_18] [i_18] [i_18]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4095)))));
                var_34 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) 840018840U))) & (((/* implicit */int) (_Bool)1))));
                arr_72 [i_18] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_70 [i_19] [i_19])))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) != ((~((-2147483647 - 1))))))) : (arr_70 [i_19] [i_19])));
            }
        } 
    } 
}
