/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240456
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
    var_11 = ((/* implicit */signed char) ((((_Bool) var_4)) ? (2147483643) : (((/* implicit */int) ((signed char) 13912790221958444354ULL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)64)))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39974)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-70))))) : (((unsigned int) (_Bool)1))))));
                    var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)25562)) ? ((~((-(16383ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1379789998U) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) (+(2147483642)))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)119))) + (var_6))))))));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 24; i_3 += 4) 
                {
                    arr_10 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) (signed char)101);
                    /* LoopSeq 4 */
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */int) -627303901429137003LL);
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((long long int) (unsigned char)255)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_16 += ((/* implicit */unsigned short) ((signed char) (unsigned char)255));
                        }
                        /* LoopSeq 4 */
                        for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned short) 2147483647);
                            var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(10U)))) ? ((~(-603016836049543064LL))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)56)) : (((/* implicit */int) (short)17546)))))));
                            arr_17 [i_6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(16359705326672973555ULL)));
                            arr_18 [i_0] [14U] = ((/* implicit */int) ((_Bool) ((unsigned long long int) var_7)));
                        }
                        for (unsigned char i_7 = 1; i_7 < 24; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_4))));
                            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 11LL)) / (((var_3) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (11730319596182640336ULL)))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
                        {
                            arr_24 [i_0 + 1] [i_0 + 1] [i_3] [i_3] [i_0] = ((/* implicit */signed char) (unsigned short)0);
                            arr_25 [i_0] [i_0] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (-603016836049543064LL));
                        }
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)125)) ? (131071) : (((/* implicit */int) (_Bool)1))));
                            var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                            arr_29 [i_0 - 1] [(_Bool)1] [(_Bool)1] [i_0 - 1] [(_Bool)1] [i_0] [i_0 + 1] = ((/* implicit */signed char) 586487323);
                        }
                        var_24 = (!(((/* implicit */_Bool) (~(var_1)))));
                    }
                    for (unsigned long long int i_10 = 1; i_10 < 24; i_10 += 4) 
                    {
                        var_25 |= ((/* implicit */short) var_1);
                        var_26 = ((/* implicit */unsigned short) ((13912790221958444356ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1412904526)) ? (((/* implicit */int) (short)-25251)) : (((/* implicit */int) (unsigned short)56)))))));
                    }
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_35 [i_0] [i_0] [i_0] [(unsigned char)15] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (_Bool)1))));
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */signed char) ((627303901429137012LL) / (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            var_29 += ((/* implicit */long long int) (~(var_7)));
                            arr_44 [i_13] [i_12] [i_0] [(signed char)15] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7968956606632674814LL)))));
                            arr_45 [i_0] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */long long int) (~((~(-957818849)))));
                            arr_46 [i_0 - 1] [i_1 - 2] [13ULL] [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6)))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((var_6) > (-7682833229102290829LL)))))));
                        }
                        for (signed char i_14 = 1; i_14 < 24; i_14 += 4) 
                        {
                            var_30 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4293918720ULL) << (((4887059864827591416LL) - (4887059864827591390LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-8615910139403378264LL)));
                            arr_49 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (unsigned short)65486);
                            var_31 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32886))) & (var_10));
                            var_32 += ((short) ((unsigned char) var_7));
                            var_33 = ((/* implicit */unsigned long long int) ((signed char) var_4));
                        }
                    }
                    /* LoopSeq 3 */
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        arr_52 [i_0] = ((/* implicit */long long int) ((unsigned short) -627303901429137030LL));
                        var_34 = ((/* implicit */long long int) var_7);
                        arr_53 [i_0] [i_0] [i_0] [i_0] [i_15] [i_0] = ((/* implicit */unsigned char) var_2);
                        var_35 = ((/* implicit */int) ((unsigned int) ((var_3) ? (6277386213574174103ULL) : (((/* implicit */unsigned long long int) 4887059864827591416LL)))));
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) 561249484U))));
                    }
                    for (long long int i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        arr_57 [i_3] [i_1] [i_3] [i_1] |= (unsigned short)25561;
                        var_37 = ((/* implicit */unsigned long long int) var_8);
                    }
                    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        arr_60 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) (~((-(-957818849)))));
                        arr_61 [i_0] [(signed char)21] = ((/* implicit */int) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) (unsigned short)39959))));
                    }
                }
                for (unsigned char i_18 = 0; i_18 < 25; i_18 += 4) 
                {
                    var_38 = ((/* implicit */unsigned long long int) (((+((+(((/* implicit */int) (short)32767)))))) * (((/* implicit */int) var_8))));
                    var_39 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)-12750)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)6))) : (((((/* implicit */_Bool) (unsigned short)39974)) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)60))))) : (((9223372036854775799LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))))))));
                    var_40 = ((/* implicit */long long int) (signed char)60);
                }
                for (unsigned int i_19 = 1; i_19 < 24; i_19 += 4) 
                {
                    var_41 = ((/* implicit */unsigned long long int) -957818856);
                    arr_68 [23ULL] [i_0] [21LL] [i_19 + 1] = ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) (short)12749)))));
                }
                arr_69 [i_1 + 1] [i_0] [i_0] = ((/* implicit */signed char) 5033938032371949149LL);
                var_42 = ((/* implicit */unsigned long long int) var_6);
                var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((4194303) / (((/* implicit */int) (unsigned short)65489)))))) ? (((/* implicit */unsigned int) ((int) (-(((/* implicit */int) (_Bool)1)))))) : (((unsigned int) 2147483640))));
            }
        } 
    } 
    var_44 = ((/* implicit */signed char) ((long long int) var_8));
}
