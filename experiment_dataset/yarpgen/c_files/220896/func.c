/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220896
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
    var_18 = ((/* implicit */signed char) var_10);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((-398903165) % (arr_4 [i_0] [i_3] [i_2]))) & (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))));
                        var_20 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) != (arr_3 [i_2])))) == (arr_7 [i_0 + 4])));
                    }
                    for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        var_21 &= ((/* implicit */signed char) arr_14 [i_4] [i_1]);
                        var_22 = arr_7 [i_2];
                        arr_15 [i_0 - 1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) arr_7 [i_0]);
                        var_23 *= ((((((/* implicit */int) max((arr_5 [(signed char)3] [(signed char)3] [i_2]), (arr_2 [i_0 + 3] [i_1])))) & (arr_7 [i_0]))) * (((/* implicit */int) ((((/* implicit */int) arr_12 [i_4] [(unsigned short)19] [i_4] [i_4] [i_4] [i_4])) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_4] [i_2] [i_1])) || (((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_4])))))))));
                        var_24 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_13 [i_4] [i_2] [i_1] [i_0])), (max((((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_2])), (arr_9 [i_4] [i_2] [i_1] [i_0]))))), (((/* implicit */unsigned long long int) arr_3 [i_2]))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        var_25 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_2] [i_0] [i_0])) % (((((((/* implicit */int) arr_8 [i_0] [i_5] [0] [(signed char)23])) << (((((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_0])) - (177))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_1] [i_2] [i_1] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))))));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_6 [i_5] [i_1] [i_0]))));
                    }
                    var_27 ^= ((/* implicit */int) arr_17 [i_1] [i_1] [i_2] [i_0] [i_2] [i_1]);
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) arr_7 [i_2]);
                                var_29 += arr_22 [i_7] [i_6] [i_2] [i_1] [i_0];
                                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) < (max((((/* implicit */int) ((((/* implicit */int) arr_14 [i_1] [i_1])) <= (((/* implicit */int) arr_2 [i_0] [i_1]))))), (min((((/* implicit */int) arr_12 [i_7 - 1] [i_6] [i_1] [i_2] [i_1] [(_Bool)1])), (arr_19 [i_0] [9] [i_2]))))))))));
                            }
                        } 
                    } 
                    var_31 |= ((/* implicit */_Bool) max((arr_20 [(unsigned char)10] [(unsigned char)10] [i_2]), (((/* implicit */int) ((((arr_1 [i_0]) / (arr_23 [i_0 + 1]))) == (((arr_18 [i_2] [i_2] [i_1] [i_0 + 1]) | (((/* implicit */int) arr_22 [i_0] [i_0] [2] [i_2] [i_0])))))))));
                }
            } 
        } 
    } 
    var_32 += ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_11)))) <= (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_7))))))))) >= (((((/* implicit */long long int) max((((/* implicit */int) var_4)), (var_14)))) | (var_1))));
}
