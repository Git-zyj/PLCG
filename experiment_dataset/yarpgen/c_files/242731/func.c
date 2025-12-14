/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242731
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(137654101)))))) ? (arr_0 [i_0]) : (max((min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (arr_1 [i_0]))), (min((10462992356171285228ULL), (((/* implicit */unsigned long long int) 2883362602U))))))));
        arr_2 [i_0 - 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 14863031584173850189ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)78))))))) & ((((~(arr_0 [i_0]))) ^ (((/* implicit */unsigned long long int) 3108782359U))))));
        var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1507535891)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) 137654101))))) ? (arr_1 [i_0]) : ((+(var_7))))), (max((min((((/* implicit */unsigned long long int) (signed char)71)), (arr_0 [i_0]))), ((-(3583712489535701426ULL)))))));
        var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(var_13))), (arr_0 [(short)4])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) : (min((9057188737873209590ULL), (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */unsigned long long int) 137654101)) : (arr_1 [14ULL])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 14863031584173850189ULL)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 1] [i_1])) : (((((/* implicit */_Bool) var_10)) ? (var_14) : (arr_1 [i_0])))));
            var_21 += ((arr_0 [(signed char)10]) / (18446744073709551615ULL));
            var_22 = ((/* implicit */int) (-((+(var_9)))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) 3583712489535701426ULL);
        }
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((137654105) / (((/* implicit */int) var_4))))) ^ (max((arr_5 [i_0 - 1] [i_0]), (arr_5 [i_0 - 1] [i_0])))));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (max((((/* implicit */long long int) var_16)), (arr_5 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) var_15)) : (((unsigned long long int) ((short) 14863031584173850189ULL)))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 14863031584173850192ULL)) ? (((unsigned long long int) 18446744073709551595ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0])))));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 4; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) 3583712489535701428ULL);
                            arr_21 [i_0] [i_3] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) (~(var_3)));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_3 [18] [i_4] [14ULL])) | (14863031584173850201ULL))))));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 29ULL)) ? (((/* implicit */unsigned long long int) 137654101)) : (23ULL)));
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2)))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_16)) ? (-137654115) : (((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((max((((/* implicit */unsigned long long int) (short)22524)), (var_3))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned short) (signed char)-22))))))))));
}
