/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43147
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
    var_17 |= min((((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (var_0))))))), (((/* implicit */unsigned long long int) var_13)));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((min((var_0), (var_11))) % (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)53879))))) + (max((var_0), (((/* implicit */unsigned long long int) var_12)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 1) 
                {
                    for (short i_3 = 4; i_3 < 8; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) arr_12 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [i_3 - 2] [i_4]);
                                arr_14 [(unsigned short)0] [i_0] [i_0] [i_2] [i_0] [i_4 - 3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (16777088LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)11656), (((/* implicit */unsigned short) arr_0 [i_0]))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_5 [i_0] [i_2 - 1])))))));
                                arr_15 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [i_3 - 4]), (((/* implicit */unsigned long long int) ((signed char) arr_0 [i_2])))))) ? (min((((long long int) (short)4092)), (((/* implicit */long long int) arr_2 [i_3] [i_4 + 1])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_3 + 2] [i_4 - 1])) >> (((arr_4 [i_2 - 1]) - (8950436836920412607ULL))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] [i_0] = ((((((/* implicit */long long int) ((/* implicit */int) (short)19815))) / (arr_1 [i_0] [i_0]))) < (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_6] [i_7]);
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            {
                                arr_34 [(signed char)2] [(_Bool)1] [i_6] [i_5] [i_8] [i_9] [i_9] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_23 [i_5] [i_5] [i_5 - 3])))) | (((((/* implicit */int) arr_23 [i_5] [i_5] [i_5 + 2])) | (((/* implicit */int) arr_23 [i_5 - 1] [i_5] [i_5 + 2]))))));
                                arr_35 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) arr_31 [i_6] [8LL] [i_7] [i_6]);
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_5 + 1])) || (((/* implicit */_Bool) (unsigned short)53898))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
