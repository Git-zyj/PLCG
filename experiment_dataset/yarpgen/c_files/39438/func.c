/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39438
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_7)), ((~(var_6)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) var_8);
                arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1472123299)) ? (-1472123286) : (((/* implicit */int) arr_1 [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) max(((+(arr_6 [i_3]))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1472123319)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))))))));
                arr_12 [i_2] [i_2] = ((/* implicit */_Bool) (~(arr_7 [i_2])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 1; i_4 < 9; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_21 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_4] [i_4 + 3] [i_4 - 1])) | (((/* implicit */int) ((signed char) var_5)))));
                        arr_22 [i_2] = arr_20 [i_2] [i_2] [i_4] [i_5];
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_2])) ? (((/* implicit */int) arr_9 [i_5] [i_4] [i_3])) : (var_1)))) : (((unsigned long long int) arr_0 [i_2] [i_2]))));
                    }
                    var_13 = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_2])) || (((/* implicit */_Bool) var_0))))));
                    var_14 = ((/* implicit */int) arr_9 [i_2] [i_3] [i_2]);
                }
                arr_23 [i_2] [i_3] = ((/* implicit */short) ((_Bool) min((((/* implicit */int) ((_Bool) 1472123299))), (((((/* implicit */_Bool) arr_8 [i_2])) ? (-1472123316) : (((/* implicit */int) var_7)))))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((int) ((((/* implicit */int) var_5)) % (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) (-(((/* implicit */int) var_3))));
}
