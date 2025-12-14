/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19772
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
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */short) ((signed char) (unsigned short)65520))), (((short) min((633894274U), (((/* implicit */unsigned int) var_2)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
    }
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 633894274U)) : (var_3)))))) < ((+(var_0)))));
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) arr_4 [i_1]);
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (((+(1246903368U))) << (((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) || (((/* implicit */_Bool) 3661073021U))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) var_4))) ^ (((unsigned int) ((((/* implicit */int) var_2)) << (((((/* implicit */int) (signed char)-79)) + (108))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            arr_12 [3LL] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) var_6)));
            arr_13 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (633894274U) : (var_12)));
            var_17 = ((/* implicit */long long int) var_2);
        }
        for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 1) 
        {
            arr_16 [(signed char)12] [i_3 - 1] [i_3] = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned long long int) max(((unsigned short)27566), (((/* implicit */unsigned short) var_2))))), ((~(9852754478150049916ULL))))));
            arr_17 [i_1] [i_3] = ((/* implicit */unsigned char) ((unsigned int) ((arr_3 [i_1] [i_3 - 2]) + (arr_3 [i_3] [i_3 + 1]))));
            arr_18 [i_3] = ((/* implicit */short) var_12);
            arr_19 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_10 [i_3 - 2])) ? (((arr_3 [i_1] [i_3 - 1]) * (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) arr_4 [i_1]))));
            var_18 = ((/* implicit */short) ((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)31))) >= (var_13)))) + (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_4 [i_1])) ? (var_1) : (((/* implicit */int) arr_4 [i_3])))) + (2147483647))) >> (((max((((/* implicit */long long int) arr_10 [i_1])), (var_0))) - (581138574LL))))))));
        }
        for (long long int i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_4 + 1] [i_4]))) ? (((/* implicit */unsigned long long int) (+(var_12)))) : (((((/* implicit */_Bool) ((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_3)))));
            var_20 = ((/* implicit */short) arr_21 [i_1] [i_4]);
            arr_22 [i_4] = ((/* implicit */unsigned long long int) arr_10 [i_4]);
        }
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        arr_27 [i_5] [i_5] = ((/* implicit */signed char) arr_25 [16ULL]);
        arr_28 [i_5] [(signed char)18] = ((/* implicit */int) var_9);
        arr_29 [i_5] [i_5] = ((/* implicit */unsigned short) var_6);
    }
}
