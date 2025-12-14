/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207913
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
    var_11 = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
    var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (!(arr_6 [(_Bool)1]))))));
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= ((-9223372036854775807LL - 1LL))))))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_15 = ((/* implicit */short) var_1);
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_3] [i_4])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) : (7498521022029877664LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_0])))));
                            arr_17 [i_0] [i_0] [i_2] [i_3] [(unsigned short)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_7 [i_0] [i_1] [i_1] [i_0])))) ? (arr_2 [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_2])))));
                        }
                        for (short i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            var_17 = (unsigned short)17800;
                            var_18 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (arr_2 [i_0] [i_0]))) ? (((((/* implicit */int) var_2)) % (((/* implicit */int) arr_3 [i_0])))) : ((-(((/* implicit */int) arr_9 [i_0] [i_3] [i_0]))))));
                        }
                        for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            arr_23 [i_0] [12LL] [i_2] [i_3] [12LL] [i_1] [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) (short)10709)))) < (((/* implicit */int) var_2))));
                            var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_6] [i_3] [i_2] [i_2] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2))));
                            var_20 = ((/* implicit */short) ((unsigned short) arr_12 [i_0] [i_1] [i_0] [i_6]));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_1)))))) + ((+(arr_11 [i_6] [(_Bool)1] [i_2] [(_Bool)1] [i_0]))))))));
                            var_22 = ((/* implicit */short) var_0);
                        }
                        for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) arr_21 [i_0] [i_1] [i_2] [i_0] [i_7]);
                            arr_26 [i_0] [i_2] [i_3] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [(unsigned char)12] [i_7] [i_7] [i_3])) : (((/* implicit */int) (short)2937)))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_22 [i_7] [i_7] [i_2] [i_7] [i_0])))))));
                            var_25 = (!(((/* implicit */_Bool) var_6)));
                        }
                    }
                } 
            } 
        }
        for (long long int i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
        {
            var_26 = (short)-17382;
            arr_29 [i_0] [i_8] [i_0] = ((/* implicit */short) (-(max((min((arr_10 [i_0] [i_0] [i_0] [i_8] [i_8] [i_8]), (((/* implicit */long long int) var_9)))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768)))))))));
        }
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            arr_32 [i_0] = ((/* implicit */long long int) ((short) ((((/* implicit */int) ((((/* implicit */int) (short)-6261)) < (((/* implicit */int) arr_24 [i_0] [i_9]))))) < (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_4))))))));
            var_27 = ((/* implicit */long long int) min((var_27), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_9] [(short)2] [(short)12] [i_9])) ? (-3303172345777795840LL) : (arr_10 [i_0] [i_0] [i_9] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) (unsigned short)18156)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_9] [(short)10]))) : (arr_10 [i_9] [i_9] [i_9] [i_9] [(short)16] [(short)12]))))), (((/* implicit */long long int) var_9))))));
        }
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)7389)) > (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])))))) * ((+(((/* implicit */int) arr_27 [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                {
                    arr_38 [i_0] [i_10] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_2))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        for (long long int i_13 = 0; i_13 < 17; i_13 += 1) 
                        {
                            {
                                var_29 -= var_7;
                                arr_44 [(unsigned char)3] [(_Bool)1] [i_0] [i_0] [(short)2] [(unsigned char)3] = ((/* implicit */short) min((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_10] [i_0])) ? (((/* implicit */int) arr_8 [i_13] [i_11] [i_11] [i_0])) : (((/* implicit */int) arr_14 [i_0] [2LL] [(unsigned short)11]))))) ^ (max((((/* implicit */long long int) arr_36 [i_10] [i_10] [i_13])), (arr_11 [i_0] [i_0] [i_0] [(unsigned short)12] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) max((var_6), (var_2)))) & ((-(((/* implicit */int) (short)32767)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
