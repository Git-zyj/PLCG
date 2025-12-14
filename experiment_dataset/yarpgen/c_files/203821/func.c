/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203821
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
    var_13 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 24; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)6347))))));
                        var_15 = ((/* implicit */long long int) (-((+(var_5)))));
                    }
                    for (short i_4 = 2; i_4 < 23; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */int) (-(((unsigned long long int) arr_4 [i_0 + 1]))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_10 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) arr_5 [i_4 + 2] [i_0] [i_2 - 2])) : (((((/* implicit */_Bool) var_1)) ? (-12394722) : (20)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))));
                        var_18 = ((/* implicit */int) var_7);
                    }
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((((((/* implicit */int) (short)(-32767 - 1))) < (arr_7 [i_0 + 1] [i_2 - 1] [i_2]))), ((_Bool)1))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30089)) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_3 [i_0] [i_0])))) : (((int) 6846353850145987662ULL))));
                }
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (int i_6 = 4; i_6 < 24; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_19 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_18 [i_0 + 1] [i_0 + 1] [i_0]) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-30317))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1] [i_0] [(unsigned short)18] [i_0 + 1]))) ^ (6716812585199116150ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_5])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (long long int i_8 = 1; i_8 < 23; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((11729931488510435466ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53392))))))));
                            /* LoopSeq 1 */
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                arr_27 [i_0 + 1] [i_0] [(unsigned short)1] [i_7] [17] [i_8] [21] = ((/* implicit */short) arr_15 [i_0] [i_1] [i_0] [i_8 + 1] [i_9]);
                                arr_28 [i_7] [i_1] [i_9] [i_0] [i_7] = ((/* implicit */short) ((max((arr_17 [i_8 - 1] [i_0] [i_0 + 1]), (arr_17 [i_8 - 1] [i_0] [i_0 + 1]))) ? (((((/* implicit */_Bool) 11600390223563563953ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [10ULL] [i_1] [i_7] [4] [i_9]))) : (9223372036854775807LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0 + 1] [i_0] [1])))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_9);
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (6716812585199116149ULL) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)41650)) * (((/* implicit */int) (unsigned short)137)))))))));
}
