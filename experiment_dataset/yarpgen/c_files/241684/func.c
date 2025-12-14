/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241684
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((6463580641568040657ULL) < (var_5)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_12)) <= (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_3))))))) : (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_17)), (var_15)))) % (((12466331610003249721ULL) * (6463580641568040657ULL)))))));
    var_21 *= 2796557637U;
    var_22 = ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 24; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] = (+(arr_7 [i_0] [i_1] [i_0]));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_0] [i_0] [11ULL])) || (((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 + 1] [i_0 + 2])))) ? ((((~(arr_7 [14U] [(signed char)20] [i_3]))) + (5964262069100826698LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_4 [i_0] [i_1] [i_2] [i_3])))) ? (arr_9 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3 + 1]) : (((/* implicit */int) arr_2 [i_0] [9] [i_3 - 1]))))))))));
                            arr_11 [i_0] = ((/* implicit */long long int) arr_8 [i_3] [i_3 - 1] [i_1] [i_2 + 1] [i_1] [i_0]);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_1] [i_1] [i_1] [i_1] [i_0 + 1])) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0 + 1] [(signed char)0] [i_0] [i_0])), (arr_3 [i_1] [i_1] [i_1]))))))), (arr_8 [i_0 + 2] [i_0 + 2] [i_1] [i_1] [i_0 + 2] [i_1])));
            }
        } 
    } 
}
