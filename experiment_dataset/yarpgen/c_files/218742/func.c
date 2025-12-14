/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218742
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [(unsigned char)2] [i_0] = (((_Bool)1) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)22725))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_10 = ((/* implicit */unsigned int) max((var_10), (min((((/* implicit */unsigned int) (unsigned short)11429)), (1180342362U)))));
                        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_2 - 2])) ? (arr_9 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_1 - 1]) : (((/* implicit */long long int) var_1))))))));
                        var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((long long int) arr_9 [i_0] [i_1] [i_2 - 1] [i_3])))))));
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)178)) ? (9194975579477412629LL) : (-8732379151533105987LL))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 1; i_4 < 12; i_4 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_4 - 1])) : (((/* implicit */int) arr_8 [i_4 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4 - 1]))))) : ((~(((/* implicit */int) arr_13 [i_4 + 1]))))));
        /* LoopSeq 4 */
        for (int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            var_15 &= ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) (unsigned char)97)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4 + 1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_5] [0LL] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(signed char)7] [(signed char)7]))) : (var_1)))) : (arr_15 [i_4 - 1] [i_4 - 1]))));
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) var_6))))) ? (arr_5 [i_4 + 1] [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_4] [i_5]))))))))));
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                arr_24 [(short)9] [i_6] [i_7] [(short)9] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_19 [i_4 + 1]) : (arr_19 [i_4 + 1])));
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 2) 
                {
                    var_17 &= ((/* implicit */unsigned char) ((unsigned long long int) var_6));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */_Bool) arr_28 [i_8 + 1] [i_7] [i_7] [i_6] [i_4 - 1])) ? (var_8) : (var_1))) : (((var_4) ? (arr_19 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6])))))));
                    arr_29 [i_4] [(_Bool)1] [i_4] [(_Bool)1] [i_4] = ((/* implicit */long long int) arr_17 [6ULL] [i_7] [i_8]);
                    var_19 = ((/* implicit */unsigned long long int) var_5);
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) >> (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((_Bool) arr_7 [i_7] [i_6] [i_4 + 1])))));
                }
                for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (var_8) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_4 + 1] [i_6] [(_Bool)1]))))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) arr_0 [i_4 + 1]))));
                    arr_33 [i_6] [i_9] [i_7] [i_9] = ((/* implicit */unsigned long long int) (!(var_7)));
                    arr_34 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [9LL] = ((/* implicit */unsigned long long int) ((((arr_9 [i_4 + 1] [i_4 - 1] [i_4] [i_4 + 1]) + (9223372036854775807LL))) << (((var_2) - (3702697187U)))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) var_0))));
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((long long int) (~(var_2)))))));
                    var_25 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_6)) ? (arr_37 [i_4] [i_6] [i_7] [i_10]) : (arr_19 [i_7])))));
                    var_26 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_25 [i_4])) ? (arr_28 [i_4] [i_6] [11U] [i_10] [i_6]) : (((/* implicit */unsigned long long int) var_8))))));
                    arr_38 [i_4] [i_4 - 1] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 + 1] [i_6] [(short)14] [i_10] [7LL] [i_7])))));
                }
                var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(var_1))))));
            }
            arr_39 [i_4] [i_6] = ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1] [i_6] [i_6]))) ^ (var_0)))));
            var_28 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (var_0))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            var_29 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)82))))) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (signed char)-1))))));
            var_30 = ((/* implicit */_Bool) (+(min((var_8), (((/* implicit */unsigned int) var_9))))));
            arr_42 [i_11] = min((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_4 + 1])) : (((/* implicit */int) arr_40 [i_11] [i_11] [i_4]))))))), (((long long int) min((var_6), (((/* implicit */signed char) var_9))))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3814844122U)) ? (1051991062785235932LL) : (((/* implicit */long long int) 4294967292U))));
            /* LoopNest 2 */
            for (unsigned int i_13 = 1; i_13 < 11; i_13 += 3) 
            {
                for (long long int i_14 = 0; i_14 < 13; i_14 += 2) 
                {
                    {
                        var_32 = ((-1079633966) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) <= (((/* implicit */int) (_Bool)1))))));
                        arr_50 [i_4] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4 + 1] [i_4 + 1] [(signed char)4] [i_14])) ? (var_0) : (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1)))) : (min((arr_43 [i_4]), (((/* implicit */unsigned long long int) var_4))))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_37 [i_4] [i_13 + 2] [i_13] [7U])), ((~(arr_15 [i_4 - 1] [i_14]))))))));
                        arr_51 [1ULL] [(short)7] [i_12] [i_13] [i_14] [i_14] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))));
                        var_33 = ((/* implicit */signed char) min((var_8), (((/* implicit */unsigned int) (!(var_4))))));
                    }
                } 
            } 
            arr_52 [2ULL] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) max((arr_30 [i_4] [i_4 - 1] [i_4] [(unsigned short)1] [(signed char)7] [i_12]), (arr_13 [i_4]))))))) : (((min((arr_27 [i_4 - 1]), (((/* implicit */long long int) arr_18 [i_4 - 1] [i_4 - 1])))) / (((/* implicit */long long int) min((((/* implicit */int) arr_45 [i_12] [i_12] [i_12])), (arr_26 [i_4] [i_12]))))))));
        }
    }
    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7798859266038180136LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)3))))) ? ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (var_2))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_0))))) : (max((((/* implicit */unsigned int) var_7)), (var_0)))));
    /* LoopNest 3 */
    for (signed char i_15 = 0; i_15 < 15; i_15 += 4) 
    {
        for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 1) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    var_35 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -9034341161797882420LL)) ? (((/* implicit */int) (short)1583)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2)))))));
                    arr_61 [i_15] [11U] [i_16] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (var_8)))) : (((arr_5 [i_15] [i_16]) | (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_17])))))))));
                }
            } 
        } 
    } 
}
