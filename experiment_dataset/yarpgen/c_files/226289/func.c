/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226289
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [9U] [i_1] = ((/* implicit */unsigned char) var_18);
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1] [i_3]))))) ? ((+(((/* implicit */int) var_6)))) : (((var_10) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) var_7))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                            {
                                arr_14 [12] [i_3] [i_4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (11680587660438615301ULL)));
                                arr_15 [i_3] [i_1] [i_2] [i_3] [(_Bool)1] [(unsigned short)1] [i_2 + 1] = ((/* implicit */_Bool) ((unsigned short) arr_10 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4]));
                                arr_16 [3ULL] [i_0 - 1] [i_2] [i_2] [i_4] [3ULL] [i_3] = ((arr_8 [i_0] [i_1] [i_3] [(signed char)8] [i_4]) - (arr_8 [i_0] [i_0] [i_3] [i_3] [i_4]));
                            }
                            var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_1 [i_0 - 1] [i_2 + 1])) & (((/* implicit */int) (signed char)-60))))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_0 - 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) (+(14033830176335189005ULL)));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_16), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (((((/* implicit */_Bool) 3531700785820099380ULL)) ? (((/* implicit */int) (_Bool)1)) : ((~(var_3))))) : (((/* implicit */int) (_Bool)1))));
    var_23 = ((/* implicit */short) var_11);
}
