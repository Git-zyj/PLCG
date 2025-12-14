/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238808
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
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((var_3) ? (var_15) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (var_15))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = var_9;
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32019))) / (11531955617165547762ULL)));
        arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) var_13))));
        var_17 = ((/* implicit */_Bool) (-(arr_1 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
                        {
                            {
                                arr_18 [i_5] [i_3] = ((/* implicit */int) ((short) arr_11 [i_1] [i_5] [i_3]));
                                arr_19 [i_1] [i_2] [i_3] [(short)2] [i_4] [i_4 + 1] [i_1] = ((/* implicit */int) (~((-(6914788456544003874ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 13; i_6 += 2) 
                    {
                        for (short i_7 = 1; i_7 < 13; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((2958197032971125414ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88)))));
                                arr_26 [i_7 + 1] [i_6] [i_6] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_23 [i_3 + 2] [i_3 + 3] [i_6]))) % (((min((((/* implicit */int) var_0)), (arr_13 [i_7] [i_6] [i_3] [i_1]))) ^ (((((/* implicit */int) arr_20 [i_6])) ^ (((/* implicit */int) arr_2 [i_6]))))))));
                            }
                        } 
                    } 
                    arr_27 [i_3] [i_2] [i_1] = max((max((min((var_13), (((/* implicit */unsigned long long int) arr_2 [i_1])))), (max((var_9), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1])))))), (6914788456544003853ULL));
                    arr_28 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_25 [i_1] [i_1] [(short)14] [i_1] [i_1])), (arr_24 [i_1] [i_1] [i_1] [2ULL] [i_1] [i_1] [(unsigned char)0])))) ? (((/* implicit */int) max((var_4), (((/* implicit */short) (_Bool)0))))) : (((((/* implicit */int) arr_25 [i_1] [(_Bool)1] [i_2] [i_1] [i_2])) & (((/* implicit */int) arr_12 [i_3] [i_3] [i_2] [i_1]))))))));
                    arr_29 [i_3] = ((/* implicit */unsigned long long int) min((max((((((/* implicit */int) (unsigned short)7285)) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_15 [i_3 + 1] [i_3 + 4] [i_3] [i_3] [i_3])))), (((((/* implicit */int) max((arr_25 [i_1] [i_2] [i_3] [i_1] [i_3]), (arr_25 [6] [i_2] [i_3] [i_1] [i_3])))) << (((max((var_13), (((/* implicit */unsigned long long int) var_3)))) - (5699533754034837324ULL)))))));
                }
            } 
        } 
        arr_30 [i_1] [i_1] = ((/* implicit */_Bool) arr_25 [i_1] [i_1] [6LL] [i_1] [i_1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_8 = 4; i_8 < 15; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 1; i_9 < 14; i_9 += 2) 
            {
                for (unsigned char i_10 = 1; i_10 < 13; i_10 += 2) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) var_1)))));
                        var_20 = ((/* implicit */short) arr_7 [i_1]);
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_7))) << (((((((/* implicit */int) (unsigned char)235)) * (((/* implicit */int) arr_33 [i_1] [(_Bool)1] [i_1])))) - (12674)))));
        }
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 13; i_11 += 2) 
        {
            for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) arr_41 [i_1] [i_1]);
                    var_23 = ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)-35)))) & (((/* implicit */int) (_Bool)1))));
                    arr_45 [i_12] [i_11 + 2] [i_12] = ((/* implicit */short) (~((+((+(((/* implicit */int) (unsigned char)235))))))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (signed char i_14 = 1; i_14 < 13; i_14 += 4) 
                        {
                            {
                                var_24 = ((var_9) <= (505326464466087143ULL));
                                arr_52 [i_14] [i_14] [i_14] [i_12] [i_14] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((int) (unsigned char)17))) ? (((/* implicit */int) arr_12 [i_11 + 1] [i_1] [i_14] [i_13])) : (((/* implicit */int) arr_51 [i_11])))) % (((/* implicit */int) ((((arr_37 [i_14]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_12]))))) < (((/* implicit */unsigned long long int) ((arr_38 [i_13] [i_12]) ? (((/* implicit */int) arr_50 [i_11] [i_11] [i_12] [i_12] [i_13] [i_13])) : (arr_8 [i_1] [i_11])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_15 = 1; i_15 < 15; i_15 += 3) 
    {
        arr_56 [i_15] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))) - (min((((/* implicit */unsigned long long int) arr_2 [i_15])), (arr_0 [i_15] [i_15]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)47)) > (((/* implicit */int) (signed char)82))))))));
        arr_57 [i_15] = var_6;
        arr_58 [i_15] [i_15] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_55 [i_15])) || (((/* implicit */_Bool) arr_53 [i_15] [i_15])))))) <= (max((((/* implicit */unsigned long long int) var_2)), (arr_1 [i_15]))))));
        arr_59 [i_15] = ((/* implicit */unsigned long long int) arr_54 [i_15] [i_15]);
    }
    var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((-2831939028501626343LL), (((/* implicit */long long int) (!((_Bool)1)))))))));
    var_26 = ((/* implicit */unsigned long long int) var_0);
}
