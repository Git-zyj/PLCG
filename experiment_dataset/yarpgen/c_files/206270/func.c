/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206270
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
    var_17 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 8390737469494376207ULL)) ? (((/* implicit */int) (short)20977)) : (((/* implicit */int) (short)-20991)))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_3 [i_1]), (arr_3 [i_1])))), (((((/* implicit */_Bool) min((arr_3 [i_1]), (arr_3 [i_1])))) ? ((~(((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) arr_3 [i_1]))))));
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1]))));
            arr_6 [i_1] [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_2])), ((+(10056006604215175399ULL)))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 1; i_4 < 20; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_4] [i_4 + 3] [i_4 - 1] [i_4])) ? (arr_14 [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1]) : (arr_14 [i_4] [i_4 + 3] [i_4 - 1] [i_4]))))));
                        var_23 += ((/* implicit */unsigned char) arr_12 [i_5] [i_3] [i_3] [i_1] [i_1] [i_1]);
                        var_24 = ((/* implicit */unsigned short) min(((+(8390737469494376207ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_4 [i_1] [i_3] [i_5])), ((signed char)(-127 - 1)))))));
                        var_25 = arr_8 [i_1] [i_1] [i_1];
                        var_26 = ((/* implicit */int) arr_8 [i_1] [i_3] [i_1]);
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (arr_11 [i_1] [i_3] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1])))))));
        }
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            var_28 = ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_1])))), ((-(((((/* implicit */_Bool) (short)20977)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-20958))))))));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 2; i_7 < 22; i_7 += 3) 
            {
                arr_20 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)20974))));
                var_29 *= ((/* implicit */short) (+(((/* implicit */int) min((arr_10 [i_1] [(unsigned short)10]), (arr_10 [i_1] [(unsigned short)18]))))));
                var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_12 [i_7] [i_6] [i_6] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_7])))))));
                var_31 |= ((/* implicit */_Bool) min((arr_2 [(unsigned char)10] [(unsigned char)10]), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_7 [i_6])), (max((((/* implicit */unsigned short) (signed char)-111)), ((unsigned short)15))))))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                arr_25 [i_1] = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) (short)-20991)), (2868609189U)))));
                arr_26 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(min((0U), (((/* implicit */unsigned int) (short)20964))))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) min((1150154572), (((/* implicit */int) (signed char)-111))));
                            var_33 = min((((/* implicit */unsigned long long int) arr_9 [i_1] [i_6] [i_9])), (max((((((/* implicit */_Bool) arr_22 [i_1] [i_6])) ? (((/* implicit */unsigned long long int) arr_21 [i_1] [i_6] [i_1] [i_1])) : (arr_8 [i_1] [i_6] [i_1]))), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1])))));
                            arr_31 [i_10] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_21 [i_1] [i_8] [i_1] [i_10]);
                        }
                    } 
                } 
            }
            arr_32 [i_1] [i_6] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */int) (short)20982)), ((~(((/* implicit */int) (short)3049))))));
            var_34 = ((/* implicit */unsigned int) arr_10 [i_1] [i_1]);
        }
        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            var_35 = ((/* implicit */signed char) arr_23 [i_1] [i_11]);
            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) min((((/* implicit */int) max((arr_3 [(short)12]), (((/* implicit */short) arr_15 [i_11]))))), ((((!(((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_11])))) ? (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */signed char) arr_29 [i_11] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_5 [4] [4])))))))))));
            var_37 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) arr_3 [i_1]))));
        }
        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) max((((arr_9 [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])))), (((/* implicit */int) min((arr_9 [i_1] [i_1] [i_1]), (arr_9 [i_1] [i_1] [i_1])))))))));
    }
    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (min((min((((/* implicit */unsigned int) var_13)), (var_5))), (((/* implicit */unsigned int) var_13)))) : (var_14)));
}
