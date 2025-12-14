/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242923
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
    for (long long int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 3; i_2 < 17; i_2 += 3) 
                {
                    var_16 -= ((/* implicit */unsigned char) min((((unsigned short) arr_2 [i_1 + 1] [i_2 - 1])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) arr_3 [i_0] [i_0] [2]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                                var_18 = ((/* implicit */unsigned char) arr_10 [i_1] [i_0] [i_1] [i_0] [i_1] [i_0] [i_0]);
                                var_19 -= ((/* implicit */unsigned char) ((_Bool) arr_0 [i_1] [i_1 + 1]));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = 1791805376;
                            }
                        } 
                    } 
                    var_20 = ((max(((+(((/* implicit */int) (unsigned short)8351)))), ((-(((/* implicit */int) (unsigned short)57185)))))) << (((/* implicit */int) var_7)));
                }
                for (int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    var_21 += ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] [i_5]))), (arr_7 [i_0] [i_0]))) & (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)-14627)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_5]))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        for (short i_7 = 2; i_7 < 18; i_7 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) var_11);
                                arr_24 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (unsigned short)8348);
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_4 [i_7] [i_7] [i_7])), (arr_22 [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_0 - 1] [i_7 - 2])));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                }
                for (unsigned short i_8 = 2; i_8 < 17; i_8 += 3) 
                {
                    var_23 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                    var_24 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)8362)) * (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 2; i_10 < 18; i_10 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) ((arr_5 [i_0] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1102208075)) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (var_14))))))))));
                                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))));
                                arr_32 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_10] [i_10] [i_1])) ? (((/* implicit */int) arr_20 [i_0] [i_0 - 4] [i_0 - 4] [i_8 + 2] [i_10 + 1])) : (((/* implicit */int) arr_13 [i_0])))));
                                arr_33 [i_1] [i_1] = ((/* implicit */long long int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]);
                                arr_34 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1])) || (((/* implicit */_Bool) var_0)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_11 = 3; i_11 < 17; i_11 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        for (short i_13 = 1; i_13 < 16; i_13 += 4) 
                        {
                            {
                                var_27 ^= ((/* implicit */unsigned long long int) arr_26 [i_0] [i_0]);
                                var_28 = ((/* implicit */unsigned long long int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_11] [i_11 - 2] [i_11 - 3] [i_11] [i_11 - 3])))));
                                var_29 = ((/* implicit */unsigned long long int) ((int) arr_7 [i_1] [i_1]));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                    var_31 = ((/* implicit */short) arr_15 [i_1] [i_1]);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 1) 
                {
                    for (unsigned short i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) (_Bool)1);
                            arr_47 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) min((max((arr_9 [i_14] [i_1] [i_1] [i_0]), (arr_45 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (signed char)127)) ^ (var_14)))))));
                            arr_48 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -578181107)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_12 [i_0] [i_0 - 4] [i_0] [i_0] [i_1] [i_0 - 4] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2955513617U)) ? (2377240946U) : (var_10)))) || (var_7)))))))));
    var_34 = var_7;
}
