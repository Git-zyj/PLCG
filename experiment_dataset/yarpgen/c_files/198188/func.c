/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198188
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
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_11 *= ((/* implicit */short) (-(((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) - (min((-1), (((/* implicit */int) arr_2 [i_0] [i_0 + 1]))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_12 += ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (8544777623853638999LL)))) ? (((((/* implicit */_Bool) -8544777623853638999LL)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)49)), ((short)-1088))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_0 [i_1])), (var_10))))));
            var_13 *= ((/* implicit */short) 351673276);
            var_14 += ((/* implicit */_Bool) ((unsigned long long int) ((int) var_7)));
        }
        var_15 *= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0])))))));
    }
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        var_16 += ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) arr_8 [i_2 - 1])));
        var_17 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (88581083) : (((/* implicit */int) arr_7 [i_2] [6U]))))) ? (min((((/* implicit */long long int) arr_7 [i_2] [20ULL])), (var_4))) : (((/* implicit */long long int) arr_9 [i_2 + 1]))))) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) (short)32767)))) % (((((/* implicit */_Bool) arr_8 [i_2 + 3])) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) var_1))))))) : (474338429U));
    }
    for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 4; i_4 < 22; i_4 += 4) 
        {
            arr_14 [i_4 - 4] [i_4 - 3] [i_3] |= ((/* implicit */signed char) -2147483647);
            var_18 = ((int) min((-8544777623853638999LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (signed char)-73)))))));
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_13 [(_Bool)1]))));
            arr_15 [i_4] |= ((/* implicit */unsigned int) 8286871823458766611LL);
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned long long int) var_5)) : (var_9)))) ? (arr_11 [i_4 - 3] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [i_3]), ((signed char)-76)))))))) ? (((((/* implicit */_Bool) (signed char)35)) ? (arr_12 [i_4 + 1] [i_4 + 1]) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */long long int) 4075172381U)) - (var_4))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4] [i_3 - 1]))))))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_5 = 3; i_5 < 22; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 4) 
                    {
                        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)44)) | (((/* implicit */int) arr_22 [i_7 + 3] [i_7 + 3] [i_7 + 3] [i_7 - 1]))));
                        var_22 |= ((/* implicit */_Bool) (signed char)30);
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        var_23 += ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_26 [i_3] [(short)22] [i_5] [i_6] [i_8] [i_8])) == (((/* implicit */int) (signed char)-47)))))) : (arr_25 [i_3 + 1] [(unsigned short)7] [i_6] [i_8]))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_9 = 3; i_9 < 20; i_9 += 4) 
                        {
                            arr_29 [i_9] [i_8] |= ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_16 [i_8])))), ((~(((/* implicit */int) arr_16 [i_9 + 2]))))));
                            arr_30 [i_5 - 2] |= ((short) var_4);
                            arr_31 [i_9] [i_8] [i_6] [(signed char)20] [i_5] [i_3 + 1] [i_3 + 1] |= ((/* implicit */signed char) arr_28 [i_8] [i_8]);
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) 0U))));
                            var_25 = ((/* implicit */int) var_9);
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 2; i_10 < 22; i_10 += 4) 
                        {
                            var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10] [i_3 + 2] [i_6] [i_5] [i_5 - 2] [i_5] [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32761))) : (((((/* implicit */_Bool) 384818964U)) ? (arr_9 [i_8]) : (((/* implicit */unsigned int) arr_21 [i_5] [i_5]))))));
                            arr_36 [12U] [12U] [(signed char)20] [i_8] [i_10 + 1] |= ((/* implicit */unsigned int) (((-(arr_11 [i_8] [i_3]))) >> (((((((/* implicit */_Bool) arr_26 [i_3] [10LL] [i_5] [i_6] [i_8] [i_10])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10))))) - (7720819938701675256ULL)))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)41322)))))));
                        }
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_7 [i_6] [(signed char)23]))));
                            var_29 *= ((/* implicit */unsigned long long int) (unsigned short)10);
                        }
                        /* vectorizable */
                        for (unsigned int i_12 = 1; i_12 < 22; i_12 += 4) 
                        {
                            var_30 += ((/* implicit */_Bool) ((((arr_17 [i_3 + 3]) + (2147483647))) << (((/* implicit */int) var_0))));
                            var_31 = ((/* implicit */long long int) 13740793607490971342ULL);
                            var_32 -= ((short) var_10);
                        }
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) arr_8 [i_5]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_13 = 2; i_13 < 20; i_13 += 1) 
                    {
                        var_34 |= ((/* implicit */long long int) ((int) 9701259931678106661ULL));
                        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)41072)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_3] [i_5] [i_5] [i_6] [i_13]))))))));
                        var_36 += ((/* implicit */unsigned short) ((var_2) ? (((/* implicit */int) (unsigned short)24463)) : (((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65437))))))));
                        var_37 += ((/* implicit */unsigned int) arr_22 [i_13] [i_6] [i_5] [i_3 + 3]);
                        var_38 -= ((((/* implicit */int) ((_Bool) var_0))) ^ (((/* implicit */int) (unsigned short)24927)));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 23; i_15 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) ? (arr_9 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_0)), ((short)24801)))) <= (((/* implicit */int) (unsigned char)0)))))))))));
                                var_40 *= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_35 [i_3 + 3] [i_5 - 2] [i_5] [i_6] [i_14] [i_14] [1])) ? (2522140436686474420LL) : (((/* implicit */long long int) arr_35 [i_3] [i_3] [i_6] [i_14] [i_6] [i_15] [i_15]))))));
                                var_41 += ((/* implicit */unsigned long long int) var_7);
                                var_42 *= ((/* implicit */unsigned int) arr_49 [i_14] [i_6] [i_6] [i_5 - 2] [i_5 - 1] [i_3] [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) (((((!(((/* implicit */_Bool) (unsigned char)255)))) ? (var_7) : (((/* implicit */long long int) (~(505683692)))))) - (var_7))))));
    var_44 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((unsigned int) 3357066637023187847LL)) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)41061)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) var_4)) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((unsigned long long int) var_0)))))));
}
