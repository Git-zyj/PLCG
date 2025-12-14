/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41094
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_2 - 1] [i_1 - 2])), (((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_1 - 2])) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_1 - 2])) : (((/* implicit */int) arr_5 [i_2 - 1] [i_1 - 2]))))));
                    arr_7 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)35)))))) : (((arr_2 [9ULL]) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))))))), (((/* implicit */long long int) (+(-1516177698))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1516177668), (((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_0] [i_0] [i_0]))))) ? (min((((/* implicit */unsigned long long int) var_2)), (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0]))) : (max((arr_11 [i_0] [i_1] [i_2] [8LL] [i_3] [i_4]), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0] [i_3] [i_4] [i_3]))))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (max((((/* implicit */unsigned long long int) arr_9 [i_3] [i_1] [i_0])), (arr_11 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                                var_13 = ((/* implicit */long long int) var_10);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_2 + 1] [i_2] = ((/* implicit */unsigned short) (~(var_5)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 2; i_9 < 21; i_9 += 4) 
                        {
                            var_14 = max((((unsigned long long int) arr_10 [i_5] [i_6] [i_9 - 1] [i_9 - 2] [i_9] [i_9 + 1])), (((/* implicit */unsigned long long int) ((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_9] [i_9 - 2] [i_9] [16U] [i_9 - 2])))))));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) (unsigned short)4151)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_8] [i_9 + 1] [i_9 - 1] [i_9 - 2])) || (((/* implicit */_Bool) arr_14 [i_9 + 1])))))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_9] [i_9] [i_9] [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9])) ? (((/* implicit */int) ((unsigned short) arr_20 [i_5] [i_6] [i_7]))) : ((-(((/* implicit */int) arr_10 [i_5] [i_5] [i_6] [i_7] [i_8] [i_9]))))))) != (((((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_9] [i_8] [(unsigned short)18]))))) - (((((/* implicit */_Bool) (short)-23492)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23504))) : (var_7)))))));
                        }
                        var_17 = ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_8]))) % (min((((/* implicit */long long int) 472968171)), (arr_2 [i_5]))));
                        var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_9 [(unsigned short)2] [i_5] [i_5])) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) -3)) : (arr_11 [i_5] [i_5] [i_5] [i_7] [i_5] [i_8])))))), (((((/* implicit */_Bool) arr_0 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5] [i_6] [i_6] [(_Bool)1] [i_8] [i_8] [i_8]))) : (min((arr_11 [i_5] [i_5] [i_6] [i_7] [i_8] [i_8]), (((/* implicit */unsigned long long int) arr_25 [i_7] [i_7] [i_7] [(unsigned short)17]))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned char)10] [i_5])) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) (unsigned short)34442))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) : (min((((/* implicit */unsigned long long int) var_3)), (arr_12 [i_5] [i_6] [i_5] [i_8] [i_5] [i_10]))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6] [i_7] [i_6]))) / (-6491104974504536368LL))))))));
                            arr_29 [i_6] [i_7] [i_10] = (!((!(((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_7] [i_7] [i_8] [i_10] [i_10])))));
                        }
                    }
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_5] [i_5] [i_6] [i_6] [i_7] [i_7] [i_7])) * (((/* implicit */int) arr_27 [i_5] [i_6] [i_6] [i_6] [i_7] [i_7] [i_11]))))) ? (((((/* implicit */_Bool) arr_27 [i_11] [i_11] [i_7] [i_7] [i_6] [i_5] [4ULL])) ? (((/* implicit */int) arr_27 [i_5] [i_5] [i_6] [i_6] [i_5] [i_11] [i_11])) : (((/* implicit */int) arr_27 [i_11] [i_7] [i_7] [i_7] [i_6] [i_6] [i_5])))) : (((/* implicit */int) ((((/* implicit */int) arr_27 [i_5] [i_5] [i_6] [i_7] [i_7] [i_7] [i_11])) >= (((/* implicit */int) arr_27 [i_5] [i_6] [i_6] [i_11] [i_6] [i_11] [(signed char)18])))))));
                        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [16LL] [i_6] [16] [i_11]), ((unsigned short)34426))))) == (((((/* implicit */_Bool) -1516177705)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_11] [i_7] [i_5]))) : (arr_22 [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) 1516177685)) % (var_0)))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_3 [(signed char)16]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_11] [i_5] [i_5])))))), (var_1)))));
                    }
                    var_22 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_5] [i_6] [i_7])))))))));
                }
                for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 2) 
                {
                    var_23 = ((/* implicit */unsigned long long int) arr_21 [i_6] [i_6] [i_6]);
                    arr_35 [i_6] = ((/* implicit */unsigned short) ((unsigned int) arr_14 [i_5]));
                    var_24 ^= ((/* implicit */unsigned short) arr_34 [i_5] [i_6] [i_6] [i_6]);
                    var_25 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */int) arr_28 [i_5] [i_5] [i_5] [i_5])) - (((/* implicit */int) arr_18 [i_5])))), (((((/* implicit */int) arr_17 [(_Bool)1] [i_6] [(unsigned short)8])) + (((/* implicit */int) arr_33 [i_5] [i_5] [i_5])))))) < (((/* implicit */int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_4))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_6] [i_6] [i_6] [i_6] [i_6] [(unsigned short)7]))))))))));
                    arr_36 [i_5] [i_6] [i_6] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_34 [i_12] [i_6] [i_5] [(signed char)1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483520U))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_6] [i_12] [i_6] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) var_2)))))))) - (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_0))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_12])) ? (((/* implicit */int) (short)32767)) : (arr_14 [i_5]))))))));
                }
                for (unsigned short i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    var_26 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned short)62013))))) % (((/* implicit */int) arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
                    var_27 = ((unsigned long long int) var_4);
                }
                for (unsigned short i_14 = 1; i_14 < 19; i_14 += 3) 
                {
                    arr_41 [i_5] [i_5] [i_6] [i_14 + 3] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_8 [(unsigned short)0] [i_14] [i_14 + 1] [i_14 + 3]), (((/* implicit */unsigned short) arr_19 [i_14 + 2] [i_14 - 1] [i_14 - 1])))))));
                    var_28 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) arr_32 [i_14]))))) ? (arr_2 [i_5]) : (((/* implicit */long long int) ((((/* implicit */_Bool) -2816777553748099558LL)) ? (arr_14 [i_14]) : (((/* implicit */int) (signed char)101))))))), (((/* implicit */long long int) (((~(((/* implicit */int) var_3)))) & (((/* implicit */int) arr_28 [i_14] [i_14] [i_6] [i_5])))))));
                }
                var_29 = ((((int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) <= (((/* implicit */int) max((arr_39 [i_5] [i_5]), (((/* implicit */unsigned short) arr_4 [i_5] [i_5] [i_5]))))));
            }
        } 
    } 
}
