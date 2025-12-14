/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218595
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
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 *= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0 + 3]))) : (var_12))));
                var_15 = ((/* implicit */unsigned char) min((((long long int) arr_2 [i_0] [(unsigned char)0] [i_1 - 1])), (((/* implicit */long long int) max((arr_2 [i_0] [(signed char)2] [i_1 - 2]), (arr_2 [i_0] [i_0] [i_1 + 2]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (unsigned int i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) 17310623583155976693ULL))), (((int) arr_13 [(signed char)5] [i_3 + 2] [i_3 - 2]))));
                        var_17 = ((/* implicit */short) max((((/* implicit */int) (unsigned char)13)), (((((/* implicit */_Bool) (short)-7311)) ? (((/* implicit */int) (short)-7338)) : (((/* implicit */int) arr_14 [i_3 - 2] [i_3] [i_4] [i_2]))))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-617547438) * (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((arr_6 [i_3] [i_3]), (var_2)))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [15ULL] [15ULL]))))))))) : (max((max((((/* implicit */unsigned int) var_0)), (arr_4 [i_2]))), (var_4)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 3; i_6 < 19; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */signed char) ((arr_16 [i_4] [i_4 + 4] [i_4 + 4] [i_3 + 2]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_2] [i_4 + 2]))));
                        var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [(signed char)2] [i_4 + 2] [i_4 + 3] [i_4] [i_4 + 4])) ? (((/* implicit */int) arr_15 [i_4 - 1] [i_4] [i_4] [i_4 + 2] [i_4 - 1])) : (((/* implicit */int) arr_15 [i_4 + 3] [(signed char)12] [0] [(signed char)12] [i_4 + 2]))));
                        var_21 = ((-617547438) & (((/* implicit */int) (unsigned char)13)));
                    }
                    var_22 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_8 [i_2] [i_2] [i_4 + 3]))))));
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1388748952U))), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) var_2))));
    var_24 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
}
