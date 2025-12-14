/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37961
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
    var_17 = ((((/* implicit */_Bool) ((-212271876) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) var_14)) : (min((((/* implicit */long long int) var_4)), (min((var_5), (((/* implicit */long long int) -1230284900)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_12)))) / (2147483647)));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    arr_9 [i_0] [8U] [i_2] [0LL] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_1 [i_2]))))));
                    arr_10 [i_1] [i_2] [i_2] [(short)6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)29258)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32746)) ? (((/* implicit */int) arr_8 [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] = (-((-(((((/* implicit */int) (short)7299)) * (((/* implicit */int) (_Bool)1)))))));
                                arr_16 [i_2] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4] [(short)9] [i_0] [i_3])) ? (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))) : (((849324965) % (((/* implicit */int) arr_0 [i_1] [11]))))))), ((+(arr_7 [i_0] [2] [i_3] [i_4])))));
                                arr_17 [i_0] [i_0] [i_2] [i_4 + 2] [i_1] = arr_1 [3ULL];
                                arr_18 [i_0] [i_1] [(short)0] [i_2] [i_3] [(short)0] [i_4] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1))))), (((long long int) arr_13 [i_4] [i_4] [0] [i_4] [0] [i_4] [i_4 - 1]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
