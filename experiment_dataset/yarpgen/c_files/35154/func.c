/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35154
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        arr_10 [i_0] [(unsigned short)13] [i_0] [i_0] [8] = ((/* implicit */int) ((signed char) ((unsigned char) arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                        var_18 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))) * (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1])))))));
                    }
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */int) ((signed char) ((_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        arr_13 [i_0] [i_1] [i_2] [i_0] = (~(((((/* implicit */int) (short)25534)) / (((/* implicit */int) (unsigned short)51574)))));
                    }
                    var_20 = ((/* implicit */short) var_6);
                    var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 9223372036854775792LL)) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) var_0))))));
                    var_22 -= ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned short)0)) ? (-2122945137377231082LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13958)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 2) 
    {
        arr_17 [(signed char)8] [i_5] = ((/* implicit */unsigned int) min((arr_6 [i_5] [i_5 + 1] [i_5 + 2] [i_5 + 1]), (arr_6 [i_5] [(unsigned short)8] [i_5 - 1] [(unsigned short)13])));
        var_23 ^= ((/* implicit */unsigned char) var_8);
        /* LoopSeq 1 */
        for (int i_6 = 1; i_6 < 13; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    {
                        arr_24 [i_5] = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)51574)), (var_1))));
                        /* LoopSeq 2 */
                        for (short i_9 = 1; i_9 < 12; i_9 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_25 [i_9 + 2] [i_9 + 1] [i_6 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 2])) : (((/* implicit */int) arr_25 [i_9 + 1] [i_9 + 3] [i_6 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 1]))))) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) ((_Bool) var_11))))))));
                            arr_28 [i_9] [i_9] [i_5] [i_8] [i_5] [i_5 + 2] [i_5 + 2] = ((/* implicit */unsigned short) ((((_Bool) (signed char)126)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51574))) : (min((((/* implicit */unsigned int) arr_18 [i_6] [i_6 + 1] [i_9 - 1])), (2228537293U)))));
                            arr_29 [i_5] [i_6] [12] [i_5] [(signed char)2] [(signed char)0] [i_8] = ((/* implicit */unsigned int) (+(((int) var_10))));
                            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 457028507)) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) min(((unsigned short)51574), (((/* implicit */unsigned short) var_15))))))))));
                        }
                        for (short i_10 = 1; i_10 < 12; i_10 += 1) /* same iter space */
                        {
                            var_26 ^= max((((/* implicit */int) max((arr_18 [i_5] [i_5 + 2] [i_10 + 3]), (arr_18 [i_5] [i_5 - 1] [i_10 - 1])))), ((+(((/* implicit */int) arr_18 [i_5 - 1] [i_5 - 1] [i_10 + 2])))));
                            arr_32 [2] [i_8] &= ((/* implicit */unsigned int) arr_1 [i_10 + 3] [i_6 + 1]);
                        }
                        arr_33 [i_5] [9U] [i_7] [i_5] = ((((/* implicit */_Bool) ((arr_5 [i_5 + 1]) + (var_12)))) ? (((((/* implicit */_Bool) 147548536)) ? (arr_5 [i_5 + 1]) : (((/* implicit */unsigned int) -1898591165)))) : (min((((/* implicit */unsigned int) (_Bool)1)), (arr_5 [i_5 + 2]))));
                        arr_34 [(_Bool)1] [6LL] [i_7] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_30 [1LL] [i_6 + 1] [i_7] [i_8])), (arr_4 [i_5] [(_Bool)1]))) & (((/* implicit */long long int) min((-25), (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (-5798539092725717071LL)))) ? (((((/* implicit */_Bool) var_6)) ? (arr_4 [i_5] [i_7]) : (((/* implicit */long long int) 2228537301U)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [4U] [i_7]))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57119)))));
                    }
                } 
            } 
            var_27 += ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [8ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5] [i_6] [i_5]))) : (arr_0 [i_5] [i_6 - 1])))) ? (min((var_8), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((-230046895) / (((/* implicit */int) (_Bool)1))))))));
        }
    }
    for (signed char i_11 = 3; i_11 < 16; i_11 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */signed char) ((arr_4 [(short)15] [(short)15]) * (((arr_4 [0LL] [i_11]) ^ (arr_4 [i_11 + 2] [(signed char)11])))));
        var_29 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_11 + 2] [4] [i_11 + 2] [(signed char)16] [i_11 - 1] [(short)14])) + (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (unsigned char)231)) ? (2228537308U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13951)))))))));
        arr_37 [i_11] [i_11 + 3] = ((/* implicit */unsigned short) (~(11466964914392605287ULL)));
    }
    for (signed char i_12 = 3; i_12 < 16; i_12 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_13 = 0; i_13 < 19; i_13 += 3) 
        {
            for (unsigned int i_14 = 1; i_14 < 18; i_14 += 2) 
            {
                for (int i_15 = 1; i_15 < 16; i_15 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_16 = 0; i_16 < 19; i_16 += 2) 
                        {
                            arr_50 [i_12] [i_13] [i_14] [i_13] [i_16] [i_13] [i_13] = ((/* implicit */_Bool) ((long long int) arr_2 [i_13] [i_15 + 1] [i_16]));
                            arr_51 [i_12 - 2] [i_13] [i_14 - 1] [i_15] [i_16] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        /* LoopSeq 1 */
                        for (signed char i_17 = 0; i_17 < 19; i_17 += 4) 
                        {
                            arr_54 [i_12] [i_13] [i_14] [i_15] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_6 [i_14] [i_14 - 1] [18ULL] [i_15 + 3]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) (signed char)-74)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                            var_30 *= ((/* implicit */short) var_0);
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (signed char)-58))));
                            arr_55 [i_13] [i_13] [i_13] [i_13] [(_Bool)1] = ((/* implicit */unsigned char) arr_44 [i_14 + 1] [i_14 + 1]);
                        }
                    }
                } 
            } 
        } 
        arr_56 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20700))) ^ (((((/* implicit */_Bool) max((-134217728), (((/* implicit */int) var_3))))) ? (arr_46 [i_12] [i_12] [i_12 + 3] [i_12] [i_12 - 3] [(short)0]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)248)))))))));
        /* LoopNest 3 */
        for (unsigned int i_18 = 0; i_18 < 19; i_18 += 4) 
        {
            for (int i_19 = 0; i_19 < 19; i_19 += 2) 
            {
                for (int i_20 = 0; i_20 < 19; i_20 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_21 = 1; i_21 < 16; i_21 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (var_1)))))))));
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)246)))))));
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) max((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)57120)))), (((int) (_Bool)1)))), (((/* implicit */int) ((signed char) var_3))))))));
                            arr_67 [i_18] [i_19] [i_20] [12LL] |= ((/* implicit */unsigned long long int) 1373450907U);
                            var_35 = ((/* implicit */unsigned short) -2032063785);
                        }
                        for (unsigned short i_22 = 1; i_22 < 17; i_22 += 2) 
                        {
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)57124))) ? (((/* implicit */int) (unsigned short)38788)) : (max((-147548528), (((/* implicit */int) (unsigned short)38781))))));
                            var_37 = ((/* implicit */int) ((arr_48 [i_20]) * (((/* implicit */unsigned int) max((arr_11 [i_12]), (((/* implicit */int) ((_Bool) (short)-128))))))));
                            arr_70 [i_22 + 1] [i_20] [i_19] [4] [i_12 - 2] [i_12 - 1] = ((/* implicit */signed char) min(((~(((/* implicit */int) var_15)))), (((((/* implicit */int) (unsigned short)57114)) + (((/* implicit */int) (short)-117))))));
                        }
                        arr_71 [(unsigned char)16] [i_18] [(_Bool)1] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) arr_9 [(_Bool)1] [i_18] [i_19] [i_20] [0LL] [i_18])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)57125))))) : (((arr_6 [(_Bool)1] [i_18] [i_12 + 3] [i_20]) ? (-7074750553731932178LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_12] [i_18] [i_12 + 3] [i_20])))))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) arr_6 [i_12 + 1] [i_12 - 1] [i_20] [i_20]))) ^ (max((var_12), (((/* implicit */unsigned int) (-(147548545))))))));
                        arr_72 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_62 [i_12 + 3] [17LL] [17U] [i_12 - 3]))) - (((/* implicit */int) ((_Bool) arr_7 [9] [i_12] [i_12])))));
                    }
                } 
            } 
        } 
        var_39 = ((/* implicit */_Bool) var_5);
    }
}
