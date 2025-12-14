/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30000
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
    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) : (var_5))), (18446744073709551597ULL)))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) ((signed char) var_5)))))) : (max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_19)))), (((/* implicit */int) max((var_15), (((/* implicit */short) var_12)))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((unsigned char) var_11)), (((unsigned char) var_12))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_18))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [(unsigned char)2] [(unsigned char)5] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])), (max((((/* implicit */unsigned long long int) arr_1 [(short)4])), (arr_2 [i_1]))))) <= (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_2 [i_0])))));
                arr_7 [i_0] [i_0] [(short)1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((arr_3 [i_1] [i_0]), (arr_3 [i_0] [i_1])))), (max((min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])), (arr_2 [i_1]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)3)), ((unsigned short)65533))))))));
                arr_8 [i_0] = ((/* implicit */unsigned char) max((((long long int) arr_1 [i_0])), (((/* implicit */long long int) max((((/* implicit */short) arr_1 [i_1])), (arr_3 [i_0] [i_1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */short) var_19)), (var_13))))) ? (((/* implicit */unsigned long long int) ((long long int) var_12))) : (((unsigned long long int) var_19))));
}
