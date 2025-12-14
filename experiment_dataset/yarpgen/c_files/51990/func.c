/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51990
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_20 |= ((/* implicit */unsigned short) arr_0 [(_Bool)1] [i_1]);
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (arr_2 [i_0 + 1]) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1]))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 3; i_4 < 15; i_4 += 2) 
                        {
                            arr_16 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] |= ((/* implicit */signed char) var_11);
                            var_21 |= ((/* implicit */unsigned short) 8806043678427896167ULL);
                            var_22 = ((/* implicit */short) ((signed char) arr_10 [i_4] [13LL] [(signed char)17] [13LL] [i_3] [i_0 - 1]));
                        }
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            var_23 |= ((/* implicit */long long int) arr_4 [i_0] [2]);
                            var_24 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1594999278)) || (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_3] [i_5])))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_13 [i_1] [(unsigned char)0] [i_3] [7LL]))))) ? (((/* implicit */int) var_8)) : (1352285237)));
                            arr_21 [i_0] [i_1] [(_Bool)1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [(unsigned short)5] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [(unsigned char)4] [i_0 - 1] [i_0 + 1]))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [(signed char)5])) ? (((((/* implicit */_Bool) -1594999261)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)46861)))) : ((+(var_0)))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0 + 1])) ? (arr_18 [i_6] [i_0 + 1]) : (((/* implicit */int) var_4))));
                        }
                    }
                } 
            } 
            var_28 = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(323131389)))) | (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (3254190379319727368LL)))));
            var_29 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
        }
        var_30 = ((/* implicit */unsigned short) var_13);
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                for (unsigned short i_9 = 1; i_9 < 15; i_9 += 2) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) arr_4 [i_0] [i_7]);
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            arr_34 [5U] [i_7] [(signed char)3] [(signed char)3] [i_9] [i_9] [(signed char)3] = ((/* implicit */_Bool) (~(((arr_19 [(unsigned short)9] [(unsigned short)9] [i_8] [i_9] [(unsigned short)4]) ? (arr_33 [i_0 - 1] [i_7] [i_8] [i_7] [i_10]) : (arr_33 [i_0] [i_0] [i_0] [i_9] [1])))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-18))))) ? (((int) var_1)) : (((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_7] [i_9 + 3])))));
                            arr_35 [i_9] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) + (((((/* implicit */_Bool) (signed char)-53)) ? (-3254190379319727369LL) : (((/* implicit */long long int) 2147483647))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_33 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-7111))));
                            arr_39 [i_9] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))));
                            var_34 = ((/* implicit */signed char) 148294739113935902LL);
                        }
                        for (unsigned long long int i_12 = 2; i_12 < 18; i_12 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)32684)) > (arr_33 [i_12] [14] [14] [i_0] [i_0])));
                            var_36 = ((/* implicit */signed char) arr_37 [i_0] [i_0] [i_0 + 1] [i_9] [(short)7]);
                            arr_42 [i_8] [i_7] |= (+(323131389));
                        }
                        for (long long int i_13 = 0; i_13 < 19; i_13 += 2) 
                        {
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0 + 1] [i_0 + 1]))) ? (((/* implicit */int) arr_10 [i_9 - 1] [i_9] [i_9] [i_9 + 3] [i_9 - 1] [i_0 - 1])) : (arr_18 [i_0] [(unsigned char)2])));
                            var_38 |= ((/* implicit */_Bool) (unsigned short)17622);
                            var_39 = ((/* implicit */unsigned long long int) ((int) arr_38 [i_9 + 1] [i_9 + 2] [i_9] [i_9] [i_9 + 4] [i_9 + 2]));
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_14 = 1; i_14 < 18; i_14 += 4) /* same iter space */
    {
        arr_47 [i_14] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_27 [i_14 + 1] [i_14] [i_14 + 1] [i_14 - 1])))), (((/* implicit */int) (signed char)65))));
        var_40 = ((/* implicit */int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) max((var_0), (var_18)))) : (max((((/* implicit */unsigned int) (_Bool)1)), (var_15))))), (((/* implicit */unsigned int) arr_43 [(_Bool)1] [i_14 - 1] [i_14]))));
        var_41 |= ((((/* implicit */_Bool) min((arr_25 [i_14 + 1]), ((unsigned short)3030)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_5)), ((-(((/* implicit */int) arr_40 [i_14] [i_14 - 1] [(unsigned short)3] [i_14 - 1] [i_14] [i_14 - 1]))))))) : (((((/* implicit */_Bool) arr_22 [i_14])) ? (((((/* implicit */_Bool) (unsigned short)42876)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_14]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_14 - 1]))))));
        var_42 = ((/* implicit */unsigned int) (unsigned short)8449);
    }
    var_43 = ((/* implicit */_Bool) var_18);
}
