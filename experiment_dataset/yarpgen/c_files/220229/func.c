/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220229
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65521)) ? (0LL) : (-1LL))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_12 [i_2] [i_3] = ((/* implicit */signed char) ((0LL) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (1294605684557498498ULL))))))))));
                        var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */short) arr_6 [i_0] [i_0] [i_0])), (arr_8 [i_3] [i_1])));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            arr_15 [i_4] [19U] [i_4] [i_4] [i_1] [i_0] = ((/* implicit */_Bool) arr_11 [i_2] [i_0]);
                            arr_16 [i_4] [i_4] [i_3] [i_2] [i_1] [i_4] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 6LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43054)))));
                            var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) var_2)))))))));
                        }
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)22476)) % (((/* implicit */int) max((var_6), (var_4))))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))))))));
                        var_15 = ((/* implicit */long long int) arr_13 [i_0] [6] [i_0] [i_0] [i_0]);
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
}
