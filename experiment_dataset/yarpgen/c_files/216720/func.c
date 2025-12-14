/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216720
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_4))));
    var_20 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) % (((/* implicit */int) var_18))))))))) * (var_12)));
    var_21 = ((/* implicit */int) ((((/* implicit */int) var_18)) <= (((/* implicit */int) ((((((/* implicit */int) (unsigned char)64)) & (1801696329))) > (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_3))))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
        var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0])) == (arr_0 [1ULL]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)4] [i_0]))) ^ (970053331U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -1801696330))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_6 [2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_1])) << (((((int) arr_3 [i_1])) - (111400053)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) ((arr_0 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231)))))))))) : (((((/* implicit */_Bool) (+(arr_3 [i_1])))) ? (((/* implicit */long long int) arr_3 [i_1])) : (arr_0 [i_1])))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_1 [i_1]) > (arr_1 [i_1])))) << (((arr_1 [i_1]) - (arr_1 [i_1])))));
        arr_8 [(unsigned char)7] = ((/* implicit */signed char) ((((((arr_1 [i_1]) + (2147483647))) << (((arr_3 [i_1]) - (111400057))))) << (((/* implicit */int) ((arr_3 [i_1]) != (arr_3 [i_1]))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_24 = ((/* implicit */_Bool) (((((~(arr_9 [i_2 - 1]))) == (min((((/* implicit */unsigned int) arr_2 [i_2 - 1] [i_2 - 1])), (arr_9 [i_2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36299)) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (arr_5 [i_2 - 1])))) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)95))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_2] [i_2]))))))) : (((/* implicit */long long int) (~(arr_3 [i_2 - 1]))))));
        var_25 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) arr_1 [i_2 - 1]))), (((unsigned int) ((((/* implicit */unsigned int) arr_1 [i_2])) * (arr_9 [i_2]))))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)24)) * (((/* implicit */int) (unsigned short)60215)))))));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60833)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (unsigned short)23421))))) ? (-1801696329) : (((/* implicit */int) ((((/* implicit */_Bool) 1801696325)) || (((/* implicit */_Bool) (short)-4443))))))), (-1801696329)));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_14 [i_3])))) & (((/* implicit */int) arr_14 [i_3]))));
        arr_17 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) arr_14 [i_3]))));
    }
    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) ? (var_6) : (var_15)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 1071058932)) : (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_4)) : (var_14)))))))));
}
