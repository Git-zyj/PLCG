/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215590
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
    var_20 = ((((((var_5) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */unsigned long long int) var_14)))) ? (((long long int) (+(-228400866)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_14)))) <= (((((/* implicit */_Bool) var_19)) ? (var_16) : (((/* implicit */unsigned long long int) 2097120)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((arr_1 [i_0]), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0 - 2] [i_0 + 1])) == (var_12))))));
        arr_4 [i_0 + 2] [i_0 - 1] = ((/* implicit */unsigned long long int) ((max((arr_0 [i_0 - 2] [i_0 + 2]), (arr_0 [i_0 + 2] [i_0 - 1]))) != (((/* implicit */int) ((max((((/* implicit */unsigned long long int) 2097118)), (var_9))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (var_0) : (arr_0 [i_0] [i_0 + 2])))))))));
        var_21 = ((/* implicit */int) (~((-(var_14)))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) ((var_8) >> (((arr_1 [i_2 + 2]) + (656850677)))))) != (min((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), (((long long int) arr_2 [i_2] [i_2]))))));
            arr_9 [i_1] = ((/* implicit */unsigned long long int) (((-((-(1125899906842623LL))))) >> (((((((/* implicit */_Bool) (-(arr_7 [i_1])))) ? (((((/* implicit */_Bool) -2014200795)) ? (arr_1 [(_Bool)0]) : (((/* implicit */int) (_Bool)1)))) : (var_4))) + (656850705)))));
            arr_10 [i_1] [i_1] = ((/* implicit */int) ((arr_5 [i_1] [4LL]) & (((arr_7 [i_2 - 1]) << (((arr_1 [i_2 + 1]) + (656850726)))))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) < (11814935762578749892ULL)))) | (((((/* implicit */_Bool) arr_2 [i_2 + 2] [i_2 + 2])) ? (arr_2 [i_2 + 2] [i_2 + 1]) : (var_13)))));
        }
        for (unsigned char i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            arr_13 [i_1] [i_3] [i_3 - 1] = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3 - 1])) ? (((/* implicit */int) arr_8 [i_1] [i_3] [i_1])) : (var_13)))) / (arr_12 [i_1] [i_3])))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_3] [i_3])) && (((/* implicit */_Bool) 1657068701776657539ULL)))) ? (((-1685212854) - (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_10)) ? (-1685212854) : (arr_2 [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) arr_1 [i_3 - 1])) : (min((arr_5 [i_4] [i_1]), (((/* implicit */unsigned long long int) -2097120)))))))));
                arr_16 [i_1] [(short)1] [i_3] [i_1] = ((/* implicit */long long int) ((unsigned long long int) min((var_14), (((/* implicit */long long int) arr_14 [i_3] [i_3 - 1] [i_3])))));
                var_25 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_8 [i_4] [i_4 - 1] [i_4 - 1])))) >> ((((~(((/* implicit */int) arr_8 [i_4 - 1] [i_4] [i_4 - 1])))) + (132)))));
                arr_17 [i_1] [i_3 - 1] [i_3] = ((/* implicit */unsigned long long int) ((((arr_2 [i_4] [i_3]) + (2147483647))) << (((max((((var_2) ? (((/* implicit */long long int) var_0)) : (var_18))), (((/* implicit */long long int) arr_0 [i_3 - 1] [i_4 - 1])))) - (1708183835LL)))));
            }
            var_26 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_6)), (var_5)));
        }
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(var_12))) >> ((((-(((/* implicit */int) var_2)))) + (59)))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) -1643351640)) : (9223372036854775807LL)))) : (((((/* implicit */unsigned long long int) arr_1 [i_1])) ^ (((((/* implicit */_Bool) 1001769637)) ? (arr_5 [7U] [i_1]) : (((/* implicit */unsigned long long int) var_14)))))))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 4) 
            {
                {
                    arr_25 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_24 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 1]))))));
                    var_28 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) var_2)))));
                    var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_15 [i_6 + 2] [i_1] [i_6 + 2])) / (((long long int) arr_12 [i_1] [i_1])))))));
                    var_30 = ((((((/* implicit */_Bool) 18054131479520624440ULL)) ? (6845004849526305097ULL) : (((/* implicit */unsigned long long int) -2097131)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
}
