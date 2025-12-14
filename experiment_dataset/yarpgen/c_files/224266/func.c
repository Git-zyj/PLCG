/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224266
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
    var_10 = ((/* implicit */signed char) (short)30333);
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */short) var_0)), ((short)30325)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned int) (!(var_7))));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (short i_1 = 4; i_1 < 17; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 3; i_2 < 17; i_2 += 3) 
        {
            var_12 ^= ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) var_2)), (arr_4 [i_2 + 1])))));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_9 [i_1 - 1] [i_2 - 3] [i_2 - 2]))))));
                            var_14 = ((/* implicit */short) (-(arr_5 [i_2])));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                for (unsigned short i_8 = 2; i_8 < 15; i_8 += 4) 
                {
                    {
                        var_15 -= ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned short) arr_23 [i_1 - 4] [i_6] [i_7] [i_8])), ((unsigned short)11422))));
                        arr_24 [i_8 + 2] [i_8] [i_7] [i_7] [i_6] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_12 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 4] [i_1 + 1]) : (arr_12 [i_1] [i_1 - 1] [i_1 - 3] [i_1 - 1] [i_1 - 3])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)30342))))) : ((~(((unsigned int) arr_13 [i_1] [i_1] [i_1] [i_1] [(short)7] [i_1]))))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */short) ((unsigned long long int) ((int) var_3)));
    var_17 *= ((/* implicit */unsigned long long int) var_3);
}
