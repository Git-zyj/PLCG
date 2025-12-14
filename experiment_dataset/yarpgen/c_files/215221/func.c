/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215221
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
    var_19 = ((/* implicit */unsigned int) ((unsigned long long int) var_10));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_1 + 2] [i_1 - 2])) != (((/* implicit */int) arr_5 [i_1 + 2]))));
            var_21 = ((/* implicit */signed char) (((((_Bool)1) ? (536870912U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95))))) >> (((/* implicit */int) var_13))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (int i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        {
                            arr_19 [i_0] [i_3] [i_0] [i_5] [i_5] = (~(((/* implicit */int) (short)5745)));
                            var_22 = ((/* implicit */unsigned short) var_4);
                            arr_20 [i_5] [i_3] [(unsigned short)6] [i_5] = ((/* implicit */unsigned char) var_8);
                        }
                    } 
                } 
            } 
            arr_21 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [14] [i_2] [i_0] [i_2] [i_2] [i_2] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [(unsigned char)15] [i_0])))) <= (((/* implicit */int) ((unsigned short) var_5)))));
        }
        var_23 = ((/* implicit */unsigned char) ((arr_6 [i_0]) > (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) != (((/* implicit */int) arr_4 [i_0])))))));
        var_24 = ((/* implicit */unsigned int) (unsigned short)33468);
    }
}
