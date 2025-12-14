/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215224
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
    var_12 = ((/* implicit */unsigned short) ((long long int) var_1));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_13 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_0 [19LL] [i_1])))))) : (3465972075U)))));
            arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) arr_4 [i_1])) ? ((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35504))) : (arr_0 [i_0 + 2] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-9), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)11576))))))))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_3 [i_0])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    for (unsigned char i_4 = 4; i_4 < 23; i_4 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!((!((_Bool)0))))))));
                            var_15 = arr_10 [i_0] [i_1] [i_0] [i_3] [i_3] [i_3];
                            arr_14 [i_0] [i_0] [i_2] [13U] [i_0] = ((unsigned short) ((((/* implicit */int) (short)11922)) * (((/* implicit */int) (short)11928))));
                            arr_15 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)64736)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13184))) : (873678012U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_4 - 2])) || (((/* implicit */_Bool) (short)-11922))))))));
                            arr_16 [i_0] [i_0 - 2] [i_0 - 1] [i_0] [i_0 + 4] [i_0] = ((/* implicit */unsigned int) (unsigned char)254);
                        }
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) 873677992U))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_12 [i_0 + 2] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_2)))))));
            }
        }
        arr_18 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_0]);
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0 - 2] [i_0]);
    }
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 19; i_5 += 4) 
    {
        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 873677992U)) || (((/* implicit */_Bool) -8407888442779751987LL))));
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                for (unsigned char i_8 = 2; i_8 < 16; i_8 += 3) 
                {
                    {
                        var_17 += ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [4] [i_8 + 2] [i_6] [i_8] [i_8 + 3] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2688903345U)));
                        arr_30 [i_5] [i_7] [i_7] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_9 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [(short)22])))) * (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13932)))))));
                    }
                } 
            } 
        } 
    }
}
