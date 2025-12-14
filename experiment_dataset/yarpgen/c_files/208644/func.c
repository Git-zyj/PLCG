/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208644
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
    var_20 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_7 [i_1 - 2] [5LL] [i_1] [i_1 + 2]), (arr_7 [i_1 + 1] [i_1] [i_1] [i_1 + 2])))) ? (((/* implicit */int) min((arr_7 [i_1 + 4] [i_1 + 3] [i_1 + 4] [i_1 + 3]), (arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 3] [i_1 - 2])))) : (((/* implicit */int) min((arr_7 [i_1 - 2] [i_1 + 3] [i_1] [i_1 + 2]), (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 3])))))))));
                    var_22 = ((/* implicit */unsigned long long int) (short)29848);
                }
            } 
        } 
        arr_9 [i_0] [(unsigned short)0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!((!(var_19)))))), (var_13)));
    }
    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) arr_8 [i_3] [i_3] [i_3] [i_3]);
        var_25 &= 4282384358879639255LL;
        var_26 &= ((/* implicit */unsigned long long int) (unsigned short)63765);
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (unsigned char i_5 = 3; i_5 < 10; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_7 = 1; i_7 < 10; i_7 += 1) 
                        {
                            var_27 = ((((/* implicit */_Bool) var_6)) ? (arr_15 [i_5 + 1]) : (var_2));
                            arr_21 [i_3] [2ULL] [i_5] [i_5] [i_3] [i_7] = ((/* implicit */unsigned short) ((3641116227U) < (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            var_28 = ((/* implicit */signed char) ((arr_6 [i_7 + 1] [i_7] [i_7 - 1]) ? (-8611683050657528502LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        }
                        for (unsigned char i_8 = 2; i_8 < 10; i_8 += 2) 
                        {
                            var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_24 [i_6 - 1] [i_6 - 1] [i_5 - 2] [i_5 - 1] [i_5 - 3]))));
                            var_30 = ((/* implicit */signed char) min((((/* implicit */int) max((((/* implicit */short) var_19)), (arr_18 [i_5 - 3] [i_5 - 3] [i_5] [i_8 - 2] [i_8] [i_8 + 1])))), (((((/* implicit */int) arr_18 [i_5 - 3] [i_5 - 3] [i_5 - 3] [i_8 - 2] [i_8] [i_8])) - (((/* implicit */int) arr_18 [i_5 - 3] [i_5] [i_6] [i_8 - 1] [i_8 + 1] [i_8 + 1]))))));
                        }
                        for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 3) 
                        {
                            arr_27 [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) ((((arr_20 [i_5 + 1] [i_5 - 1] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)216))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_15)))))))))));
                            var_31 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_0 [i_9 - 3] [9LL])) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3]))) > (-4122544842376642226LL))))))));
                            var_32 = ((/* implicit */int) (unsigned char)15);
                            var_33 = ((/* implicit */short) var_2);
                        }
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) (-(-1943537214894663717LL))))));
                    }
                    arr_28 [i_3] = min((max((var_4), (((/* implicit */long long int) var_19)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_3] [5LL] [i_5] [i_5 - 3]))))));
                }
            } 
        } 
    }
    for (long long int i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned char) (((!(((16416007187290783534ULL) >= (((/* implicit */unsigned long long int) arr_15 [i_10])))))) ? (((((/* implicit */_Bool) var_7)) ? (-6522800281570991936LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1771))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))) + (-1LL)))));
        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) var_17))));
        var_37 = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned short)37797)), (((((var_1) + (9223372036854775807LL))) >> (((880376397501668196LL) - (880376397501668184LL)))))));
        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((var_19) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_7))))) : (min((arr_1 [i_10] [i_10]), (((/* implicit */long long int) var_13)))))))));
        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_10] [i_10]))) : (1077566626U)))) : (8611683050657528502LL))))));
    }
    var_40 = ((/* implicit */short) var_0);
}
