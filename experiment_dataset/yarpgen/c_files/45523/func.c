/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45523
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 7248051560669081006ULL))));
                        arr_9 [i_0] [i_1 + 1] [i_2 - 2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(short)22] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18383))) : (arr_7 [i_1] [i_2 - 1])))))) || (((/* implicit */_Bool) ((unsigned int) arr_5 [i_0] [i_0] [i_0])))));
                        var_16 = ((/* implicit */short) arr_1 [i_0]);
                    }
                    var_17 = ((/* implicit */long long int) ((unsigned int) max((arr_7 [i_1 + 1] [3LL]), (((long long int) arr_2 [i_0])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (long long int i_5 = 2; i_5 < 22; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 2; i_6 < 23; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                arr_22 [i_7] [i_0] [i_0] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_4] [i_6] [i_0]);
                                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) arr_3 [i_0] [i_4] [i_0])))));
                                arr_23 [(short)16] [i_4] [i_5 + 1] [i_0] [i_7] [i_7] = ((/* implicit */signed char) ((long long int) var_14));
                                arr_24 [i_0] [10U] [11LL] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_0] [i_5 + 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_0])) ? (7938142672897914513ULL) : (((/* implicit */unsigned long long int) max((var_12), (var_14)))))))));
                    arr_26 [i_0] [i_0] [i_5 + 1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_3 [i_5 + 1] [i_5 + 1] [i_0]))))));
                    arr_27 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */long long int) arr_11 [i_0] [i_0])) | (arr_1 [i_0]))), (((/* implicit */long long int) arr_20 [i_5 + 1] [i_5] [i_5 + 2] [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5 - 1]))))) ? (max((max((7248051560669081006ULL), (((/* implicit */unsigned long long int) (unsigned short)10957)))), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) var_7))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned short) var_9);
}
