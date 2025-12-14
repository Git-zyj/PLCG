/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35642
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_1 [i_0] [i_0])) == (arr_2 [i_0])))), (((unsigned int) arr_0 [i_0]))))));
        var_18 += ((/* implicit */int) arr_0 [i_0]);
        var_19 *= ((/* implicit */unsigned long long int) min((arr_2 [i_0]), (arr_2 [i_0])));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((unsigned int) min((((/* implicit */int) arr_0 [i_1])), (arr_1 [i_1] [i_1])))) != (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_1]), (arr_0 [i_1])))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_4 [i_1]), (arr_4 [i_1])))), (((arr_6 [i_1] [i_1]) / (((/* implicit */long long int) arr_1 [i_1] [i_1]))))))) ? (((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [i_1])), (arr_1 [i_1] [i_1])))) ^ (min((arr_5 [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1])))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_1])), (min((((/* implicit */unsigned long long int) arr_0 [i_1])), (arr_5 [i_1])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_12 [i_1] [i_2] |= ((/* implicit */unsigned char) ((arr_5 [i_1]) / (arr_5 [i_1])));
            arr_13 [i_2] = (i_2 % 2 == zero) ? (((/* implicit */_Bool) ((((arr_10 [i_2]) + (9223372036854775807LL))) >> (((((int) arr_1 [i_1] [i_2])) - (819134921)))))) : (((/* implicit */_Bool) ((((((arr_10 [i_2]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((int) arr_1 [i_1] [i_2])) - (819134921))))));
            arr_14 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_2]))));
            arr_15 [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_1])) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) arr_0 [i_2])))))));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_18 [i_3] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((((/* implicit */short) arr_17 [i_3])), (arr_16 [i_3] [i_3])))) ? (((/* implicit */int) arr_17 [i_3])) : (((/* implicit */int) arr_17 [i_3])))), (((((((/* implicit */_Bool) arr_17 [i_3])) ? (((/* implicit */int) arr_16 [i_3] [i_3])) : (((/* implicit */int) arr_16 [i_3] [i_3])))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3])))))))));
        arr_19 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) min((arr_17 [i_3]), (arr_17 [i_3])))), (((((/* implicit */int) arr_16 [i_3] [i_3])) << (((((/* implicit */int) arr_16 [i_3] [i_3])) - (17314)))))))) ? (((/* implicit */int) arr_16 [i_3] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_3] [i_3])))))));
    }
    var_20 = ((/* implicit */short) var_16);
    var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((-(var_12))) > (((/* implicit */unsigned int) max((((/* implicit */int) var_17)), (var_8)))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) var_16)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
}
