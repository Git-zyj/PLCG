/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43431
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((max(((-(var_9))), (((/* implicit */unsigned int) (-2147483647 - 1))))) >> (((max((((/* implicit */long long int) max((var_19), (var_17)))), (min((((/* implicit */long long int) 3379249113U)), (arr_0 [i_0]))))) - (3379249095LL))));
        var_21 = ((/* implicit */unsigned int) ((((((((long long int) 15627442575635888468ULL)) + (9223372036854775807LL))) >> (((((/* implicit */int) ((short) var_18))) + (25775))))) << (((max((((/* implicit */long long int) ((unsigned int) arr_2 [i_0]))), (max((((/* implicit */long long int) (unsigned short)65522)), (var_7))))) - (2627663467LL)))));
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) var_3)))))));
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [(unsigned short)4]))) * (min((var_8), (((/* implicit */long long int) var_6))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (arr_0 [(unsigned short)14]) : (((/* implicit */long long int) var_12)))))))) > (((/* implicit */int) var_13))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)33090)) ? (((((/* implicit */_Bool) (short)-16455)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)198))) : (var_15))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2147483627))))));
        arr_8 [2U] [6U] |= ((((/* implicit */_Bool) ((signed char) var_16))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 2] [(unsigned short)4]))));
        arr_9 [i_1] = ((/* implicit */int) arr_1 [i_1 + 3]);
        arr_10 [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) -2136615372)) ? (arr_6 [0LL]) : (((/* implicit */long long int) var_6)))) : (((((/* implicit */_Bool) 4294967271U)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3)))))));
    }
    for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((max((1295173360U), (((/* implicit */unsigned int) var_10)))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10)))))))), (((((((/* implicit */_Bool) var_0)) ? (1008066931995441482ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2]))))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14959)) << (((((/* implicit */int) arr_13 [(short)9])) - (133)))))))))))));
        var_25 = ((/* implicit */unsigned int) min((min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) <= (var_15)))), (min((((/* implicit */int) var_17)), (arr_14 [i_2]))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_12) : (var_9)))))))));
        arr_15 [i_2] = ((/* implicit */unsigned int) min((min((((-327913288) & (((/* implicit */int) var_2)))), (-327913291))), (((/* implicit */int) var_14))));
    }
    var_26 -= ((/* implicit */unsigned long long int) ((((min((9223372036854775805LL), (((/* implicit */long long int) var_17)))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_6) : (var_12)))))) << (((((/* implicit */int) min((((short) var_13)), (((/* implicit */short) (!(((/* implicit */_Bool) var_16)))))))) + (95)))));
    var_27 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) var_1)) < (var_7)))) * (var_4)))) ? (((/* implicit */unsigned int) (+(var_16)))) : (var_12)));
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (var_16))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned int) var_19)), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10))))))) : (var_8)));
    var_29 = ((/* implicit */short) ((((long long int) ((var_6) & (((/* implicit */unsigned int) 327913267))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((short) var_1))) == (((/* implicit */int) var_19))))))));
}
