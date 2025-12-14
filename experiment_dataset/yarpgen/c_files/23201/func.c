/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23201
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
    var_19 = ((/* implicit */long long int) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */int) arr_0 [i_0] [(unsigned short)11])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) || (((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])))))));
            var_20 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (_Bool)0)))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_3 [i_0] [i_1]))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])))))));
        }
        for (unsigned short i_2 = 1; i_2 < 24; i_2 += 1) /* same iter space */
        {
            arr_7 [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) (unsigned short)15872)) ? (-1173037966338463342LL) : (((/* implicit */long long int) 3635592827U)));
            /* LoopNest 2 */
            for (unsigned int i_3 = 4; i_3 < 22; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_14 [i_0 + 1] [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [i_2 - 1])) ^ (var_16)));
                        arr_15 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_2 - 1] [(unsigned short)0] [i_4] [i_3 + 1])) ? (((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_0] [i_2] [i_2]))))))));
                        arr_16 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (5096242814556845815ULL)))));
                        arr_17 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? (arr_14 [i_0 - 1] [i_0 + 2] [i_2 - 1] [i_2 + 1] [i_2 + 1]) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))));
                        arr_18 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_4);
                    }
                } 
            } 
            var_23 = ((((/* implicit */_Bool) 5799429307886459774LL)) ? (697620430689113409LL) : ((-9223372036854775807LL - 1LL)));
            arr_19 [i_2] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_2])) / (((/* implicit */int) var_2)))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
            {
                var_24 = ((/* implicit */signed char) (!(arr_9 [i_0 - 1] [i_0] [i_2] [i_5])));
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2675567001255697177LL)) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2])) : (arr_21 [i_0] [i_2 + 1] [i_5]))) << (((((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [14U] [i_2] [i_5]))) : (var_9))) - (4294967288U))))))));
                arr_22 [i_0] [i_0] = ((var_16) + (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_0 + 2])));
            }
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_7 = 1; i_7 < 24; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 4; i_8 < 21; i_8 += 3) 
                    {
                        arr_29 [i_8] [i_2] [i_2] [i_2] [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 14072839978107008643ULL)) && (((/* implicit */_Bool) arr_21 [i_0] [14ULL] [14ULL])))) ? (((/* implicit */int) arr_5 [i_7 + 1])) : (((((/* implicit */int) arr_26 [i_6] [i_2] [i_0 - 1])) + (((/* implicit */int) arr_0 [i_2] [i_2]))))));
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((unsigned int) (_Bool)1)))));
                        arr_30 [i_0] [i_0] [i_0 + 2] [i_8] [i_0] = ((/* implicit */unsigned char) (+(1772867109)));
                        var_27 = ((/* implicit */short) arr_8 [i_0] [i_0]);
                        var_28 = ((/* implicit */short) ((_Bool) (+(8439266532421492089LL))));
                    }
                    var_29 = ((/* implicit */signed char) ((unsigned int) 13490543871140332404ULL));
                    var_30 ^= ((/* implicit */long long int) (((+(((/* implicit */int) var_12)))) == (((/* implicit */int) arr_5 [i_7]))));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55285)) ? (arr_3 [1LL] [12]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) || ((((_Bool)1) || (((/* implicit */_Bool) (unsigned char)70))))));
                    var_32 = ((/* implicit */_Bool) (+((+(-4621764353084291828LL)))));
                }
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        {
                            arr_35 [i_0 + 2] [24LL] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_11 [i_9] [i_2 + 1] [i_6] [i_9] [i_9] [i_6]))));
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) arr_34 [i_0] [i_0] [i_0] [9LL] [i_10] [i_0]))));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775795LL)) ? (((/* implicit */int) (short)24934)) : (-1508119678)))) & (arr_3 [i_0 + 2] [i_0 - 1])));
                            arr_36 [(short)11] [(short)21] [i_6] [i_6] [i_10] = ((/* implicit */short) ((((/* implicit */int) arr_32 [i_0] [i_0 + 1] [i_6] [i_9] [i_10] [i_2 + 1])) >> (((arr_2 [i_0 + 1]) - (1743469260)))));
                        }
                    } 
                } 
                arr_37 [i_2] [i_2] [i_2] [i_0] = ((((((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) (short)-28874)) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((-2675567001255697178LL) + (2675567001255697201LL))) - (23LL))));
                arr_38 [(signed char)1] [i_2 - 1] [(signed char)1] = ((/* implicit */short) (~(((((/* implicit */int) var_13)) & (((/* implicit */int) (_Bool)1))))));
            }
        }
        arr_39 [i_0] = ((/* implicit */unsigned char) arr_28 [i_0]);
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((unsigned short) var_3))) : (((/* implicit */int) ((short) 1772867132)))));
    }
    var_36 = ((unsigned char) 3384762949U);
}
