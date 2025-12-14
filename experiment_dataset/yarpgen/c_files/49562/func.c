/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49562
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
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223))) & (var_7)))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) << (((((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (3629193096707236575ULL))))))));
        arr_2 [i_0] = ((/* implicit */short) max((max((((((/* implicit */_Bool) (unsigned short)0)) ? (4503530907893760ULL) : (((/* implicit */unsigned long long int) 1984517111)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))), (((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) var_5))))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 2]))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_0] [i_3]))))) && (((/* implicit */_Bool) -1079963127))))));
                        arr_10 [i_0] = ((/* implicit */signed char) ((-3586772620743733613LL) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_4 = 2; i_4 < 7; i_4 += 3) 
        {
            arr_13 [i_0] [(unsigned short)8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1079963126)) - (4102001882947691542ULL)))) ? ((~(var_6))) : (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        {
                            arr_20 [i_7] [i_0] [i_7] [(short)5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) (short)-7116))))) ? (((/* implicit */int) arr_1 [i_0])) : (max((((/* implicit */int) (unsigned short)40233)), (2147483644)))))) ? (((int) max((((/* implicit */unsigned long long int) 1079963119)), (arr_17 [(short)4] [(short)4] [6ULL])))) : (((/* implicit */int) max((((((/* implicit */int) (short)-18459)) < (((/* implicit */int) var_1)))), (((6462379912361940748LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                            var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (~(arr_18 [i_6] [i_5] [6ULL] [i_5] [i_6] [i_7] [i_0])))) : (max((6462379912361940735LL), (((/* implicit */long long int) var_8))))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (short)356)))))));
                            var_15 += ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) 6462379912361940734LL)))) <= (max((((/* implicit */unsigned long long int) (short)1462)), (11509576345814068803ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (min((((/* implicit */unsigned int) arr_12 [i_0 - 2])), (var_5)))));
                            var_16 = ((/* implicit */short) ((min((((/* implicit */long long int) (unsigned short)50020)), (3094219277575907740LL))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-26466))))))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_7 [i_0] [i_5] [i_4 - 1] [i_0])))) ? (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15516))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (arr_6 [5LL] [i_4 - 2] [i_5] [i_0])))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    arr_27 [i_0] [(signed char)5] [i_0] [i_9] [i_9] = ((/* implicit */short) var_8);
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_9 [i_0] [i_0]))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) var_3))));
                }
                arr_28 [i_0] = ((/* implicit */unsigned long long int) var_10);
                var_18 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))));
            }
            for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        {
                            arr_35 [i_0] [(unsigned char)5] [i_10] [i_4 + 3] [i_0] = ((/* implicit */unsigned long long int) ((short) (((_Bool)0) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned long long int) var_8)) : (min((7548358768090245927ULL), (var_7)))))) ? (((/* implicit */unsigned long long int) (~(1256457593)))) : ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 2005112523)) : (var_7)))))));
                        }
                    } 
                } 
                arr_36 [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) var_11)), (var_9))))))) ? (((/* implicit */unsigned long long int) min((-5744276903599963882LL), (((((/* implicit */long long int) ((/* implicit */int) (short)-18467))) | (-6462379912361940761LL)))))) : ((~(3316348649366203844ULL)))));
            }
            arr_37 [i_0] [i_0] = ((/* implicit */_Bool) (((((_Bool)1) ? (((((/* implicit */_Bool) (short)-18444)) ? (536608768) : (-2005112524))) : ((-(44848822))))) * (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6)))) : (((((/* implicit */_Bool) var_10)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)15543)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 12444100919768324673ULL))))) : (((/* implicit */int) min(((short)9261), (((/* implicit */short) (_Bool)1)))))))))))));
        }
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            var_21 = ((/* implicit */int) ((((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) ^ (0ULL))))) != ((~(((/* implicit */int) var_4))))));
            var_22 = ((((/* implicit */_Bool) ((max((((/* implicit */int) (unsigned short)65332)), (-1815070749))) / (((/* implicit */int) (unsigned short)40307))))) ? (((/* implicit */unsigned long long int) 298628523)) : (((var_7) * (((/* implicit */unsigned long long int) ((-921437432) / (((/* implicit */int) var_4))))))));
        }
    }
    for (short i_14 = 0; i_14 < 21; i_14 += 2) 
    {
        arr_46 [i_14] [(unsigned short)12] = ((/* implicit */unsigned long long int) ((max((((unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) arr_42 [18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (18105567616916827264ULL))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_14])) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) var_3)))))));
        /* LoopSeq 3 */
        for (signed char i_15 = 1; i_15 < 20; i_15 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (signed char i_17 = 0; i_17 < 21; i_17 += 4) 
                {
                    {
                        arr_55 [i_15] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))) + (((((/* implicit */_Bool) (short)-19548)) ? (var_10) : (var_5)))))), (((4010942503929859229LL) - (((/* implicit */long long int) -1464301459))))));
                        arr_56 [17ULL] [(short)16] [i_15] [9U] [i_16] [(_Bool)1] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64670)) ? (8182844698946184127ULL) : (16ULL)))))), (((((/* implicit */_Bool) arr_42 [i_15 + 1])) && (((/* implicit */_Bool) var_9))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) ((((var_7) | (((/* implicit */unsigned long long int) (~(var_5)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160)))));
        }
        for (unsigned short i_18 = 1; i_18 < 19; i_18 += 3) /* same iter space */
        {
            arr_61 [(unsigned short)10] [(unsigned short)10] [i_14] = ((/* implicit */signed char) ((int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-6462379912361940732LL)))), (max((var_6), (((/* implicit */unsigned long long int) (unsigned short)62737)))))));
            var_24 -= ((/* implicit */unsigned long long int) ((((_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_0)), (arr_47 [i_18 + 1] [i_18 - 1] [i_18 - 1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_18 + 1] [i_18 + 1] [i_18 + 2]))) * (var_8)))));
            var_25 = ((/* implicit */long long int) var_7);
        }
        for (unsigned short i_19 = 1; i_19 < 19; i_19 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) ((((unsigned long long int) var_8)) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_6)))))))));
            var_27 -= ((/* implicit */unsigned char) ((signed char) ((int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)8191)))));
        }
        var_28 = ((/* implicit */_Bool) ((long long int) ((var_0) ? (((/* implicit */unsigned long long int) -6462379912361940735LL)) : (((((/* implicit */_Bool) (short)31136)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (6ULL))))));
        /* LoopNest 2 */
        for (long long int i_20 = 1; i_20 < 20; i_20 += 3) 
        {
            for (int i_21 = 3; i_21 < 19; i_21 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_22 = 2; i_22 < 20; i_22 += 1) 
                    {
                        for (int i_23 = 0; i_23 < 21; i_23 += 3) 
                        {
                            {
                                arr_72 [i_21] [i_21] [(_Bool)1] [i_21] [(_Bool)1] [19ULL] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) : (-6462379912361940722LL)))));
                                var_29 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_3)))) == (((((/* implicit */_Bool) arr_69 [i_20] [i_20] [i_22 - 2] [i_23])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-127))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_1)), ((unsigned short)57673)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20103))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                }
            } 
        } 
    }
    for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-28)) ? (((((/* implicit */_Bool) 846542260)) ? (((/* implicit */int) (short)26334)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (!((_Bool)1))))));
        var_32 = min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (var_10)))), ((~(var_6))));
        /* LoopSeq 2 */
        for (signed char i_25 = 4; i_25 < 22; i_25 += 4) 
        {
            var_33 = ((/* implicit */_Bool) (+(max((8708134568742247467ULL), (((/* implicit */unsigned long long int) var_1))))));
            arr_79 [i_24] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            arr_80 [i_24] [i_24] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 846542260)) : (var_6)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((arr_77 [i_25 + 1] [i_25 - 2]) < (arr_77 [i_25 - 1] [i_25 - 3])))));
        }
        /* vectorizable */
        for (short i_26 = 2; i_26 < 21; i_26 += 4) 
        {
            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((arr_83 [i_24 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)32750)))))))));
            var_35 = ((((var_6) >> (((((/* implicit */int) (signed char)-38)) + (70))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
            arr_84 [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29800))) : (((unsigned long long int) var_8))));
            var_36 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))));
        }
        var_37 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(max((-6462379912361940712LL), (((/* implicit */long long int) (unsigned char)184))))))), (((6156338666576901369ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27)))))));
        arr_85 [i_24] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5))))), (arr_83 [(unsigned short)20])));
    }
    for (_Bool i_27 = 0; i_27 < 0; i_27 += 1) /* same iter space */
    {
        arr_88 [i_27] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -846542261)) ? (var_10) : (((/* implicit */unsigned int) -2118458202))))) : (((unsigned long long int) -288702469)))), (((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) (signed char)-67))))))));
        /* LoopNest 2 */
        for (short i_28 = 2; i_28 < 20; i_28 += 4) 
        {
            for (unsigned int i_29 = 3; i_29 < 22; i_29 += 4) 
            {
                {
                    arr_94 [i_27] [i_28] [i_29] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) max((((/* implicit */short) var_11)), (var_2)))), (2470865969U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_81 [i_27 + 1])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-112)) < (((/* implicit */int) var_2))))) : (((/* implicit */int) var_0)))))));
                    var_38 = max(((unsigned short)63), (((/* implicit */unsigned short) (signed char)112)));
                    var_39 = ((/* implicit */short) (-(((/* implicit */int) ((short) (~(2062217482)))))));
                }
            } 
        } 
    }
    var_40 = ((/* implicit */unsigned long long int) ((int) var_6));
}
