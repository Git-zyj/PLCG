/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203355
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
    var_13 = ((unsigned short) var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((unsigned char) ((unsigned short) arr_9 [i_0] [i_0] [i_2] [i_0])));
                        var_14 = ((/* implicit */signed char) ((arr_0 [i_1 + 1]) && (((arr_10 [i_0] [i_1 - 3] [(short)1]) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)4095))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)13451);
                        arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 - 1] [i_2])) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [(unsigned short)10] [i_4])))))))) ? (((/* implicit */int) (_Bool)0)) : (((((-1) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) >= (((/* implicit */int) arr_0 [i_4])))))))));
                        arr_17 [i_0] [14] [14] [i_0] = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) arr_3 [(signed char)14])) ? (((/* implicit */int) arr_11 [i_4] [i_1 + 2] [(unsigned short)1])) : (var_6))), (((/* implicit */int) arr_2 [i_2] [i_2])))) | (((/* implicit */int) min(((_Bool)1), (arr_13 [i_0]))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (70368744169472LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)129))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)242)), (arr_7 [i_0] [i_0] [i_0] [i_4])))))))) ? (0) : (((/* implicit */int) arr_7 [i_1] [i_2] [(signed char)13] [i_5]))));
                            var_16 = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) arr_19 [i_1 - 3] [i_1 - 3] [i_1] [i_1 - 2] [i_1 + 1]))), (max((((/* implicit */int) arr_1 [i_1 - 2] [19LL])), (8)))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            var_17 |= arr_21 [i_0];
                            var_18 |= ((/* implicit */signed char) min((((/* implicit */unsigned int) 11)), (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_20 [i_0]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1 - 3] [i_2] [i_4] [i_6])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_1 [i_6] [i_2]))))) : ((-(269550860U)))))));
                            arr_24 [i_0] [i_1] [i_2] [i_2] [i_4] [i_6 - 1] [i_6 + 1] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) (_Bool)1)))))))) : (((/* implicit */int) arr_21 [i_0]))));
                            arr_25 [i_0] [i_6 - 1] [i_2] [i_4] [i_1] [i_2] = 1001250339;
                            arr_26 [i_6] [i_6] [i_4] [i_1] [i_2] [i_1] [i_0] = arr_23 [i_6 + 1] [i_4] [i_2] [i_1 - 1] [i_0];
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((short) arr_7 [i_0] [i_1] [(signed char)6] [i_7]))));
                            arr_29 [i_7] [i_7] [i_7] [i_7] [10] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) arr_1 [i_7 + 1] [i_1 + 1])) : (((/* implicit */int) arr_23 [i_0] [19] [i_1 - 2] [i_7 + 1] [i_7]))));
                            var_20 ^= ((/* implicit */short) ((_Bool) arr_6 [i_7 + 1] [i_1]));
                            var_21 = ((/* implicit */unsigned char) ((int) arr_27 [i_7 + 1] [i_1] [i_2] [i_7] [i_0]));
                        }
                    }
                    var_22 = ((/* implicit */short) ((_Bool) max((((/* implicit */int) arr_13 [i_1])), ((+(((/* implicit */int) arr_0 [i_0])))))));
                    var_23 = ((/* implicit */signed char) max((var_23), ((signed char)111)));
                }
            } 
        } 
    } 
}
