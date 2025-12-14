/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27642
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
    var_13 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) var_12)), (max((var_4), (((/* implicit */long long int) (unsigned short)0)))))), (max(((+(18014398509481980LL))), (max((-18014398509481981LL), (((/* implicit */long long int) (unsigned short)61451))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [3LL] [3LL] [i_2] [(_Bool)1] [(short)15])), (arr_0 [i_4])))) && ((!(((((/* implicit */_Bool) arr_4 [i_2])) || (((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 - 2] [(unsigned short)3] [i_4]))))))));
                                var_15 = ((/* implicit */_Bool) ((arr_10 [i_0] [i_1 - 1] [i_2] [i_3 - 3] [i_4]) + (max(((~(arr_10 [i_0] [(short)13] [i_2] [i_2] [i_4 + 2]))), (((/* implicit */unsigned int) arr_4 [i_0]))))));
                                var_16 += ((/* implicit */unsigned char) arr_10 [i_0] [i_1 - 1] [i_2] [(signed char)10] [i_4]);
                                var_17 = ((/* implicit */int) ((min((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_3 - 3]))) - (18014398509481958LL))), (min((-18014398509481993LL), (-18014398509481993LL))))) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_18 = 16357720568714734905ULL;
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) < (((/* implicit */int) arr_3 [i_0] [i_0])))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18014398509481993LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (-6123029425176399339LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [(unsigned short)0] [i_2]))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (-6123029425176399338LL)))))));
                }
            } 
        } 
    } 
}
