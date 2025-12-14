/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42214
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [(signed char)3] = ((/* implicit */long long int) var_10);
        arr_4 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) & (arr_0 [i_0 - 1] [i_0])));
    }
    for (short i_1 = 3; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) min((arr_2 [i_1 - 3] [i_1 + 4]), (((/* implicit */unsigned int) ((short) 4294967272U)))));
        var_18 = ((/* implicit */signed char) arr_0 [i_1 + 3] [i_1 + 3]);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_19 [i_1] [i_2] [i_2] [i_4] [i_2] [i_5] = ((/* implicit */long long int) var_6);
                                arr_20 [i_4] [i_4] [i_3] [18LL] [i_5] [i_2] [i_4] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (unsigned char)120)), (4294967272U))), (min((((/* implicit */unsigned int) (_Bool)0)), (27U)))));
                                var_19 = ((/* implicit */unsigned long long int) min(((~((((_Bool)1) ? (((/* implicit */int) arr_11 [i_1 + 3] [i_2 + 1] [8ULL])) : (((/* implicit */int) var_11)))))), (var_6)));
                                var_20 += ((/* implicit */signed char) min((var_15), ((+(arr_7 [i_1 - 3])))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20003))) | (((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 243982263U)) ? (((/* implicit */int) (unsigned short)45515)) : (((/* implicit */int) (unsigned short)20002))))) : ((-(2022640541U)))))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) (~(max((((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((var_3) + (((/* implicit */unsigned int) var_6)))))))));
    var_23 = ((/* implicit */unsigned char) var_2);
}
