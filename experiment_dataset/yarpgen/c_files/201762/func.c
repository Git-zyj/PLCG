/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201762
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(((/* implicit */int) (unsigned char)199)))) : (((/* implicit */int) ((_Bool) var_2)))));
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 20; i_2 += 4) 
                {
                    var_18 -= ((/* implicit */unsigned char) var_12);
                    var_19 ^= ((/* implicit */short) 8516842705670176107LL);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 3; i_3 < 17; i_3 += 4) 
    {
        for (short i_4 = 3; i_4 < 19; i_4 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) -476555373)) ? (((/* implicit */int) (short)-6553)) : (((/* implicit */int) (unsigned short)29941)))) / ((-(((/* implicit */int) (unsigned short)29941)))))) << ((((~(((/* implicit */int) arr_4 [i_3 + 1] [(unsigned short)18] [i_4 - 3])))) + (34719)))));
                var_21 -= ((/* implicit */unsigned short) ((((arr_12 [i_3 + 1] [i_3 - 2]) / (((/* implicit */int) max(((unsigned char)192), ((unsigned char)49)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3 - 3])))))));
                /* LoopSeq 3 */
                for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    var_22 = 5782989248341808714LL;
                    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_16 [i_3] [i_3 - 1] [i_4 - 2]) ^ (arr_16 [i_3] [i_3 + 2] [i_4 - 3])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) (short)4095)) == (((/* implicit */int) arr_8 [i_3 + 1]))))) : ((-(((/* implicit */int) (unsigned short)35595)))))) : (((/* implicit */int) (short)0))));
                    arr_17 [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 2460851669U)) ? (((/* implicit */int) (short)5630)) : (((/* implicit */int) (unsigned short)17000))))));
                }
                for (long long int i_6 = 2; i_6 < 19; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 2; i_7 < 19; i_7 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            var_24 -= ((/* implicit */int) ((5782989248341808719LL) / (arr_20 [i_3 + 2])));
                            var_25 -= ((/* implicit */unsigned long long int) arr_10 [i_3]);
                            var_26 -= ((/* implicit */long long int) (short)-5);
                            var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_3 + 3] [i_6 + 1]))));
                        }
                        for (long long int i_9 = 1; i_9 < 17; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_22 [i_3 + 2] [(_Bool)1] [i_7 + 1] [i_3 + 2] [i_4 - 3] [i_4 + 1]))) ? (((((/* implicit */_Bool) arr_6 [i_4 - 3] [i_6 - 1] [i_7 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_6 [i_4 - 3] [i_6 - 1] [i_7 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned char) arr_22 [i_3 + 2] [(signed char)13] [i_6 - 2] [i_3 + 2] [i_4 + 1] [i_7]))))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_3 + 1] [i_7 - 2])) && ((!(((/* implicit */_Bool) var_12))))));
                        }
                        for (unsigned int i_10 = 3; i_10 < 18; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (((((((/* implicit */_Bool) (unsigned short)29941)) ? (arr_27 [i_7] [i_6 + 1]) : (arr_27 [i_7] [i_6 + 1]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) max((8090943091441199451LL), (arr_15 [i_7])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [i_6 + 1] [i_4 - 3])))))))));
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (((+((~(162372718U))))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))))))));
                            arr_32 [i_3] [i_6] [i_7] [i_10] = (~(((((/* implicit */_Bool) arr_28 [(signed char)1] [i_10] [i_10 - 2] [i_7 + 1] [i_7 + 1])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3]))) & (arr_23 [19ULL] [i_4 - 3] [i_6] [i_7] [i_7]))) : (6841291385993993849LL))));
                            var_32 = ((/* implicit */unsigned long long int) (unsigned char)136);
                        }
                        for (unsigned short i_11 = 4; i_11 < 19; i_11 += 3) 
                        {
                            arr_36 [i_3] [i_4] [i_4] [i_7] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)127)), (var_9)));
                            arr_37 [i_3] [i_3] [i_6 - 2] [i_3] [i_11] = (~(((((((/* implicit */int) arr_3 [i_3 + 1])) ^ (((/* implicit */int) var_2)))) | (((/* implicit */int) ((((/* implicit */int) arr_3 [17U])) >= (((/* implicit */int) (unsigned short)23447))))))));
                        }
                        /* LoopSeq 2 */
                        for (short i_12 = 1; i_12 < 17; i_12 += 4) 
                        {
                            arr_40 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 + 1] [15LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
                            arr_41 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 - 3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_34 [i_7] [i_3] [i_6] [i_6] [i_12 + 3] [i_6 - 1] [i_6])) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) max((arr_34 [i_3] [i_3] [i_3 - 1] [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3 - 3]), (arr_34 [i_3] [i_3] [i_3 + 1] [i_3] [i_3] [i_3] [i_3])))) : (((/* implicit */int) arr_34 [i_3 - 3] [i_3] [i_3 - 3] [i_7] [i_12 + 3] [(short)10] [i_3 - 3]))));
                        }
                        for (short i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            var_33 -= ((/* implicit */short) ((((/* implicit */int) (unsigned short)35595)) << (((/* implicit */int) (_Bool)0))));
                            var_34 ^= ((/* implicit */unsigned int) var_3);
                        }
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30825))) : (12107684199061617918ULL)));
                        arr_44 [(unsigned short)3] [(unsigned short)3] [i_3] [i_3] = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_0 [i_6 - 2])) : (((/* implicit */int) var_9)))), ((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (unsigned char)237))));
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_3 + 3] [i_3 - 1] [i_7] [i_6 + 1] [i_6 + 1] [i_6 - 2]))) : (min((776295377086732786LL), (((/* implicit */long long int) 2361707555U)))))))))));
                    }
                    for (unsigned char i_14 = 1; i_14 < 16; i_14 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (((+(((/* implicit */int) var_9)))) >> (((((/* implicit */int) (short)15601)) - (15576))))))));
                        arr_49 [i_3] = ((/* implicit */short) (-(((((((/* implicit */int) (short)-6126)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
                        var_38 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)42105)) ? (((/* implicit */long long int) arr_12 [i_3 - 1] [i_6 + 1])) : (((((/* implicit */_Bool) arr_33 [(short)18])) ? (((/* implicit */long long int) 4294967295U)) : (948153825195930501LL)))))));
                        var_39 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_9 [i_3 + 3] [i_4] [i_6] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_3] [i_4] [(short)6] [i_14])))))) && (((/* implicit */_Bool) min(((unsigned short)32107), (((/* implicit */unsigned short) (short)-27451))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 12107684199061617918ULL)) ? (((/* implicit */int) var_9)) : (536868864)))) > (((((/* implicit */_Bool) arr_42 [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) var_8)) : (arr_23 [i_3] [i_4] [i_14 + 4] [i_14] [(unsigned char)1])))))) : (((/* implicit */int) (unsigned short)32079))));
                        var_40 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_4 - 1])) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) && (((((/* implicit */_Bool) ((short) (_Bool)1))) || (((/* implicit */_Bool) var_12))))));
                    }
                    var_41 = ((/* implicit */unsigned short) 536868864LL);
                    arr_50 [i_3] [i_4] [i_4] = (i_3 % 2 == zero) ? (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((12107684199061617918ULL) << (((arr_42 [i_3] [i_3] [i_3]) - (2035460250U)))))))))))) : (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((12107684199061617918ULL) << (((((arr_42 [i_3] [i_3] [i_3]) - (2035460250U))) - (2504333038U))))))))))));
                    var_42 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(short)16])) ? (arr_29 [i_3] [i_3] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [(short)8] [i_6])))))) ? (((((((/* implicit */int) ((short) var_4))) + (2147483647))) >> (((unsigned long long int) (_Bool)0)))) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    var_43 = ((/* implicit */signed char) arr_10 [i_3]);
                    var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((((((/* implicit */int) arr_35 [i_3 - 3] [i_4] [i_4 - 2] [i_15])) / (((/* implicit */int) arr_35 [i_3 - 3] [i_3 - 3] [i_4 - 1] [i_4])))) / (((/* implicit */int) var_5)))))));
                    var_45 = ((/* implicit */unsigned char) (_Bool)1);
                }
            }
        } 
    } 
}
