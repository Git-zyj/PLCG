/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29204
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) (unsigned char)35);
                var_14 ^= ((/* implicit */signed char) -591412154658231312LL);
                arr_6 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned short) 1741996290U))) ? (5377332443240577319LL) : (((/* implicit */long long int) 3341502962U))))));
                var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (signed char)-53))) ? (max((0U), (((/* implicit */unsigned int) arr_0 [(signed char)17])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 17270572705748290575ULL))))))))), (max(((+(7074339573394539046ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)233)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    arr_11 [i_1] = min((((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) 2856913645U)) % (-9223372036854775800LL)))))), (6900896423844923541ULL));
                    var_16 = ((/* implicit */unsigned long long int) (signed char)36);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 4; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned int) arr_8 [i_0]))) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_2 + 1] [i_4] [i_4 + 1])) ? (5716129622888999058ULL) : (((/* implicit */unsigned long long int) -1LL)))) : (((/* implicit */unsigned long long int) 65535U)))), (((/* implicit */unsigned long long int) arr_8 [i_3]))));
                                arr_18 [i_3] [i_1] [i_2] [i_3 + 1] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_0 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3778532044U)) ? (4040440203U) : (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13060))) : (((unsigned int) 4227858432U))))));
                                var_18 &= ((/* implicit */unsigned short) (unsigned char)184);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)52064)), ((+((~(((/* implicit */int) (unsigned char)191))))))));
                        arr_23 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (signed char)103))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)7003))))) : (min((min((((/* implicit */long long int) (unsigned char)218)), (9223372036854775807LL))), (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) 2U)) : (9223372036854775807LL)))))));
                        arr_24 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((~(5ULL))) ^ (((/* implicit */unsigned long long int) (~(753572788U)))))))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((8796093022207ULL), (((/* implicit */unsigned long long int) (signed char)-119))))) ? (((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */unsigned long long int) 2865285007U)) : (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */long long int) 4294967282U)) : (arr_17 [i_0] [i_0] [i_1] [i_2] [i_5]))))))) ? (((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1801676138U)) ? (134184960U) : (1735485900U)))) : (7965625137403037822ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-125)) + (2147483647))) >> (((/* implicit */int) (signed char)15))))))))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) (((+(arr_4 [i_1]))) << (((7640939741194305084LL) - (7640939741194305083LL)))));
                        var_22 = (signed char)107;
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) 
                        {
                            arr_29 [i_0] [i_0] [i_0] [(signed char)7] [i_0] = 4761414875243201001ULL;
                            arr_30 [i_6] [(unsigned short)8] [i_1] [i_6] [i_7 + 1] [i_7] = ((/* implicit */unsigned long long int) (unsigned short)906);
                            arr_31 [i_0] [i_0] [i_2] [i_2 + 1] [i_7] = ((/* implicit */unsigned short) (unsigned char)93);
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [8U] [(signed char)8]))) / (arr_14 [i_0] [i_1] [i_2] [i_6] [i_7])));
                            var_24 ^= 13432993402491819510ULL;
                        }
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_3 [i_1] [i_2])))) ? (16551926755963350337ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)23033)) : (((/* implicit */int) (unsigned char)255)))))));
                            arr_34 [i_0] [i_1] [i_2 - 2] [i_2 - 2] [i_8] = ((/* implicit */long long int) (signed char)-108);
                            var_26 = ((/* implicit */long long int) (signed char)-32);
                        }
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (unsigned char)229))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 3; i_9 < 17; i_9 += 2) 
                    {
                        var_28 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) 1073610752U)) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_4 [i_0]))))));
                        var_29 -= ((/* implicit */unsigned char) (unsigned short)14336);
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        arr_43 [i_0] [i_2] = ((/* implicit */signed char) -5030189202311636923LL);
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524288U)) ? (9015980737980950674LL) : (((/* implicit */long long int) arr_4 [i_0]))))) ? (((6301152593396214759LL) << (((8890120739390117186ULL) - (8890120739390117186ULL))))) : (((((/* implicit */_Bool) (unsigned char)14)) ? (-3351396086106933668LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-107)))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned char) max((var_31), ((unsigned char)112)));
                            var_32 = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-77))))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
                        {
                            arr_50 [(unsigned char)0] [0U] [(unsigned short)13] [i_10] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)14))));
                            var_33 -= ((/* implicit */unsigned long long int) 7383977525887070223LL);
                        }
                        arr_51 [i_0] [i_1] [i_1] [i_2 - 2] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)195))))) ? (((((/* implicit */_Bool) (unsigned short)17268)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23729))) : (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)46)))))));
                        arr_52 [i_0] [i_1] [i_10] = ((/* implicit */unsigned short) (unsigned char)87);
                    }
                }
                /* vectorizable */
                for (unsigned short i_13 = 3; i_13 < 18; i_13 += 2) 
                {
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4759375215216067861LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3925))) : (3282486770U)))))))));
                    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) arr_12 [i_1] [i_13 - 2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_0] [i_1] [i_13 - 1] [i_13])) ? (((/* implicit */int) (unsigned short)32940)) : (((/* implicit */int) (signed char)7))))) : (((((/* implicit */_Bool) (signed char)96)) ? (24ULL) : (((/* implicit */unsigned long long int) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    var_36 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-8)) ? (-9223372036854775790LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
                    /* LoopSeq 2 */
                    for (signed char i_14 = 1; i_14 < 17; i_14 += 3) 
                    {
                        arr_58 [i_0] [i_0] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)10035)) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) arr_8 [i_13])))))));
                        var_37 = (unsigned char)0;
                    }
                    for (signed char i_15 = 2; i_15 < 18; i_15 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)50599)) ? (((/* implicit */int) (unsigned short)16724)) : (((/* implicit */int) (signed char)-41)))) >> (((((/* implicit */int) (unsigned short)62301)) - (62294)))));
                        arr_62 [i_13] [i_13] [(unsigned short)1] = -6969886477664150609LL;
                        arr_63 [i_13] = (signed char)-72;
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
                        {
                            var_39 = ((/* implicit */unsigned short) max((var_39), (arr_28 [i_13 - 1] [i_1] [i_1] [i_16])));
                            var_40 &= ((/* implicit */unsigned short) ((unsigned char) arr_33 [i_0] [i_1] [i_13 - 3] [(signed char)12] [i_15] [i_16]));
                            var_41 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_56 [i_1]))) ? (((((/* implicit */_Bool) 127U)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (unsigned char)48)))) : (((((/* implicit */int) (unsigned short)7446)) ^ (((/* implicit */int) (signed char)(-127 - 1)))))));
                            var_42 = (signed char)64;
                        }
                    }
                    arr_66 [i_0] [i_13] = ((/* implicit */long long int) (signed char)-116);
                }
            }
        } 
    } 
    var_43 = ((/* implicit */signed char) max((var_43), (var_7)));
}
