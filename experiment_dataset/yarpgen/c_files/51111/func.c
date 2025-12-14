/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51111
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
    var_17 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
    var_18 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((var_6) != (((/* implicit */long long int) var_0))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (-(arr_1 [i_0 + 2] [i_1 - 1])));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~((~((~(arr_11 [i_2] [i_2] [i_2] [i_2] [11ULL] [i_2]))))))))));
                                var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 4])) ? (((((/* implicit */_Bool) min((arr_11 [18ULL] [i_1] [i_2] [18ULL] [i_3] [i_4]), (((/* implicit */long long int) arr_13 [9U] [i_1 - 2] [9U] [i_3] [i_3] [(unsigned char)0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [(signed char)11] [i_2 + 1] [i_2 + 1])) ? (arr_14 [i_0] [(unsigned char)13] [i_2] [i_0] [i_0]) : (arr_8 [i_1] [i_2] [i_3] [i_4])))) : ((-(arr_10 [i_0] [i_1] [i_3] [i_3]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(short)8] [i_3 - 1] [i_4 + 1])) ? (((/* implicit */int) arr_4 [i_1 - 3] [i_3 + 1] [i_4 + 1])) : (((/* implicit */int) arr_4 [i_3] [i_3 + 1] [i_4 + 1])))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_11 [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0] [(_Bool)1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0 + 3]) != (arr_10 [i_0] [i_0] [i_0 + 3] [i_0 + 2]))))) : (((((/* implicit */_Bool) 64858375)) ? (-1314011979321739606LL) : (((/* implicit */long long int) 64858389)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_0);
}
