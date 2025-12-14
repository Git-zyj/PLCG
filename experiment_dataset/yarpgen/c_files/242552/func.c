/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242552
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((unsigned int) max(((short)-2062), (((/* implicit */short) (unsigned char)207)))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((unsigned int) max((68451041280ULL), (((((/* implicit */_Bool) (short)-2062)) ? (10406675614643279293ULL) : (((/* implicit */unsigned long long int) 2750770848U))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~(827602982U))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) (unsigned char)215);
        arr_9 [i_1] = ((/* implicit */unsigned char) -1419988575326575759LL);
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    arr_19 [9U] [i_3] [i_3] [9U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2062))) : (1419988575326575759LL)))) ? (((/* implicit */int) ((unsigned char) (~(0U))))) : (((/* implicit */int) (unsigned char)8))));
                    arr_20 [i_4] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) max((1419988575326575745LL), (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) (unsigned char)0))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8213)) ? (-3155408545344080903LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32374)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) : ((-(((((/* implicit */_Bool) 4294967272U)) ? (((/* implicit */long long int) 861845319U)) : (-1419988575326575755LL)))))));
                                arr_26 [(_Bool)1] [3ULL] [i_5] [i_6] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((short)1016), (((/* implicit */short) ((_Bool) (short)-31934)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)31905)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((short) (unsigned char)15))) : (((/* implicit */int) ((signed char) -4030739596562160780LL)))))) : (((((/* implicit */_Bool) (unsigned char)246)) ? (((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17091))) : (15153082154219789565ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) 2396696780603195096ULL)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((7512117372083526487ULL), (((/* implicit */unsigned long long int) (signed char)19))))) ? (((/* implicit */int) ((_Bool) 3266206300U))) : (((/* implicit */int) (short)12)))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
                    {
                        arr_29 [i_2] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((short) (~(12617260612547769993ULL))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)40)) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229)))))) ? (-6082666566659785166LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-19583)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)11838))))) : (max((max((((/* implicit */unsigned long long int) (short)14948)), (3293661919489762042ULL))), (((/* implicit */unsigned long long int) (signed char)13))))));
                        arr_30 [i_7] [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) (_Bool)0);
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) 2627624632U);
                            arr_35 [i_2] [i_9] [i_2] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12550669816019833499ULL)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13)))));
                        }
                        var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (signed char)-16)))))), (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)50)))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((11508645922794414625ULL), (((/* implicit */unsigned long long int) 3266206284U))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8192)) ? (1959642243U) : (3266206280U)))) ? (((((/* implicit */_Bool) (short)17742)) ? (2534824757068402214ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))))) : (((/* implicit */unsigned long long int) (+(4294967295U)))))) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1)))))))));
                        arr_38 [i_4] = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)1)), (3433021881U)));
                        arr_39 [i_2] [i_3] [i_4] [(short)9] = max((((/* implicit */unsigned long long int) (-(1028761012U)))), (min((17592186044408ULL), (((/* implicit */unsigned long long int) (short)127)))));
                        /* LoopSeq 2 */
                        for (short i_11 = 1; i_11 < 13; i_11 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) 2341974346U)))))))));
                            arr_42 [i_11] [i_10] [i_4] [i_4] [i_3] [i_2] |= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8413)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (short)-128))))))))));
                        }
                        for (unsigned long long int i_12 = 4; i_12 < 15; i_12 += 4) 
                        {
                            arr_46 [i_10] = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) (unsigned char)15)), (181580865838863030ULL)))));
                            var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)75))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 181580865838863022ULL)) ? (3389295255U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31)))))) ? ((-(((/* implicit */int) (unsigned char)9)))) : (((/* implicit */int) (unsigned char)204)))))))));
                        }
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) 
                        {
                            var_28 = ((/* implicit */short) (~(((/* implicit */int) ((short) 0ULL)))));
                            var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)65))));
                        }
                        /* vectorizable */
                        for (short i_15 = 0; i_15 < 16; i_15 += 2) /* same iter space */
                        {
                            arr_55 [i_2] [(unsigned char)8] [i_4] [i_3] [i_15] = ((/* implicit */unsigned char) ((short) (short)20018));
                            arr_56 [i_4] [(unsigned char)10] [(unsigned char)10] [i_13] [i_15] = ((unsigned char) (short)-8413);
                        }
                        for (short i_16 = 0; i_16 < 16; i_16 += 2) /* same iter space */
                        {
                            arr_60 [i_16] [i_13] [i_3] [i_2] = ((/* implicit */unsigned long long int) (_Bool)0);
                            arr_61 [i_2] [i_2] [i_4] [i_4] [i_13] [i_13] [i_2] = ((/* implicit */short) (~((+(1660668332U)))));
                            arr_62 [i_16] [i_16] [i_16] [i_16] [i_16] [i_3] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (12ULL)))) ? (((((/* implicit */_Bool) 2076977858138918505ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32748))) : (12224503116440696548ULL))) : (((/* implicit */unsigned long long int) max((93890570U), (((/* implicit */unsigned int) (unsigned char)14)))))));
                            arr_63 [i_2] [(short)5] [i_4] [i_13] [i_13] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2024190706U)) ? (14084867451453903659ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24852)))));
                            arr_64 [(short)4] [(short)4] [i_4] [i_13] [i_16] = ((/* implicit */long long int) (unsigned char)255);
                        }
                        var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) 16ULL)))));
                        arr_65 [i_2] [i_3] [i_4] [i_13] = ((/* implicit */short) (+(((/* implicit */int) (short)(-32767 - 1)))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_17 = 0; i_17 < 16; i_17 += 2) 
        {
            var_31 += ((/* implicit */unsigned char) ((short) 2076977858138918505ULL));
            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) 18446744073709551612ULL))));
            arr_70 [i_2] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (short)10460)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)73))))) : ((~(18446744073709551615ULL)))));
            /* LoopNest 2 */
            for (signed char i_18 = 2; i_18 < 12; i_18 += 4) 
            {
                for (short i_19 = 0; i_19 < 16; i_19 += 1) 
                {
                    {
                        arr_79 [i_2] [i_17] [i_2] [i_2] [i_17] &= ((/* implicit */short) ((unsigned char) (signed char)9));
                        arr_80 [7U] [i_17] [i_19] [i_19] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)55))));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
        {
            var_33 = (~(((((/* implicit */_Bool) 195213497)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2749247926U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) : (1999155997U)))) : (((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */unsigned long long int) 657491463U)) : (10700581202815361706ULL))))));
            arr_83 [i_20] [12] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)20))))) ? (((/* implicit */int) (short)-24839)) : (((/* implicit */int) (unsigned char)24))));
        }
        /* vectorizable */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_22 = 0; i_22 < 16; i_22 += 1) 
            {
                arr_90 [i_2] [i_21] [i_22] = ((/* implicit */signed char) (+(((/* implicit */int) (short)24876))));
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)32754))))) ? (((((/* implicit */_Bool) 415593243U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207))) : (2ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)64)))))));
                arr_91 [i_2] [i_21] [i_22] [i_21] = ((/* implicit */_Bool) -1766574109);
            }
            var_35 = ((/* implicit */short) ((unsigned long long int) (_Bool)0));
            var_36 -= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-2)))))));
            var_37 = ((/* implicit */signed char) (~(195213491)));
        }
    }
    var_38 *= ((/* implicit */long long int) 18446744073709551615ULL);
}
