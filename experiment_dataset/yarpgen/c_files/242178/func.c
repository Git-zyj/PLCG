/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242178
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min((((((/* implicit */_Bool) 4294967274U)) ? (arr_6 [i_0] [i_0] [i_2] [i_2]) : (arr_6 [i_0] [i_0] [i_2] [i_0]))), (((/* implicit */int) ((signed char) arr_4 [i_1] [i_1] [i_1]))))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-2147483647 - 1)) | (min((0), (((/* implicit */int) arr_1 [i_1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1)))))) == (min((var_7), (4294967295LL))))))) : (((min((((/* implicit */unsigned int) 234881024)), (133525634U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0] [i_3])) == (((/* implicit */int) arr_0 [i_0])))))));
                        var_15 = ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) var_8)))));
                        /* LoopSeq 3 */
                        for (int i_4 = 3; i_4 < 21; i_4 += 1) /* same iter space */
                        {
                            var_16 *= ((/* implicit */unsigned char) var_8);
                            var_17 = (+(((/* implicit */int) var_8)));
                        }
                        for (int i_5 = 3; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */unsigned int) -1121660161)) | (arr_9 [i_0] [i_1] [i_1] [i_5 - 1] [i_0] [i_1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_5 - 3] [i_5] [i_1]))))))))));
                            var_18 = ((/* implicit */_Bool) arr_2 [i_0]);
                        }
                        for (int i_6 = 3; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */int) (~(((long long int) (!(((/* implicit */_Bool) arr_21 [i_6] [i_3] [i_0] [i_0] [i_1] [i_0])))))));
                            arr_22 [i_0] [i_0] [i_2] = ((/* implicit */signed char) var_3);
                        }
                        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((max((arr_4 [i_1] [i_2] [i_3]), (2147483647))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_9)))))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) var_8);
                        arr_25 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])) + (2147483647))) << (((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_2] [i_2] [i_2] [i_7])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) - (3046857611U))))))));
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 2; i_9 < 21; i_9 += 3) 
                    {
                        for (long long int i_10 = 2; i_10 < 21; i_10 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((unsigned int) arr_21 [i_9] [i_9] [i_10 - 2] [i_0] [i_0] [i_10 - 2]));
                                var_23 = ((arr_35 [i_8] [i_8] [i_8] [i_9 - 1] [i_10 + 1]) != (var_3));
                            }
                        } 
                    } 
                    arr_36 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_8]))));
                    arr_37 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_8] [i_8])) < (arr_14 [i_0] [i_0] [i_1] [i_0] [i_8] [i_8]))))));
                    var_24 = ((/* implicit */unsigned long long int) (-(arr_26 [i_0] [i_0] [i_0])));
                }
                for (signed char i_11 = 2; i_11 < 21; i_11 += 3) 
                {
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_26 ^= ((/* implicit */unsigned int) min((-1121660161), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))))));
                    arr_41 [i_11] [i_11 + 1] [i_11] [i_0] = ((/* implicit */_Bool) ((max((31), (arr_16 [i_11] [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11] [i_11]))) - (((((/* implicit */_Bool) ((820702713U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51)))))) ? (((/* implicit */int) (_Bool)1)) : (-10)))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 1; i_12 < 21; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 22; i_13 += 1) 
                        {
                            {
                                var_27 += ((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-6603)));
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */int) arr_24 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0])), (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_11] [i_0] [i_11] [i_13])) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_13] [i_13]))))))) > (((((/* implicit */_Bool) ((int) (unsigned short)14))) ? (((long long int) (unsigned char)199)) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (3903931668U))))))));
                                var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) -2147483636)) : (-1LL))), (((/* implicit */long long int) arr_14 [i_12 + 1] [i_11] [i_12] [i_0] [i_13] [i_0])))))));
                                arr_47 [i_0] [i_0] [i_0] [i_0] [i_12] [i_13] [i_0] = ((/* implicit */_Bool) min(((+(-10))), (var_3)));
                            }
                        } 
                    } 
                }
                arr_48 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((min((-1053144505), (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]))) == (((/* implicit */int) ((var_11) || (((/* implicit */_Bool) (short)16384))))))))));
                arr_49 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_0] [i_0] [i_1]))) : (arr_26 [i_0] [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_26 [i_1] [i_0] [i_0])) ? (var_7) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (-2147483647 - 1))), (arr_39 [i_0] [i_1]))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) 660728901);
}
