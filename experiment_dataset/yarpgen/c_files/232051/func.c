/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232051
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            arr_12 [i_0] [i_1 - 1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */signed char) ((_Bool) ((unsigned long long int) arr_4 [(_Bool)1])));
                            var_18 = (~(((/* implicit */int) (unsigned char)190)));
                            var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2 - 1] [i_1 + 1]))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_0] [11ULL] [i_2 + 1] [i_3] [i_5] [(_Bool)1] = ((/* implicit */unsigned long long int) ((1756146867175396906ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124)))));
                            arr_18 [i_0] [i_0] [1LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) (_Bool)1)))));
                            arr_19 [i_0] [i_0] [i_1] [i_0] [(short)12] [i_3] [i_5] = ((/* implicit */unsigned long long int) var_0);
                        }
                        for (short i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) 16690597206534154686ULL))));
                            arr_24 [i_0] [i_1] [i_2 + 1] [(_Bool)1] [i_0] = 1756146867175396927ULL;
                        }
                        arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_23 [i_2 + 1] [i_1]);
                    }
                    var_21 = ((/* implicit */unsigned char) min((((arr_8 [i_0] [i_1 + 2] [i_2 - 2] [(short)4]) - (arr_8 [(unsigned char)4] [i_1 + 2] [i_2 + 1] [i_2]))), ((+(arr_8 [i_0] [i_1 + 2] [i_2 + 1] [i_2])))));
                    arr_26 [i_2] [i_0] [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((int) (_Bool)1))), (max((((/* implicit */unsigned long long int) (unsigned char)47)), (16690597206534154675ULL))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_9);
}
