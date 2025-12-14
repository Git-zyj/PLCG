/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47145
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [(signed char)14] = (~((((~(((/* implicit */int) arr_1 [(short)22] [i_0])))) + (((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) var_13)))))));
        var_18 = ((/* implicit */signed char) (_Bool)1);
    }
    /* LoopSeq 3 */
    for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 4) 
            {
                {
                    var_19 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) <= (((((/* implicit */int) var_0)) << (((/* implicit */int) (_Bool)1))))))) & (((/* implicit */int) arr_0 [i_1 - 1]))));
                    var_20 |= ((/* implicit */signed char) arr_4 [i_1 - 1]);
                    var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3 - 2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))))))) : ((~(5U)))));
                    arr_12 [i_2] = (-((-(((((/* implicit */int) (signed char)62)) | (((/* implicit */int) var_2)))))));
                }
            } 
        } 
        arr_13 [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (short)-2781))) ? (4135210288U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_9 [i_1] [22U]), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) arr_7 [i_1 + 1])) : (((/* implicit */int) max((var_17), (((/* implicit */unsigned short) var_2))))))))));
        var_22 = ((/* implicit */short) min((var_22), (var_10)));
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 19; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    var_23 = (i_5 % 2 == 0) ? (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_1] [i_1 - 1] [i_4 - 1] [i_5])) >> (((-632890400) + (632890411))))))))) : (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_18 [i_1] [i_1 - 1] [i_4 - 1] [i_5])) + (2147483647))) >> (((-632890400) + (632890411)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 4) 
                    {
                        for (signed char i_7 = 2; i_7 < 21; i_7 += 4) 
                        {
                            {
                                arr_27 [i_1 - 1] [i_4 - 1] [i_5] [i_6 + 1] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1]))) / (var_16))), (((/* implicit */unsigned int) ((unsigned char) var_10))))))));
                                arr_28 [i_1] [i_5] = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 4) 
    {
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (_Bool)0))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 2; i_9 < 12; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_7 [i_8]))));
                    arr_36 [i_8] [i_9 + 1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | ((~(0U)))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_32 [i_8] [i_8] [i_10])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))) & (((var_11) ? (((/* implicit */int) (unsigned short)16008)) : (((/* implicit */int) (_Bool)1)))))))));
                    arr_37 [(_Bool)0] [i_8] = var_10;
                    var_26 = ((/* implicit */unsigned long long int) (_Bool)0);
                }
            } 
        } 
    }
    for (unsigned char i_11 = 3; i_11 < 7; i_11 += 4) 
    {
        var_27 = ((/* implicit */_Bool) max((var_27), ((_Bool)1)));
        arr_40 [i_11] [(signed char)8] = ((/* implicit */unsigned char) 632890388);
        /* LoopSeq 1 */
        for (unsigned char i_12 = 4; i_12 < 9; i_12 += 3) 
        {
            var_28 = ((/* implicit */signed char) var_13);
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) var_17))), (arr_24 [i_11] [i_11 - 2] [(short)5] [i_12 - 2] [i_12 + 1] [i_12] [i_12])))))))));
            /* LoopNest 3 */
            for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                for (int i_14 = 2; i_14 < 9; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_30 = ((((((/* implicit */_Bool) -632890389)) ? (632890388) : (((/* implicit */int) (short)32256)))) <= (((arr_43 [i_11 - 1] [i_14 - 1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))));
                            arr_51 [i_15] [(unsigned short)7] [i_12] [(unsigned char)6] [i_15] [i_15] = ((/* implicit */unsigned int) (!(var_13)));
                            arr_52 [i_12] [i_12] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
                        }
                    } 
                } 
            } 
        }
    }
}
