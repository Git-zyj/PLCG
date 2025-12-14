/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194129
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
    var_11 ^= ((/* implicit */unsigned char) 5873003708209868336ULL);
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) 5873003708209868331ULL)) ? (((/* implicit */unsigned long long int) var_3)) : (12573740365499683279ULL)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */short) (+(((((12573740365499683279ULL) <= (12573740365499683280ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) < (arr_0 [i_0] [(unsigned char)14]))))) : (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) : (4073651601873084842ULL))))), (((((/* implicit */_Bool) 8388607ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106))) : (4073651601873084842ULL)))));
                        var_15 *= ((/* implicit */unsigned char) max(((unsigned short)4835), (((/* implicit */unsigned short) min((arr_2 [i_2] [i_3]), (arr_2 [i_0] [i_3]))))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)170))) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) arr_3 [i_4] [i_5])))))));
            arr_17 [(unsigned char)18] [i_5] &= ((/* implicit */unsigned char) ((14373092471836466774ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4835)))));
        }
        /* vectorizable */
        for (unsigned char i_6 = 4; i_6 < 18; i_6 += 3) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 13489216799455313086ULL)) ? (12753719802929228277ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120)))));
            /* LoopSeq 2 */
            for (unsigned char i_7 = 3; i_7 < 17; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((unsigned long long int) (-(4073651601873084842ULL)))))));
                    arr_26 [i_4] [i_4] [(unsigned short)4] [i_6] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_7 + 2] [i_7 - 3] [i_7 - 3])) & (((/* implicit */int) arr_5 [i_7 + 1] [i_7 - 1] [i_7]))));
                    var_19 = ((/* implicit */short) ((((/* implicit */int) ((short) (_Bool)0))) << (((((arr_18 [i_8]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(_Bool)1] [i_6] [i_7] [i_7] [(_Bool)1]))))) - (7420856633693339847ULL)))));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_7 [i_6])) ? (((/* implicit */int) (unsigned short)60700)) : (((/* implicit */int) arr_7 [15ULL]))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (14373092471836466773ULL) : (14755862481527862845ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6 - 2]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4840))) + (arr_10 [i_9] [(unsigned char)6] [i_9] [i_9]))))))));
                        arr_30 [i_4] [(short)13] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)177))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_33 [i_4] [i_6] [i_7 - 2] [i_8] [i_8] [(unsigned char)18] [i_8] |= ((/* implicit */short) var_6);
                        arr_34 [i_4] [i_6] [i_6 + 1] [i_6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)96)) != (((/* implicit */int) arr_20 [i_6] [i_6]))));
                        var_22 ^= ((/* implicit */_Bool) arr_29 [i_4] [(_Bool)1] [i_7 + 1] [i_7] [i_8] [i_10]);
                        var_23 = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_4] [i_10]))));
                    }
                }
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)32)) ? (14373092471836466779ULL) : (((/* implicit */unsigned long long int) -5096623994737340790LL))));
            }
            for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                arr_37 [i_6] [i_6] [i_6 + 1] [6LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_6] [i_6]))));
                var_25 -= ((/* implicit */short) ((((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_11] [i_6] [i_11] [i_6] [i_4] [i_4]))))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)78)))))));
            }
            var_26 = ((/* implicit */short) (+((+(12573740365499683279ULL)))));
            arr_38 [i_4] [i_6] = ((/* implicit */unsigned short) ((arr_28 [i_4] [i_4] [10LL] [i_6 - 1] [i_4]) != (((/* implicit */unsigned long long int) arr_10 [i_6 - 2] [i_6 - 3] [i_6 - 3] [i_6 - 2]))));
        }
        var_27 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))) <= (min((((/* implicit */long long int) (short)-7485)), (-8366230119962162303LL)))))), (((((/* implicit */int) arr_3 [i_4] [i_4])) + (((/* implicit */int) (short)25868))))));
    }
}
