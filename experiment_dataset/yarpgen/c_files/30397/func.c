/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30397
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_15 [(unsigned char)6] [i_1] [10ULL] [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) ((arr_4 [i_1 + 3] [i_2 + 1]) & (arr_4 [i_1 + 3] [i_2 + 1]))));
                                var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) arr_13 [i_3] [(unsigned char)4] [i_4 + 1] [i_4] [i_3]))))))))));
                                arr_16 [6ULL] [i_4] [6ULL] [i_1] [i_1] [(unsigned char)1] [(unsigned char)1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [5ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 + 1]))) : (12964888258152605533ULL)))) && (((/* implicit */_Bool) (-(129059236369345489ULL)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [2ULL] [i_2 - 1] [i_2] [7ULL] [i_1])), (min((var_6), (((/* implicit */unsigned short) var_0))))))) : (((/* implicit */int) arr_0 [i_0]))));
                            }
                        } 
                    } 
                    var_11 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)45397), (var_6))))) < (min((((/* implicit */unsigned long long int) var_8)), (var_1)))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((unsigned long long int) var_7));
}
