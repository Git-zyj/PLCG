/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4251
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)126)) != (arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-30075)) : (-873978029)));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((arr_6 [i_1]) - (arr_6 [i_1])));
        arr_8 [i_1] [i_1] = ((int) arr_5 [i_1]);
        arr_9 [i_1] [i_1] = ((/* implicit */int) (short)-30075);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 4; i_3 < 16; i_3 += 3) 
            {
                {
                    arr_15 [(signed char)12] [i_3 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 - 4] [i_3 - 3])) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (short)-20))));
                    arr_16 [i_2] = ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (unsigned char)166)))) + (2147483647))) << (((var_9) - (845482046))));
                }
            } 
        } 
        arr_17 [13ULL] [i_1] = ((/* implicit */unsigned long long int) arr_13 [i_1] [(unsigned short)8] [i_1] [i_1]);
    }
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        arr_20 [i_4] = ((/* implicit */signed char) (-(((min((4939622201260208484ULL), (8286404546519089404ULL))) | (((/* implicit */unsigned long long int) var_11))))));
        arr_21 [i_4] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_18 [i_4] [i_4])) : (((/* implicit */int) arr_1 [i_4]))))), (min((-1LL), (((/* implicit */long long int) var_14))))));
        arr_22 [i_4] [i_4] = ((/* implicit */signed char) ((((17449922815966958211ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-101)) && (((/* implicit */_Bool) 262143U))))) : (((/* implicit */int) ((unsigned char) arr_5 [i_4])))));
    }
    var_17 = ((/* implicit */unsigned short) (unsigned char)248);
}
