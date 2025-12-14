/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25347
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
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) ((_Bool) 133143986176ULL));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 3] [i_1] [i_1] [i_0]))) : (((((/* implicit */_Bool) 12896162289100973550ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_1] [i_3]))) : (arr_11 [i_1] [i_3 - 2] [i_2 + 1] [i_1] [i_1])))));
                            arr_13 [i_1] [i_1] [i_4] = arr_1 [i_3 - 1] [i_0];
                        }
                        for (long long int i_5 = 4; i_5 < 18; i_5 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned int) (((+(var_5))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) var_7)) : (arr_0 [i_5] [i_5]))))));
                            arr_16 [i_0] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) arr_0 [i_1] [i_1]);
                            var_14 = ((/* implicit */long long int) var_7);
                            arr_17 [i_2] [i_1] [i_1] [i_3] [i_0] [i_5] = ((/* implicit */int) ((unsigned long long int) arr_12 [i_0 + 1] [i_1]));
                        }
                        arr_18 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((unsigned long long int) (short)7840))));
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((unsigned short) var_0))) : (((((/* implicit */int) (short)-16373)) ^ (((/* implicit */int) (short)-7824))))))) ? (2933617478U) : (((unsigned int) ((((/* implicit */_Bool) 2199023255552ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (0U))))));
}
