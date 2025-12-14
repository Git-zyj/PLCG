/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248322
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
    var_10 = var_8;
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (-(((/* implicit */int) (unsigned short)50936)))))));
                        var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 18072262724106464877ULL)) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_1 + 1] [i_2])) ? ((-(arr_3 [i_0 - 1] [i_0 - 1] [(unsigned short)2]))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_9)))))))));
                    }
                    var_13 -= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)18)) ? (var_0) : (arr_3 [i_0 + 2] [i_1 + 1] [i_2 + 2]))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_16 [i_2] [i_1] = (((+(((/* implicit */int) var_2)))) < ((-(((/* implicit */int) arr_2 [i_5] [i_2 + 1])))));
                                arr_17 [i_2] [i_5] = ((/* implicit */unsigned short) arr_2 [(unsigned char)13] [(unsigned char)13]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
