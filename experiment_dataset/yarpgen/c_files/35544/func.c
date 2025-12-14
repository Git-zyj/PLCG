/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35544
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
    var_19 = (-(((/* implicit */int) var_5)));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        var_21 = ((/* implicit */short) var_16);
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_22 |= min((((/* implicit */int) max((max((var_1), (arr_4 [i_1]))), (((/* implicit */short) ((var_10) <= (((/* implicit */unsigned long long int) arr_3 [i_1])))))))), (((((((/* implicit */int) var_15)) + (((/* implicit */int) var_5)))) - (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])))))));
        arr_5 [i_1] [i_1] = ((/* implicit */int) var_4);
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_6 = 2; i_6 < 23; i_6 += 2) 
                        {
                            arr_19 [i_5] [i_4] = ((/* implicit */_Bool) ((max((arr_18 [i_2] [i_2] [i_6] [i_5] [i_6] [i_6 - 2] [i_6]), (arr_18 [i_2] [i_2] [i_5] [i_2] [i_2] [i_6 - 2] [i_3]))) + (((/* implicit */int) arr_15 [i_2] [i_3] [i_5] [i_5] [i_3]))));
                            arr_20 [i_6] [i_6] = ((/* implicit */unsigned int) arr_3 [i_2]);
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 2; i_7 < 22; i_7 += 2) 
                        {
                            arr_24 [i_2] [i_3] [i_4] [i_5] [i_7] = arr_22 [i_7 - 1] [i_7 - 2];
                            var_23 = ((/* implicit */long long int) ((_Bool) var_4));
                        }
                        for (int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_24 = (!(((/* implicit */_Bool) ((((int) arr_13 [i_2] [i_2] [i_4] [i_5])) - (((/* implicit */int) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))))));
                            arr_27 [i_8] [i_5] [i_3] [i_3] [i_2] |= var_9;
                            arr_28 [i_2] = min((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_15 [i_2] [i_3] [i_4] [i_5] [i_8])))) > (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) ((short) var_9))) && (arr_22 [i_2] [i_2]))));
                            var_25 = ((/* implicit */signed char) max(((+(arr_6 [i_3] [i_3]))), (((((/* implicit */_Bool) arr_6 [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_6 [i_4] [i_8])))));
                        }
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((((/* implicit */_Bool) var_11)) ? (arr_8 [i_5] [i_4]) : (arr_8 [i_2] [i_2]))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_11))))))));
                        arr_29 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_4] [i_4] [i_3] [i_5] [i_5])) ? (((/* implicit */unsigned int) arr_18 [i_2] [i_2] [i_3] [i_2] [i_4] [i_4] [i_4])) : (arr_16 [i_2] [i_3] [i_4] [i_2] [i_3])))));
                        arr_30 [i_2] [i_3] [i_2] [i_3] [i_2] = ((var_16) ? (((/* implicit */unsigned long long int) var_6)) : (var_10));
                        var_27 = ((/* implicit */unsigned short) max((((((/* implicit */long long int) arr_16 [i_2] [i_3] [i_5] [i_4] [i_2])) | (arr_8 [i_2] [i_3]))), (max((((/* implicit */long long int) arr_16 [i_2] [i_3] [i_4] [i_5] [i_3])), (arr_8 [i_3] [i_4])))));
                    }
                    var_28 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_17), (var_3)))) ? ((~(arr_3 [i_2]))) : (arr_12 [i_2] [i_2] [i_2])));
                    arr_31 [i_2] [i_2] [i_2] = ((/* implicit */short) max((var_0), (var_13)));
                    var_29 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_11 [i_3])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_2])))))) : ((-(var_18)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_14)))))) & (arr_7 [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            {
                                arr_43 [i_10] [i_10] [i_10] [i_10] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_42 [i_2] [i_9] [i_10] [i_10] [i_12])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_2] [i_9] [i_10] [i_10] [i_12]))) : (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))));
                                arr_44 [i_12] [i_10] [i_10] [i_9] [i_10] [i_2] = (+((+(((/* implicit */int) max((((/* implicit */short) var_15)), (var_7)))))));
                                var_31 = ((unsigned char) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_42 [i_2] [i_2] [i_2] [i_10] [i_12]))));
                            }
                        } 
                    } 
                    arr_45 [i_2] [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_4 [i_9]);
                }
            } 
        } 
    }
    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned int) var_17);
        var_33 = ((/* implicit */long long int) arr_11 [i_13]);
        var_34 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) ((((/* implicit */int) arr_23 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) <= (var_9)))) : (((/* implicit */int) ((unsigned char) var_8)))))), (((((/* implicit */_Bool) arr_41 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) ? (arr_46 [i_13] [i_13]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-32762)))))))));
    }
    var_35 = ((/* implicit */unsigned long long int) ((short) max(((short)-8225), ((short)14417))));
}
