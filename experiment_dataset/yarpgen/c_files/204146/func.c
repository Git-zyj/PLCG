/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204146
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
    var_16 = ((/* implicit */short) (~((-(1417717686)))));
    var_17 += ((/* implicit */short) ((((/* implicit */int) var_10)) != (((/* implicit */int) ((short) var_12)))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((signed char) (signed char)-25));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
                    {
                        arr_10 [(unsigned char)5] [i_2 - 1] [i_3] = ((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) -2139080337))))) < (((/* implicit */int) (signed char)-99)))) ? (((((/* implicit */_Bool) arr_7 [i_0 - 3])) ? (((((/* implicit */int) var_10)) - (((/* implicit */int) arr_1 [16] [(short)2])))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) (unsigned char)0))))))));
                        var_19 += ((/* implicit */short) (+(9223372036854775807LL)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            arr_15 [i_0 - 3] [i_1] [i_3] [i_3] = ((long long int) arr_0 [i_0 + 1]);
                            arr_16 [i_0 - 2] [i_1] [(signed char)11] [i_3] [i_4] = ((/* implicit */long long int) (+(((((/* implicit */int) (short)32760)) - (((/* implicit */int) (signed char)-108))))));
                            arr_17 [i_3] [i_1] [(unsigned short)4] [i_1] [(unsigned short)4] = ((/* implicit */unsigned short) (unsigned char)153);
                            var_20 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_11 [9U] [(short)0])))))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            arr_21 [i_5] [i_3] [i_2] [i_2 + 1] [i_1] [i_3] [i_0 - 2] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_1] [i_0] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_12))));
                            arr_22 [i_5] [i_3] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1] [i_2 - 1]))));
                            var_21 = arr_11 [i_0 - 2] [i_2 - 1];
                        }
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_22 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)39446))));
                            var_23 += ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_23 [i_1] [i_2 + 1] [i_6] [i_6] [i_6])) <= (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))))));
                        }
                        var_24 = ((/* implicit */int) (+((((~(9074630804978407359LL))) ^ (((/* implicit */long long int) arr_13 [i_0] [i_1] [i_1] [i_1] [i_1]))))));
                    }
                    for (short i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) max((((((/* implicit */int) min(((short)16), (((/* implicit */short) (unsigned char)5))))) & (((/* implicit */int) arr_0 [i_2 + 1])))), ((+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)174))))))));
                        arr_29 [23LL] [i_7] [(_Bool)1] [i_7] = ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (((/* implicit */short) var_7)))))) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7] [i_1] [i_7] [i_7]))) : (16222529447588203795ULL))))));
                        var_26 = ((12716227009779931207ULL) != (((/* implicit */unsigned long long int) 1282519526)));
                        arr_30 [i_7] [i_7] [i_2] [i_1] [i_7] = ((((((/* implicit */_Bool) arr_8 [i_0 + 1] [0LL] [i_2] [i_2 - 1])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23148))) : (var_13))) : (((/* implicit */unsigned long long int) var_0)))) < (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                    }
                    for (short i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                    {
                        var_27 -= min((((((/* implicit */_Bool) max(((signed char)63), ((signed char)-30)))) ? (((/* implicit */int) (_Bool)0)) : (495679532))), (((arr_6 [(short)0] [i_0] [i_0] [(short)0]) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) var_7)))));
                        var_28 += ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_8] [i_1] [i_1] [i_8]))))))));
                        var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)66))) : (-2811488509020877507LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_0])))) : (((9074630804978407374LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 3]))))));
                        arr_33 [(_Bool)1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)173))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 2; i_9 < 22; i_9 += 3) 
                    {
                        arr_38 [i_9] [1LL] [1LL] [i_1] [1LL] [1LL] = ((/* implicit */_Bool) var_6);
                        var_30 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_7 [(short)13]))))));
                        arr_39 [i_9] [i_1] [(unsigned char)5] [i_9] [i_2] = ((/* implicit */unsigned int) arr_32 [i_9] [(signed char)19] [i_9] [i_2 + 1] [i_0 - 3] [i_0 - 3]);
                    }
                    var_31 -= min((max((arr_3 [i_2 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))) & (255LL)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_1] [i_2 + 1] [i_2 + 1] [(signed char)14]))))));
                    var_32 = ((/* implicit */short) ((((-1376634463983668960LL) != (757534098949143057LL))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0 - 1]))))) : (((((/* implicit */_Bool) arr_34 [i_0 - 1])) ? (arr_34 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                }
            } 
        } 
        var_33 = (-(arr_36 [i_0 - 2] [i_0] [i_0 + 1] [i_0] [(signed char)5]));
        arr_40 [1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(2909854073U)))) && (((arr_4 [i_0]) < (var_12)))));
    }
}
