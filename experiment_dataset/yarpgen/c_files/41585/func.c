/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41585
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
    var_14 = ((/* implicit */int) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) ((_Bool) var_6))))))));
        var_16 = ((/* implicit */int) var_8);
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_17 = ((/* implicit */long long int) (unsigned char)73);
            var_18 = ((/* implicit */short) min((((/* implicit */int) arr_7 [i_2])), (((((/* implicit */int) arr_5 [i_1] [i_2])) ^ (arr_4 [i_1])))));
            var_19 = ((/* implicit */unsigned long long int) (~((~((~(((/* implicit */int) var_7))))))));
            var_20 = ((/* implicit */_Bool) var_12);
        }
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) max((max((max((((/* implicit */unsigned long long int) arr_3 [6ULL] [i_3])), (var_13))), (((/* implicit */unsigned long long int) (+(arr_10 [i_1])))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) min(((short)6287), (((/* implicit */short) (signed char)-1))))), ((-(1022749835))))))));
            var_22 = (+(((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) (unsigned short)28309)))) : ((~(((/* implicit */int) arr_9 [i_1] [i_3])))))));
            var_23 = ((/* implicit */long long int) min((var_23), (var_3)));
        }
        for (unsigned char i_4 = 3; i_4 < 20; i_4 += 1) 
        {
            arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)0)))), ((~(1294067304)))))) ? (min((((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_4 [i_1]) : (arr_3 [i_1] [i_1]))), (((/* implicit */int) arr_5 [i_1] [i_1])))) : ((+(arr_3 [i_1] [i_1])))));
            var_24 = ((/* implicit */long long int) 56563357836463817ULL);
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((unsigned short) (unsigned char)124)))));
        }
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) 9223372036854775807LL))));
        var_27 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) var_7))))) : (max((1867915520), (1867915527))))), (max((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_2))))), (arr_11 [(unsigned char)11])))));
        var_28 = ((/* implicit */signed char) (+(min((arr_11 [i_1]), (arr_10 [i_1])))));
        var_29 = arr_6 [i_1] [i_1];
    }
    for (unsigned short i_5 = 2; i_5 < 13; i_5 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)7496)) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [14] [14])) : (((/* implicit */int) (unsigned char)0)))))))));
            var_31 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_5] [i_5 - 2])) ? (((/* implicit */long long int) arr_2 [i_5] [i_6])) : (var_3))));
        }
        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))) < (((((/* implicit */_Bool) arr_11 [i_5])) ? (((/* implicit */unsigned int) arr_11 [i_5 - 2])) : (2171462075U))))))));
    }
    var_33 = ((/* implicit */int) var_6);
    var_34 ^= ((/* implicit */unsigned long long int) var_6);
    var_35 = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_7))))));
}
