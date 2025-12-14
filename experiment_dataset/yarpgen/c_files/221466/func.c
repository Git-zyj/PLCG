/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221466
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
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((arr_0 [i_0]) <= (arr_0 [i_0])));
            arr_6 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (1195411018770075099LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            var_11 = arr_4 [i_0];
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 336988767))))))))));
                var_13 = ((/* implicit */short) (unsigned char)137);
            }
            for (long long int i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned short) (short)-26340);
                var_14 = ((/* implicit */unsigned short) (signed char)-17);
            }
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) | ((-(arr_2 [2U]))))))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            var_16 = ((/* implicit */_Bool) ((signed char) arr_3 [i_4] [i_4] [i_0 + 1]));
            var_17 |= ((/* implicit */long long int) ((((long long int) var_7)) > (((/* implicit */long long int) arr_10 [i_0] [(unsigned char)2]))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_0] [i_0] [i_0 + 1]))));
                            arr_24 [i_6] [i_0] [i_6] [i_0] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_6] [i_5] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) var_4)))))));
                        }
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)139)))))));
        }
        arr_25 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        arr_30 [i_8] = ((/* implicit */_Bool) arr_29 [i_8]);
        /* LoopSeq 1 */
        for (long long int i_9 = 1; i_9 < 19; i_9 += 1) 
        {
            var_21 = ((((((/* implicit */_Bool) arr_31 [i_9] [i_9 + 1] [i_9 + 1])) || (((/* implicit */_Bool) arr_31 [i_9] [i_9] [i_9 - 1])))) && ((_Bool)0));
            arr_33 [i_9] = ((/* implicit */long long int) (unsigned char)28);
        }
    }
}
