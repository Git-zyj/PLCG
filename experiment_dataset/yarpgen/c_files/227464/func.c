/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227464
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (arr_1 [i_0] [i_1])));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                            {
                                var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [(_Bool)1] [i_3] [i_3] [3] [(signed char)5] [i_3])) ? ((-(((/* implicit */int) arr_10 [i_3 + 3] [i_3] [i_3 + 1] [(signed char)4] [i_3] [i_3 + 1] [i_3 + 1])))) : ((-(((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 3] [i_3] [i_3]))))));
                                var_20 = ((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned char)32))))));
                                arr_11 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (((+(arr_6 [i_4] [i_3] [i_1]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_4] [3ULL] [(unsigned char)4] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3 + 2] [i_3] [i_3] [i_4]))) : (arr_8 [0U] [0U] [i_2] [i_1] [i_0])))))))));
                            }
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((((/* implicit */_Bool) (~(arr_8 [i_1] [i_3 - 1] [i_3 + 3] [i_3 - 1] [i_3])))) ? ((~(arr_8 [i_0] [i_3 - 1] [i_3 + 3] [i_3 - 1] [i_3]))) : (((arr_8 [i_1] [i_3 - 1] [i_3 + 3] [i_3 - 1] [i_3]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [0LL] [i_3 - 1] [i_3 + 3] [i_3 - 1])))))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 32U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(unsigned short)10] [(unsigned short)10] [i_3 + 3] [i_3 + 3] [i_3 + 2]))))) : (max((arr_9 [i_0] [i_0]), (arr_9 [i_0] [i_1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (3026393760U) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))))))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)52)))))))));
}
