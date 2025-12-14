/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200215
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_11 [i_2] [i_2] = ((((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])) ? (arr_10 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_10 [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 1]))) < (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
                            var_18 = ((/* implicit */_Bool) arr_3 [3U] [3U] [(_Bool)1]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) (+(((arr_5 [i_0] [(unsigned short)2] [(unsigned short)2]) ? (max((arr_0 [(signed char)7]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) (+(arr_2 [i_0] [(unsigned short)17]))))))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_4 [i_1 - 1] [i_1 - 1] [i_1]))));
            }
        } 
    } 
    var_21 *= ((/* implicit */short) var_0);
}
