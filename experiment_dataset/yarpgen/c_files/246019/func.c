/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246019
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((int) var_5)) / ((+(((((/* implicit */int) (unsigned short)64515)) + (((/* implicit */int) (unsigned short)23291))))))));
                arr_5 [i_0] = ((((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1 - 3])))) >= ((+(((/* implicit */int) arr_0 [i_0 + 3])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_4 = 4; i_4 < 18; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)23293)) ? (arr_11 [(unsigned short)15] [i_6 - 1]) : (-705484350042797989LL)))));
                            arr_20 [i_6] [i_2] [i_4] [(short)18] [i_3] [i_3] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) -30849513)) && (((((/* implicit */int) (short)-14698)) < (((/* implicit */int) var_13))))));
                            var_19 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)42245))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_16 [i_5 + 1] [i_2 - 1] [i_4])))))));
                            var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (var_0))))));
                        }
                    } 
                } 
                arr_21 [i_4 - 1] [i_3] [12] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_14)) : ((~(arr_11 [i_4] [9])))));
                var_22 = ((/* implicit */signed char) (short)-14720);
                var_23 = ((/* implicit */signed char) 553939377U);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 17; i_7 += 4) 
                {
                    for (unsigned int i_8 = 3; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_7])) && ((_Bool)1))))) : (var_10)));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (30849512))))));
                            arr_28 [i_2] [i_3 - 1] [18] [(short)16] [i_7] [i_8] [1ULL] = ((/* implicit */signed char) ((_Bool) ((int) (unsigned short)23275)));
                        }
                    } 
                } 
            }
            for (long long int i_9 = 1; i_9 < 18; i_9 += 2) 
            {
                var_26 = (-((~(((/* implicit */int) arr_15 [(signed char)18] [i_3 - 1] [i_9])))));
                var_27 = ((/* implicit */_Bool) arr_12 [i_2] [i_3] [6LL]);
                var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (3444359756U) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_26 [i_2 - 1] [i_9 + 1] [i_3 - 1])))))));
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((int) ((((/* implicit */_Bool) 1386904730)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42250)))))))));
                arr_34 [i_2 - 1] = ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_3] [i_10] [(unsigned short)2] [i_10]))) : ((-(526426725U))));
                var_30 = ((/* implicit */short) var_15);
            }
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_6 [i_2 - 1] [i_11 + 1]), (((arr_22 [i_2] [2] [i_12] [(_Bool)1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6996)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0)))))));
                        arr_39 [10ULL] [10ULL] [i_11 + 1] [10ULL] [i_12] [i_2 - 1] = ((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < (((unsigned int) (_Bool)1)))) ? (((arr_14 [i_2 - 1] [i_12 + 1] [i_12 + 1]) ? (((/* implicit */int) (unsigned short)23299)) : (((/* implicit */int) arr_14 [i_2 - 1] [i_12 + 1] [(_Bool)1])))) : (((/* implicit */int) ((arr_13 [i_3 - 1] [i_11 + 1] [i_11 + 1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_8 [i_3 - 1] [i_2 - 1])) : (((/* implicit */int) arr_8 [i_3 - 1] [i_2 - 1])))), ((((~(((/* implicit */int) arr_19 [i_3 - 1] [i_3] [(_Bool)1] [i_2] [i_2])))) * (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_7))))))));
            arr_40 [i_2 - 1] [i_2] = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_33 [i_2 - 1] [i_2 - 1] [i_2] [1U]))))));
        }
        for (short i_13 = 2; i_13 < 18; i_13 += 1) 
        {
            arr_43 [i_13] &= min((((/* implicit */int) arr_38 [(short)16] [i_2] [i_13] [12])), ((~(((/* implicit */int) var_7)))));
            arr_44 [i_2 - 1] [i_2] = ((/* implicit */short) ((_Bool) var_6));
        }
        var_33 = ((/* implicit */unsigned int) ((((arr_13 [i_2 - 1] [i_2] [i_2 - 1]) < (arr_13 [i_2 - 1] [i_2] [i_2 - 1]))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((var_10) == (((/* implicit */long long int) ((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)1] [i_2 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_2))))))))));
    }
}
