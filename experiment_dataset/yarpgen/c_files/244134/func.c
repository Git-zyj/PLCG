/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244134
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_16))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_18 *= ((/* implicit */unsigned long long int) var_10);
        arr_2 [i_0] = ((/* implicit */int) var_5);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_19 &= ((/* implicit */unsigned short) min((((arr_4 [i_0] [i_1]) - (((/* implicit */int) var_10)))), (arr_4 [i_0] [i_1])));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) max((max((13497626033634604049ULL), (((/* implicit */unsigned long long int) -98327646)))), (((/* implicit */unsigned long long int) var_8))));
        }
        for (int i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            arr_10 [i_0] = var_0;
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                var_20 += ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_8 [i_3] [i_3]))))));
                var_21 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) var_3)))), (min((arr_4 [i_0] [i_2 + 1]), (arr_4 [(signed char)7] [i_2 - 1])))));
            }
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (arr_8 [i_0] [i_2]) : (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_11)))))))) ? ((~(var_16))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (var_15)))))))));
            var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_15)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2 - 1])) : (arr_7 [i_2 + 1] [i_2 + 1] [i_2 - 1]))) : (((((/* implicit */int) var_5)) & (((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 1]))))));
            var_24 -= ((/* implicit */signed char) ((((/* implicit */int) ((arr_8 [i_2] [i_2]) < (arr_8 [i_2] [i_2])))) > ((-(arr_8 [i_2] [i_2])))));
        }
    }
}
