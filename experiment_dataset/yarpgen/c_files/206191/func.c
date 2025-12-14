/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206191
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)61)) || (((/* implicit */_Bool) 0ULL)))))))) ? (((((/* implicit */_Bool) (unsigned short)58350)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((var_2) ^ (var_7))))) : (0ULL)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 1] [i_0])) ? (4485746905990308894LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [6ULL]))))) : (((((/* implicit */_Bool) var_9)) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))));
                var_12 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                var_13 = ((/* implicit */unsigned char) ((unsigned int) ((18446744073709551599ULL) >> (((18446744073709551615ULL) - (18446744073709551587ULL))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_14 = ((/* implicit */signed char) arr_6 [i_0] [(short)12]);
                    var_15 = ((/* implicit */int) var_0);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 1528013841U))))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) << (((((((/* implicit */_Bool) (signed char)-117)) ? (134217727U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) - (134217711U)))));
                                var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) arr_11 [i_1 + 1] [i_0] [i_2] [i_3] [(_Bool)1] [i_2] [i_1])) : (((/* implicit */int) arr_11 [i_4] [i_4] [i_3] [i_2] [i_1] [i_1] [i_0])))));
                                var_19 = ((/* implicit */long long int) (-(((unsigned long long int) var_1))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_0);
}
