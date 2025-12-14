/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221699
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
    var_13 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) var_4)), (var_12))), (var_12)));
    var_14 = ((/* implicit */unsigned long long int) (signed char)126);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_15 &= arr_3 [i_0];
        var_16 = (+((-(((/* implicit */int) (signed char)-127)))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_17 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_4 [i_0] [12ULL] [i_1])) << (((var_2) + (2446589786469414289LL)))))));
            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
        }
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (var_12)))) == (((/* implicit */int) (signed char)126))));
            var_20 |= ((/* implicit */long long int) ((int) (unsigned char)75));
            arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [(signed char)9] [i_2])) ? (arr_6 [i_0] [i_2]) : (arr_6 [i_0] [i_2])));
            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
        }
    }
    for (int i_3 = 1; i_3 < 12; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (short i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            for (unsigned char i_5 = 1; i_5 < 10; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    {
                        arr_22 [i_3] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_4] [i_5 - 1])) ? (arr_10 [i_6] [i_5 + 2]) : (arr_10 [(signed char)0] [i_6]))) <= (((((/* implicit */_Bool) arr_10 [i_6] [i_3 + 1])) ? (arr_10 [i_5 + 3] [i_3]) : (arr_10 [i_3 - 1] [i_4 - 1])))));
                        var_22 = ((/* implicit */signed char) arr_12 [i_3 + 1]);
                        arr_23 [i_4] [i_3] [i_5 + 3] [i_6] [i_3 - 1] [i_3] = ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) (signed char)-127)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)57)) ? (arr_6 [i_3] [i_3]) : (arr_6 [i_3] [9])))) : (((long long int) var_9)))), (((/* implicit */long long int) ((arr_3 [i_6]) / (((((/* implicit */_Bool) (unsigned char)147)) ? (arr_1 [i_4]) : (((/* implicit */int) (unsigned char)75)))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) arr_20 [i_3 + 1] [i_3 + 1] [i_3]);
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((arr_1 [i_7]) <= (arr_1 [i_7]))))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) (unsigned char)224)) ? (524287ULL) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180))) : (0ULL)))))));
    }
    var_26 = ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned short)48735)))), (((/* implicit */int) ((var_10) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))))))))) : (((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_10)))) * (((/* implicit */unsigned long long int) (~(var_4)))))));
    var_27 = ((/* implicit */int) (signed char)120);
}
