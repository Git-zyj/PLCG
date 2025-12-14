/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201262
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
    var_20 = ((((/* implicit */_Bool) (unsigned short)10163)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (7982445343413897807LL));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((arr_13 [i_0] [i_0] [(short)5] [(short)2] [(short)5] [i_3] [i_4]) ? (4817831392558936837ULL) : (((/* implicit */unsigned long long int) arr_7 [i_1] [0ULL] [(_Bool)1] [4ULL]))))))));
                                arr_15 [i_0] [i_0] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) arr_8 [i_0] [(short)8] [i_0]);
                                arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_3] [i_4]);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
                    arr_18 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((int) 7982445343413897807LL))))) / (arr_12 [i_0] [2U] [2U] [(unsigned short)13] [i_0])));
                }
            } 
        } 
    } 
}
