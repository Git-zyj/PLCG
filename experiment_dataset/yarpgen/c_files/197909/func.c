/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197909
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) 0U);
        var_14 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_1 [i_0] [i_0])))) > (((((/* implicit */_Bool) max((1998759804), (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((var_12) - (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0]))))));
        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (short)29581)), (1283508450))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)29578))))) + (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_4 [i_0] [i_1] [i_1])))));
            arr_5 [i_0] |= ((/* implicit */_Bool) min((2145494845), (((/* implicit */int) max((arr_0 [i_0]), ((short)-6609))))));
            arr_6 [i_1] [i_1] = ((/* implicit */long long int) max(((-(1283508450))), (((/* implicit */int) ((((var_12) | (((/* implicit */int) (signed char)31)))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) >= (var_6)))))))));
        }
        for (long long int i_2 = 3; i_2 < 12; i_2 += 1) 
        {
            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_0]))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) 4194303)), (var_10)))) ? (arr_10 [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52153))))))))));
            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) max((max((((/* implicit */long long int) (short)29562)), (5095722296614482056LL))), (((/* implicit */long long int) var_13)))))));
            var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_0] [i_2]), (((/* implicit */unsigned long long int) (short)-6609))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0])) && (((/* implicit */_Bool) (signed char)-16)))))));
        }
        for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (+(min(((+(-243367746))), (((/* implicit */int) (unsigned char)0)))))))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(813502309))))));
            var_21 = ((/* implicit */unsigned long long int) 7862041498136834295LL);
        }
        for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_5 = 3; i_5 < 13; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    for (long long int i_7 = 1; i_7 < 14; i_7 += 1) 
                    {
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_6])))) ? (((/* implicit */unsigned long long int) 1283508450)) : (((((/* implicit */_Bool) 16243016055747412821ULL)) ? (271271151199677029ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145)))))));
                            var_22 = ((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)32721)))), ((+(-1283508467)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_8 = 2; i_8 < 13; i_8 += 1) 
            {
                for (unsigned short i_9 = 1; i_9 < 13; i_9 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 4; i_10 < 12; i_10 += 2) 
                        {
                            var_23 += ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0]);
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) min((((((((/* implicit */unsigned long long int) 7781222113485292416LL)) > (4702084436460396059ULL))) ? (5095722296614482054LL) : (((/* implicit */long long int) 1538865975U)))), (((((/* implicit */_Bool) 5095722296614482054LL)) ? (5095722296614482074LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)31))))))))));
                            var_25 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)4490))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)25))) : (((((/* implicit */_Bool) 928516008295731052ULL)) ? (8925602070934821553LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29788)))))))), (8827070908703742762ULL)));
                        }
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((9619673165005808854ULL) >> (((6124997588690934119ULL) - (6124997588690934072ULL))))), (((/* implicit */unsigned long long int) min((arr_23 [i_4 - 3] [i_8] [i_9]), (((/* implicit */long long int) var_1))))))))));
                            var_26 -= ((/* implicit */short) var_9);
                            var_27 = ((/* implicit */_Bool) min((7862041498136834293LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)3530)))))));
                            var_28 &= ((/* implicit */short) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))) : (arr_4 [i_8 - 1] [i_9 - 1] [i_4 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3533)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-9094032993201536803LL))))));
                            arr_37 [i_0] [i_4 - 2] [i_8] [i_9] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -4)) ? (16033095476138539753ULL) : (((/* implicit */unsigned long long int) -4))));
                        }
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) max((5095722296614482049LL), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-69)), ((short)-32753)))) ? (((/* implicit */int) (unsigned char)0)) : (min((((/* implicit */int) (unsigned char)241)), (3)))))))))));
                    }
                } 
            } 
        }
        arr_38 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) -4)) : (1538865971U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) (signed char)68)) : (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) (unsigned char)9)) ? (arr_23 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0])))))))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
    {
        var_30 = min((((/* implicit */int) (short)124)), (((((/* implicit */_Bool) 1557429956475046969LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)148)))));
        var_31 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_40 [i_12])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) == (arr_41 [i_12]))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)3584)))))));
        arr_45 [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_44 [i_13] [i_13])) - (((/* implicit */int) (unsigned char)48))));
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 22; i_14 += 1) 
        {
            for (signed char i_15 = 0; i_15 < 22; i_15 += 1) 
            {
                {
                    var_33 = ((/* implicit */unsigned char) var_10);
                    var_34 = ((/* implicit */unsigned int) (unsigned short)54515);
                }
            } 
        } 
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        var_35 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3055)))))) ? ((+(((/* implicit */int) (unsigned char)66)))) : (((/* implicit */int) min(((unsigned char)207), ((unsigned char)250))))))));
        var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
    }
}
