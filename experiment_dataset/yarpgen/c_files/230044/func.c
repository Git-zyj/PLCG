/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230044
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
    var_13 = ((((/* implicit */_Bool) var_1)) ? (var_6) : (((((var_0) & (6066908277147321737ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4 - 1] [8] [i_2] [i_3 + 2]))) + (var_0)))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 2] [i_3 + 1])) != (((/* implicit */int) (short)28153))))) : (((((/* implicit */int) arr_8 [i_4 + 1] [i_2] [i_2] [i_3 - 1])) + (((/* implicit */int) arr_10 [i_3 + 2]))))));
                                arr_17 [i_3 - 1] [i_0] = ((/* implicit */long long int) arr_6 [i_4 + 2]);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)27315)) ? (((((/* implicit */_Bool) 12379835796562229878ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [6ULL] [6ULL] [6ULL]))) : (6066908277147321737ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_0])) | (((/* implicit */int) arr_1 [i_0])))))))));
                }
                var_15 += ((/* implicit */_Bool) (short)-31671);
            }
        } 
    } 
}
