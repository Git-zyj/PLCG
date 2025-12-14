/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249189
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_13 [i_3] = ((/* implicit */unsigned short) var_12);
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) arr_1 [8])) ? (2147483647) : (((/* implicit */int) var_13)))) << (((8188) - (8188)))))));
                                var_19 -= ((/* implicit */long long int) ((unsigned char) ((unsigned int) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (signed char)26))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((unsigned char) 4294967295U));
                                arr_21 [(unsigned char)5] [i_6] [i_2] [i_5] [i_6] [(short)11] = ((/* implicit */int) arr_7 [3LL] [i_6] [i_6] [i_6] [i_6] [12]);
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_1] [(unsigned short)6] [i_2] = ((/* implicit */int) ((((((_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_2] [i_2] [(_Bool)1] [i_0] [i_0] [i_0])))) < (((/* implicit */int) (!(((((/* implicit */int) var_11)) > (((/* implicit */int) arr_16 [0ULL] [0ULL] [i_2])))))))));
                    arr_23 [i_2] [i_0] = min((((/* implicit */unsigned int) arr_1 [i_1])), (((((/* implicit */_Bool) arr_11 [i_0] [8] [8])) ? (arr_6 [i_1] [i_1] [10] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
                    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_2] [(unsigned char)5] [(signed char)10])) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_5 [(signed char)8] [i_1] [i_0])))) + (((((/* implicit */_Bool) (short)-31061)) ? (892321599) : (((/* implicit */int) (signed char)-27))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) (signed char)127))), (((var_16) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-3764)))))))) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    var_23 = ((/* implicit */long long int) (~(((unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_16)))))));
    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(((var_2) + (((/* implicit */unsigned long long int) var_6)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                for (int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    {
                        arr_34 [i_7] [i_9] [i_8] [i_7] = ((/* implicit */signed char) var_10);
                        arr_35 [i_7] [i_7] [i_7] [i_9] [i_9] [6U] = ((/* implicit */signed char) arr_24 [i_7]);
                        arr_36 [i_10] [i_9] [i_7] [5ULL] [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_33 [i_10] [i_9] [i_8] [i_7])), (min((((/* implicit */unsigned int) 229681142)), (((((/* implicit */_Bool) arr_32 [i_7] [i_8] [i_9] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [(short)6] [3ULL] [i_7] [i_7]))) : (var_5)))))));
                    }
                } 
            } 
        } 
        arr_37 [(short)16] &= ((/* implicit */unsigned int) var_17);
        arr_38 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 534385510))) || (((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) max((arr_26 [i_7] [i_7]), (arr_26 [i_7] [i_7]))))));
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        arr_41 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_11] [i_11])) != (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_11])) && (((/* implicit */_Bool) var_3)))))));
        arr_42 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_33 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_33 [i_11] [i_11] [i_11] [14U]))));
        var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1567756670)))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_40 [i_11]) < (1125899906842623ULL)))))));
    }
    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 3) 
    {
        var_26 &= min((max((1504636025U), (((/* implicit */unsigned int) arr_43 [i_12] [i_12])))), (((/* implicit */unsigned int) max((arr_45 [i_12]), (((/* implicit */int) arr_43 [i_12] [i_12]))))));
        var_27 &= ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)84))));
    }
}
