/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20070
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
    var_11 = ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((~(arr_0 [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (short)-27556)))))) ? (((((/* implicit */_Bool) arr_1 [16])) ? (((int) var_0)) : (var_10))) : (((/* implicit */int) (unsigned char)32))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((unsigned char) ((arr_3 [i_1 + 1] [i_1 + 2]) - (arr_3 [i_1 - 1] [i_1 + 2])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) ((((int) ((unsigned int) arr_8 [i_1]))) - (((int) min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_4])), (arr_3 [i_0] [21LL]))))));
                                arr_13 [i_0] [i_1 + 1] [i_2] = ((/* implicit */signed char) (+(arr_12 [i_0] [10ULL] [i_0] [i_3] [10ULL] [i_4])));
                                var_15 &= ((/* implicit */int) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_4))));
}
