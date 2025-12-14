/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54429
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */unsigned char) ((max((arr_8 [i_3 - 1] [i_1] [i_2] [i_3] [i_0] [i_1]), (arr_8 [i_3 - 2] [i_1] [i_2] [i_3] [i_3] [i_2]))) / (((/* implicit */int) max((arr_5 [i_3 - 1] [i_3] [i_3] [i_3]), (((/* implicit */unsigned char) arr_7 [i_0] [i_0 - 1] [i_2] [i_1] [i_3])))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((-1), (-5)))) <= (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_4] [i_3] [i_2] [i_0])), (var_3)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (-3163200064600694377LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-19)))))))));
                            var_13 += ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]);
                        }
                        /* LoopSeq 1 */
                        for (long long int i_5 = 1; i_5 < 17; i_5 += 2) 
                        {
                            arr_15 [i_3] = ((/* implicit */short) (!(((-11) >= (var_0)))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_10 [i_5] [i_3] [i_2] [i_1] [i_0])) == (arr_12 [i_3] [i_3] [i_3 - 1] [i_5 + 2]))))) <= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_3] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (short)11368))) : (3163200064600694377LL)))))));
                            var_15 += arr_14 [i_0] [i_3];
                            var_16 = ((/* implicit */signed char) 2409448218823616084LL);
                        }
                        arr_16 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (~(max((((((/* implicit */long long int) ((/* implicit */int) (short)8))) % ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) 481395349))))));
                        var_17 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) <= (arr_4 [i_0] [i_1] [i_2])));
                    }
                    /* LoopSeq 2 */
                    for (short i_6 = 2; i_6 < 18; i_6 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) (signed char)18))));
                        arr_20 [i_0] [i_1] [i_2] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_19 [i_2] [i_0 - 1]) >= (arr_10 [i_0] [i_0 - 1] [i_0] [i_6] [i_6 + 2])))) * (min((arr_19 [i_0] [i_0 - 1]), (((/* implicit */int) (signed char)124))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 2; i_7 < 20; i_7 += 4) 
                        {
                            var_19 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_6] [i_1] [i_1] [i_6 + 1] [i_7])) ? (arr_4 [i_7] [i_2] [i_1]) : (((/* implicit */unsigned int) var_0))))) < (((long long int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                            var_20 *= ((/* implicit */int) min(((((~(var_3))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6] [i_7] [i_6] [i_0]))))), (((/* implicit */unsigned long long int) ((short) arr_10 [i_7] [i_7 + 1] [i_7] [i_6] [i_6 + 1])))));
                        }
                        var_21 = ((/* implicit */long long int) (unsigned short)63112);
                        var_22 = ((/* implicit */long long int) ((unsigned char) max((arr_23 [i_0] [i_0] [i_0] [i_0 - 1] [i_6] [i_6 + 3]), (((/* implicit */int) arr_9 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1])))));
                    }
                    for (int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_10 [i_0] [i_9] [i_0 - 1] [i_8] [i_9]))) / (((/* implicit */int) ((signed char) arr_10 [i_2] [i_0] [i_0 - 1] [i_2] [i_2])))));
                            arr_30 [i_0] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_0 - 1]))))) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_2] [i_8])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) arr_9 [i_0] [i_8] [i_2] [i_8])))));
                        }
                        var_24 = ((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2] [i_8] [i_0] [i_2]);
                        var_25 += ((/* implicit */unsigned char) var_6);
                        var_26 = ((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) << (((2278268859U) - (2278268829U))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (signed char)-1))))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) (_Bool)1);
    var_28 *= ((/* implicit */int) ((((/* implicit */long long int) ((var_6) | ((~(((/* implicit */int) var_4))))))) == (((((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))) - (min((((/* implicit */long long int) var_6)), (3820456442735287743LL)))))));
}
