/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40676
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(unsigned char)3] = ((/* implicit */unsigned char) arr_0 [i_0 - 1]);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [10LL] [i_1] [i_1])), (((((/* implicit */_Bool) (+(arr_4 [i_0])))) ? (((((/* implicit */_Bool) var_11)) ? (-2572974003975574250LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))))) : (((8277145427722961809LL) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]))))))))))));
                                var_20 = max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) 7665836990033715391LL)) : (arr_12 [i_2] [i_3 - 1] [i_3] [i_3] [i_3] [i_3]))), (((/* implicit */unsigned long long int) arr_15 [i_1] [i_3 + 1] [(unsigned char)10] [i_4])));
                            }
                        } 
                    } 
                    var_21 = (~(((3051283658613092528ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                    var_22 = min((((/* implicit */long long int) (unsigned char)144)), (var_3));
                    var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [i_0 - 1]), (((/* implicit */unsigned long long int) (unsigned char)112))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0 - 1]))));
                }
                for (unsigned char i_5 = 2; i_5 < 14; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned long long int) var_6))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (13424813168985512035ULL))) : (((/* implicit */unsigned long long int) var_3))));
                                var_25 *= ((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_7]);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_17 [i_5 + 1] [i_5 - 1] [i_5 - 1]) << (((((/* implicit */int) var_13)) - (199)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)144)), (arr_17 [i_5 - 2] [i_5 - 1] [i_5 - 2])))) : (((7974595993599606656ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32)))))));
                }
                arr_23 [i_0] [i_0 - 1] = (!(((/* implicit */_Bool) (-(arr_19 [12ULL] [i_0 - 1] [(_Bool)1] [i_0])))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */long long int) arr_25 [i_8]);
        arr_26 [i_8] = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_25 [i_8]))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned char i_12 = 4; i_12 < 18; i_12 += 2) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_34 [i_12 + 1] [i_12 - 1] [i_12 + 3])) ? (((/* implicit */int) arr_34 [i_12 + 4] [i_12 + 3] [i_12 + 4])) : (((/* implicit */int) arr_34 [i_12 + 1] [i_12 + 2] [i_12 - 4]))))));
                        var_29 |= ((/* implicit */_Bool) arr_34 [i_9] [i_10] [i_9]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (_Bool)1)), (2572974003975574259LL)));
                            var_31 ^= ((/* implicit */unsigned long long int) arr_29 [i_10]);
                        }
                        for (long long int i_14 = 0; i_14 < 22; i_14 += 4) 
                        {
                            var_32 = arr_43 [i_9] [i_9] [i_11] [i_12] [i_14];
                            var_33 |= ((/* implicit */unsigned char) 8872352107063016614ULL);
                            var_34 = ((/* implicit */_Bool) arr_32 [i_10]);
                            arr_45 [i_9] [i_9] [(_Bool)1] [i_11] [i_14] = var_12;
                            arr_46 [i_14] [i_12] [i_11] [i_11] [i_10] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (arr_42 [i_11] [i_9] [i_10] [i_11] [i_12 - 3]))))));
                        }
                    }
                } 
            } 
            var_35 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_9] [i_9] [i_10] [i_10])) ? (arr_35 [i_10] [21ULL] [i_9] [i_9]) : (arr_43 [i_9] [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_9] [i_9])) || (((/* implicit */_Bool) arr_35 [i_10] [i_10] [(_Bool)1] [i_10])))))) : (((((/* implicit */_Bool) arr_43 [i_10] [i_10] [i_9] [i_9] [i_9])) ? (arr_43 [i_9] [i_9] [i_9] [i_9] [i_10]) : (arr_35 [i_9] [i_9] [(unsigned char)2] [6ULL]))));
        }
        arr_47 [i_9] = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) arr_25 [i_9])), (((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) (unsigned char)181))))))));
    }
    for (unsigned char i_15 = 2; i_15 < 12; i_15 += 3) /* same iter space */
    {
        var_36 += max((arr_19 [i_15] [i_15] [i_15 + 2] [i_15]), ((+(arr_44 [i_15 - 1] [i_15 + 2] [i_15 + 1] [0ULL] [i_15 + 3]))));
        /* LoopNest 3 */
        for (unsigned char i_16 = 1; i_16 < 14; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 2; i_17 < 12; i_17 += 2) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_37 += ((/* implicit */unsigned char) min((var_8), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_38 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_15 - 1] [i_16] [i_17] [(unsigned char)2]))));
                        var_39 = ((/* implicit */unsigned long long int) arr_5 [i_15] [12ULL] [(_Bool)1]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (unsigned char i_20 = 1; i_20 < 13; i_20 += 3) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        arr_63 [i_15 + 2] = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)12)), (2110247362678146505LL)));
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_28 [i_20 - 1] [i_21]) >> (((arr_28 [i_15 + 3] [i_15 - 1]) - (3874196034531767792LL)))))) ? (min((arr_28 [i_21] [i_19]), (arr_28 [i_15 - 1] [i_19]))) : (var_16))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_22 = 2; i_22 < 12; i_22 += 3) /* same iter space */
    {
        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3277351381144579445LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8277145427722961809LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3886292929097782728LL)))) : (max((max((((/* implicit */unsigned long long int) arr_41 [(_Bool)1] [i_22 - 2] [i_22 + 3] [i_22 - 2] [i_22] [i_22] [i_22 + 3])), (arr_35 [i_22] [i_22 + 1] [i_22 + 2] [i_22]))), (((/* implicit */unsigned long long int) ((var_14) % (((/* implicit */long long int) ((/* implicit */int) var_18))))))))));
        var_42 = var_12;
        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22])) ? (((arr_3 [i_22] [i_22 + 1] [i_22]) << (((var_11) + (5218660084913672578LL))))) : (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) 6460132940093120368LL)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) arr_20 [i_22] [i_22 + 2] [i_22 + 1] [i_22]))))))))));
        arr_66 [i_22] = ((/* implicit */long long int) arr_2 [i_22] [i_22] [i_22]);
        var_44 |= ((/* implicit */unsigned long long int) (unsigned char)209);
    }
    var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) * (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50)))));
    var_46 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))))), (var_15))))) | (((var_2) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) 3886292929097782710LL)) : (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)222)) - (216))))))))));
}
