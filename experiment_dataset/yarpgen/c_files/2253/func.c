/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2253
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
    var_17 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))))), (var_16))), (((/* implicit */unsigned long long int) (short)17856))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 6; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_3] [i_1] [i_0] [7LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)96))) ? (((unsigned long long int) (signed char)107)) : ((+(10256105452266820770ULL)))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) 1961198536)) && (arr_4 [i_3 + 3]))))));
                                var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_10 [i_4 - 1] [i_0] [i_2] [i_1] [i_0])), (min((min((((/* implicit */unsigned long long int) 716017683311260782LL)), (8190638621442730868ULL))), (((/* implicit */unsigned long long int) arr_0 [i_4 + 1] [i_4 - 1]))))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [i_2] [i_0] [i_3 + 3] [i_3 + 2] [i_4 + 1])), (var_12)))) || (((((/* implicit */int) arr_10 [i_1] [i_0] [i_3 - 1] [i_3 + 1] [i_4 + 1])) == (((/* implicit */int) arr_10 [i_1] [i_0] [i_3 + 3] [i_3 - 1] [i_4 + 1]))))));
                            }
                        } 
                    } 
                    var_20 &= ((/* implicit */int) 8190638621442730846ULL);
                }
            } 
        } 
    } 
}
