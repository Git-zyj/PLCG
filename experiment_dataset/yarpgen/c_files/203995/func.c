/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203995
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)14)) ? (arr_0 [(signed char)5] [i_0]) : (((unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (121555796U))))));
        var_11 = ((/* implicit */signed char) ((((arr_0 [i_0] [i_0]) - (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) var_4))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102)))));
        arr_4 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [(_Bool)1]);
        var_12 -= ((/* implicit */unsigned long long int) (signed char)70);
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_13 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) max((((((/* implicit */int) var_5)) == (((/* implicit */int) arr_1 [i_0] [(short)7])))), ((_Bool)0))))));
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (short)3)))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_1] [(_Bool)0])) : (((/* implicit */int) (unsigned short)63239))))))) ? (((arr_0 [i_1 - 1] [i_1 - 1]) * (arr_0 [i_1 - 1] [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (unsigned short)20620)), (arr_0 [(signed char)11] [(signed char)11]))) == (((/* implicit */unsigned long long int) ((1LL) + (288221580058689536LL))))))))));
            arr_7 [i_0] [i_0] |= ((/* implicit */unsigned char) ((long long int) arr_2 [i_0]));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 17; i_3 += 4) 
            {
                for (unsigned int i_4 = 3; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) ((signed char) (((_Bool)1) ? (min((((/* implicit */unsigned long long int) 1LL)), (arr_8 [i_3 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -16LL)) && ((_Bool)1))))))));
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [i_2 - 1])), (max((8272623174287428976LL), (((/* implicit */long long int) (signed char)64)))))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (-3828369619344561969LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-118)))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    {
                        var_18 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4611884398618539777LL)) ? (-1440510032454885623LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12354))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned char)16] [i_2 - 1] [i_2] [i_2 - 1]))) > (arr_3 [i_2 - 1])))))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_3 [i_0]))));
                            var_20 = ((/* implicit */int) ((short) (((_Bool)1) ? (18014398508957696LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                            arr_26 [(unsigned short)17] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */long long int) max((arr_13 [i_7 - 1] [i_7 - 1] [i_2 - 1] [i_2 - 1]), (((/* implicit */short) ((((/* implicit */int) arr_13 [i_7 - 1] [i_7 - 1] [i_2 - 1] [i_2 - 1])) >= (((/* implicit */int) arr_13 [i_7 - 1] [i_7 - 1] [i_2 - 1] [i_2 - 1])))))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((((/* implicit */long long int) max((((((/* implicit */unsigned long long int) -3828369619344561969LL)) >= (arr_3 [i_6]))), (arr_9 [i_7 - 1] [i_7 - 1] [i_2 - 1])))), (max((var_9), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)50))))))))))));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((arr_27 [6U] [i_8 - 1] [i_8]), (((/* implicit */unsigned long long int) var_4)))), (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_8 - 1] [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) -288221580058689537LL))))))) ? (((/* implicit */int) (unsigned char)56)) : ((-(((/* implicit */int) arr_23 [i_8 - 1] [i_0] [i_0] [i_0]))))));
            /* LoopSeq 3 */
            for (unsigned short i_9 = 4; i_9 < 15; i_9 += 3) 
            {
                var_23 = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_9 [i_8 - 1] [i_9 - 3] [i_9 + 3]), (arr_9 [i_8 - 1] [i_9 - 1] [i_9 + 2])))), (((((/* implicit */_Bool) (short)21501)) ? (((/* implicit */int) ((unsigned short) var_0))) : (((((/* implicit */int) arr_14 [(signed char)14] [i_9])) << (((/* implicit */int) (unsigned char)28))))))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 4; i_10 < 16; i_10 += 3) 
                {
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-3)) ? (2113929216U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))))))));
                            var_25 = max((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (short)0)) > (((/* implicit */int) arr_30 [i_8 - 1] [i_9 + 2] [i_11]))))), (((signed char) (unsigned char)98))))), (((arr_35 [i_0] [i_0] [i_8 - 1] [i_9 + 1]) / (arr_35 [i_0] [(unsigned char)0] [i_8 - 1] [i_9 + 2]))));
                            var_26 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_8])) | (((/* implicit */int) arr_15 [i_8] [8U] [i_9] [i_11]))))) ? (((/* implicit */int) (unsigned short)46282)) : (((/* implicit */int) var_4)))), (((/* implicit */int) arr_40 [i_9 + 3] [i_8 - 1]))));
                        }
                    } 
                } 
                arr_41 [i_0] [17LL] [(signed char)13] [i_9] = ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) var_5)) == (((((/* implicit */int) arr_25 [i_8] [(unsigned char)5])) / (536838144)))))), ((short)-13)));
                /* LoopSeq 3 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_27 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) (short)(-32767 - 1))), (3107670069086213256LL)));
                    arr_44 [i_9] [i_8 - 1] [i_9] = ((/* implicit */short) arr_9 [i_8 - 1] [i_9 - 3] [i_12]);
                    var_28 = ((/* implicit */unsigned char) max((((/* implicit */long long int) 1992051243)), (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_8 - 1] [i_9 + 1] [i_9 + 1]))) : (var_8)))));
                    var_29 ^= (~((~(((/* implicit */int) arr_33 [i_9 - 1] [i_8 - 1] [i_8] [i_8 - 1])))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    arr_48 [i_9] [i_9] [i_9 - 4] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_8 - 1] [14LL] [i_9] [i_8 - 1])) | (min((arr_35 [i_13] [(short)16] [i_8] [i_0]), (-1992051244)))))) ? (((/* implicit */int) (unsigned char)61)) : ((-(((/* implicit */int) arr_14 [i_8 - 1] [i_8 - 1]))))));
                    var_30 = ((/* implicit */_Bool) (unsigned short)9717);
                    var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)49152), (((/* implicit */unsigned short) var_0))))) << (((/* implicit */int) var_2)))))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) -936371236)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)59))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)69))) % (arr_38 [i_9])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((arr_30 [i_14] [i_9 - 3] [i_0]), ((short)-27665)))))) : (max((min((((/* implicit */unsigned long long int) arr_40 [i_8] [i_14])), (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_34 [i_0] [i_8] [(signed char)7] [(signed char)7])))))))));
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) var_2)))) : ((~(((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)35264)) : (((/* implicit */int) arr_32 [i_14] [i_0] [i_0] [i_0]))))) : (arr_3 [i_8 - 1]))))));
                }
                var_34 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) var_9)), (arr_0 [i_8 - 1] [i_8 - 1]))), (((/* implicit */unsigned long long int) ((var_9) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)13496))))))))));
            }
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_35 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_17 [(unsigned short)15] [i_0] [i_0] [i_0])) == (((/* implicit */int) (unsigned char)172)))));
                var_36 ^= ((/* implicit */_Bool) 7367302947699150685LL);
                var_37 = ((/* implicit */signed char) ((((unsigned long long int) var_7)) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_49 [i_15] [i_8] [i_8] [i_15] [i_8] [(short)12])))))));
            }
            /* vectorizable */
            for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) 
            {
                arr_57 [(_Bool)1] [i_8 - 1] [i_8 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1152921504606842880ULL)) ? (1288917561U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47)))));
                var_38 = ((/* implicit */int) var_9);
                var_39 = ((/* implicit */short) ((unsigned char) arr_25 [i_8 - 1] [i_8 - 1]));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 18; i_17 += 3) 
                {
                    for (signed char i_18 = 0; i_18 < 18; i_18 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */_Bool) (+(arr_56 [i_8 - 1] [1] [i_8 - 1] [i_8 - 1])));
                            arr_63 [i_16] [i_16] = ((/* implicit */int) arr_60 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8]);
                            arr_64 [i_0] [i_18] = ((/* implicit */short) ((long long int) arr_40 [i_8 - 1] [i_8 - 1]));
                            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) (-(3006049726U))))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (signed char i_19 = 0; i_19 < 18; i_19 += 3) 
            {
                for (signed char i_20 = 1; i_20 < 14; i_20 += 3) 
                {
                    for (unsigned char i_21 = 4; i_21 < 17; i_21 += 2) 
                    {
                        {
                            var_42 = ((/* implicit */int) max((((/* implicit */long long int) (-(min((((/* implicit */int) (_Bool)0)), (var_1)))))), (max((((/* implicit */long long int) var_4)), (7367302947699150685LL)))));
                            arr_75 [i_19] [i_20 + 4] [i_19] [i_0] [i_19] = ((/* implicit */long long int) min((arr_29 [i_19] [6ULL]), ((-(((/* implicit */int) arr_47 [i_0] [i_8] [i_8] [i_19] [i_20 + 2] [i_21]))))));
                        }
                    } 
                } 
            } 
            var_43 = ((/* implicit */_Bool) max((min((arr_0 [i_8 - 1] [i_8 - 1]), (arr_0 [i_8 - 1] [i_8 - 1]))), (min((arr_0 [i_8 - 1] [i_8 - 1]), (arr_0 [i_8 - 1] [i_8 - 1])))));
        }
        for (int i_22 = 0; i_22 < 18; i_22 += 3) 
        {
            var_44 &= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) min((1288917570U), (30720U)))) ? (((arr_69 [i_0]) ? (arr_0 [i_0] [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [(unsigned short)13]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
            /* LoopSeq 2 */
            for (long long int i_23 = 3; i_23 < 17; i_23 += 4) 
            {
                var_45 = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_31 [i_23 + 1] [i_23 - 2] [i_0] [i_0]))))));
                arr_80 [(short)4] [i_22] [i_22] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_22]);
            }
            for (unsigned short i_24 = 0; i_24 < 18; i_24 += 4) 
            {
                var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) && ((!(((/* implicit */_Bool) arr_33 [(signed char)14] [i_22] [i_22] [i_24]))))));
                var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) 5229906192677567356LL))));
            }
        }
    }
    var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((var_9) << (((min((var_9), (((/* implicit */long long int) (short)22287)))) - (22287LL))))) : (((/* implicit */long long int) var_1))));
}
