/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218192
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min((arr_5 [i_2] [i_2]), (arr_9 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (18446744073709551615ULL))))) : (arr_5 [i_0] [i_1 + 3]))))))));
                            var_15 = ((/* implicit */unsigned int) (~((+(((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_3] [i_3])) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) arr_11 [i_2 + 1] [i_1] [14ULL]))))))));
                            arr_13 [i_1 + 3] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) arr_0 [i_0]);
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) arr_4 [i_1 + 3] [i_1 + 3]);
                arr_14 [i_0] = ((/* implicit */unsigned long long int) var_8);
                arr_15 [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_12 [i_1 - 2] [24ULL] [i_1] [i_1] [5ULL]), (arr_12 [i_1 - 2] [19ULL] [8ULL] [18ULL] [i_1])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((arr_5 [i_0] [(signed char)17]) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (13845778808380552970ULL))) : (((/* implicit */unsigned long long int) (+(arr_12 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 + 3] [i_1 - 2]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_5);
    var_18 = var_4;
}
