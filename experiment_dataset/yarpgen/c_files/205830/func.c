/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205830
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) max((((unsigned int) ((((/* implicit */_Bool) 5005972875703679989ULL)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0])) : (((/* implicit */int) var_3))))), (((/* implicit */unsigned int) (((-(((/* implicit */int) arr_0 [i_0] [i_0])))) < (min((-2147483639), (((/* implicit */int) var_3))))))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_11 [i_0 + 1] [i_0 + 1] [i_2 + 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((unsigned long long int) 4294967295U)), (((/* implicit */unsigned long long int) -2147483642))))) ? (((/* implicit */unsigned long long int) (+((-(arr_7 [i_0] [i_0] [i_0] [i_3 + 1] [i_3] [i_2])))))) : (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 - 1])) : (arr_8 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2])))));
                        var_11 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(-2147483647)))))))) <= (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) | (var_5))))));
                        arr_12 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) ((var_0) ? ((+(((arr_10 [i_0] [i_0 + 1] [(unsigned char)11] [i_2 + 1] [i_2 + 1]) + (((/* implicit */unsigned long long int) 10U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_2 + 2] [i_1 - 1] [i_0])))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            var_12 &= ((/* implicit */_Bool) (-(32LL)));
                            var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_14 [i_2 + 4] [i_2 + 1] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) arr_14 [i_3 - 2] [i_2 + 1] [i_0 + 1] [i_0])) : (arr_8 [i_3 - 1] [i_2] [i_2 + 3] [i_0 + 1] [i_0]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17LL)) ? (-5152969222552623321LL) : (((/* implicit */long long int) 4294967295U)))))));
                            var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 32LL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_8 [i_4] [i_4 + 2] [i_4] [i_4] [i_4])))) ? (((arr_8 [i_4] [i_1] [i_1] [i_1] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2 - 1] [i_4 + 3]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1034393763U)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 1] [i_0])))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (min((29360128), (((/* implicit */int) (_Bool)0)))))))));
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 3) 
                        {
                            var_15 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0 + 1] [i_2 + 2] [i_0] [i_5])) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))))) << (((arr_8 [i_0 + 1] [i_0 + 1] [i_2 + 2] [i_3 - 4] [i_5]) - (13063072037266182284ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_3 - 2] [i_1 + 1])) ? (((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0])))) : (arr_16 [i_0 + 1] [i_2 + 4] [i_5 + 2] [i_5 + 1] [i_5])))) : (min((((arr_14 [i_0] [i_0 + 1] [i_0 + 1] [i_0]) ^ (((/* implicit */long long int) arr_16 [i_1] [i_3] [i_1] [i_1] [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_3 [i_5 + 4] [i_2] [i_0 + 1]) : (var_5)))))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_0]))) / (arr_4 [i_0])))) ? (min((((/* implicit */unsigned long long int) max((arr_7 [i_1] [i_2] [i_2 + 4] [i_3] [i_2] [i_3]), (((/* implicit */long long int) 2147483639))))), (arr_8 [i_0] [i_3 - 1] [i_5] [i_5] [i_5 + 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3 - 1] [i_1])))));
                            var_17 = ((/* implicit */_Bool) 861876001U);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((int) max((max((arr_17 [i_0] [i_0] [i_2]), (arr_17 [i_0] [i_2 + 4] [i_6]))), (((/* implicit */long long int) (!(arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            arr_20 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */long long int) max((arr_3 [i_2] [11] [11]), (((/* implicit */unsigned int) arr_13 [i_6] [i_0] [i_2] [i_0] [i_0]))))), (((((/* implicit */_Bool) 11LL)) ? (((/* implicit */long long int) 1U)) : (6111765078223998457LL))))));
                            var_18 = min((((/* implicit */long long int) ((arr_18 [i_2 + 3] [i_2 + 4] [i_3 - 2] [i_3] [i_3 - 2] [i_6]) ? (((((/* implicit */int) (unsigned char)191)) - (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1])))) : (((((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_6])) / (199015220)))))), (((max((2199023255536LL), (((/* implicit */long long int) arr_3 [i_0 + 1] [i_0 + 1] [i_3])))) << (((((unsigned int) var_8)) - (3471281140U))))));
                        }
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]);
    }
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_1))))) ? (var_7) : (((/* implicit */int) ((var_4) < (((/* implicit */long long int) var_5)))))));
    var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3433091295U)) ? (((4294967273U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */unsigned long long int) -2147483642)) : ((+(max((((/* implicit */unsigned long long int) 16LL)), (var_6)))))));
}
