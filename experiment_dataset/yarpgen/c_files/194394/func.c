/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194394
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)65534))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-4100)))) : (((((/* implicit */_Bool) (short)4099)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)-4096)))))));
        arr_2 [i_0 + 4] = ((/* implicit */long long int) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (short)4107))));
        arr_6 [i_1] = ((/* implicit */unsigned int) arr_3 [i_1 - 1] [i_1 - 1]);
        arr_7 [i_1] = ((/* implicit */_Bool) min((min((arr_0 [i_1 - 1] [i_1 - 1]), (arr_3 [i_1] [i_1]))), (((/* implicit */int) (signed char)1))));
    }
    for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_11))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            arr_12 [i_2] [(signed char)9] [i_2] = (unsigned short)3774;
            var_16 = ((/* implicit */_Bool) ((arr_0 [i_3] [i_2]) / (arr_0 [i_3] [i_2])));
            /* LoopSeq 2 */
            for (signed char i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                arr_15 [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) -7917413481917142339LL);
                var_17 = ((/* implicit */_Bool) ((unsigned char) arr_10 [i_4 - 1]));
            }
            for (signed char i_5 = 3; i_5 < 13; i_5 += 4) 
            {
                var_18 = ((/* implicit */long long int) ((arr_8 [i_5 + 1]) ? (((/* implicit */int) arr_8 [i_5 + 1])) : (((/* implicit */int) (unsigned char)248))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_9))));
                /* LoopSeq 4 */
                for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    arr_21 [i_2] [i_3] [i_5] [i_5] = ((/* implicit */unsigned char) arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 2]);
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52489)) ? (((/* implicit */int) (short)-4114)) : (((/* implicit */int) (short)4111))))) ? (((/* implicit */int) arr_8 [i_5 - 1])) : (((/* implicit */int) var_13)))))));
                    arr_22 [13ULL] [i_3] [2] [i_5] [i_5 + 1] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_18 [i_2] [i_3] [i_2])))) | (arr_14 [i_5 - 1] [i_2])));
                }
                for (short i_7 = 1; i_7 < 11; i_7 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) ((signed char) ((int) arr_13 [i_5])));
                    var_22 = ((/* implicit */unsigned char) arr_16 [i_5]);
                    arr_25 [i_5] [i_3] [i_2] [8LL] [i_7] [(signed char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((arr_8 [(short)9]) ? (arr_20 [i_2] [i_2] [i_2] [1U] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4088))))) : (((/* implicit */unsigned long long int) arr_24 [i_5]))));
                    var_23 = ((/* implicit */unsigned char) (signed char)-74);
                    arr_26 [i_5] = (+(arr_20 [i_2] [i_7] [1U] [(unsigned short)6] [i_5]));
                }
                for (int i_8 = 1; i_8 < 12; i_8 += 4) 
                {
                    var_24 = ((/* implicit */int) ((arr_18 [i_5 + 1] [i_8 + 1] [i_8 + 2]) > (arr_18 [i_5 - 2] [i_8 + 2] [i_8 - 1])));
                    arr_30 [i_8 + 2] [i_5 - 3] [i_5] [i_5] [i_3] [i_2] = ((/* implicit */int) arr_23 [i_2] [i_3] [i_3] [(signed char)5] [i_8 + 1]);
                }
                for (signed char i_9 = 1; i_9 < 13; i_9 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_36 [(short)10] [i_5] [i_3] [i_9 + 1] [(signed char)13] [i_10] = ((/* implicit */signed char) ((16826923300201558977ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_9 - 1] [i_9 - 1] [i_5] [i_10 - 1])))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_5])) || (((/* implicit */_Bool) arr_16 [i_5]))));
                    }
                    for (unsigned char i_11 = 1; i_11 < 12; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)144)) ? (arr_34 [i_5] [i_5] [i_5 - 3] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_16 [i_5]))))));
                        arr_41 [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_23 [i_11 + 2] [(_Bool)1] [i_11] [i_11 - 1] [i_11 + 2]))));
                        var_27 = ((/* implicit */int) (signed char)(-127 - 1));
                        var_28 = ((/* implicit */unsigned char) arr_39 [i_5]);
                    }
                    var_29 = arr_9 [i_2];
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((short) (signed char)15)))));
                }
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_12 = 2; i_12 < 21; i_12 += 2) 
    {
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_12 - 2])) ? (13689096393452298218ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_12] [i_12 - 1])))));
        arr_44 [4LL] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_42 [3ULL])) ? (arr_42 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_12] [i_12])))))));
        var_32 |= ((/* implicit */signed char) var_8);
    }
    /* LoopNest 3 */
    for (long long int i_13 = 1; i_13 < 17; i_13 += 2) 
    {
        for (signed char i_14 = 1; i_14 < 19; i_14 += 3) 
        {
            for (short i_15 = 2; i_15 < 17; i_15 += 4) 
            {
                {
                    var_33 |= ((/* implicit */signed char) (-(((/* implicit */int) arr_43 [1LL] [i_13]))));
                    var_34 = ((/* implicit */long long int) arr_42 [i_13]);
                }
            } 
        } 
    } 
}
