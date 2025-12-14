/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239214
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
    var_16 = min((max((((/* implicit */unsigned int) ((short) 65971588U))), (max((65971588U), (1774182035U))))), (4228995708U));
    var_17 = ((/* implicit */short) max(((-(var_0))), (((/* implicit */long long int) max(((+(var_2))), (((/* implicit */int) var_15)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) (~(((/* implicit */int) (signed char)66))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_1] [7] [i_1] [i_4 + 1] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 65971588U)) ? (arr_0 [12LL] [(unsigned char)15]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
                            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_4] [i_4 - 1] [i_4 - 1])) ? (var_7) : (arr_5 [i_0] [i_0])));
                        }
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */long long int) 65971594U)) == (9223372036854775807LL)));
                            var_21 *= ((/* implicit */short) ((int) 4228995702U));
                        }
                        var_22 = ((/* implicit */long long int) var_1);
                        arr_17 [i_0] [i_1] [i_2] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned char)12] [i_2] [i_0] [16U] [i_0] [i_0] [i_0])))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) max((5471151923530198416ULL), (((/* implicit */unsigned long long int) (short)25977))));
                                var_24 ^= ((/* implicit */signed char) ((_Bool) 5471151923530198424ULL));
                                var_25 = ((/* implicit */unsigned long long int) arr_24 [i_1] [i_2] [(signed char)9] [i_7 - 1] [i_1] [i_7 - 1] [i_1]);
                                var_26 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1] [14ULL])) ? (3113863187U) : (((/* implicit */unsigned int) arr_21 [i_7] [(unsigned short)3] [10LL] [i_7 - 1] [i_7 + 1] [i_7])))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */int) arr_24 [i_0] [i_1] [i_1] [i_1] [i_0] [i_2] [i_1])) : (((/* implicit */int) arr_24 [i_2] [i_2] [i_0] [i_1] [i_0] [10LL] [i_0]))))))));
                }
            } 
        } 
    } 
}
