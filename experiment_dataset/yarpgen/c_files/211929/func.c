/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211929
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned char)15] [(unsigned char)15])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) arr_7 [i_2] [(unsigned char)6] [i_0])) : (((/* implicit */int) ((_Bool) arr_1 [i_0]))))) <= (((((/* implicit */_Bool) arr_2 [i_0] [i_2 - 1])) ? (((int) (unsigned char)122)) : (((arr_3 [i_0]) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_0 [i_0]))))))));
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [0LL])) ? (((/* implicit */int) arr_4 [16] [11U])) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [14LL] [2U] [i_2] [i_0]))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (3375988627803522359ULL)))))) ? (((((((/* implicit */int) arr_7 [i_0] [11U] [i_2])) <= (((/* implicit */int) arr_7 [i_2] [(_Bool)1] [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0] [(signed char)0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_0])))) : (((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 2] [i_2 - 1])))) : (((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0])))))));
                }
            } 
        } 
    } 
    var_12 -= ((/* implicit */int) ((long long int) ((_Bool) ((var_9) & (((/* implicit */int) var_8))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (var_9))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (var_1))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_4) : (var_1)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_1)) : (var_3))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (var_5))))))));
    var_14 = ((/* implicit */signed char) var_4);
}
