/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232447
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
    var_15 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1212356894U)) ? (((/* implicit */long long int) 3082610413U)) : (-2249422860106004650LL)));
        var_17 ^= 1212356899U;
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))) : (arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) arr_2 [i_0])))))) : (((((/* implicit */_Bool) arr_0 [(signed char)22])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2249422860106004650LL))))))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((unsigned char)255), (((/* implicit */unsigned char) var_3))))), (min((((/* implicit */unsigned long long int) (short)63)), (arr_0 [i_0 - 2])))))) ? (max((((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-81)) - (((/* implicit */int) arr_3 [i_0]))))) ? (max((-410197646), (((/* implicit */int) arr_3 [i_0])))) : (max((((/* implicit */int) var_4)), (635284633)))))));
    }
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((/* implicit */unsigned long long int) max(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)0))))), (var_11))))));
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        for (signed char i_2 = 2; i_2 < 12; i_2 += 1) 
        {
            {
                var_20 = ((((/* implicit */_Bool) ((var_2) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) & (-664953125))))))) ? (((/* implicit */long long int) ((max((arr_7 [i_1]), (arr_7 [i_1]))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (4188552205U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23145)))))) : (var_0));
                /* LoopSeq 3 */
                for (short i_3 = 2; i_3 < 14; i_3 += 3) 
                {
                    var_21 *= ((/* implicit */signed char) var_4);
                    var_22 = ((/* implicit */int) max(((-((~(arr_5 [i_1]))))), (((/* implicit */unsigned long long int) var_12))));
                    arr_13 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((_Bool) var_2));
                    arr_14 [i_3] [i_3] [i_3] [(short)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1008249083)) ? (((/* implicit */int) (short)27088)) : (((/* implicit */int) (short)23137))));
                }
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) max((var_23), ((((_Bool)1) ? (((/* implicit */long long int) 525795119)) : (2305843009213693951LL)))));
                                var_24 = ((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_1]);
                                arr_23 [(unsigned short)15] [i_2] [i_4] [i_4] [i_5] [i_6] [i_6] = min((((unsigned int) var_0)), (((/* implicit */unsigned int) max((arr_10 [i_2 - 2]), ((-(((/* implicit */int) (unsigned short)15867))))))));
                                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */unsigned int) var_13)), (((unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6]))))))));
                                var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_2 + 4] [i_2] [i_2 + 4] [i_2 + 1] [i_5])) ? (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) var_4))))) : (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_1]) : (3189667258023338943ULL)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_9))) < (((/* implicit */long long int) max((-1115657615), (1094531454))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4946477199567048037ULL)) ? (var_7) : (arr_18 [i_5])))) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : ((~(14662509)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_4] [i_7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_15 [i_7 + 1] [i_7 + 1] [i_1] [i_2 - 2])) : (((/* implicit */int) arr_27 [i_2] [i_2 - 2] [i_1]))));
                            arr_28 [i_7] [i_7] [i_4] [i_2] [i_7] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (1869662569U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_7 + 1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_21 [i_2] [(_Bool)1] [(_Bool)1]))));
                        }
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            arr_31 [(_Bool)1] [i_2] [i_7] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2217942797660002037LL)) ? (((((/* implicit */_Bool) (signed char)-49)) ? (522213157U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4812))))) : (((/* implicit */unsigned int) -410065768))));
                            arr_32 [i_7] [i_2 + 3] [i_7] [i_7] [i_2 + 2] [i_7 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)221))) : (arr_19 [i_4])))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (short)-16127))))));
                        }
                        var_30 = ((/* implicit */int) arr_2 [i_4]);
                        var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_30 [i_1] [i_4] [i_7 - 1] [i_7] [i_1]))));
                        var_32 = ((((/* implicit */_Bool) arr_22 [i_2] [i_2 + 3] [i_2 - 2] [(unsigned short)10] [i_7])) ? (((/* implicit */int) arr_22 [i_2] [i_2] [i_2 - 1] [i_2] [i_4])) : (((/* implicit */int) arr_22 [i_1] [i_1] [i_2 + 4] [i_2] [11])));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_33 *= ((/* implicit */int) ((var_2) % (var_2)));
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((unsigned int) var_13)))));
                        arr_36 [i_1] [i_2] [i_4] [i_10] = ((/* implicit */unsigned int) ((arr_34 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1]) | ((-(((/* implicit */int) (_Bool)1))))));
                    }
                    arr_37 [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((2077645866), (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) 1054201722)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1879462860663234357LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34)))));
                    var_35 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (unsigned short)7)) ? (16128U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                }
                /* vectorizable */
                for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        for (long long int i_13 = 0; i_13 < 16; i_13 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */_Bool) (-(arr_43 [i_12 + 1] [i_12] [i_12] [i_11] [i_11])));
                                var_37 ^= ((/* implicit */unsigned int) arr_12 [i_1] [i_12 + 1]);
                                var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */int) (short)5317)) * (((/* implicit */int) (signed char)24)))))));
                                arr_47 [i_13] [i_2] [i_12] [i_12] [i_13] [i_12] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_12 + 1])) ? (arr_6 [i_12 + 1]) : (((/* implicit */int) arr_9 [i_12 + 1]))));
                            }
                        } 
                    } 
                    arr_48 [i_1] [1LL] [1LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */unsigned int) arr_10 [i_1])) : (arr_41 [i_1] [i_1] [i_11]))))));
                }
            }
        } 
    } 
}
