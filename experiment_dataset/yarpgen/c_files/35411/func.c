/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35411
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3221879018U)) ? (((3788711549U) << (((var_1) - (1451277497U))))) : (((((/* implicit */_Bool) ((var_9) | (((/* implicit */long long int) 1540039893U))))) ? (((/* implicit */unsigned int) var_4)) : (((((/* implicit */_Bool) (unsigned char)126)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32)))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)12)))) / (((((/* implicit */_Bool) var_3)) ? (3221505634U) : (var_0)))))));
            }
        } 
    } 
    var_11 = ((((/* implicit */_Bool) (unsigned char)244)) ? (-6861915825732524840LL) : (((/* implicit */long long int) ((((((/* implicit */_Bool) 1820708203)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209))) : (789463604U))) - (((/* implicit */unsigned int) -1820708203))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                {
                    var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_4)) : (var_9)));
                    var_13 = ((/* implicit */unsigned int) (unsigned char)17);
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7603668430258910640LL)) ? (((/* implicit */unsigned int) -2)) : (var_1)))) ? (((((/* implicit */_Bool) -2648477818938058758LL)) ? (((/* implicit */unsigned long long int) 2114931694U)) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) == (((/* implicit */long long int) var_2)))))))))));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
                }
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned short) ((402653184U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)228)))));
                    var_17 = ((((((/* implicit */_Bool) 673746787)) && (((/* implicit */_Bool) 6295754350270668884LL)))) ? (((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned char)0)))), (-673746787)))) : ((+(((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) var_0)))))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) 137436856320ULL))));
                }
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
                {
                    arr_22 [i_2] [21LL] [i_3] [i_2] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) -4LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) : (1111074965U)))) <= (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-62))) : (0LL))))));
                    /* LoopSeq 4 */
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        arr_26 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((8839558856579717494LL) & (4611686018427322368LL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) 2251799813685247LL)) ? (-7969815125429305979LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (16063819669387793078ULL) : (((/* implicit */unsigned long long int) var_6))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126)))))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_29 [i_7] [i_2] [i_2] [i_2] = ((((((/* implicit */_Bool) 673746812)) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_3) : (377763429U)))))) & (((/* implicit */long long int) ((var_1) << (((377763399U) - (377763399U)))))));
                            arr_30 [i_2] [i_2] [i_6] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (18446743936272695296ULL) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) ((521115135836592770LL) <= (((/* implicit */long long int) var_4))))) : ((~(var_4)))))));
                            arr_31 [i_2] [i_3] [i_2] [i_2] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) 1820708227)) ? (1572864U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226)))));
                            var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 2069298355U)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (9016481871570212830LL) : (9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)34461)) >= (-1820708203))))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) var_2)) : (var_8)))))));
                            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2627521275U))));
                        }
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) -15)), (1662286433U)))) ? (((((/* implicit */_Bool) var_9)) ? (-246734838139611522LL) : (((/* implicit */long long int) var_2)))) : (var_7))), (((long long int) (short)-27602)))))));
                        arr_32 [i_2] [2ULL] [2ULL] [i_2] [1LL] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) var_2)) ? (-5634890475850828711LL) : (((/* implicit */long long int) 1887155014U)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) 72172117)) ? (((/* implicit */unsigned long long int) var_0)) : (var_8)))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) -72172115)) : (2930553284U))))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        arr_36 [i_2] = max((((((-6384850683911403811LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))))) ? (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) 50331648U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)255))))));
                        arr_37 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 262143U)) && (((/* implicit */_Bool) 1480821704U))));
                        var_22 = ((((/* implicit */_Bool) 4294967295U)) ? (1856428694U) : (1048575U));
                        var_23 += ((/* implicit */unsigned char) 4294967295U);
                    }
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        arr_40 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)94))) : (((((/* implicit */_Bool) 33554430U)) ? (var_6) : (((/* implicit */long long int) 1647537166U))))));
                        arr_41 [i_2] [i_2] [i_6] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (12U) : (4294967295U)));
                    }
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) >= (-1LL))))) : (((((/* implicit */_Bool) 3382970730U)) ? (2492276321U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34516)))))))) > (var_8)));
                        arr_45 [i_11] [i_6] [i_2] [i_2] [i_3] [i_2] = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62657))) : (1048593U));
                        arr_46 [i_2] [7ULL] [i_6] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1213797570U)) ? (-8793617986645972428LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32129)))));
                    }
                }
                for (unsigned short i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        for (long long int i_14 = 0; i_14 < 23; i_14 += 1) 
                        {
                            {
                                arr_55 [i_2] [i_2] [(unsigned char)6] [20LL] [i_2] [(short)8] [20LL] &= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)16)) ? (-1748752438153616686LL) : (-6498323346263694548LL))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) 2147483626)) : (var_7)))))) ? (((((((var_5) + (9223372036854775807LL))) >> (((var_3) - (4191301928U))))) * (((/* implicit */long long int) (~(((/* implicit */int) (short)-256))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1748752438153616678LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-61))) : (var_7)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_3)) : (var_7))) : (((/* implicit */long long int) var_4))))));
                                arr_56 [14LL] [i_2] [i_3] [i_13] [i_14] = 4294967295U;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 0; i_15 < 23; i_15 += 4) 
                    {
                        for (long long int i_16 = 0; i_16 < 23; i_16 += 3) 
                        {
                            {
                                arr_61 [8LL] [i_2] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_2)) ? (127LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))))), (((/* implicit */long long int) (short)14685)))) * (((/* implicit */long long int) ((/* implicit */int) ((((2U) | (4255406286U))) > (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)5517)))))))))));
                                arr_62 [i_2] [i_2] [i_2] [i_2] [i_15] [i_2] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) 49152U)), (137438953471LL)))) ? (var_5) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) 4294967295U)) : (-7010324142868603889LL)))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (long long int i_17 = 1; i_17 < 22; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 0; i_19 < 23; i_19 += 1) 
                        {
                            {
                                arr_70 [i_2] [i_3] [i_2] [i_17] [i_2] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((-5419361277238165010LL), (((((/* implicit */_Bool) 4294967284U)) ? (29360128LL) : (((/* implicit */long long int) var_0))))))) ? (((((/* implicit */_Bool) max((-5419361277238165011LL), (29360126LL)))) ? (((((/* implicit */_Bool) 3403418802U)) ? (((/* implicit */long long int) var_3)) : (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2147221504U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))) : (1342994316U)))))) : (((((/* implicit */_Bool) 2ULL)) ? (((((/* implicit */_Bool) 53773189U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-5639426929017304363LL))) : ((~(-5419361277238165023LL)))))));
                                var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (8417971180278875996ULL) : (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) -493541029)) ? (var_2) : (((/* implicit */int) (unsigned char)82))))) - (((((/* implicit */_Bool) -5062977295082246405LL)) ? (((/* implicit */long long int) 4270801152U)) : (var_7))))) : ((+(7062569895904307602LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_20 = 0; i_20 < 23; i_20 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 3214439947U)) ? (var_8) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) var_7))))) && (((/* implicit */_Bool) (+(16209171U))))));
                    /* LoopNest 2 */
                    for (long long int i_21 = 0; i_21 < 23; i_21 += 4) 
                    {
                        for (long long int i_22 = 0; i_22 < 23; i_22 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) min((var_27), (var_3)));
                                var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)255))))) | (max((((/* implicit */unsigned long long int) 901658851U)), (18446743936272695296ULL)))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3403418799U)) ? (((/* implicit */unsigned int) 493541026)) : (2147745792U)))) ? (((((/* implicit */_Bool) -5776334467058009119LL)) ? (((/* implicit */long long int) 172469942U)) : (var_7))) : (((((/* implicit */_Bool) ((8191) / (((/* implicit */int) (unsigned char)24))))) ? (-144115188075855872LL) : (((((/* implicit */_Bool) (short)0)) ? (-4050182894328788436LL) : (6208523172745389999LL)))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_23 = 0; i_23 < 18; i_23 += 3) 
    {
        for (unsigned char i_24 = 0; i_24 < 18; i_24 += 1) 
        {
            for (long long int i_25 = 1; i_25 < 17; i_25 += 1) 
            {
                {
                    arr_89 [i_25] [(unsigned char)0] [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) 21U)) ? (((/* implicit */long long int) 4294967295U)) : (((((/* implicit */_Bool) 4294967271U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-72))) : (((((/* implicit */_Bool) var_9)) ? (2516205566686919280LL) : (((/* implicit */long long int) var_1))))))));
                    arr_90 [i_23] [i_25] = ((((/* implicit */_Bool) var_6)) ? (((long long int) ((((/* implicit */_Bool) -4050182894328788433LL)) ? (-6354607882983024067LL) : (((/* implicit */long long int) 4294967295U))))) : (((long long int) max((((/* implicit */unsigned int) (short)16)), (var_1)))));
                    /* LoopNest 2 */
                    for (unsigned int i_26 = 0; i_26 < 18; i_26 += 4) 
                    {
                        for (unsigned int i_27 = 0; i_27 < 18; i_27 += 3) 
                        {
                            {
                                arr_96 [(unsigned char)2] [i_23] [i_25] [i_23] [i_23] = (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_3)) : ((-9223372036854775807LL - 1LL)))));
                                arr_97 [i_26] [i_26] [i_26] [i_25] [i_23] [i_23] [i_26] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 2516205566686919280LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))) : (2874865798U)));
                            }
                        } 
                    } 
                    var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((unsigned short) var_2)))))) ? (((unsigned int) ((((/* implicit */_Bool) var_8)) ? (-3841181093215077229LL) : (1629480189061505978LL)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)-82)))));
                    var_31 = 1752866008U;
                }
            } 
        } 
    } 
}
