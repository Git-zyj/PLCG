/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22993
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = ((((unsigned long long int) arr_0 [i_0])) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))));
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 12; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_3] = (-(arr_7 [(short)9] [i_1]));
                                var_20 -= ((/* implicit */short) ((unsigned long long int) min((((/* implicit */int) arr_6 [i_3] [i_2 - 3] [11ULL])), (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        {
                            var_21 = max((((((/* implicit */_Bool) max((0ULL), (11525133825788866465ULL)))) ? ((+(var_9))) : (arr_12 [10ULL] [i_1 + 1] [i_5] [i_5] [i_5] [i_6] [i_6]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6] [i_0] [i_5] [i_0] [i_0]))) + (arr_4 [i_0] [i_0] [i_5])))) && ((!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1 - 1] [10ULL] [i_6]))))))));
                            var_22 ^= min((max((arr_16 [i_6] [4ULL] [4ULL] [i_0 - 1]), (arr_16 [i_6] [0ULL] [0ULL] [i_0 + 1]))), (((4890075636754317950ULL) - (17559551236556006920ULL))));
                            var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 -= var_6;
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 2) 
        {
            {
                arr_24 [(short)10] &= ((/* implicit */short) ((((12097775157261242725ULL) ^ (arr_10 [i_8 - 1] [i_8] [i_7]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 8557034028195747873ULL))))))))));
                var_25 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) & (9ULL));
            }
        } 
    } 
}
