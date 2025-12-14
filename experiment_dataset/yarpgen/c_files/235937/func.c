/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235937
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [(_Bool)1] [i_1] [i_1] = ((unsigned long long int) arr_8 [i_0] [(unsigned short)9] [1]);
                    arr_10 [(unsigned short)5] = min((((((/* implicit */_Bool) arr_8 [i_0 + 3] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0 + 3])) : (((/* implicit */int) arr_8 [i_0 + 4] [i_0] [i_0 + 4])))), (((/* implicit */int) arr_8 [i_0 + 4] [i_0 + 3] [i_0])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 3; i_3 < 11; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            {
                var_12 -= ((/* implicit */long long int) min((((int) arr_16 [i_4] [i_3 - 2])), (((arr_12 [i_3 - 3] [i_3 - 3]) ? (((/* implicit */int) arr_12 [i_3 - 2] [i_3 + 2])) : (arr_16 [i_4] [i_3 - 3])))));
                arr_17 [i_3] = arr_16 [i_3] [i_4];
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 1) 
    {
        var_13 = min((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_5]))))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5 + 1])) && (((/* implicit */_Bool) arr_19 [i_5] [i_5])))))))), (arr_0 [i_5]));
        arr_20 [i_5 - 1] [i_5 - 1] = ((/* implicit */_Bool) arr_4 [i_5 - 3]);
        arr_21 [i_5] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) min((arr_5 [(_Bool)0] [(_Bool)0] [i_5 - 1]), (((/* implicit */short) arr_8 [i_5] [i_5 - 3] [i_5 - 1]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_5 - 3] [i_5 - 2] [i_5 + 1])))))))), (min((max((arr_0 [i_5 - 2]), (((/* implicit */int) arr_8 [i_5] [i_5] [i_5])))), (((/* implicit */int) arr_5 [i_5] [i_5] [i_5]))))));
        var_14 += ((/* implicit */long long int) (unsigned char)18);
    }
    for (int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        var_15 = ((/* implicit */int) max(((-(min((arr_25 [i_6]), (arr_25 [i_6]))))), (((min((((/* implicit */unsigned long long int) (short)-25927)), (arr_25 [i_6]))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_6])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_8 = 2; i_8 < 20; i_8 += 1) 
            {
                for (unsigned int i_9 = 2; i_9 < 21; i_9 += 1) 
                {
                    for (unsigned char i_10 = 1; i_10 < 20; i_10 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((arr_24 [i_10 + 1]) ? (((/* implicit */int) arr_24 [i_10 + 1])) : (((/* implicit */int) arr_24 [i_10 + 2])))))));
                            var_17 = ((int) ((((/* implicit */unsigned long long int) arr_32 [9LL] [9LL] [i_8] [21ULL] [16U] [16U])) >= (arr_29 [i_6] [i_8])));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(arr_24 [i_6])))) >> (((arr_30 [i_6] [i_7] [i_7] [i_6]) - (10734102341925460270ULL)))));
            var_19 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7 + 4]))) >= (arr_31 [i_6] [i_6] [i_7]))));
        }
        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 1) 
        {
            var_20 = ((/* implicit */int) arr_31 [i_6] [i_11] [(unsigned short)1]);
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        {
                            var_21 -= ((/* implicit */short) ((int) max((arr_30 [i_11] [i_12] [(short)22] [i_6]), (arr_30 [i_6] [i_6] [i_6] [i_6]))));
                            arr_46 [i_12] = ((/* implicit */unsigned char) max((1641429124615824627ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(arr_27 [i_12])))))))));
                            arr_47 [i_6] [i_11] [i_12] [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_12] [i_13] [21LL]))) + (arr_32 [i_6] [i_11] [(_Bool)1] [i_13] [i_14] [(short)0])))) ? (2953698742497620924ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_14] [12U] [i_12] [i_12] [12U] [21])) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) arr_22 [i_6]))))))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 23; i_15 += 4) 
        {
            for (unsigned long long int i_16 = 1; i_16 < 21; i_16 += 4) 
            {
                {
                    arr_52 [i_6] [15ULL] [i_16 + 1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (3286293595U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)238)) << (((/* implicit */int) arr_24 [i_6])))))))), (min((-4LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned char)141)) : (715446997))))))));
                    arr_53 [i_6] [(signed char)4] [(signed char)4] = ((/* implicit */unsigned int) max((min((((arr_32 [i_6] [(unsigned char)8] [i_16] [(unsigned short)15] [i_15] [i_16 + 2]) / (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_6] [i_6] [i_15] [i_15]))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_16]))))))), (((/* implicit */long long int) arr_28 [i_6] [i_6] [i_6] [i_6]))));
                    arr_54 [i_6] [18] [i_16] = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_6] [i_15] [i_15])) ? (((/* implicit */int) arr_26 [i_15] [i_15] [i_16 - 1])) : (((/* implicit */int) arr_39 [i_6] [i_6] [i_6]))))), (min((((/* implicit */unsigned long long int) (unsigned char)31)), (arr_25 [i_16])))))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((min((((/* implicit */unsigned long long int) 2251013830U)), (arr_29 [i_6] [i_6]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_28 [i_6] [i_15] [(_Bool)1] [i_6])), (arr_22 [i_6]))))))), (((((/* implicit */_Bool) arr_32 [i_15] [i_15] [i_16 + 1] [i_6] [2ULL] [11LL])) ? (((arr_29 [i_6] [i_6]) + (((/* implicit */unsigned long long int) arr_34 [i_6] [i_15] [i_16 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6] [i_15] [i_16]))))))))));
                    var_23 = ((/* implicit */unsigned int) arr_30 [i_6] [i_16] [i_6] [i_6]);
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (short i_17 = 0; i_17 < 13; i_17 += 1) 
    {
        for (int i_18 = 0; i_18 < 13; i_18 += 3) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 11; i_19 += 1) 
            {
                {
                    arr_62 [i_18] [i_17] = ((/* implicit */short) min((((unsigned long long int) (+(arr_30 [i_17] [i_17] [i_19 + 2] [2])))), (((/* implicit */unsigned long long int) 1058444670))));
                    arr_63 [i_17] [i_18] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((arr_36 [i_17] [i_17] [i_17]), (((/* implicit */unsigned short) arr_11 [(short)10]))))), (arr_33 [i_19] [10ULL] [i_17] [10ULL] [i_17])))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned short)3320)) << (((/* implicit */int) arr_13 [0])))), (((/* implicit */int) (unsigned char)18))))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_45 [2ULL]))))), (min((((/* implicit */unsigned int) (unsigned char)255)), (arr_34 [i_17] [i_18] [(short)8])))))));
                }
            } 
        } 
    } 
}
