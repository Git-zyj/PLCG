/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209545
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 *= ((/* implicit */unsigned char) ((((int) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) -8327832843471520122LL)))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((int) ((arr_4 [i_2] [i_1] [i_0]) ^ (((/* implicit */int) var_5)))))) ^ (var_10)));
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(arr_2 [(unsigned short)8] [i_1])))) > (arr_0 [i_1]))))));
                    var_15 = ((/* implicit */unsigned char) arr_6 [i_0]);
                }
                for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (var_8) : (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */short) (signed char)127))))))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)37265)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_0] [(short)8] [i_0] [0ULL]))))) & (((((/* implicit */_Bool) 113477575839611641ULL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                    arr_10 [i_0] [(signed char)6] [i_0] [i_0] = ((/* implicit */short) ((arr_4 [(short)4] [i_1] [i_3 + 1]) != (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3 - 1] [i_3])) ? (max((((/* implicit */int) var_9)), (arr_7 [3]))) : (((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) arr_8 [i_0] [i_0] [3LL] [3LL])) + (15556)))))))));
                    arr_11 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_3] [0ULL] [i_3 - 1]) : ((-((+(((/* implicit */int) var_2))))))));
                    var_17 = ((/* implicit */unsigned long long int) (short)17735);
                    var_18 = ((/* implicit */_Bool) var_4);
                }
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (arr_7 [i_1]) : (((/* implicit */int) var_5)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_0);
}
