/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241387
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
    var_11 += max((min((-2147483642), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (unsigned char)9))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65024)))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (25LL))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) var_10);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned char i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3] = ((/* implicit */int) (!(((_Bool) arr_14 [i_4] [i_4 + 2] [i_4] [i_4 - 2] [(unsigned char)9]))));
                                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_8 [i_4 - 4] [i_3 - 4])))) ? (((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_3]))))) & (var_7))) : (((long long int) ((arr_0 [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0]), (((signed char) -1169395468)))))) ^ (min((((/* implicit */long long int) (~(-1169395467)))), ((~(var_7)))))));
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned char i_6 = 3; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_14 &= ((/* implicit */_Bool) ((((var_10) ^ (15))) & ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (unsigned char)3))));
                            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) 5776588752212526795ULL))), (max((-1507612262), (((/* implicit */int) var_5)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) ? (((((/* implicit */int) arr_10 [i_7] [i_8] [i_8] [i_7] [i_7] [i_8])) & (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_3 [i_7]))))) ? (((((/* implicit */_Bool) arr_25 [i_8])) ? (max((((/* implicit */unsigned long long int) var_0)), (5776588752212526801ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_7] [i_8] [i_7])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78))))))));
                arr_28 [i_8] [i_8] = ((((/* implicit */_Bool) min((arr_8 [i_8] [i_7]), (arr_8 [i_7] [i_7])))) ? (((((/* implicit */_Bool) arr_8 [i_7] [i_7])) ? (arr_8 [i_8] [i_7]) : (arr_8 [i_7] [i_7]))) : ((-(((/* implicit */int) var_3)))));
                arr_29 [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_7]))))), (min((arr_25 [i_7]), (arr_25 [i_8])))));
                arr_30 [i_8] [i_8] [i_8] = ((/* implicit */long long int) (~((~(var_10)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        for (short i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            for (unsigned short i_11 = 1; i_11 < 14; i_11 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (arr_38 [0U] [i_10])));
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        arr_42 [i_11] [i_11] [(short)4] [i_12] = 8ULL;
                        var_19 = ((((/* implicit */_Bool) (~(-1)))) ? (((/* implicit */int) ((((/* implicit */int) arr_37 [i_11 + 3] [i_11] [i_11] [i_9 + 1])) <= ((~(((/* implicit */int) arr_38 [i_11] [i_11]))))))) : (((/* implicit */int) min((arr_40 [i_9 + 1] [i_11] [i_11] [i_12]), (var_0)))));
                        var_20 = ((/* implicit */long long int) max((var_9), (var_9)));
                        arr_43 [i_9] [i_10] [i_11] [i_12] = ((((/* implicit */_Bool) 5387789580742794450LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_41 [(_Bool)1] [(_Bool)1] [(signed char)16] [i_11] [i_11] [i_11 - 1]), (arr_35 [i_12]))))))) : (((/* implicit */int) ((short) -7894704409171757107LL))));
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        arr_47 [i_11] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) & ((+(((/* implicit */int) var_3))))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_5))));
                        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_46 [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1])) ? (5776588752212526807ULL) : (((/* implicit */unsigned long long int) var_9)))) & (((/* implicit */unsigned long long int) (~(var_8))))));
                        /* LoopSeq 3 */
                        for (short i_14 = 3; i_14 < 16; i_14 += 3) 
                        {
                            arr_50 [i_11] [i_13] [i_11 + 4] [i_11] [i_11] = ((/* implicit */unsigned char) (~(-17)));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [i_11] [i_9 + 1])) - (((/* implicit */int) var_0))));
                        }
                        for (unsigned int i_15 = 1; i_15 < 17; i_15 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) 5LL))));
                            var_25 = ((/* implicit */int) var_8);
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((short) arr_44 [i_11 - 1] [i_10] [i_9 + 1] [i_9 + 1])))));
                        }
                        for (int i_16 = 0; i_16 < 18; i_16 += 3) 
                        {
                            var_27 = ((/* implicit */long long int) var_5);
                            arr_57 [i_11] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) var_7);
                            arr_58 [i_16] [i_9] [i_11] [i_10] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) -1507612259))) ? (var_1) : (((/* implicit */long long int) 1169395467))));
                            var_28 = (~(((/* implicit */int) arr_33 [i_13 + 1])));
                        }
                        arr_59 [i_11] [i_9] [i_11] = ((var_4) ? (((/* implicit */int) var_0)) : (arr_44 [i_9] [i_9] [i_9 + 1] [i_9]));
                    }
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) min((((var_9) & (((/* implicit */int) arr_36 [i_9 + 1])))), ((~(((/* implicit */int) arr_36 [i_9 + 1])))))))));
                }
            } 
        } 
    } 
}
