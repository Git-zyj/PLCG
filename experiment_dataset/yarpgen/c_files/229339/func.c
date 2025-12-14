/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229339
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)1)) : (var_3)))))))));
            arr_4 [i_1 + 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -314958101)) ? (((/* implicit */int) (short)-32767)) : ((+(((/* implicit */int) arr_1 [i_1 - 1]))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2])))))) | (((unsigned long long int) arr_0 [i_0 - 2] [i_1]))))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 314958101)), (5636647575286740980ULL)))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12589)) ? (((var_5) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1])) : (-314958103))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)14)))))))) ? (max((arr_0 [i_0 - 2] [i_0 - 2]), (arr_9 [i_3] [i_2] [i_2] [i_3] [i_0 + 1] [i_2]))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_1)))) ? (-1722414193) : (((/* implicit */int) ((signed char) (short)-5799))))))));
                    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0] [i_0] [i_0 - 2] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-5809))))) ? (arr_6 [i_1 - 1] [i_1 + 2] [i_1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), ((unsigned short)6925))))))) << (((((/* implicit */int) ((short) arr_10 [i_0] [i_0] [i_3] [i_3]))) + (24301)))));
                }
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (18446744073709551602ULL)));
                    var_16 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                }
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 18062995774690238435ULL))) ? (((((/* implicit */_Bool) (+(arr_6 [i_2] [i_1] [i_0 - 1] [i_0 - 1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40000))) - (8041559285065948588ULL))) : (((/* implicit */unsigned long long int) arr_2 [i_0 - 1])))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)1213)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)9335))))))))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 1099511627775ULL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_1 + 2] [i_5] [i_1] [i_6])) || (((/* implicit */_Bool) -141094977055683986LL)))))) - (((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */unsigned long long int) var_8)) : (var_1))))))))));
                            var_19 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) < (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 268435455U)) : (10163723840716368037ULL))))) ? (var_1) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (var_2) : (arr_11 [i_0] [i_0] [i_0] [i_0]))))))));
                            arr_20 [i_0] [i_6] [i_0 + 1] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 18294441778736509689ULL)))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_7 = 1; i_7 < 10; i_7 += 2) 
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+(-6492750713923478579LL))))));
                /* LoopSeq 3 */
                for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) ((arr_26 [i_1 + 4] [i_0 - 2] [i_1 + 4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) var_3)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_27 [i_7 - 1] [i_7 - 1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (~(3ULL)))) ? (((/* implicit */int) ((arr_10 [3] [(unsigned short)7] [3] [i_1 + 1]) < (2147483647)))) : (((/* implicit */int) var_6))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)65527))))) : ((-(var_9)))));
                }
                for (int i_9 = 2; i_9 < 7; i_9 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_7))));
                    var_24 *= ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0])))));
                }
                for (int i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)68)) * (((/* implicit */int) (unsigned char)255)))))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 + 4] [i_1 + 2] [i_1])) ? (((((/* implicit */_Bool) 5876928331670726846ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_14 [i_0] [i_0] [i_11] [i_1]))) : (((/* implicit */unsigned long long int) 4294967295U))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_11])) : (var_3)));
                        var_28 = ((/* implicit */unsigned long long int) (unsigned short)65509);
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_7])))))));
                    }
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (!(((_Bool) var_11)))))));
                    var_31 = ((/* implicit */unsigned int) ((unsigned long long int) (-(arr_10 [i_7] [i_7] [i_7] [i_7]))));
                    arr_35 [i_0] [i_1 + 1] [i_7] [i_10] = (~(((/* implicit */int) ((701361199U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98)))))));
                }
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (short)-1))));
            }
        }
        var_33 = ((/* implicit */unsigned long long int) arr_17 [i_0 - 1]);
        /* LoopSeq 1 */
        for (int i_12 = 3; i_12 < 10; i_12 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_13 = 1; i_13 < 9; i_13 += 2) 
            {
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_13] [i_0])) : (((/* implicit */int) (unsigned short)65535))))) ? (1152921504606846975LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4))))));
                arr_43 [i_0] [i_13 + 2] [i_13 - 1] = (-(152302294973041926ULL));
                var_35 = ((unsigned short) arr_0 [i_0] [i_12]);
            }
            var_36 = ((/* implicit */unsigned short) (+(max((arr_2 [i_0 + 1]), (((/* implicit */int) var_6))))));
            arr_44 [i_12] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */int) arr_7 [i_12 + 1] [i_12 + 1] [i_0 - 2]))))) ? (((/* implicit */int) ((unsigned char) -5LL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (((/* implicit */unsigned int) var_3)) : (var_11)))) ? (((((/* implicit */int) (signed char)-83)) & (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) arr_18 [i_0] [i_12 + 1] [i_0] [i_0] [i_12] [i_0]))))));
        }
        var_37 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)56812)) ? (((unsigned long long int) (unsigned char)9)) : (((/* implicit */unsigned long long int) -2147483622)))));
    }
    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 1) 
    {
        var_38 = ((/* implicit */signed char) (_Bool)1);
        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_14] [i_14])) ? (arr_45 [i_14] [i_14]) : (arr_45 [i_14] [i_14])))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_6)) & (((/* implicit */int) var_4)))) * ((~(((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) (unsigned short)1023)) ? (-5451649607662083380LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 18446744073709551615ULL))))))));
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            for (unsigned short i_16 = 4; i_16 < 8; i_16 += 2) 
            {
                {
                    arr_52 [i_14] [i_16] [i_15] [(_Bool)1] |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_49 [i_14] [i_15] [i_16 - 2] [i_16 - 2])) ? (arr_49 [i_14] [i_16] [i_16 + 1] [i_14]) : (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(152302294973041927ULL)))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) max(((unsigned short)65535), (var_6)))))))));
                    var_40 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (unsigned short)65528)), (arr_49 [i_16 - 3] [i_16 - 3] [i_16 - 3] [i_16 - 3]))) * (((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)0)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 2) 
        {
            for (unsigned short i_18 = 2; i_18 < 9; i_18 += 3) 
            {
                for (unsigned int i_19 = 1; i_19 < 9; i_19 += 1) 
                {
                    {
                        var_41 -= ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) var_11)) ? (arr_54 [i_14] [i_17] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52084))))) / (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_14] [(_Bool)0])) ? (0U) : (((/* implicit */unsigned int) -1218168881))))))))));
                        arr_61 [i_14] [i_17] [i_18] [i_19] [i_14] [i_14] = ((((/* implicit */_Bool) 2634426861U)) ? (((/* implicit */int) (signed char)-86)) : (1285742581));
                        var_42 -= ((/* implicit */int) ((_Bool) (+(2147483647))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_20 = 1; i_20 < 11; i_20 += 1) 
                        {
                            arr_64 [i_14] [i_14] [i_20 - 1] [i_14] [i_19] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_18] [i_17])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_14] [i_17] [i_18] [i_19 - 1] [i_20 - 1])))))) >= (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))) / (-2930495627864761106LL))))))));
                            var_43 = ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) 12351830790291909571ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)57))))))), (((/* implicit */unsigned int) min((var_0), (arr_55 [i_20 + 1] [i_18 + 1] [i_18]))))));
                        }
                        for (short i_21 = 2; i_21 < 10; i_21 += 1) 
                        {
                            var_44 = ((/* implicit */short) min((((/* implicit */long long int) (!(((_Bool) var_3))))), (min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (6492750713923478578LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_14] [i_17] [i_17] [i_17]))) : (var_11))))))));
                            arr_68 [i_14] [i_14] [i_14] [i_14] [i_21 - 2] = ((/* implicit */short) var_4);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 4) 
                        {
                            var_45 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)10))));
                            var_46 = ((/* implicit */unsigned char) ((int) (-(90239207U))));
                            var_47 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) (unsigned char)165)))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_23 = 0; i_23 < 12; i_23 += 2) 
        {
            for (signed char i_24 = 0; i_24 < 12; i_24 += 2) 
            {
                {
                    var_48 = 1289477322U;
                    var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_14] [i_14] [i_23] [i_14] [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((arr_57 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]), (((/* implicit */unsigned int) (unsigned short)28672))))));
                }
            } 
        } 
    }
    var_50 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) var_5)))));
}
