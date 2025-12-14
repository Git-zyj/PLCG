/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217134
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_2 [(_Bool)1] [i_0 + 1] = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551615ULL)))));
        var_12 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */int) (short)-25165)) > (((/* implicit */int) (signed char)119)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    arr_12 [(short)6] [(signed char)12] = ((/* implicit */signed char) min(((-(((((/* implicit */int) (short)32704)) * (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_3))));
                    var_13 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_8)), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_3])) ? (var_4) : (((/* implicit */unsigned long long int) var_11))))))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (var_4)))) ? (((((/* implicit */int) arr_8 [i_1] [i_3])) + (((/* implicit */int) arr_8 [i_1] [i_2])))) : (((/* implicit */int) arr_8 [i_2] [i_3]))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 14; i_5 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) min((((arr_16 [i_5] [i_1] [i_5 - 1] [i_5 - 2] [i_5 - 1]) ? (min((var_6), (((/* implicit */long long int) arr_15 [i_1] [i_5] [i_3] [i_4] [i_4])))) : (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? ((-(((/* implicit */int) arr_14 [i_1] [i_1] [i_3] [i_4] [i_4] [(unsigned char)9])))) : (((/* implicit */int) var_1)))))));
                                var_16 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_1]))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_2))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_6 = 4; i_6 < 14; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) arr_5 [(signed char)6] [i_2]);
                                var_19 = ((/* implicit */short) var_1);
                                var_20 ^= ((/* implicit */unsigned short) arr_6 [i_6 - 1] [i_6 - 4]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 ^= ((/* implicit */_Bool) var_1);
        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [12LL] [i_1]))));
        var_23 = ((/* implicit */signed char) min(((-(var_4))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65220)))))));
        var_24 = (~((+((-(((/* implicit */int) var_0)))))));
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < ((~(var_4)))));
}
