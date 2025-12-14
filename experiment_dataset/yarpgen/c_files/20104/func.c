/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20104
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((min((((/* implicit */unsigned int) (_Bool)0)), (var_7))) / (((((/* implicit */unsigned int) -852129547)) / (var_5))))) - (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -852129536))))))))));
        arr_5 [i_0] = (~((((+(var_1))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
        var_15 = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) ((2075857007U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) + (arr_3 [(_Bool)1] [(_Bool)1]))))), ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) & (arr_3 [i_0] [i_0])))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_4)) == (arr_8 [i_1]))))) / (min((arr_7 [i_1]), (((/* implicit */long long int) arr_3 [(unsigned char)6] [i_1]))))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((max(((-(arr_0 [i_1 - 1]))), (((/* implicit */unsigned long long int) max((arr_8 [(_Bool)0]), (var_12)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_14)))), ((!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))))))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((((/* implicit */_Bool) arr_3 [i_2] [i_2])) || (((/* implicit */_Bool) var_11)))))))));
            var_19 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) & ((-(2075857013U)))));
            arr_15 [i_2] [i_3] = (-((+(-6553661011067016469LL))));
        }
        for (int i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
        {
            arr_20 [4U] = ((/* implicit */unsigned long long int) (!((((!(((/* implicit */_Bool) arr_8 [(short)18])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-24115)), (arr_18 [i_2] [i_4]))))))));
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((((/* implicit */int) (short)24115)) ^ (((/* implicit */int) (signed char)40))))))) | ((((-(var_1))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) (short)24125))))))))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) max((4), (((/* implicit */int) var_2))))) * (max((((/* implicit */unsigned int) (unsigned char)50)), (361900881U))))) * ((-(((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(_Bool)1] [i_6] [i_2] [i_2])))))))));
                            var_22 -= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174))) / (arr_26 [i_6] [i_2 - 1])))) - (((((/* implicit */long long int) ((/* implicit */int) (signed char)105))) ^ (arr_7 [i_5]))))) != (((/* implicit */long long int) (-(min((arr_12 [i_7] [i_5] [i_2]), (arr_26 [i_2] [i_4]))))))));
                        }
                    } 
                } 
            } 
            var_23 -= ((/* implicit */unsigned int) (+((+(((((arr_14 [20LL] [(unsigned short)10]) + (9223372036854775807LL))) << (((2932280175U) - (2932280175U)))))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                {
                    arr_36 [i_8] [1LL] = ((/* implicit */int) (+(min((min((arr_33 [i_2] [i_2] [(short)11]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)208)) | (((/* implicit */int) (unsigned short)4095)))))))));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (-((+((+(arr_24 [i_9] [i_8] [i_8] [(_Bool)1] [(_Bool)1]))))))))));
                    arr_37 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) 13U))))), (min((((/* implicit */long long int) arr_8 [i_8])), (arr_30 [i_9] [i_8] [i_2]))))) != (((/* implicit */long long int) ((((arr_10 [8U]) * (var_7))) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [(short)18] [i_2] [i_2 - 1]))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))))) ^ (((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) / (min((var_14), (((/* implicit */unsigned int) arr_38 [i_2 - 1])))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_2] [i_2] [i_2 - 1] [i_2])) * (((/* implicit */int) arr_16 [i_11] [i_8] [i_2]))))) <= (((430019429U) / (arr_12 [i_2] [i_8] [i_2])))))) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) > (min((arr_42 [i_2] [i_8] [i_10] [i_10] [i_11]), (((/* implicit */unsigned int) (unsigned short)9647)))))))))));
                            var_27 -= ((/* implicit */unsigned short) min(((((+(0U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((arr_30 [i_2] [i_9] [i_11]) <= (arr_7 [i_11]))))))), (((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_34 [i_11] [i_10] [i_9] [i_2 - 1])))), (((/* implicit */int) min(((unsigned short)65516), (((/* implicit */unsigned short) var_8))))))))));
                            var_28 = ((/* implicit */signed char) min((((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_4)), (var_12)))))), (((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_43 [i_2] [i_2] [i_8] [i_9] [i_9] [6] [6])), (var_14)))) / ((-(arr_30 [i_2] [i_9] [i_11])))))));
                        }
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) min((((((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) arr_29 [i_2] [i_8] [i_8] [i_9] [i_10] [i_10] [i_10]))))) | (max((((/* implicit */long long int) arr_8 [i_8])), (6798091952152246816LL))))), (((/* implicit */long long int) (-((-(2932280175U)))))))))));
                        var_30 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) min((var_4), (-142492237)))), (min((var_6), (var_12)))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        arr_47 [i_2] [i_8] [i_9] [i_12] [i_12] = ((/* implicit */int) (((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4095))) / (arr_9 [i_2] [i_12]))))) / (((/* implicit */long long int) max(((+(var_14))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_44 [i_2] [i_2] [i_2] [i_2]))))))))));
                        var_31 = ((/* implicit */unsigned short) (((+(((/* implicit */int) ((5971071305592935659LL) <= (((/* implicit */long long int) var_10))))))) | (min(((+(((/* implicit */int) var_3)))), ((-(((/* implicit */int) var_2))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (!(((/* implicit */_Bool) ((max((arr_7 [i_8]), (3234895027629561568LL))) | ((+(arr_14 [i_2] [i_8])))))))))));
                            var_33 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */int) arr_13 [i_13] [i_13])) + (2147483647))) >> (((2219110289U) - (2219110265U)))))) >= (((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (var_0)))))), (min((((/* implicit */unsigned int) min(((short)8624), ((short)10217)))), (min((var_1), (((/* implicit */unsigned int) (signed char)38))))))));
                        }
                        var_34 -= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_31 [11ULL] [i_8] [i_2])))))))));
                    }
                }
            } 
        } 
    }
    var_35 |= ((/* implicit */signed char) (((~((-(-8738997827896755607LL))))) + (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    var_36 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)52))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (var_5)))))))));
    var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (+(max((((/* implicit */long long int) ((0LL) <= (((/* implicit */long long int) var_5))))), (((((/* implicit */long long int) 2219110289U)) % (var_0))))))))));
}
