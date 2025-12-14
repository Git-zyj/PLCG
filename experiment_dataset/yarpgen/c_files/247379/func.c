/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247379
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((((long long int) (_Bool)1)), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6))))) : (var_7)));
    var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 4294967278U))) && (((/* implicit */_Bool) max((4U), (((/* implicit */unsigned int) var_2))))))))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_10) : (4294967293U)))) : (((var_5) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                arr_5 [i_0 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0] [i_1])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_4 [i_0]))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(arr_1 [i_0 - 1]))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (!(arr_1 [i_0]))))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)126)))) ? (((((/* implicit */int) arr_4 [i_0])) & (((/* implicit */int) arr_1 [i_0 - 1])))) : (((((/* implicit */int) arr_4 [i_0])) + (((/* implicit */int) arr_4 [i_0]))))))) : (((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) 4294967291U)) : (((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (arr_2 [i_0] [i_1])))))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) ((short) arr_2 [i_1] [i_0]))) + (2147483647))) >> (((/* implicit */int) ((short) arr_1 [i_0])))))) ? (-4) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [i_1])), (arr_0 [(unsigned char)0])))) ? (((((/* implicit */int) arr_3 [(unsigned short)8] [i_1])) + (((/* implicit */int) arr_4 [(_Bool)1])))) : (((arr_1 [i_1]) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) arr_4 [(unsigned short)8])))))))))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((int) arr_2 [i_0] [i_0])))) ? (((/* implicit */int) (unsigned short)41038)) : (((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0 + 2]))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0])))))));
            }
        } 
    } 
}
