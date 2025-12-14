/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243940
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
    var_10 = 8285036309035224212LL;
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_4 = 1; i_4 < 23; i_4 += 4) 
                            {
                                var_11 ^= ((/* implicit */long long int) ((unsigned short) ((int) arr_3 [i_0] [i_0 + 1] [i_2])));
                                var_12 = ((/* implicit */int) ((-8285036309035224207LL) > (((-8285036309035224212LL) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_1] [i_1])))))));
                            }
                            for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                            {
                                var_13 = ((/* implicit */unsigned long long int) ((unsigned short) ((signed char) ((((/* implicit */_Bool) 35993612646875136LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_9 [i_0] [i_0] [i_0] [16LL] [16LL] [i_0])))));
                                arr_14 [i_1] [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_2] [i_3] [i_5] [i_5]);
                                var_14 = ((/* implicit */int) arr_3 [i_0 - 1] [i_3] [i_5]);
                            }
                            arr_15 [i_1] [i_2] [i_1 + 1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_3])))))) + (2147483647))) >> (((((((/* implicit */_Bool) 36028788429029376LL)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (_Bool)1)))) - (197)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    for (int i_7 = 1; i_7 < 24; i_7 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 - 1] [i_1 + 1] [i_7 - 1] [i_7 + 1] [i_7])) ? (((/* implicit */int) (unsigned short)10422)) : (((/* implicit */int) var_7))))) ? ((((_Bool)1) ? (1455938879998897644LL) : (((/* implicit */long long int) arr_9 [i_0 - 1] [i_0 + 1] [i_1 + 1] [i_7 + 1] [i_7] [i_0 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                            var_16 = ((/* implicit */_Bool) max((arr_2 [i_1]), (-35993612646875133LL)));
                            var_17 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((long long int) (unsigned short)3222))) ^ (arr_19 [i_1] [i_1 - 1] [i_6] [i_6] [(unsigned short)11]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) -1455938879998897651LL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -8285036309035224234LL)) ? (((/* implicit */long long int) arr_9 [i_0] [i_0] [(short)4] [i_6] [(short)4] [i_7])) : (arr_13 [i_0] [i_0 - 1] [i_0] [i_1] [(unsigned short)5] [i_7] [i_7])))))))));
                            var_18 = ((/* implicit */int) arr_2 [i_6]);
                        }
                    } 
                } 
            }
        } 
    } 
}
