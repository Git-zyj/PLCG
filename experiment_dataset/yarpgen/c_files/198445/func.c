/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198445
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 3) 
                            {
                                arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((unsigned int) var_12)) >> ((((-(((/* implicit */int) (unsigned short)65514)))) + (65526)))));
                                arr_12 [i_1] [i_1] [i_4] [3ULL] [i_4] [i_1] = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_2] [i_3] [i_4]);
                                var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)15211))));
                            }
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_1] [i_2] [i_1 + 2]), (((/* implicit */unsigned short) arr_7 [(unsigned short)12] [(unsigned short)18] [i_1] [i_1 + 2] [i_3 + 3]))))) ? (((/* implicit */int) ((short) (unsigned short)21))) : (((/* implicit */int) arr_7 [i_0] [i_1 + 2] [i_2] [i_1 + 2] [i_3 + 3]))));
                        }
                    } 
                } 
                arr_13 [(unsigned short)1] [i_1 + 2] = (unsigned short)27;
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28678)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)6342)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned short) var_11)))));
}
