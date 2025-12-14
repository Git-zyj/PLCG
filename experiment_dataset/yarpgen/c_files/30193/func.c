/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30193
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_5 [i_0] [i_0] [i_2] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [i_1] [i_1] = ((/* implicit */_Bool) ((((long long int) arr_8 [i_0] [i_1])) | (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_4])))))));
                                var_14 ^= ((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_2] [i_3]);
                                arr_16 [i_0] [i_1] [i_2] [11LL] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2448766786U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 2ULL))) - ((-(((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_1]))))))) : (arr_12 [i_1])));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_0] [i_0] [(unsigned short)10] [i_1]));
                            arr_23 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)63))));
                            arr_24 [i_0] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) arr_10 [i_7] [i_7] [i_7] [i_1] [i_7]);
                            var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [10U]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [(unsigned short)4] [(unsigned short)4])) ? (((/* implicit */int) arr_14 [(short)18] [i_1] [i_2] [i_1] [i_2] [i_5] [i_7])) : (((/* implicit */int) (short)26254))))) : (((((/* implicit */_Bool) (signed char)23)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        var_18 = ((/* implicit */unsigned short) (signed char)-105);
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    var_19 &= ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1210715846673600440LL));
                    arr_32 [i_8] [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) -4246477088405217110LL)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (~(arr_20 [i_1] [i_1] [i_8] [i_9])));
                                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_10]))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_0] [i_1])) ? (((/* implicit */int) arr_30 [i_1] [i_1])) : (((/* implicit */int) arr_30 [i_1] [i_1]))));
                                var_23 = ((/* implicit */int) ((10LL) != (((/* implicit */long long int) ((((/* implicit */_Bool) (short)14324)) ? (((/* implicit */int) arr_33 [i_0] [i_1] [i_1] [8])) : (arr_17 [19] [i_1] [i_1] [i_8] [i_9] [i_10]))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) | (4U)));
                    /* LoopSeq 3 */
                    for (long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        arr_44 [14ULL] [i_11] [(_Bool)1] [i_11] [i_1] [i_11] = ((/* implicit */short) (~(((/* implicit */int) arr_39 [i_1]))));
                        arr_45 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [18LL] [i_11] [i_12] [i_1])) ? (var_10) : (((/* implicit */unsigned long long int) arr_17 [4ULL] [i_1] [i_1] [4ULL] [(signed char)14] [i_0])))))));
                    }
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        arr_49 [i_11] [i_1] [i_11] [i_1] [i_1] = ((/* implicit */unsigned short) (!((_Bool)0)));
                        arr_50 [i_1] [i_1] [i_1] [7LL] = (!(((/* implicit */_Bool) (unsigned short)7980)));
                    }
                    for (int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        arr_55 [i_14] [(signed char)12] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_33 [9LL] [i_1] [i_1] [(unsigned short)16]);
                        arr_56 [12ULL] [i_1] = ((/* implicit */signed char) arr_43 [i_1] [i_1] [i_11] [(short)5] [i_0]);
                        arr_57 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((9236296505731346033ULL) > (((/* implicit */unsigned long long int) 1152921504605798400LL)))))));
                        var_25 = ((/* implicit */unsigned short) (_Bool)1);
                        var_26 -= ((/* implicit */long long int) (-(127)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        var_27 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_11] [i_0]))));
                        arr_60 [i_15] [i_1] [i_0] [i_15] = ((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_1]);
                    }
                    for (unsigned short i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        arr_63 [i_1] [i_16] [i_11] [i_1] [i_1] = ((/* implicit */long long int) ((arr_35 [3ULL] [i_1] [i_11] [i_1] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))))));
                        arr_64 [i_0] [(_Bool)1] [i_1] [i_1] = 9623154883731856977ULL;
                        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)54422)))))));
                        var_29 = ((int) 6434826406665848837ULL);
                    }
                    arr_65 [i_0] [i_1] = ((/* implicit */int) (+(arr_12 [i_1])));
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_0] [i_1] [i_1] [(short)0]))))) ? (arr_11 [i_0] [i_0] [i_1] [(unsigned char)16] [i_1] [i_11]) : (((/* implicit */unsigned long long int) arr_47 [i_0] [i_1] [i_11] [i_1] [i_1] [i_11]))));
                }
                /* vectorizable */
                for (signed char i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    arr_68 [i_1] [i_1] [i_17] = ((/* implicit */int) ((long long int) -2106175936899903988LL));
                    var_31 &= ((/* implicit */unsigned short) (_Bool)1);
                }
                arr_69 [14ULL] [i_1] [i_1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_0] [i_1] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_21 [i_0] [(_Bool)1] [i_1] [i_1] [i_0] [i_1])) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_59 [i_1] [i_1] [i_0] [i_0] [i_1]))))) : ((~(-5892024959878876482LL)))))) ^ (((unsigned long long int) ((arr_61 [i_0] [i_1] [i_0]) <= (((/* implicit */int) (signed char)-24))))));
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) ((((unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) var_12))))) & (((/* implicit */unsigned long long int) var_6))));
}
