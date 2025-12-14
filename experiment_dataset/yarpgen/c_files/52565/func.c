/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52565
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_14))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) 62))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-((-(((/* implicit */int) var_10))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) arr_4 [i_0] [11LL] [i_0])) : (((/* implicit */int) (short)6657)))))), (min((((unsigned short) 9223372036854775807LL)), (max((((/* implicit */unsigned short) arr_1 [i_1 + 1])), (arr_4 [6] [i_1] [6])))))));
            arr_7 [2LL] [i_1] [2LL] = max((arr_5 [i_0] [i_0] [i_1]), (arr_5 [i_1 + 4] [i_1 - 1] [i_1 + 1]));
            arr_8 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-30)))), (max((arr_1 [i_1 + 2]), (((/* implicit */short) (unsigned char)33))))));
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) (signed char)43);
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_4 [i_2] [(short)9] [i_0]))));
            arr_12 [i_2] = ((/* implicit */unsigned long long int) ((long long int) ((0LL) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)4] [i_0] [i_2]))))));
        }
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */short) min((((arr_13 [i_3]) ? ((~(((/* implicit */int) (unsigned char)33)))) : (((/* implicit */int) arr_13 [i_3])))), (((/* implicit */int) max((arr_14 [i_3]), (arr_14 [i_3]))))));
        arr_16 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) -33))) ? ((~(((/* implicit */int) arr_14 [(unsigned short)0])))) : (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) var_5)))))))));
        arr_17 [i_3] [i_3] = ((/* implicit */unsigned char) (~(((arr_14 [i_3]) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) arr_14 [i_3]))))));
    }
}
