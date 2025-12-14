/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2965
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
    var_10 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_3 [(unsigned char)18] &= ((/* implicit */unsigned long long int) max((arr_2 [i_0]), (arr_2 [i_0 - 1])));
        var_11 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) var_4))) < (arr_1 [i_0 + 2]))), (((((/* implicit */_Bool) arr_1 [i_0 + 2])) || (((/* implicit */_Bool) arr_1 [i_0 + 3]))))));
        var_12 = ((/* implicit */signed char) max((1562784114U), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0 - 1])))))));
        var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [i_0 + 1])))) ? (arr_1 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-92)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) (unsigned char)98)))) : (((/* implicit */int) max(((unsigned char)127), (arr_0 [i_0])))))) * (((/* implicit */int) (unsigned char)35))));
    }
    for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        arr_8 [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned char) arr_5 [i_1 + 2]);
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)96)) < (((((((/* implicit */int) (unsigned char)229)) == (((/* implicit */int) arr_5 [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [(unsigned short)13] [i_1])) != (((/* implicit */int) (unsigned char)231))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1 + 2])))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (((~(((/* implicit */int) arr_6 [i_2] [i_2])))) >> (((((/* implicit */int) (unsigned char)249)) / (((/* implicit */int) (unsigned short)31)))))))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_2] [i_2])) > (((/* implicit */int) var_5))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_17 [(unsigned char)9] [i_3] [(signed char)2] [i_2] [i_6] [(unsigned char)2]), (((/* implicit */unsigned char) ((signed char) (unsigned char)224)))))))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) * (arr_23 [i_2] [i_4 + 3] [i_4 - 1] [i_4 + 3] [i_2])))) ? (((/* implicit */unsigned long long int) arr_15 [i_3] [i_2] [i_5] [i_6])) : (max((arr_22 [i_2] [i_5 + 1] [i_4 - 1]), (((/* implicit */unsigned long long int) ((unsigned char) arr_11 [i_2])))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + (arr_1 [i_2])));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)35)) * (((/* implicit */int) var_4)))), (var_8)))) ? (((((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_3))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) 7))));
    var_21 = ((/* implicit */short) (unsigned char)172);
    /* LoopSeq 1 */
    for (unsigned char i_7 = 1; i_7 < 21; i_7 += 2) 
    {
        arr_27 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */int) (unsigned char)216)), (1578230002)))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_7 + 1])) % (((/* implicit */int) arr_6 [i_7 - 1] [(unsigned char)4])))))));
        var_22 = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_7 + 1])) && (((/* implicit */_Bool) 5))))));
        var_23 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_7 [i_7 - 1] [i_7 - 1])) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (17067448056778248292ULL))))))));
    }
}
