/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33338
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 8793945538560LL)) ? (-8793945538561LL) : (-8793945538530LL)))));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0] [6]);
                    var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) > (((/* implicit */int) arr_1 [(unsigned short)0]))))) << ((((~(((/* implicit */int) arr_1 [i_0])))) + (27676)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_9 [6U] [19]))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [15LL] = ((/* implicit */signed char) arr_6 [i_0] [i_1] [i_2] [i_4]);
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 1; i_5 < 20; i_5 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(2317019599U)))) || (((/* implicit */_Bool) arr_1 [i_0]))));
                    var_21 = ((/* implicit */unsigned short) (!(arr_6 [i_0] [i_1] [i_5] [i_5])));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 6753447742091473180LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)1451))) : (7439186890504615085LL))) << (0U)))) && (((/* implicit */_Bool) (~(((6753447742091473202LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))))))));
                                var_23 = min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_6]))))) || (((/* implicit */_Bool) arr_21 [3LL]))))), ((+((+(7439186890504615076LL))))));
                            }
                        } 
                    } 
                }
                for (signed char i_8 = 1; i_8 < 20; i_8 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        arr_30 [i_9] [i_9] = ((/* implicit */unsigned short) ((((var_11) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (arr_20 [i_0] [i_1] [i_8] [i_9])))) < ((~(((/* implicit */int) arr_5 [i_8])))))))));
                        arr_31 [(_Bool)1] [i_1] [i_9] [i_9] = ((/* implicit */signed char) (((~((~(-8793945538560LL))))) != (((/* implicit */long long int) (~(((arr_9 [i_0] [i_0]) | (var_8))))))));
                    }
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        arr_35 [14U] [i_0] = ((((/* implicit */long long int) max(((~(251658240U))), (((/* implicit */unsigned int) arr_5 [i_8]))))) / (((((/* implicit */long long int) (~(((/* implicit */int) var_16))))) - ((~(arr_28 [i_1]))))));
                        arr_36 [i_0] [14U] [i_1] [i_8] [16LL] = ((/* implicit */short) arr_16 [3LL] [i_1] [i_1]);
                        var_24 = ((/* implicit */int) (+((-((+(var_2)))))));
                        var_25 ^= ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) max(((~(var_11))), (((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_8] [i_8] [i_1] [i_0]))))))))));
                    var_27 = (~(((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */long long int) (~(var_8)))) : ((~(arr_15 [i_8]))))));
                    var_28 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)63))));
                }
                var_29 = ((/* implicit */short) (~(((/* implicit */int) var_15))));
                var_30 = ((/* implicit */unsigned int) max((var_30), ((((((~(var_11))) == (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_28 [(unsigned short)5]))))) ? (arr_21 [15U]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_15)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 4) 
    {
        for (long long int i_12 = 3; i_12 < 20; i_12 += 4) 
        {
            {
                var_31 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_11] [i_12])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-63))))) : (((((/* implicit */_Bool) min((4043309056U), (((/* implicit */unsigned int) 2061849226))))) ? (min((arr_40 [(short)17]), (arr_40 [i_11]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_38 [i_11])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    arr_44 [(_Bool)1] [i_12] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_41 [i_11] [i_13]) : (((/* implicit */int) var_9)))))));
                    arr_45 [i_11] = (~(((((/* implicit */_Bool) arr_39 [i_11] [i_12])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((6753447742091473180LL) + (((/* implicit */long long int) 16769024U))))) ? (((((/* implicit */_Bool) arr_37 [(unsigned short)8] [i_12])) ? (((/* implicit */long long int) arr_41 [(signed char)9] [i_11])) : (arr_37 [i_11] [(signed char)1]))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) + (arr_37 [i_11] [i_12])))));
                    arr_46 [(short)19] [i_13] [6LL] [8U] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-113)) + (2147483647))) << (((((/* implicit */int) (short)3356)) - (3356)))));
                    var_33 = ((/* implicit */long long int) arr_38 [(_Bool)1]);
                }
                /* vectorizable */
                for (signed char i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    arr_50 [i_11] [(short)20] [i_14] [18U] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)79))));
                    var_34 *= ((/* implicit */unsigned int) var_7);
                    var_35 = ((/* implicit */signed char) var_0);
                    var_36 = ((/* implicit */unsigned int) var_9);
                }
            }
        } 
    } 
}
