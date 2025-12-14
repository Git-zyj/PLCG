/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221780
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
    var_18 *= ((/* implicit */unsigned char) ((var_11) << (((((((((((/* implicit */_Bool) (short)8611)) ? (((/* implicit */int) (short)-2584)) : (((/* implicit */int) (short)0)))) | (((/* implicit */int) var_17)))) + (2594))) - (11)))));
    var_19 = ((/* implicit */int) var_11);
    var_20 = ((/* implicit */unsigned char) ((4110906392749700395LL) - (((/* implicit */long long int) ((/* implicit */int) (short)21345)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) & (var_1)))) ? (((((((/* implicit */int) (short)-6571)) + (2147483647))) << (((((/* implicit */int) arr_1 [i_1] [i_2])) - (232))))) : (((((/* implicit */_Bool) 3391460641U)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) (unsigned char)71)))))))));
                    var_22 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_23 -= ((/* implicit */short) ((arr_6 [i_0] [i_0] [i_0]) % (((/* implicit */int) var_13))));
                                var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) arr_10 [i_4] [i_3 + 3] [i_4] [i_4])) : (var_6)))) ? (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */long long int) arr_13 [i_2] [i_2] [i_2])) : (arr_7 [i_0] [i_0] [i_0] [i_0])))));
                                arr_15 [i_0] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) var_17);
                                arr_16 [i_2] = arr_12 [i_1] [i_1] [i_4 + 1] [i_1] [i_2];
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((((((/* implicit */int) (signed char)-106)) + (((/* implicit */int) (unsigned char)22)))) == (((((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) ^ (((/* implicit */int) arr_2 [i_0])))));
        var_26 = ((/* implicit */_Bool) max((var_26), (arr_12 [i_0] [i_0] [i_0] [i_0] [(unsigned char)12])));
        arr_17 [i_0] [i_0] = arr_13 [i_0] [i_0] [i_0];
    }
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((var_16) / (((/* implicit */long long int) ((/* implicit */int) var_14))))) < (((/* implicit */long long int) ((/* implicit */int) var_2))))))) != (var_6))))));
}
