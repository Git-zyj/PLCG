/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248022
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)122), (var_9))))))), ((+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (unsigned short)40354))))));
        var_13 = (signed char)121;
        var_14 = ((/* implicit */short) (~((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned short) arr_4 [i_1]))))) > (((/* implicit */int) (signed char)-69)))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_5 [i_1]))));
            arr_9 [i_1] = ((/* implicit */unsigned short) (_Bool)1);
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                arr_13 [i_1] [(unsigned short)8] [i_1] [(signed char)12] = ((/* implicit */unsigned short) (+(arr_11 [i_3] [(unsigned short)13] [i_3])));
                arr_14 [(unsigned short)9] [(unsigned short)9] [i_3] = ((/* implicit */unsigned short) (unsigned char)124);
                /* LoopSeq 3 */
                for (unsigned char i_4 = 2; i_4 < 15; i_4 += 2) 
                {
                    arr_18 [i_1] [i_2] [i_1] [i_4 - 2] [i_1] = ((/* implicit */signed char) ((int) arr_15 [i_1] [i_1] [i_1] [i_4 - 1]));
                    var_16 += (!(((/* implicit */_Bool) arr_4 [i_4 - 2])));
                    arr_19 [i_1] [i_2] [(signed char)7] [i_3] [i_3] [i_4 + 1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_4 [(signed char)15])) ? (arr_10 [i_1] [i_2] [i_3] [i_4 - 2]) : (((/* implicit */unsigned long long int) 1451098094))))));
                    arr_20 [i_4 - 1] [i_3] [i_2] = ((/* implicit */unsigned short) arr_10 [i_1] [(signed char)11] [i_2] [i_1]);
                }
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    arr_23 [i_1] [(signed char)13] [i_3] [(signed char)5] = arr_22 [i_1] [i_2];
                    var_17 ^= ((/* implicit */unsigned long long int) arr_8 [13U]);
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_5])))))) : (((unsigned long long int) (_Bool)1))));
                    arr_24 [4] [i_3] [i_3] [i_2] [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? ((+(arr_1 [i_2] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3])))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    arr_28 [0] [i_2] [i_3] [(signed char)12] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) ((unsigned char) var_10))) : (-1579415112)));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (arr_10 [i_1] [i_2] [2] [i_6])));
                }
            }
            for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                arr_31 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) 3561773873U);
                arr_32 [i_1] [i_2] [i_1] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) > (((/* implicit */int) (unsigned short)0))))), (13421614289261140534ULL)));
                var_20 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_9))))))) > ((-(var_7)))));
                /* LoopNest 2 */
                for (signed char i_8 = 2; i_8 < 15; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 1) 
                    {
                        {
                            arr_39 [i_9 - 2] [i_8 - 2] [i_7] [i_2] [i_1] = ((/* implicit */unsigned int) (-(arr_11 [i_9] [(unsigned short)15] [i_1])));
                            arr_40 [i_7] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_11 [i_8] [i_7] [i_1])), (((((/* implicit */_Bool) var_3)) ? (arr_21 [i_1] [i_2] [i_7] [i_1] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))))))), (((/* implicit */unsigned long long int) arr_34 [i_9] [i_1] [i_1] [i_1]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_10 = 3; i_10 < 15; i_10 += 2) 
                {
                    arr_43 [i_1] [i_7] [i_10] [i_2] [i_1] = ((/* implicit */short) arr_37 [i_10 - 2] [i_2] [i_7] [i_7] [i_1]);
                    arr_44 [i_1] [i_10] [i_7] [13U] = ((/* implicit */unsigned int) arr_41 [i_1] [(unsigned short)14] [i_2] [(signed char)14] [i_10 - 3] [i_10]);
                    arr_45 [i_1] [i_1] [i_10] [i_1] = ((/* implicit */signed char) arr_17 [i_10] [i_7] [(short)15] [i_1]);
                    arr_46 [i_1] [5ULL] [10U] [i_10] = (signed char)-33;
                }
            }
            arr_47 [i_2] = ((/* implicit */unsigned long long int) min((arr_11 [i_1] [i_1] [i_1]), ((+(arr_11 [i_1] [6ULL] [i_1])))));
            arr_48 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+((+(((unsigned int) arr_1 [i_1] [22]))))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_53 [i_1] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)73)), (var_3)))) ? (min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_11])), (arr_10 [i_1] [i_1] [i_11] [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_1] [i_1] [i_1] [i_1]) > (arr_10 [i_11] [i_11] [i_11] [i_11])))))));
            arr_54 [11LL] = ((/* implicit */_Bool) (~(((unsigned int) (+(arr_17 [i_11] [i_1] [i_1] [i_1]))))));
        }
        arr_55 [i_1] [i_1] = arr_17 [i_1] [i_1] [i_1] [i_1];
    }
    for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (-(((/* implicit */int) var_12)))))));
        arr_59 [i_12] = ((/* implicit */unsigned long long int) ((_Bool) var_8));
        var_22 = ((/* implicit */unsigned short) ((((unsigned long long int) (+(((/* implicit */int) arr_58 [i_12] [i_12]))))) > (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-41)) : (var_4)))))));
    }
}
