/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34898
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
    var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((((/* implicit */short) (signed char)127)), ((short)-8887))))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
        arr_3 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0 + 2]))))));
        var_15 = arr_1 [i_0 + 2] [i_0 + 2];
        var_16 += ((/* implicit */signed char) min((min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 1]))), (min(((+(arr_0 [i_0 - 1]))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-7330))) < (var_2))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)-127)))))) ? (((((/* implicit */int) (short)0)) << (((((/* implicit */int) (signed char)(-127 - 1))) + (132))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-1)) <= (((/* implicit */int) arr_1 [i_0] [i_0]))))) >= (((/* implicit */int) (short)32749)))))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) -9053583027877509285LL)) || (((/* implicit */_Bool) (short)32767)))) ? (((/* implicit */int) min((var_7), (arr_6 [i_3 + 1])))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)973)) : (((/* implicit */int) (short)8887))))));
                        var_18 += ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) min((var_7), (((/* implicit */short) (signed char)-62)))))))) & (max((((((/* implicit */long long int) ((/* implicit */int) (signed char)1))) ^ (-9053583027877509285LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7330)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-973)))))))));
                        arr_16 [i_1] [i_4] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-62)), (9053583027877509276LL)))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)-2107)) : (((/* implicit */int) arr_9 [i_1] [i_1]))))))));
                        var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)120))))) : (((/* implicit */int) ((signed char) var_1))))), ((~(((/* implicit */int) (signed char)-58))))));
                    }
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        arr_20 [i_5] [i_1] [i_2] [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_2 + 2]))))), (max((((/* implicit */long long int) (short)32767)), (-1LL)))));
                        var_20 = ((/* implicit */short) (signed char)68);
                        var_21 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max(((short)-27541), (((/* implicit */short) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_2 + 4] [i_2 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_2] [i_3] [i_5]))) : (arr_19 [i_1] [i_2] [i_5] [i_3] [i_5] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (var_2)))));
                        arr_21 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((long long int) arr_12 [i_2] [i_2] [i_2 + 2])) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2])))));
                    }
                    /* vectorizable */
                    for (short i_6 = 1; i_6 < 17; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */short) (signed char)-1);
                        arr_24 [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_6)))))));
                        /* LoopSeq 3 */
                        for (short i_7 = 2; i_7 < 18; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                            var_24 *= ((/* implicit */short) (+(((/* implicit */int) (signed char)127))));
                        }
                        for (short i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            arr_30 [i_6] [i_2] [i_2] [i_2] [i_6] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (short)-2107)))));
                            arr_31 [i_1] [i_1] [i_3] [i_6] [i_8] = ((short) ((((/* implicit */_Bool) (short)32750)) || (((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                            var_25 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                        }
                        for (signed char i_9 = 3; i_9 < 18; i_9 += 3) 
                        {
                            var_26 &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_9 - 3] [i_2 + 2] [i_6]))));
                            arr_34 [i_1] [i_1] [i_3] [i_6] [i_6 + 1] [i_9] [i_9] |= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) var_11))))) > (((/* implicit */int) (signed char)127))));
                        }
                    }
                    var_27 ^= ((/* implicit */short) (-(((((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) / (((/* implicit */long long int) ((/* implicit */int) ((short) var_1))))))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 3; i_10 < 16; i_10 += 1) 
                    {
                        for (short i_11 = 2; i_11 < 15; i_11 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) ((max((((/* implicit */int) arr_28 [i_1] [i_11] [i_3] [i_11] [i_11 + 1])), ((+(((/* implicit */int) arr_7 [i_1])))))) < ((-(((/* implicit */int) arr_23 [i_11] [i_10 + 1] [i_11 + 3] [i_11 + 2]))))));
                                var_29 = ((/* implicit */signed char) ((long long int) (signed char)-104));
                                arr_43 [i_11] [i_2] [i_10] [i_3] [i_2] [i_1] = ((/* implicit */signed char) ((long long int) ((((((/* implicit */int) (signed char)-27)) > (((/* implicit */int) arr_41 [i_11] [i_11] [i_3] [i_10 + 1] [i_11] [i_11] [i_1])))) ? (((/* implicit */int) ((signed char) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */int) arr_37 [i_1])))));
                                var_30 = (~(((((/* implicit */long long int) ((/* implicit */int) (short)7320))) - (arr_13 [i_11] [i_10 + 2] [i_1]))));
                                var_31 = ((/* implicit */signed char) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            for (signed char i_13 = 3; i_13 < 15; i_13 += 4) 
            {
                for (short i_14 = 3; i_14 < 15; i_14 += 4) 
                {
                    {
                        var_32 = ((/* implicit */short) (((-(((/* implicit */int) max((((/* implicit */short) (signed char)-76)), (var_10)))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_51 [i_13 - 3] [i_14 + 4] [i_13])))))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_50 [i_1] [i_1] [i_1] [i_1] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)104))) : (0LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) max((arr_32 [i_12] [i_12]), (var_5)))), ((short)32757))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-25))) + (-5069090187399261517LL)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_15 = 0; i_15 < 19; i_15 += 4) 
                        {
                            arr_55 [i_1] [i_14] = ((/* implicit */short) ((signed char) arr_38 [i_14 + 3] [i_14] [i_13 + 3] [i_13] [i_12] [i_12]));
                            var_34 = ((/* implicit */short) (signed char)102);
                            var_35 += ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_13 - 2]))));
                            var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_1] [i_13]))));
                        }
                        for (signed char i_16 = 1; i_16 < 17; i_16 += 2) 
                        {
                            var_37 *= ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-32767)))))))), (max((((/* implicit */long long int) var_9)), (((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                            var_38 = ((/* implicit */short) (+(((long long int) var_9))));
                            arr_58 [i_14] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5))))))))));
                            var_39 = ((/* implicit */signed char) var_12);
                        }
                        for (short i_17 = 0; i_17 < 19; i_17 += 4) 
                        {
                            var_40 ^= ((/* implicit */signed char) var_2);
                            var_41 = ((/* implicit */signed char) ((max((((/* implicit */long long int) ((((/* implicit */int) (short)-15313)) ^ (((/* implicit */int) var_6))))), ((~(var_2))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                        }
                        arr_61 [i_1] [i_12] [i_14] [i_14] = arr_35 [i_12] [i_13] [i_12] [i_12] [i_1] [i_1];
                    }
                } 
            } 
        } 
    }
}
