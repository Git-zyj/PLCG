/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239870
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
    var_15 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((unsigned long long int) ((unsigned int) var_9))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min((arr_0 [i_1] [i_1 - 1]), (arr_0 [i_1] [i_1 - 3])))) : (((/* implicit */int) (_Bool)1)))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */long long int) arr_1 [i_1]);
                    arr_8 [i_0 - 1] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned long long int) arr_5 [i_2])) | (var_0))))), (((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 2] [i_1]))) : (var_5)))));
                }
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    var_17 |= ((/* implicit */int) ((unsigned int) max((((var_10) % (var_14))), (((/* implicit */unsigned long long int) 3880305642U)))));
                    var_18 |= ((/* implicit */long long int) ((unsigned long long int) ((max((((/* implicit */unsigned long long int) var_5)), (arr_3 [i_3]))) - (arr_2 [22U] [i_1 + 1]))));
                    arr_11 [6] [6] [(unsigned char)20] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1] [i_0 + 1])) && (((/* implicit */_Bool) arr_3 [i_0 + 1])))));
                }
                for (int i_4 = 3; i_4 < 21; i_4 += 2) 
                {
                    arr_15 [i_0 + 2] [i_1] [i_4] = ((/* implicit */unsigned short) ((int) min((arr_2 [i_1 - 3] [i_0 - 1]), (arr_9 [i_1 - 2] [i_0 + 2] [i_4 + 1]))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_1] [i_4 - 2] [i_4]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1 + 1] [i_1 - 1] [i_4 - 2])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 2] [i_1] [i_4 - 3])) : (((/* implicit */int) arr_4 [i_0 + 2] [i_1 - 3] [15ULL] [i_4 + 3])))))));
                    var_20 = ((/* implicit */unsigned long long int) arr_4 [i_4] [i_1] [i_4] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (int i_6 = 2; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_18 [10ULL] [10ULL] [i_5] [i_4] [i_0 + 2] [i_0 + 2] [i_0 + 2])), (var_6)))) ? (arr_9 [i_4 - 1] [i_4 - 2] [i_5]) : (min((((/* implicit */unsigned long long int) var_9)), (arr_19 [i_0] [i_1] [i_1] [i_4] [i_4] [i_5] [i_4]))))), (((/* implicit */unsigned long long int) ((arr_18 [i_0 + 2] [i_1 - 2] [i_4 + 1] [i_4 + 2] [i_4 + 3] [i_6 - 2] [i_6 + 1]) << (((arr_18 [i_0 - 1] [i_1 - 2] [i_4 - 2] [i_4 + 3] [i_4 - 2] [i_6 - 2] [i_6 - 2]) - (1201023027)))))))))));
                                var_22 *= ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_1] [i_4 + 1] [(_Bool)1] [i_4 + 1])))) << (((((unsigned long long int) var_3)) - (1155342480ULL)))))) != (arr_19 [i_1] [i_1] [(_Bool)1] [(_Bool)1] [i_6] [i_1] [i_0]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_23 = (+(min((((((/* implicit */_Bool) arr_21 [i_0] [i_1 - 3] [i_4] [i_0] [i_8])) ? (arr_19 [i_0] [i_0] [21LL] [i_7] [i_1 - 1] [i_8] [i_7]) : (((/* implicit */unsigned long long int) arr_10 [i_1 - 2] [i_4 - 2] [i_8])))), (((/* implicit */unsigned long long int) var_11)))));
                                arr_24 [6ULL] [i_1] [i_4] [6ULL] [i_7] = ((/* implicit */unsigned int) max((arr_13 [i_0 + 1] [i_1] [i_7]), (((((var_2) ? (var_14) : (12843413813335858622ULL))) | ((-(arr_19 [8ULL] [(unsigned short)10] [8ULL] [(unsigned short)10] [i_7] [i_7] [i_8])))))));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_4 + 1]))) * (var_7))) / (((var_4) * (((/* implicit */unsigned long long int) arr_18 [i_0 - 1] [i_1] [i_1] [i_4 - 2] [i_7] [i_8] [i_8]))))))) ? (((unsigned int) max((((/* implicit */unsigned long long int) (short)-16081)), (var_4)))) : (((unsigned int) (short)-16081))));
                            }
                        } 
                    } 
                }
                arr_25 [i_0] [i_1 + 1] [13] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_0 + 1] [i_0 + 1] [9] [i_1] [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16081)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16080))) : (((arr_13 [i_1 - 2] [i_1] [i_1]) - (((/* implicit */unsigned long long int) arr_5 [i_0 + 2])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0 + 2] [i_1 - 1])) : (((/* implicit */int) (short)16070)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)16080)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    var_26 = ((/* implicit */unsigned int) (+((((+(var_12))) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_6)) : (var_4)))))));
}
