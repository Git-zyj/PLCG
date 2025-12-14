/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212075
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_2 [(unsigned char)12] |= ((/* implicit */unsigned char) arr_0 [(unsigned char)4] [(unsigned char)4]);
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0 + 1])))) % (((/* implicit */int) max((arr_0 [i_0] [i_0 + 1]), (arr_0 [i_0] [i_0]))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        var_18 -= ((/* implicit */long long int) max((((/* implicit */int) arr_1 [(unsigned short)20])), (-2147483624)));
        var_19 -= ((/* implicit */unsigned int) (+((-2147483647 - 1))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (-(((unsigned long long int) ((arr_5 [i_1]) ? (996974098U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)14]))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)14))))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((max((arr_14 [i_3] [i_3] [i_2]), (((/* implicit */unsigned int) var_0)))), (arr_14 [i_2] [i_3] [i_2])))), (((((/* implicit */_Bool) max((-2147483624), (((/* implicit */int) (unsigned short)42512))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_4 [i_2])), (var_9)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [6U] [6U]))) * (var_1))))))))));
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_11 [i_2] [i_2] [i_3]))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_3] [i_2]))) % (var_6)))) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (3597826650U) : (((/* implicit */unsigned int) -2147483624)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_2]))))))) : (arr_8 [i_2] [i_3])));
        }
        arr_15 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_2])) ? (var_12) : (min((arr_8 [i_2] [i_2]), (((/* implicit */unsigned int) arr_12 [i_2] [i_2] [i_2]))))));
    }
    var_23 = ((/* implicit */short) (~(max((((/* implicit */int) (unsigned char)20)), (-2147483615)))));
}
