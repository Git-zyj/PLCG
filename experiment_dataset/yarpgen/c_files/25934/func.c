/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25934
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
    var_15 ^= ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)8537)) : (((/* implicit */int) (unsigned short)0))))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (var_8) : (var_8)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_12))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)31203)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) (short)0))))));
                    var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)30745)))) ? (min((2218900541U), (1132414812U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_6 [i_0] [i_1]))))))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) var_4))))), ((+(2076066755U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
                }
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(signed char)6] [i_1 - 1] [i_1 + 1] [i_0]))) : (1132414812U)))) : (arr_6 [(signed char)12] [i_0])))))))));
            }
        } 
    } 
}
