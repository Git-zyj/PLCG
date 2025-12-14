/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199035
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((_Bool) var_4)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) ((signed char) arr_0 [i_0 - 1]));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((unsigned char) 0ULL));
                    /* LoopSeq 3 */
                    for (int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        arr_14 [20ULL] [i_2] [i_1] = ((/* implicit */long long int) 0ULL);
                        var_18 = (-(((/* implicit */int) ((short) arr_10 [i_0]))));
                        var_19 = ((/* implicit */int) var_2);
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned short) arr_13 [i_3 - 1])))));
                        var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) 4294705152U)))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)183)))))) + (arr_11 [6U] [6U] [i_1] [8U] [6U])));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((unsigned int) (-(arr_0 [i_4])))))));
                            var_24 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)72)) - (((/* implicit */int) (signed char)-118))))) ? (((/* implicit */int) arr_8 [19LL] [i_1] [i_2] [19LL])) : (((/* implicit */int) arr_20 [i_0] [i_0] [(unsigned short)20] [5ULL] [(unsigned short)20] [i_1])));
                        }
                        for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned short) var_11);
                            var_26 = ((/* implicit */unsigned char) (unsigned short)15259);
                            arr_24 [i_0] [(short)20] [i_0] [i_2] [i_2] [(unsigned char)15] [i_6] = ((/* implicit */unsigned long long int) (((+(3504112744533014702ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113)))));
                        }
                        var_27 = ((/* implicit */long long int) (signed char)0);
                    }
                    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_18 [i_1] [i_2] [i_1] [(signed char)18])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32766))) : (var_2))))))));
                        arr_28 [11LL] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_8 = 4; i_8 < 22; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) ((unsigned char) arr_16 [i_8 - 1] [i_1 + 2] [i_1] [i_0] [i_0 - 1]));
                                var_30 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1887016736889638830LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202)))))) ? (arr_6 [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_8 - 4] [i_2] [i_8] [i_9] [i_1])))));
                                arr_34 [i_9] [10] [(_Bool)1] [i_2] [10] [i_1] [i_0] = ((long long int) ((((/* implicit */_Bool) -1674965860)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_27 [(unsigned short)2] [i_8] [i_0] [i_0]))));
                                var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_13 [i_8])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
