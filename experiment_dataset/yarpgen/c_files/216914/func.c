/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216914
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
    var_18 = ((/* implicit */signed char) var_16);
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-3842)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (5804216789059355337ULL)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 6; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 3] [i_1 + 3])) ? (((/* implicit */int) arr_2 [i_0] [i_1 - 1] [i_2])) : (((/* implicit */int) (unsigned short)0))))) ? (5804216789059355308ULL) : (((((/* implicit */_Bool) (signed char)-1)) ? (12642527284650196278ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1 - 4] [i_2])))))));
                    arr_8 [i_0] [i_1] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) 2096013226)) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54638)) ? (((/* implicit */int) (unsigned char)45)) : (-2096013226)))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [1ULL]))) ^ (15963020825780736077ULL)))))));
                    arr_9 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1 + 1])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            var_20 ^= ((/* implicit */_Bool) (+(arr_6 [i_0] [i_0 + 1] [i_0 + 1])));
                            var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) 12457554552947797364ULL)) || (((/* implicit */_Bool) 0U))));
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_11 [i_5] [i_3] [i_2] [i_3] [2ULL]))));
                            arr_16 [i_5] [i_2] [i_2] [i_2 + 1] [i_2] = 2483723247928815538ULL;
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 1) /* same iter space */
                        {
                            var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_6] [i_1 - 1] [i_6 - 2] [i_3] [i_6])) ? (((/* implicit */int) (short)-17194)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_6 - 2] [i_3] [i_6 - 2]))));
                            arr_19 [i_0 + 1] [i_1] [i_1 + 1] [i_2 + 4] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1] [i_6 - 2])) ? (5804216789059355337ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_2 + 1] [i_2 + 3] [i_2] [i_2 + 1])))));
                            arr_20 [i_6] [i_3] [i_2] [i_1] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_6 - 1] [i_2 + 4] [i_0 + 1]))) + (-6770902095411539908LL)));
                        }
                        arr_21 [i_3] [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)232))));
                    }
                }
            } 
        } 
    } 
}
