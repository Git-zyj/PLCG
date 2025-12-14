/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214656
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [11LL])) ? (((((/* implicit */int) var_16)) + (((/* implicit */int) arr_5 [i_2])))) : (((/* implicit */int) arr_4 [i_1] [i_1])))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_2])))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */int) ((unsigned short) arr_7 [i_0] [(unsigned short)3] [(unsigned short)3]));
                }
                var_22 &= ((/* implicit */unsigned short) min((((((((var_11) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_3 [i_0])) - (13945))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_3 [i_0])))))));
                var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [9U]))) : (var_10))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [(short)8])) / (arr_2 [i_0] [i_1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */int) arr_6 [i_0])) | (((var_8) | (((/* implicit */int) var_16))))))));
            }
        } 
    } 
    var_24 &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */unsigned short) var_16)), (var_5)))))) % (((long long int) ((unsigned short) var_1)))));
    /* LoopNest 3 */
    for (signed char i_3 = 1; i_3 < 23; i_3 += 1) 
    {
        for (short i_4 = 2; i_4 < 21; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    var_25 &= ((/* implicit */unsigned short) ((1585481086) == ((-2147483647 - 1))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_6 = 2; i_6 < 24; i_6 += 4) 
                    {
                        arr_20 [i_3] [(unsigned short)14] [i_5] [i_3] = (-(arr_11 [i_3 - 1]));
                        var_26 = ((/* implicit */unsigned short) ((short) arr_18 [(unsigned short)24] [i_3 - 1] [i_3] [i_6] [i_3] [i_6 - 1]));
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 4; i_7 < 24; i_7 += 3) 
                        {
                            var_27 = (+((-(((/* implicit */int) arr_14 [i_5] [i_3])))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (4758179690251662640LL) : (((/* implicit */long long int) -1698242002)))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */short) arr_16 [0U] [0U] [0U]);
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_6 - 1] [i_3] [i_6 + 1] [i_6 - 1])) && (((/* implicit */_Bool) var_18))));
                            var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_3 + 1] [i_3 + 1] [5] [i_4 + 2] [i_3]))));
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_26 [i_4 + 2] [i_3 - 1] [i_3]))));
                            var_33 = (i_3 % 2 == 0) ? (((/* implicit */short) ((arr_16 [i_3] [i_3 + 2] [i_6 - 2]) << (((((/* implicit */int) arr_22 [i_3] [i_3 + 2] [i_4 + 4] [i_5] [i_3])) - (54086)))))) : (((/* implicit */short) ((arr_16 [i_3] [i_3 + 2] [i_6 - 2]) << (((((((/* implicit */int) arr_22 [i_3] [i_3 + 2] [i_4 + 4] [i_5] [i_3])) - (54086))) - (6038))))));
                        }
                        for (int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            arr_29 [i_9] [i_3] [i_5] [i_5] [i_3] [i_3] = ((/* implicit */unsigned short) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            arr_30 [i_3] [i_3] [i_5] [i_6] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_3] [i_3])) ? (((/* implicit */int) ((((/* implicit */int) arr_23 [i_4] [i_4])) == (((/* implicit */int) var_6))))) : ((+(((/* implicit */int) arr_27 [i_3] [i_4] [i_5] [i_3] [i_3] [i_4] [i_3]))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            arr_33 [i_3] [i_4] [(unsigned short)16] [i_3] = ((/* implicit */unsigned int) ((arr_26 [i_4 + 3] [i_4 + 1] [i_3 + 1]) / (arr_26 [i_4 + 2] [i_4 - 1] [i_3 + 1])));
                            var_34 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_3] [(short)2])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_5] [i_10])))))));
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_3] [(unsigned short)12] [i_3] [i_3 - 1] [i_3] [i_3] [i_4 - 1])) ? (((/* implicit */int) arr_27 [i_3 + 1] [i_3 + 2] [i_3] [i_3 + 1] [i_4] [i_3 + 1] [i_4 - 1])) : (((/* implicit */int) arr_27 [(unsigned char)5] [i_3] [i_3] [i_3 + 1] [i_4] [i_4] [i_4 + 1]))));
                            arr_34 [i_3] [i_3] [i_3] [i_5] [i_6] [20LL] = (~(((/* implicit */int) arr_10 [i_3 + 1] [i_4 - 2])));
                            var_36 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_5])) ? (((/* implicit */int) arr_17 [i_3] [i_6 - 2] [i_4 - 2] [i_6 - 2])) : (((((/* implicit */int) var_9)) | (arr_11 [i_10])))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((long long int) arr_31 [(unsigned short)24] [i_3 - 1] [i_11] [(unsigned short)24] [i_3 - 1] [i_4 + 2])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 1; i_12 < 22; i_12 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned int) ((unsigned short) ((arr_15 [i_12] [i_3] [i_5] [i_5]) | (((/* implicit */int) arr_12 [(unsigned short)9] [i_4])))));
                            var_39 = (i_3 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_12 + 3] [i_3] [i_3 + 2])) >> (((((/* implicit */int) var_15)) + (27)))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) arr_13 [i_12 + 3] [i_3] [i_3 + 2])) + (2147483647))) >> (((((/* implicit */int) var_15)) + (27))))));
                        }
                        for (int i_13 = 3; i_13 < 24; i_13 += 2) 
                        {
                            var_40 &= ((/* implicit */unsigned short) arr_35 [i_3]);
                            arr_43 [i_3] [(unsigned short)6] [i_5] [i_4] [i_4] = ((/* implicit */unsigned short) ((long long int) var_5));
                        }
                        var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((unsigned int) arr_31 [i_3] [i_4] [i_11] [i_11] [i_3] [i_4])))));
                        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (+(arr_25 [i_3 + 2] [i_4]))))));
                    }
                    var_43 &= ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned char)11)) / (((/* implicit */int) (unsigned char)26))))));
                }
            } 
        } 
    } 
    var_44 = ((/* implicit */int) max((min((((/* implicit */long long int) (~(var_8)))), ((-(var_4))))), (((/* implicit */long long int) var_3))));
    var_45 = ((/* implicit */unsigned int) var_14);
}
