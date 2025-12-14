/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190244
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) > (arr_4 [i_1] [i_1] [(unsigned char)11]))))))) + ((+(arr_0 [i_0 - 1] [i_0 - 1]))));
                var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_7)), (arr_3 [(unsigned char)7] [i_0])))) ? (min((((/* implicit */unsigned long long int) var_12)), (arr_1 [i_1]))) : (arr_4 [i_0 - 1] [i_0] [i_0 - 1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2])) == (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_5)))))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_5)))))))));
                arr_8 [i_0] [i_0] &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)50669)) ? (2233478260445916336ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58972)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned short) (((~(((/* implicit */int) ((arr_2 [i_0]) || (((/* implicit */_Bool) arr_3 [i_0] [1]))))))) & (var_0)));
                            var_16 = ((/* implicit */int) var_8);
                            arr_15 [i_0 - 2] [i_1] [i_2 - 1] [i_3] = ((/* implicit */int) var_9);
                            arr_16 [(short)17] [i_1] [i_3] [(short)17] = ((/* implicit */long long int) max(((~(arr_1 [i_0 + 2]))), (((/* implicit */unsigned long long int) max((arr_6 [i_0 - 1] [i_0 - 1] [i_3]), (((/* implicit */unsigned short) arr_2 [i_2 + 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min(((~(min((9690412775924904335ULL), (((/* implicit */unsigned long long int) 5423603222527963837LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (1855535563))))));
}
