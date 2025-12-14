/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231239
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
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */short) ((max((arr_7 [i_0 + 2]), (((/* implicit */int) (_Bool)1)))) <= (min((arr_7 [i_0 + 1]), (((/* implicit */int) (signed char)-120))))));
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_3] [i_0]);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_0] [10] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (arr_3 [11ULL] [i_2])));
                    var_15 += ((/* implicit */short) (+(((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 14; i_5 += 2) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                var_16 = min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_18 [i_5]) ? (((/* implicit */int) (signed char)-113)) : (arr_6 [i_5] [i_5] [i_6 - 1])))), ((-(var_2)))))), (min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) (_Bool)1)))));
                var_17 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (-(-1411356987)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min(((unsigned short)20784), (((/* implicit */unsigned short) var_9))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        {
                            arr_28 [i_7] [i_7] [i_7] [i_8] [i_7] = ((/* implicit */long long int) max(((+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_1)))))), (((int) 3903234207440736119LL))));
                            arr_29 [i_7] [i_6] [i_7] = ((/* implicit */long long int) (+(-2147483647)));
                            arr_30 [i_7] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_12 [10LL] [i_7 + 1] [i_7] [9] [(_Bool)1]))))) ^ (((/* implicit */int) arr_14 [i_6] [i_6] [i_7] [i_7] [i_5] [i_5]))));
                            var_18 = ((/* implicit */short) ((_Bool) arr_20 [(signed char)7]));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) ((min((((/* implicit */unsigned long long int) -305350398)), (arr_26 [i_8]))) <= (((/* implicit */unsigned long long int) arr_7 [i_6 - 1]))))) < (((/* implicit */int) ((((/* implicit */int) ((short) var_0))) > (((/* implicit */int) ((unsigned char) var_10)))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_22 [i_9]) : (((/* implicit */int) (_Bool)1)))))))))))));
                                var_21 = ((((/* implicit */_Bool) -3903234207440736119LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)));
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_9] [i_10 + 1] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_39 [i_5 - 1] [i_5] [i_5] [i_5] [i_5 - 1]))))) : (max((8183773736896550841ULL), (((/* implicit */unsigned long long int) var_0)))))), (min((arr_36 [i_5 + 2] [i_6] [i_10 + 1] [i_10 + 1]), (arr_36 [i_5 - 1] [(short)11] [i_10 + 1] [i_10]))))))));
                                arr_40 [i_5] = ((/* implicit */short) (~(262550832)));
                            }
                        } 
                    } 
                    arr_41 [14ULL] [i_5] [i_5] [i_5] = ((/* implicit */signed char) var_4);
                }
                /* LoopNest 2 */
                for (long long int i_12 = 4; i_12 < 14; i_12 += 2) 
                {
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_14 = 0; i_14 < 16; i_14 += 2) 
                            {
                                arr_49 [i_5] [i_5] [i_12 - 2] [i_13] [i_14] [i_6] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(8793945538560ULL))))));
                                arr_50 [i_5] [i_6] [i_6] [i_13] [i_13] [i_14] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)-25)))) ? ((-(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (-(((/* implicit */int) arr_24 [i_6 - 1])))))));
                                arr_51 [i_5] [i_5] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) (_Bool)0)) < (-1432295296))));
                            }
                            arr_52 [13LL] = ((/* implicit */unsigned short) arr_35 [i_5] [i_13]);
                            var_24 ^= ((/* implicit */unsigned char) (~(((((((/* implicit */int) var_13)) >= (916787402))) ? (((/* implicit */int) arr_34 [i_12] [i_12] [i_12] [i_12 + 1])) : (var_10)))));
                            var_25 = ((/* implicit */int) min((var_25), ((+(((/* implicit */int) var_0))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */int) max((((/* implicit */short) var_1)), ((short)31333)));
    var_27 = ((/* implicit */int) var_4);
}
