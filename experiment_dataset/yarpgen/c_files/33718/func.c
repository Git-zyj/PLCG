/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33718
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        var_13 = (~(((/* implicit */int) var_3)));
        var_14 = ((/* implicit */unsigned long long int) min((((_Bool) arr_1 [i_0 + 1] [i_0])), (var_0)));
        var_15 = ((/* implicit */unsigned short) ((min((((long long int) arr_0 [i_0 - 1] [i_0])), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-4))))))) <= (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_0 [i_0 - 4] [i_0])))), (((((/* implicit */int) (signed char)-8)) <= (((/* implicit */int) var_12))))))))));
        var_16 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) && (((((/* implicit */int) min((arr_0 [i_0 + 1] [i_0]), (arr_0 [i_0 - 4] [i_0 - 2])))) < (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0] [i_0])), (var_4)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_5), (((/* implicit */signed char) var_3)))))))) ? (((((/* implicit */_Bool) min((arr_1 [i_1] [i_1]), (((/* implicit */unsigned long long int) (short)682))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)232)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
        var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1])) / (((/* implicit */int) arr_0 [i_1] [i_1]))))) : ((~(arr_1 [i_1] [i_1])))));
        var_19 = ((/* implicit */unsigned long long int) (((-((-(((/* implicit */int) (_Bool)0)))))) * (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (arr_0 [i_1] [i_1]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
    {
        var_20 += ((/* implicit */_Bool) ((signed char) min((((/* implicit */signed char) ((((/* implicit */int) var_12)) == (((/* implicit */int) arr_5 [i_2]))))), (var_5))));
        var_21 = ((/* implicit */short) var_7);
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */short) min((((/* implicit */int) arr_8 [i_3] [i_3])), ((~(((/* implicit */int) (short)-29499))))));
        var_23 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (min((((/* implicit */unsigned long long int) arr_5 [i_3])), ((~(var_8))))));
    }
    var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_7)), (max(((-(var_8))), (((/* implicit */unsigned long long int) var_6))))));
    var_25 = ((/* implicit */signed char) (short)-6035);
}
