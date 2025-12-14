/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225575
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((signed char) min(((-(var_1))), (((/* implicit */unsigned long long int) var_8))))))));
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (var_0)))), (max((((/* implicit */unsigned long long int) var_3)), (var_1))))) % (max(((+(8307324694080243742ULL))), (((((/* implicit */unsigned long long int) var_0)) % (8307324694080243742ULL))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            var_16 = ((/* implicit */signed char) ((arr_1 [i_1] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) 3854375494460683093LL);
        }
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                arr_9 [i_2] = ((/* implicit */signed char) (unsigned short)7);
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) var_2);
                            var_17 = ((/* implicit */unsigned int) arr_0 [i_3]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) ((10139419379629307867ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92)))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                for (unsigned short i_7 = 1; i_7 < 16; i_7 += 4) 
                {
                    {
                        arr_19 [i_6] |= ((/* implicit */signed char) arr_7 [i_6] [i_6] [i_6]);
                        arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7 + 1])) ? (arr_7 [i_7 + 2] [i_7 + 2] [i_6]) : (((/* implicit */int) (unsigned char)78))));
                        var_19 = ((/* implicit */short) var_2);
                    }
                } 
            } 
            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 4142432978U)) % (12940806893685412761ULL)));
            var_21 = ((signed char) var_7);
        }
        for (unsigned short i_8 = 1; i_8 < 14; i_8 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                var_22 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [(unsigned char)8] [i_9] [i_9] [i_9] [i_9])) == (((/* implicit */int) (short)10896)))))));
                arr_25 [i_8] [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65529))));
                arr_26 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (~(((8307324694080243742ULL) | (((/* implicit */unsigned long long int) 2786888268U))))));
                var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)7))));
            }
            for (unsigned int i_10 = 2; i_10 < 17; i_10 += 4) 
            {
                var_24 = ((/* implicit */_Bool) ((unsigned int) var_13));
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_8 [i_10] [(unsigned char)2]))));
                /* LoopSeq 3 */
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
                {
                    arr_33 [i_8] [(signed char)0] [(signed char)0] [5] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (arr_30 [i_8 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178)))));
                    var_26 *= ((/* implicit */unsigned char) arr_10 [i_10 + 1] [(short)14] [14] [i_10 + 1] [i_10 - 1] [i_10 - 1]);
                    arr_34 [i_8 + 4] [i_10 + 1] [i_8] = ((arr_31 [i_10 - 2] [i_8 + 1] [i_8 + 1] [(unsigned char)3] [i_10] [i_8]) % (((/* implicit */unsigned int) arr_2 [i_0] [i_10 + 1])));
                }
                for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                {
                    arr_38 [i_0] [i_0] [i_8] [10LL] = ((/* implicit */unsigned short) (signed char)67);
                    var_27 = ((/* implicit */int) (~(arr_31 [i_10] [i_8 + 1] [i_0] [i_0] [i_0] [13ULL])));
                }
                for (unsigned int i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
                {
                    arr_43 [(_Bool)0] [i_8] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_8 + 2] [i_10] [i_13])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))));
                    arr_44 [i_8 - 1] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((short) ((unsigned int) var_13)));
                }
                var_28 = ((/* implicit */_Bool) arr_27 [i_0] [14U] [i_10]);
                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_8] [i_8] [i_0] [i_8]))) % (67108863ULL))))))));
            }
            arr_45 [(_Bool)1] &= (-(5505937180024138854ULL));
            arr_46 [i_8] [3U] = ((/* implicit */_Bool) 5505937180024138856ULL);
        }
    }
    for (signed char i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
    {
        var_30 *= ((/* implicit */long long int) ((_Bool) min((var_8), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_36 [(_Bool)1] [(_Bool)1] [16LL] [6LL] [i_14])) : (((/* implicit */int) var_9))))))));
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_0)) | ((-(arr_28 [i_14] [i_14] [(signed char)10]))))))));
    }
}
