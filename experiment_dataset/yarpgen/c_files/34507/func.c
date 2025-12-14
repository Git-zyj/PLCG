/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34507
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            var_11 *= ((/* implicit */unsigned char) (+(min((arr_2 [i_1 + 1]), (((/* implicit */int) arr_0 [i_1 + 2]))))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) min((((/* implicit */long long int) max((arr_5 [i_0] [i_1 + 1]), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) -1452407280)))))))), ((~(var_0))))))));
                var_13 = ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(signed char)11] [i_0])) ? (((/* implicit */int) arr_7 [9ULL] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_7 [7U] [7U] [10] [i_1 + 1])))) >> (((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_1 + 1])) ? (((/* implicit */int) arr_7 [i_2] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_8)))) - (41))));
            }
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_0] [i_0])))))))));
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(-1682152464)))))))));
            var_16 = ((/* implicit */unsigned int) arr_5 [i_1] [1ULL]);
        }
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_17 = ((/* implicit */long long int) (~(min((((arr_3 [10ULL]) >> (((((/* implicit */int) var_2)) - (183))))), ((~(arr_1 [(unsigned short)0])))))));
            var_18 = var_2;
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_19 = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */int) (unsigned short)22038)), (arr_2 [i_0]))));
                    arr_17 [i_3] = ((/* implicit */int) ((_Bool) ((arr_15 [i_3] [i_3] [2ULL] [i_5]) ? (((/* implicit */int) arr_15 [i_5] [i_4] [(_Bool)1] [i_0])) : (((/* implicit */int) arr_8 [i_0])))));
                }
                var_20 -= ((/* implicit */int) ((long long int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_6 [i_0] [i_3] [i_0])))));
                var_21 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 1452407280)) ? (((/* implicit */long long int) var_6)) : (var_3))) ^ (((/* implicit */long long int) (-(arr_5 [i_0] [i_0])))))) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4])))));
                arr_18 [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) arr_2 [11ULL]);
            }
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                arr_21 [i_0] [i_3] [i_6] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_3] [i_6]))) : (0ULL))))))) - (-1452407280)));
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((_Bool) arr_20 [i_6])) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_6])), (16669714611170472067ULL)))) ? ((~(2040590859))) : (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_8)))))) : (((/* implicit */int) (((-(((/* implicit */int) (unsigned char)233)))) == (arr_10 [i_0]))))));
                arr_23 [i_0] [0] [i_0] = ((/* implicit */signed char) arr_5 [i_6] [i_3]);
            }
        }
        var_22 = ((/* implicit */unsigned char) max((max((((arr_8 [(_Bool)1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) : (arr_19 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_10 [i_0]))))))), (((/* implicit */unsigned int) ((signed char) arr_5 [i_0] [i_0])))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (+(((/* implicit */int) ((arr_8 [i_0]) || (((/* implicit */_Bool) arr_2 [(_Bool)1]))))))))));
        arr_24 [i_0] [i_0] = ((/* implicit */signed char) (!(((_Bool) 13ULL))));
        arr_25 [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (_Bool)0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_0] [i_0])), ((unsigned char)142))))) : ((-(-1101278689794747386LL))));
    }
    for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7] [i_7])) ? (arr_26 [i_7] [i_7]) : (arr_26 [i_7] [(signed char)15])))) ? ((+(arr_26 [i_7] [i_7]))) : ((+(var_3)))));
        var_25 = ((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_7]))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_26 [i_7] [i_7]), (((/* implicit */long long int) ((_Bool) arr_27 [i_7])))))) ? (min((arr_26 [i_7] [i_7]), (arr_26 [i_7] [i_7]))) : (min((((/* implicit */long long int) 1240846451)), (arr_26 [i_7] [i_7])))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 2; i_8 < 23; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_9 = 2; i_9 < 23; i_9 += 3) 
        {
            var_27 *= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)22038))));
            arr_33 [i_8] [i_9] [i_8] = ((/* implicit */_Bool) arr_29 [i_9 + 2] [i_9]);
        }
        for (int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_8 + 1])) ? (((/* implicit */long long int) (~(var_6)))) : (((long long int) var_6))));
            var_29 = ((/* implicit */signed char) var_1);
            arr_36 [i_8] [i_10] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) - (arr_32 [i_8])))) ? (((/* implicit */int) arr_30 [i_8 - 1])) : ((~(((/* implicit */int) arr_29 [i_8] [0]))))));
            /* LoopSeq 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_12 = 3; i_12 < 24; i_12 += 2) 
                {
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8])) || (((/* implicit */_Bool) arr_38 [i_8 + 2] [i_8 - 1] [i_8 + 1] [i_8]))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_8 + 2] [i_12 - 1])) | (((/* implicit */int) arr_29 [i_8 + 1] [i_12 - 2]))));
                }
                /* LoopSeq 1 */
                for (int i_13 = 2; i_13 < 24; i_13 += 3) 
                {
                    var_32 = ((/* implicit */int) ((arr_43 [i_13] [i_8] [i_13 - 2] [i_13 + 1] [i_13 - 1]) == (((/* implicit */int) var_4))));
                    var_33 = ((/* implicit */unsigned int) arr_29 [i_8 + 1] [19U]);
                    arr_44 [i_8] [i_10] [i_8] [i_13] [(unsigned char)5] = ((/* implicit */_Bool) (+(((arr_40 [i_8] [i_10] [12] [i_13]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_8] [7LL] [i_10] [i_8])))))));
                }
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
            {
                arr_48 [i_8] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_8] [(signed char)9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_28 [i_14]))))) ? ((-(((/* implicit */int) (unsigned short)2128)))) : (((((/* implicit */_Bool) arr_28 [i_8])) ? (arr_42 [i_8 - 1] [i_14]) : (((/* implicit */int) var_8)))));
                var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (-(arr_37 [i_8 - 2] [8LL] [8LL] [i_8 - 2]))))));
                var_35 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54146)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_29 [i_14] [i_8]))))) ? (arr_47 [21] [i_8 - 2]) : (((/* implicit */int) ((arr_41 [i_14] [i_10] [i_8 + 2] [i_8 + 2] [(unsigned char)17]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_8] [i_8] [i_8]))))))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_36 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)44))))) ? (((((/* implicit */long long int) 1452407273)) + ((-9223372036854775807LL - 1LL)))) : (arr_37 [i_8] [20] [(signed char)18] [i_8 + 1])));
                /* LoopSeq 2 */
                for (signed char i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    var_37 = ((/* implicit */unsigned short) (+(arr_37 [i_8 - 1] [i_8] [i_8] [(unsigned short)13])));
                    var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 423681747)) : (arr_32 [i_10])))) ? (arr_32 [(unsigned char)6]) : (((/* implicit */long long int) (-(arr_50 [(unsigned short)9] [i_10] [i_15] [i_10]))))));
                }
                for (unsigned short i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    arr_56 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [1] [i_8] [13] [i_17] [i_17])) ? (arr_43 [i_8 + 1] [i_8] [i_15] [i_17] [i_8]) : (arr_43 [i_8 + 1] [i_8] [i_8] [i_8 + 2] [(_Bool)1])));
                    var_39 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
                }
                var_40 = ((/* implicit */unsigned int) ((var_0) / (((/* implicit */long long int) arr_50 [i_8 - 2] [i_8 + 1] [i_8 - 2] [i_8 - 1]))));
            }
        }
        var_41 = var_1;
        var_42 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8 - 1])) ? (((/* implicit */int) arr_28 [i_8 - 2])) : (((/* implicit */int) arr_28 [i_8 + 1]))));
        /* LoopSeq 1 */
        for (unsigned short i_18 = 4; i_18 < 24; i_18 += 4) 
        {
            var_43 = ((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_18 - 3])) || (((/* implicit */_Bool) var_7))));
            var_44 = ((/* implicit */unsigned int) ((var_6) ^ (((1452407280) >> (((((/* implicit */int) var_9)) - (54077)))))));
        }
    }
    var_45 = (((~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 571957152676052992LL))))))) <= (((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) 1682152464)), (var_7))))));
}
