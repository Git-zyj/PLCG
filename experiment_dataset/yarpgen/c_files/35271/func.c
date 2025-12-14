/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35271
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 += ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned long long int) arr_5 [i_1] [i_0])) >= (((unsigned long long int) (unsigned char)3)))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_21 = ((/* implicit */long long int) min((min((16707230760310578998ULL), (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1] [(unsigned char)7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))) : (-1206837043126014851LL))))));
                    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1] [i_1] [i_1]))))), (((unsigned char) (-9223372036854775807LL - 1LL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [(unsigned char)12] = ((/* implicit */unsigned char) ((long long int) min((arr_12 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1]), (arr_12 [i_0] [i_2] [i_2] [i_0] [i_4]))));
                                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_10 [i_4] [i_3] [i_1 + 2] [4ULL]), ((unsigned char)0)))) ? (((arr_6 [i_4 - 1]) | (arr_2 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) max((var_15), (arr_9 [i_3] [i_2] [i_1 + 2] [i_0]))))))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 8109193768793006710ULL))))));
                                var_24 ^= ((/* implicit */unsigned long long int) var_16);
                                arr_16 [i_0] [i_2] [i_2] [i_0] [i_4 - 1] = min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)173)))) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)179))))), ((-(var_0))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) min((var_25), ((unsigned char)255)));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) var_9);
        var_27 = max((((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) -5836889873879917998LL)) : (1973624000406991703ULL)))) && (((/* implicit */_Bool) max((arr_18 [i_5] [i_5]), (arr_14 [i_5] [i_5] [i_5] [i_5] [i_5]))))))), (arr_1 [i_5]));
    }
    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)141))) + (var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned char)119)))))) : (min((((/* implicit */long long int) (unsigned char)241)), (9223372036854775807LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))))))));
}
