/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238149
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
    var_19 = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) var_9)))) >> (((((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */unsigned long long int) 25LL)))) - (14464941598045875805ULL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((((((((/* implicit */_Bool) (~(arr_5 [i_0])))) ? (arr_5 [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) var_8))))))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))) + (27))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((arr_2 [i_0] [i_1]) ^ (arr_2 [i_1] [i_0]))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
                {
                    arr_11 [i_2] [i_0] = (-((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_17))))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) << (((arr_2 [i_1] [(unsigned char)4]) - (10377772300175265897ULL)))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        arr_15 [i_1] [i_1] [i_0] [i_3] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((6802687274950492206ULL) > (((/* implicit */unsigned long long int) -7834644038853932498LL))));
                        arr_16 [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_11) >> (((arr_8 [i_3] [i_1] [i_1] [i_0]) - (17750297671055257856ULL)))))) | (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) -1985944219)) : (arr_14 [i_0])))))) ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : (arr_8 [i_0] [i_1] [i_2] [i_3]));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((arr_5 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3])) || (((/* implicit */_Bool) var_12))))))))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_10 [i_0] [i_1] [i_2])))) << (((arr_0 [i_0]) - (12810594438010436319ULL)))))) : (((((/* implicit */_Bool) (unsigned short)37355)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))) : (6802687274950492220ULL))));
                        arr_18 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) != (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13430))) + (3957933987134695614ULL))) / (min((arr_2 [i_2] [i_1]), (((/* implicit */unsigned long long int) 11LL))))))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                {
                    arr_23 [i_1] [i_0] [i_4] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_5 [i_1])) > (17900233130651725171ULL))) ? (((var_17) % (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7666428743048555029LL)) ? (7666428743048555017LL) : (-26LL))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 4) 
                    {
                        arr_27 [i_0] [i_4] [0ULL] [i_4] = ((/* implicit */unsigned char) var_14);
                        arr_28 [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_21 [i_0] [i_5 + 1] [i_4] [i_4]))))));
                        arr_29 [i_0] = ((/* implicit */signed char) (+(arr_0 [i_1])));
                    }
                }
            }
        } 
    } 
}
