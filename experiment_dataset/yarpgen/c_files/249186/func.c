/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249186
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((var_12) ? (3878006847448269882LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (16383ULL)));
        arr_4 [i_0] [i_0] = (+(max((min((((/* implicit */long long int) var_14)), ((-9223372036854775807LL - 1LL)))), (max((((/* implicit */long long int) var_6)), (arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    var_17 = ((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_3] [i_3]))));
                    arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_14 [(_Bool)1] [i_2 - 1] [i_3] [i_4]))));
                }
                arr_17 [(_Bool)1] [i_3] [17ULL] = (+(arr_10 [i_2]));
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_3] [i_2 - 1])) & (((/* implicit */int) arr_13 [i_3] [i_2 - 2]))));
                var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_5 [(unsigned short)2] [i_1])))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) + (var_0)))) ? (((long long int) 16373ULL)) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2 + 1] [(unsigned short)2] [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                    arr_20 [i_1] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3] [i_2])))))) : (((((/* implicit */_Bool) arr_18 [16ULL] [i_3] [i_2 - 2] [(_Bool)1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [2ULL] [(signed char)17] [i_5]))) : (arr_10 [i_2 - 1])))));
                }
            }
            arr_21 [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_2);
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((_Bool) var_2)))));
            var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))));
        }
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_7 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
        var_24 = (!(((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1])));
    }
    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        var_25 = ((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6] [i_6] [i_6]);
        arr_24 [i_6] = ((/* implicit */unsigned short) arr_8 [i_6]);
        arr_25 [i_6] = ((/* implicit */signed char) min((min(((+(var_0))), ((+(var_9))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
        var_26 = ((/* implicit */long long int) (!((!(arr_23 [i_6])))));
    }
    var_27 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        for (signed char i_8 = 2; i_8 < 20; i_8 += 3) 
        {
            {
                var_28 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((arr_28 [i_8]), (((/* implicit */unsigned long long int) arr_27 [(_Bool)1] [i_8 + 1]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((var_7), (var_7))))))));
                var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_27 [i_8 - 2] [i_8]))));
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) min((var_12), (arr_35 [i_11] [i_10 - 1] [i_9] [i_8] [i_8] [i_8] [(_Bool)1])))), (arr_29 [i_7] [i_7] [i_7]))))));
                                var_31 = ((/* implicit */signed char) arr_27 [i_11] [i_8]);
                                arr_36 [i_11] [16LL] [16LL] [i_11] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_29 [(signed char)8] [(signed char)8] [(signed char)8])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_30 [i_11])))), (((/* implicit */int) max((var_5), (arr_35 [i_7] [i_8] [i_8] [i_9] [i_9] [i_8] [i_8]))))))) ? (((/* implicit */int) min((arr_35 [i_7] [i_7] [i_7] [i_8 - 1] [i_7] [i_10 - 1] [i_7]), (arr_31 [i_7] [i_7] [i_7])))) : ((~(((/* implicit */int) var_10))))));
                            }
                        } 
                    } 
                } 
                arr_37 [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_30 [i_7]))) ? (max((var_9), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
            }
        } 
    } 
}
