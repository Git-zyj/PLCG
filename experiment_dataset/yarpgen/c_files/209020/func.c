/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209020
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1 + 1] = ((/* implicit */int) arr_8 [i_2] [i_2] [i_0] [i_3] [i_4] [i_2]);
                                arr_14 [(signed char)0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) arr_4 [i_0] [i_4] [i_2] [i_0])) / (20ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_13)) <= (0ULL))))))) ? ((~((~(33ULL))))) : (((/* implicit */unsigned long long int) min((((arr_7 [8] [i_4] [i_0]) >> (((((/* implicit */int) var_3)) - (41))))), (((/* implicit */int) ((unsigned short) -2730748))))))));
                            }
                        } 
                    } 
                    var_15 = ((((/* implicit */int) arr_5 [i_0] [i_0])) >> ((((((+(arr_10 [i_1] [i_1] [i_2] [(unsigned char)1] [i_1 - 1]))) + (((/* implicit */unsigned long long int) (-(arr_3 [i_0])))))) - (3524628538123612731ULL))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551595ULL)) || (((/* implicit */_Bool) (short)0))))), ((unsigned char)208))))) : (var_13)));
    var_17 = ((/* implicit */long long int) (short)-18);
}
