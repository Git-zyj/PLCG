/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204152
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
    var_17 = ((/* implicit */long long int) var_4);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned short)50969)))) / (var_15))))));
        var_19 = ((/* implicit */long long int) var_8);
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_1])) & (((/* implicit */int) arr_3 [i_1] [i_1])))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) arr_0 [i_1]))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_3 [i_1] [(unsigned short)12]))))))) ? (((max((arr_2 [i_1]), (((/* implicit */long long int) var_6)))) & (((/* implicit */long long int) ((var_5) - (((/* implicit */int) (short)10899))))))) : (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_0))))))));
        arr_4 [i_1] &= ((/* implicit */short) var_3);
        arr_5 [i_1] = ((/* implicit */_Bool) var_1);
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_10))));
        /* LoopSeq 3 */
        for (int i_3 = 2; i_3 < 9; i_3 += 4) 
        {
            arr_15 [i_3 + 4] [i_2] = ((/* implicit */unsigned int) arr_9 [i_2] [i_3]);
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                arr_18 [i_4] [(short)10] [(short)10] [(short)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(short)3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (var_9)))) ? (((/* implicit */int) (short)16128)) : (((/* implicit */int) arr_14 [i_3 + 3] [i_4]))));
                arr_19 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)19180)) ? (-744427667) : (((/* implicit */int) (_Bool)0))));
                /* LoopSeq 2 */
                for (unsigned short i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    arr_22 [i_5] [i_5] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_5 + 1] [i_5 - 1])) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (744427694)))));
                    /* LoopSeq 1 */
                    for (int i_6 = 2; i_6 < 12; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_1 [i_3 + 1] [18LL]))));
                        var_23 += ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3] [i_3 - 2])) || (((/* implicit */_Bool) (~(arr_9 [i_4] [i_4]))))));
                    }
                }
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    var_24 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_2] [i_3 + 4] [(_Bool)1] [i_3 + 4])) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((arr_2 [i_2]) != (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                    arr_29 [i_7] [i_2] = 1861721052;
                    var_25 = ((/* implicit */_Bool) arr_26 [i_2] [i_4] [i_4] [i_4] [i_4] [i_7]);
                }
            }
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                arr_33 [i_2] [i_3 - 2] [i_8] [i_8] = ((/* implicit */long long int) var_2);
                var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 7641281555441569964LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) var_15)))))));
            }
            for (int i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                arr_38 [i_2] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_3 - 2] [i_9] [i_9] [3] [i_9])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_2])) ? (((/* implicit */int) arr_30 [i_2] [i_3])) : (var_7))))));
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3])) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) arr_27 [i_2] [i_3 + 2] [12U] [i_3])))))));
            }
        }
        for (int i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            arr_41 [i_10] = ((/* implicit */signed char) ((unsigned char) (short)19164));
            arr_42 [i_2] [i_2] [i_10] = ((/* implicit */int) (+((~(arr_36 [i_2] [i_10] [i_10])))));
            arr_43 [i_2] [4LL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_2 [i_2])) : (((unsigned long long int) (unsigned char)200))));
        }
        for (short i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                var_28 = ((/* implicit */unsigned int) arr_46 [i_2] [10U] [2LL]);
                var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_8)))) ? (((/* implicit */int) ((signed char) var_13))) : (((((/* implicit */int) (signed char)95)) + (((/* implicit */int) var_0))))));
            }
            for (signed char i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                arr_55 [i_11] [i_2] [i_11] [1LL] = ((/* implicit */unsigned short) ((unsigned long long int) arr_30 [i_2] [i_2]));
                arr_56 [i_2] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_2] [i_11])) ? (((arr_34 [i_2]) ^ (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) var_3))));
            }
            /* LoopNest 3 */
            for (long long int i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                for (signed char i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    for (long long int i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        {
                            arr_65 [i_2] [i_11] [i_14] [i_11] [i_16] [i_16] = ((((/* implicit */_Bool) arr_54 [i_11] [i_11] [i_15] [i_16])) ? (2147483647) : (((/* implicit */int) var_13)));
                            arr_66 [(_Bool)1] [3] [i_11] [i_2] [i_11] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_50 [i_11])) ? (8290136172985007037LL) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_11] [i_14])))));
                        }
                    } 
                } 
            } 
        }
        var_30 = ((/* implicit */signed char) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
        arr_67 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((8511874254685063800LL) & (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (arr_9 [i_2] [0U]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_35 [i_2])) >= (((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
        arr_68 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_50 [(_Bool)1])) < (((((/* implicit */_Bool) var_4)) ? (arr_52 [i_2] [1] [i_2]) : (((/* implicit */int) arr_45 [i_2] [i_2] [i_2]))))));
    }
    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) min((((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) var_10)))))));
}
