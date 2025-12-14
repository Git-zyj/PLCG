/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224884
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_6)) : (var_1)));
    var_21 += ((/* implicit */int) var_7);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 3] [i_1])))))));
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (arr_1 [i_0 - 2]) : (var_10))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned char) var_16)))));
            var_25 = ((/* implicit */unsigned int) var_3);
        }
        for (short i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_7 [i_0 - 3]) : (((/* implicit */int) arr_8 [i_0] [i_0 - 3] [i_0]))))) <= ((+(var_18))))))));
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 3])) ? (arr_6 [i_0 + 2]) : (arr_6 [i_0 + 2])))))))));
            arr_9 [i_2] [i_0] = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (var_18)))), (var_6)))));
        }
        for (short i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
        {
            arr_13 [7] = ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */long long int) 2147483647)) / (arr_0 [i_0]))) <= (((/* implicit */long long int) var_5)))));
            arr_14 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))))), (min((var_15), (((/* implicit */unsigned int) (_Bool)1))))))) : (arr_10 [i_0])));
        }
        arr_15 [i_0] = min((var_2), (((/* implicit */unsigned short) arr_5 [0ULL] [i_0 + 1] [i_0 - 1])));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [i_0]))))) ? ((~(arr_10 [i_0]))) : (((/* implicit */long long int) var_4)))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) == (var_18))))))))));
        arr_16 [i_0] = ((/* implicit */unsigned int) (~(arr_0 [i_0])));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_19 [i_4] = (i_4 % 2 == 0) ? (((/* implicit */short) min(((((-(var_13))) / (((((/* implicit */int) arr_18 [i_4] [i_4])) * (((/* implicit */int) arr_17 [i_4])))))), ((+(((/* implicit */int) arr_18 [(unsigned short)12] [i_4 - 1]))))))) : (((/* implicit */short) min(((((-(var_13))) * (((((/* implicit */int) arr_18 [i_4] [i_4])) * (((/* implicit */int) arr_17 [i_4])))))), ((+(((/* implicit */int) arr_18 [(unsigned short)12] [i_4 - 1])))))));
        var_29 |= ((/* implicit */int) ((signed char) ((unsigned short) (signed char)29)));
    }
    for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_30 = ((/* implicit */unsigned char) max((((int) ((long long int) arr_18 [(signed char)8] [i_5]))), ((+(((/* implicit */int) (unsigned char)204))))));
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) min((((((var_15) == (((/* implicit */unsigned int) 2147483647)))) ? (((/* implicit */int) ((signed char) var_11))) : (var_11))), ((+(((/* implicit */int) arr_22 [i_5] [i_5])))))))));
        var_32 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_5]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [i_5] [i_5])) : (((/* implicit */int) arr_17 [i_5])))) : (var_11))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_20 [i_5])), (((unsigned char) 10774377907353880502ULL)))))));
    }
    for (int i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            arr_28 [i_7] = ((/* implicit */unsigned int) var_13);
            var_33 = ((/* implicit */int) min((arr_0 [i_6]), (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_7] [11] [i_6])))))));
        }
        for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 4) /* same iter space */
        {
            arr_32 [i_8] [i_8] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_6 [i_8 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_8 + 1])) && (((/* implicit */_Bool) 6633534001460735140ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_8 + 1])))))));
            arr_33 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_30 [i_6] [i_6] [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_24 [i_6] [i_8 - 1])))))) : ((+(arr_23 [i_6])))));
            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))), ((!(((/* implicit */_Bool) (signed char)14)))))))));
            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_5)))) ? (arr_30 [i_6] [i_6] [i_6]) : (((/* implicit */int) min(((!(var_12))), ((!(((/* implicit */_Bool) arr_11 [i_6] [i_8]))))))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 4) /* same iter space */
        {
            var_36 *= ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_9 + 1] [i_9 + 1])) / (((/* implicit */int) var_3))));
            var_37 = ((unsigned long long int) var_2);
            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) arr_25 [i_6]))));
            var_39 = ((/* implicit */_Bool) ((int) (((-2147483647 - 1)) >= (((/* implicit */int) (unsigned char)52)))));
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 4) /* same iter space */
        {
            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) var_15))));
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 9; i_11 += 4) 
            {
                for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
                        {
                            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((-1859745245) - (((/* implicit */int) (unsigned char)45)))))));
                            var_42 = ((/* implicit */long long int) (unsigned char)229);
                            arr_48 [i_13] [i_10] [5ULL] [i_10] [3] = ((/* implicit */unsigned long long int) var_15);
                        }
                        for (int i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                        {
                            var_43 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_6] [i_12] [i_14])) | (((/* implicit */int) arr_8 [i_6] [i_10 - 1] [i_11 - 2]))));
                            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((((/* implicit */_Bool) (short)1647)) ? (arr_2 [i_11 - 1] [i_10 + 1]) : (arr_2 [i_11 - 2] [i_10 - 1]))))));
                            var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) (+(((/* implicit */int) arr_49 [i_10 + 1] [i_10 + 1] [i_11 - 2] [i_11] [i_6])))))));
                        }
                        arr_52 [i_10] [i_11] [i_6] [i_10] = ((/* implicit */short) arr_39 [i_6]);
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 4; i_15 < 8; i_15 += 2) 
                        {
                            arr_56 [i_10] [i_10] [i_10] [i_12] [i_15] [9U] = ((/* implicit */signed char) var_7);
                            var_46 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_6])) ? (((((/* implicit */_Bool) (unsigned char)239)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)52)))));
                            var_47 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_42 [i_6] [i_10]))))) ^ (var_13)));
                            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) 2147483647)) + (((1717760756U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))))))))));
                        }
                        for (signed char i_16 = 0; i_16 < 10; i_16 += 4) 
                        {
                            arr_59 [i_6] [i_10] [4LL] [i_12] [i_10] = ((/* implicit */unsigned short) (-(arr_29 [i_10] [i_10 - 1] [i_10])));
                            arr_60 [i_10] = ((/* implicit */short) ((arr_40 [i_10] [i_11 + 1] [i_11 + 1]) >= (((/* implicit */unsigned long long int) ((int) (unsigned char)213)))));
                            var_49 = ((/* implicit */signed char) var_12);
                            arr_61 [4ULL] [i_10] [i_16] = (+(((/* implicit */int) var_2)));
                        }
                    }
                } 
            } 
            arr_62 [i_6] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) var_9))))) << (((/* implicit */int) ((_Bool) arr_47 [i_10])))));
        }
        var_50 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) min((496790803869974211LL), (((/* implicit */long long int) (signed char)-120))))) ? (((/* implicit */unsigned long long int) var_17)) : (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) arr_38 [i_6] [i_6] [i_6] [i_6])))))));
        var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) var_2))));
    }
}
