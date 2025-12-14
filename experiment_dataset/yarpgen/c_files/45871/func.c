/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45871
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) (+(4518348364324684923LL)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_16 = ((((unsigned long long int) var_6)) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (short)-19831))))));
                                var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4 - 2] [i_4] [i_4 - 1] [i_3 - 1] [i_3 + 3])) ? (-4518348364324684923LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [0ULL] [(signed char)6] [i_4 - 1] [i_3 - 1] [i_3 + 1])))));
                                arr_17 [i_1] [i_2] = ((/* implicit */unsigned int) var_4);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [3LL]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51755))) / (-7618553461555132411LL)))));
                    arr_18 [i_1] [i_1] = var_2;
                }
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)105))))) / ((+(var_5)))))), (14525754570759267844ULL)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_11);
}
