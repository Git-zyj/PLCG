/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4411
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
    var_11 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_7))))));
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_1))));
    var_13 = ((/* implicit */unsigned int) var_0);
    var_14 = (unsigned short)3490;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_0 [i_0]) : (arr_5 [i_1]))) : (arr_9 [i_0] [i_1] [i_2] [i_3] [i_1])));
                        var_16 &= (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((/* implicit */int) (unsigned short)0)))))));
                            arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_2] [i_0])) ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : (arr_8 [i_0] [i_1] [i_2] [i_4])));
                            arr_14 [i_1] [i_3] [i_4] = ((/* implicit */long long int) arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] [i_2]);
                            var_18 = ((/* implicit */int) var_0);
                        }
                    }
                    var_19 = ((/* implicit */short) (~(arr_3 [i_1])));
                }
            } 
        } 
    } 
}
