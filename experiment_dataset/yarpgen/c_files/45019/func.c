/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45019
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
    var_19 = ((/* implicit */int) max((((var_16) + (max((((/* implicit */long long int) (unsigned char)170)), (var_8))))), (((/* implicit */long long int) var_9))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_14)));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */_Bool) ((arr_0 [17LL]) ? (((/* implicit */int) arr_2 [(signed char)16] [i_0])) : (((/* implicit */int) (short)-18978))))) ? (((/* implicit */unsigned int) 1916355659)) : (0U)))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((0U) != (((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */unsigned int) 10)) : (var_2)))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1 - 1] [i_1] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)22057))) + (var_11)))) ? (((/* implicit */int) max(((_Bool)1), (arr_0 [4U])))) : (((/* implicit */int) ((signed char) arr_1 [i_1]))))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */int) ((arr_6 [(signed char)18]) <= (arr_6 [(unsigned char)4])))) << (((((/* implicit */int) ((short) arr_6 [(_Bool)1]))) - (4288))))))));
        arr_8 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_14)), (1U))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-77))))))))));
        var_24 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_4 [i_1 + 1] [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [17U])))))))) ? (arr_4 [i_1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1])))));
    }
    for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_25 |= ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)106)));
        var_26 = ((/* implicit */int) max((((/* implicit */long long int) 4294967295U)), (var_8)));
    }
    var_27 = ((/* implicit */signed char) ((max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) - (var_6)))))) != (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) var_3)))), (max((var_0), (((/* implicit */long long int) var_14)))))))));
    var_28 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) 0U)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) << (((/* implicit */int) (_Bool)0)))), (max((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) 14685988272701042354ULL)) ? (var_5) : (var_2)))))));
}
