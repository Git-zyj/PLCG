/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215126
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_17 [10LL] [i_1] [10ULL] [i_3] [i_4] [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
                                arr_18 [i_3] [12ULL] [i_0] [i_1] [i_1] [(signed char)10] [(signed char)1] = ((/* implicit */short) arr_1 [i_0]);
                                arr_19 [(short)14] [i_2] [i_3] [(short)14] [(short)14] [i_2] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)1792)), (var_1)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_20 [i_2] [7U] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (((arr_10 [i_0] [i_1] [(signed char)1] [(short)6]) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [10])))))));
                    arr_21 [i_1] [5] &= max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)1024)))), (((/* implicit */unsigned long long int) (_Bool)1)));
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
    var_11 = ((/* implicit */unsigned short) ((var_4) < (((/* implicit */unsigned long long int) var_8))));
    var_12 = ((/* implicit */_Bool) ((unsigned long long int) (+(var_4))));
}
