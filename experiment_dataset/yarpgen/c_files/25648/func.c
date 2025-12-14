/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25648
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
    var_17 &= ((((_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_12)))) : (max((((/* implicit */long long int) (signed char)-17)), (-2983667948931662508LL))))) : (((/* implicit */long long int) ((((/* implicit */int) var_16)) / (((/* implicit */int) max(((unsigned short)61789), ((unsigned short)30924))))))));
    var_18 = ((/* implicit */short) var_16);
    var_19 = ((/* implicit */_Bool) (signed char)18);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 23; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_1] = arr_13 [(_Bool)1] [i_4] [(_Bool)1] [i_4] [0U];
                                arr_16 [i_0 + 2] [i_1] [(signed char)17] [i_1] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_2)), ((short)12745)))) <= (((((/* implicit */_Bool) arr_3 [i_2 + 3] [i_3 - 1])) ? (((/* implicit */int) arr_3 [i_2 - 2] [i_3 - 4])) : (((/* implicit */int) arr_3 [i_2 + 4] [i_3 - 2]))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] = (~((-(max((((/* implicit */unsigned int) (signed char)26)), (arr_12 [(unsigned char)22] [i_1] [i_1] [i_1] [i_2]))))));
                    var_21 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) & (arr_12 [i_2 + 4] [i_2 - 2] [i_0] [i_1] [i_0])));
                    var_22 = ((/* implicit */unsigned long long int) ((((1611299617) & (arr_1 [i_2 + 3]))) < (((int) arr_1 [i_2 + 2]))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 2; i_5 < 20; i_5 += 3) /* same iter space */
                {
                    arr_20 [i_5 + 2] [(unsigned char)1] [i_1] [18U] = (~((-(((/* implicit */int) arr_8 [i_1])))));
                    arr_21 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                    arr_22 [i_1] [i_5] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) (short)21768)) : (((/* implicit */int) (short)17892))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (short)17892))) + (var_9)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) (-((((_Bool)1) ? (((/* implicit */unsigned int) var_10)) : (4294967289U)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 2; i_7 < 22; i_7 += 3) 
                        {
                            arr_29 [i_1] [i_1] [i_5] [i_6] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */int) arr_3 [i_7] [i_1 + 1])) : (((/* implicit */int) (signed char)-36)))) <= ((((_Bool)1) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (_Bool)1))))));
                            arr_30 [i_1] [(unsigned char)16] [i_1] [i_1] = ((/* implicit */short) arr_24 [i_0] [i_1] [(_Bool)1] [i_6] [i_1]);
                            arr_31 [i_1] [i_1] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 3697316951U)) ? (var_8) : (arr_14 [i_0] [4U] [i_0] [4U] [4U]))));
                        }
                        for (unsigned int i_8 = 2; i_8 < 20; i_8 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned short) arr_5 [i_5 + 1]);
                            var_25 += ((/* implicit */unsigned long long int) ((arr_5 [i_1 - 2]) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_5 + 3]))));
                        }
                        arr_34 [i_0] [i_0 + 2] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_13 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_6] [i_1 - 2]);
                        arr_35 [i_0] [i_0] [i_0] [(short)2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)16383)) - (((/* implicit */int) (short)32767))));
                    }
                    for (int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        var_26 = (((-(arr_19 [i_1] [i_1] [i_1]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))));
                        arr_38 [i_1] [(signed char)6] [i_5] [i_1] [(signed char)6] = ((/* implicit */_Bool) (-(((-1694985193) % (1705907552)))));
                        var_27 |= ((((/* implicit */_Bool) arr_32 [i_0 - 2] [i_0] [i_0])) && (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) var_10)) : (1U)))));
                        var_28 = ((/* implicit */long long int) (signed char)18);
                        arr_39 [i_0] [i_1] [i_5] [i_9] [(short)6] [8LL] = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_1] [i_0] [i_9]);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) (unsigned short)5)) ? (arr_7 [i_0 - 2] [i_1] [i_10]) : (var_3)))));
                                var_30 = ((/* implicit */short) (~((~(2383881909U)))));
                                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_0] [i_5] [i_10] [i_11])) ? (((/* implicit */int) arr_3 [i_5] [(short)1])) : (((/* implicit */int) (unsigned short)33008))));
                                var_32 = var_13;
                            }
                        } 
                    } 
                }
                var_33 ^= ((/* implicit */_Bool) 1325319982);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_12 = 0; i_12 < 14; i_12 += 1) 
    {
        for (unsigned char i_13 = 1; i_13 < 11; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    var_34 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_41 [i_12] [i_13 + 3] [(short)12]))));
                    var_35 &= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) == (max((var_8), (1048575U)))))), (((((/* implicit */_Bool) ((2837202374U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112)))))) ? ((~(-3651956845697547696LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_13)) & (((/* implicit */int) arr_43 [i_12] [i_12] [i_13] [i_13 + 2] [19U] [i_14])))))))));
                }
            } 
        } 
    } 
}
