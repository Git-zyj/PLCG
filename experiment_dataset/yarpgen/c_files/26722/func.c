/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26722
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((2147483647) - (2147483628)))));
        arr_3 [i_0] = ((/* implicit */int) (-(max((2974046833U), (((/* implicit */unsigned int) 301791370))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) != (((((/* implicit */int) arr_1 [i_0])) | (((int) arr_1 [i_0]))))));
        var_17 = min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (36580))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 += ((unsigned int) (signed char)64);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                var_19 = arr_9 [i_3 - 1] [i_1 - 1];
                arr_10 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */short) ((arr_8 [i_2] [i_3 + 1] [i_3 + 2] [i_2]) & (arr_8 [i_1] [i_1] [i_3 + 2] [i_1])));
                var_20 = ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) -1379129357289483292LL)));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1320920463U)) ? (((/* implicit */int) arr_6 [i_1 - 1])) : (1874652329)));
                /* LoopSeq 3 */
                for (int i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    var_22 = ((/* implicit */unsigned long long int) 266713347U);
                    var_23 = ((/* implicit */unsigned long long int) (signed char)68);
                    var_24 += ((/* implicit */unsigned char) arr_5 [i_1 - 1]);
                    arr_14 [i_4] [i_2] [i_2] [i_1 - 1] = ((/* implicit */short) ((arr_12 [i_2] [i_4 + 1] [i_1 - 1] [i_4]) >> (((/* implicit */int) arr_2 [i_1 - 1]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        arr_17 [i_2] = ((/* implicit */int) ((((-1379129357289483311LL) % (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [(short)4] [i_1] [i_1] [i_1]))))) != (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                        var_25 = ((((int) 17231595743862432147ULL)) >> (((((/* implicit */int) arr_5 [i_1 - 1])) - (28670))));
                        arr_18 [i_1] [(short)15] [i_2] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2974046833U)) ? (arr_9 [13] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))) - (2000401405U)));
                    }
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((unsigned long long int) arr_11 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_6] [i_3 - 1] [i_1 - 1] [i_1] [i_1]))) - (arr_9 [i_1 - 1] [i_3 + 2]))))));
                        arr_21 [i_2] [i_2] [i_3] [i_4] [i_6] = ((/* implicit */signed char) ((var_2) ? (4028253949U) : (arr_8 [i_3] [i_3] [i_3] [i_3 + 2])));
                    }
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        arr_25 [i_1] [i_4] [i_2] [i_2] [i_1] [i_1] = ((int) (-2147483647 - 1));
                        var_28 = ((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) arr_5 [i_3 - 1]))));
                        var_29 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)251))));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_4 + 1])) ? (arr_12 [i_2] [i_2] [i_3 + 1] [i_4 + 2]) : (((/* implicit */unsigned long long int) var_4))));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) 266713347U))));
                    }
                }
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_3 - 1])))))));
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) var_7))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    var_34 ^= (!(((/* implicit */_Bool) 32767)));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        var_35 ^= ((/* implicit */unsigned long long int) arr_0 [(signed char)3] [i_2]);
                        var_36 = ((/* implicit */unsigned long long int) arr_22 [i_1] [i_2] [12LL] [i_9] [i_10]);
                        var_37 = ((/* implicit */unsigned int) arr_15 [i_2] [i_1] [i_3]);
                    }
                    var_38 = ((/* implicit */signed char) arr_24 [i_1 - 1] [i_1 - 1] [(unsigned short)14] [i_1 - 1] [i_3] [i_9]);
                    var_39 = ((/* implicit */_Bool) max((var_39), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 266713374U)) ? (((/* implicit */long long int) 4028253949U)) : (7934511447218709306LL))))))));
                    var_40 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_2] [i_3] [i_2])) ? (arr_22 [i_3] [0U] [i_3 - 1] [i_3] [i_3]) : (((/* implicit */long long int) 2974046842U))))));
                }
            }
            for (int i_11 = 1; i_11 < 15; i_11 += 2) 
            {
                var_41 *= ((/* implicit */int) 1546547681297732273ULL);
                arr_36 [i_1] [0] [i_11 + 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_31 [i_11] [i_2] [i_2] [i_1] [4LL]), (((/* implicit */int) arr_1 [i_1]))))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (arr_24 [i_11] [i_11] [i_2] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) max((arr_28 [i_2] [i_2] [i_11] [(_Bool)1]), (arr_28 [i_2] [2U] [i_2] [i_11 - 1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_34 [i_1] [i_2] [i_11])))))))));
                var_42 *= ((/* implicit */short) ((int) (-(arr_26 [(signed char)12] [(signed char)12]))));
            }
            var_43 = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned int) max(((unsigned short)36888), (((/* implicit */unsigned short) arr_16 [i_2] [i_1 - 1] [i_1 - 1] [i_2] [i_2] [i_2]))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_0)) : (2294565873U))))));
            var_44 = ((/* implicit */long long int) 2301097058U);
            var_45 = ((/* implicit */int) max((266713370U), (((((/* implicit */unsigned int) var_6)) ^ (min((arr_19 [i_1 - 1] [i_1] [i_1] [i_2] [i_1 - 1]), (((/* implicit */unsigned int) var_12))))))));
        }
        var_46 -= arr_28 [14] [(signed char)0] [i_1] [i_1 - 1];
        var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_30 [i_1 - 1] [i_1] [i_1 - 1] [(unsigned short)10]), (arr_30 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))) ? ((-(((/* implicit */int) arr_30 [i_1 - 1] [(signed char)8] [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) arr_30 [i_1 - 1] [i_1] [i_1 - 1] [i_1]))));
    }
    var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((long long int) ((((/* implicit */_Bool) 17742969758683702281ULL)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) (unsigned char)115))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_49 = ((/* implicit */long long int) ((unsigned short) var_14));
    var_50 += ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_7)) : (var_9))))))) < (var_0));
}
