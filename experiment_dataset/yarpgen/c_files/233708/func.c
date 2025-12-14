/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233708
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
    var_18 = var_0;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 3; i_2 < 15; i_2 += 4) /* same iter space */
                {
                    arr_7 [i_0] [12ULL] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) var_13))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) 7666414966945244591ULL);
                                var_20 = ((/* implicit */short) arr_2 [i_3] [i_0]);
                                var_21 += (-(((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_5 = 3; i_5 < 15; i_5 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) ((arr_9 [(short)16] [i_1] [i_0] [i_5 + 1] [i_5]) > (arr_12 [i_5 - 2] [i_5 - 2] [i_5 + 3] [i_5] [i_5 - 2] [i_5 - 1])));
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) arr_14 [i_5] [i_5]);
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) : (var_2)));
                        arr_20 [i_0] [17] [i_1] [i_0] = ((/* implicit */unsigned char) arr_18 [i_0] [i_1] [i_1] [i_5] [i_6] [i_0]);
                    }
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1] [i_5 + 2] [i_0] [i_5] [i_5])) ? (arr_9 [8ULL] [i_5 + 2] [i_0] [(signed char)0] [i_7]) : (10780329106764307025ULL)));
                        var_26 = ((/* implicit */_Bool) arr_0 [0ULL]);
                    }
                    for (short i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_27 = arr_12 [i_0] [i_1] [i_5] [i_0] [i_0] [i_1];
                        var_28 &= ((_Bool) arr_25 [i_8] [i_5 + 3] [i_1]);
                    }
                    var_29 += ((/* implicit */int) ((unsigned char) 1927940805));
                    arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) -753795558));
                }
                arr_28 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
            }
        } 
    } 
}
