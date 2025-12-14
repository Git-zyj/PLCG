/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3874
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
    var_16 |= ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) (~(((max((((/* implicit */long long int) (signed char)0)), (arr_0 [i_1] [i_0]))) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
                arr_7 [i_0] [i_1] [i_1] |= ((/* implicit */signed char) ((((/* implicit */long long int) -392615806)) != ((((_Bool)1) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 10670678629931538871ULL)) ? (((/* implicit */int) arr_3 [i_1 - 2])) : (((/* implicit */int) (_Bool)1)))))))));
                var_17 &= ((/* implicit */short) ((((/* implicit */int) max((arr_3 [i_0 + 2]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))))) - (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (_Bool)1)))))));
                arr_8 [i_1] |= ((/* implicit */unsigned int) ((arr_4 [i_1] [i_1 - 2] [i_1 - 2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned char i_3 = 4; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_18 = min((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [i_3])) : (((65038234) / (((/* implicit */int) arr_13 [i_0 - 1] [i_1 + 1] [i_2 + 1] [i_3] [i_3] [15LL])))))), (((/* implicit */int) arr_3 [i_0 + 1])));
                            arr_15 [i_1] [i_3] &= ((/* implicit */signed char) var_15);
                            arr_16 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [3LL] [i_2 + 1] [i_3] [i_1] [i_3 - 3])) ? (((/* implicit */int) arr_13 [i_0] [i_1 + 1] [i_0] [i_0] [i_3] [i_3])) : (((/* implicit */int) (_Bool)1))))) ^ (((unsigned long long int) (_Bool)0))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((long long int) var_11));
    var_20 = max((((/* implicit */long long int) var_0)), (var_11));
}
