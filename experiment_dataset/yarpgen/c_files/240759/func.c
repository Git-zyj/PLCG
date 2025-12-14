/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240759
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
    var_12 = ((/* implicit */long long int) (~((-(var_7)))));
    var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_4)), (max((max((var_7), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (~(var_3))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */long long int) (~((~(var_6)))))) : (((((((long long int) arr_0 [i_0])) + (9223372036854775807LL))) << (((max((((/* implicit */long long int) arr_1 [i_0])), (524287LL))) - (1711756057LL))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1016101520)) || (((/* implicit */_Bool) (unsigned char)175))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_15 ^= max(((-(min((var_4), (((/* implicit */long long int) 16490501)))))), (max((((/* implicit */long long int) arr_1 [i_1])), (((((/* implicit */long long int) -1016101544)) ^ (var_10))))));
        arr_6 [i_1] = ((/* implicit */long long int) min((min((2860323134918069012ULL), (((/* implicit */unsigned long long int) arr_2 [(unsigned char)13])))), (((/* implicit */unsigned long long int) ((int) var_8)))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (long long int i_3 = 2; i_3 < 7; i_3 += 1) 
            {
                {
                    arr_14 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1016101537)), (5330557075653459733ULL))))));
                    var_16 = ((/* implicit */int) ((min((arr_7 [i_3 - 2] [i_2] [i_3]), (var_7))) * ((-(7047410327668318749ULL)))));
                    var_17 += ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (long long int i_5 = 3; i_5 < 6; i_5 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        arr_22 [i_6] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (~(3347894678U)));
                        arr_23 [i_5] [i_5] [i_6] [i_5 - 2] [i_5] = (-(((/* implicit */int) (unsigned char)89)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            arr_27 [i_1] [i_4] [i_4] [3LL] [i_6] [i_6] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
                            var_18 -= ((/* implicit */unsigned int) var_10);
                        }
                        arr_28 [i_1] [i_4] [i_6] [i_6] = (+(var_4));
                    }
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_19 ^= ((/* implicit */unsigned char) (+(var_11)));
                        var_20 -= ((/* implicit */signed char) (~(((long long int) ((var_5) << (((((/* implicit */int) var_8)) - (183))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 9; i_9 += 1) 
                        {
                            arr_34 [i_1] [i_4] [i_9] [i_5] [i_5] [i_8] [i_9] = ((/* implicit */unsigned int) ((((((var_10) + (9223372036854775807LL))) << (((var_7) - (164650151432375372ULL))))) % (((/* implicit */long long int) arr_12 [i_9]))));
                            arr_35 [i_1] [i_4] [i_9] [i_8] [i_9 - 1] [i_9] = ((/* implicit */signed char) (((~(((/* implicit */int) var_0)))) * (((/* implicit */int) (signed char)-96))));
                            arr_36 [i_9] [i_5] [i_8] [i_9] = ((/* implicit */long long int) ((arr_24 [i_4] [i_4] [i_9 - 1] [i_9 + 1] [i_9] [i_9] [i_9]) >= (arr_24 [5] [i_9] [i_9 - 2] [i_9] [i_9 - 1] [i_9] [(unsigned char)8])));
                            var_21 *= ((/* implicit */unsigned char) arr_21 [8LL] [8LL] [i_8]);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            arr_39 [i_1] [i_1] [i_4] [i_5] [i_8] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (-(-1214377432))))) || (((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_11)), (var_5))) >> (((((int) var_1)) - (418633540))))))));
                            var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 411377590)) % (((((/* implicit */_Bool) var_7)) ? (var_5) : (min((((/* implicit */unsigned long long int) var_6)), (var_5)))))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((134216704LL), (-8158777958570293753LL))), (min((((/* implicit */long long int) (signed char)-96)), (7227245620987444826LL)))))) ? (((((/* implicit */_Bool) -134216683LL)) ? (5632125672710773766LL) : (-5064932184782974579LL))) : (((/* implicit */long long int) min((arr_38 [i_5 + 4] [i_5 + 4] [i_5 - 1] [i_5] [i_5 + 4]), (arr_38 [i_5 + 3] [i_5 - 2] [i_5 + 3] [i_8] [i_8])))))))));
                        }
                        var_24 ^= ((/* implicit */unsigned long long int) var_10);
                    }
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) max((((((/* implicit */unsigned long long int) -1731643497)) * (11399333746041232867ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_30 [i_5] [7] [i_5] [i_4])))))))))));
                    arr_40 [i_1] [i_4] [i_5] &= ((/* implicit */int) (~((~(((-2562751355070708044LL) | (arr_19 [i_1] [i_1] [i_1] [i_1])))))));
                }
            } 
        } 
    }
    for (int i_11 = 0; i_11 < 13; i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        arr_52 [i_11] [12LL] [i_12] = ((/* implicit */long long int) (+(min((65535ULL), (3362593179402964343ULL)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_15 = 0; i_15 < 13; i_15 += 4) 
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_11])) && (((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                            arr_56 [i_13] [0ULL] [i_12] [i_13] [i_13] = (~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1))))));
                            arr_57 [i_12] [i_12] [i_12] [i_12] [i_12] = (i_12 % 2 == 0) ? (((/* implicit */int) ((arr_49 [i_12] [i_12]) << (((((-8158777958570293753LL) + (8158777958570293809LL))) - (56LL)))))) : (((/* implicit */int) ((((arr_49 [i_12] [i_12]) + (9223372036854775807LL))) << (((((-8158777958570293753LL) + (8158777958570293809LL))) - (56LL))))));
                        }
                        arr_58 [i_13] [i_12] [i_12] [i_12] [i_13] = ((/* implicit */unsigned int) var_9);
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (-((+(15ULL))))))));
                    }
                    for (unsigned int i_16 = 2; i_16 < 12; i_16 += 1) 
                    {
                        arr_62 [i_11] [i_12] [i_11] [i_11] [7LL] = ((/* implicit */int) (+(((((/* implicit */_Bool) 1155385504U)) ? (var_7) : (arr_54 [i_16] [i_16 - 1] [i_16 - 1] [i_16] [i_16])))));
                        arr_63 [i_11] [i_12] [i_13] [12LL] = ((/* implicit */unsigned char) 5632125672710773766LL);
                    }
                    for (signed char i_17 = 0; i_17 < 13; i_17 += 1) 
                    {
                        arr_68 [i_13] [i_13] [i_13] [i_13] [i_13] [i_12] = ((/* implicit */unsigned long long int) var_6);
                        arr_69 [i_12] [i_13] [i_17] = (+(max((((/* implicit */long long int) (~(arr_46 [i_12] [i_12] [i_12] [i_12])))), ((~(576460752303423487LL))))));
                        arr_70 [i_13] [i_13] [i_12] = ((/* implicit */int) min(((~(min((1656176220767156344LL), (-9223372036854775793LL))))), ((-(arr_66 [i_11] [i_11])))));
                        var_28 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [0LL] [i_17] [i_11] [i_12] [i_11] [0LL])) ? (var_9) : (var_1)))) ? (((int) var_10)) : (var_6)))), (min((((var_1) / (((/* implicit */unsigned long long int) -1656176220767156344LL)))), (((/* implicit */unsigned long long int) ((var_11) * (((/* implicit */unsigned int) var_6)))))))));
                        arr_71 [i_12] = ((/* implicit */unsigned int) 909664364815717338ULL);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_18 = 3; i_18 < 10; i_18 += 1) 
                    {
                        var_29 ^= ((/* implicit */int) (((~(-576460752303423486LL))) << (((((((((/* implicit */_Bool) -1LL)) ? (-26895141284078184LL) : (576460752303423485LL))) + (26895141284078213LL))) - (26LL)))));
                        var_30 ^= var_3;
                        /* LoopSeq 1 */
                        for (int i_19 = 0; i_19 < 13; i_19 += 4) 
                        {
                            arr_78 [i_12] [i_13] [i_13] = ((/* implicit */int) (~(var_4)));
                            var_31 = ((/* implicit */long long int) ((unsigned int) arr_44 [i_18 + 1] [i_18 - 3] [i_12]));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 3; i_20 < 12; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_46 [12U] [i_20 - 2] [i_20 - 2] [4])), (arr_67 [i_20 - 1] [i_20 - 2] [i_20 - 2] [i_20 + 1]))), (((/* implicit */unsigned long long int) arr_64 [i_11] [4])))))));
                                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -5632125672710773766LL)) ? (((((/* implicit */long long int) 1307086806U)) / (-576460752303423485LL))) : (((/* implicit */long long int) 688736822)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_85 [i_11] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [18LL])))) ? ((+((-9223372036854775807LL - 1LL)))) : ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_73 [i_11] [i_11] [i_11] [i_11])) : (5632125672710773755LL)))))));
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) 10925426836624479239ULL))));
    }
    for (int i_22 = 0; i_22 < 13; i_22 += 1) /* same iter space */
    {
        var_35 -= ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) arr_76 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22])) % (arr_86 [i_22])))));
        /* LoopNest 3 */
        for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 1) 
        {
            for (int i_24 = 2; i_24 < 12; i_24 += 1) 
            {
                for (signed char i_25 = 0; i_25 < 13; i_25 += 4) 
                {
                    {
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((((/* implicit */_Bool) arr_43 [i_22])) ? (((/* implicit */unsigned long long int) (-((+(-576460752303423479LL)))))) : ((+(arr_86 [i_23])))))));
                        arr_98 [i_25] [i_24] [3LL] [i_24] [i_24] [i_22] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((long long int) arr_43 [i_23]))))) % ((~(((unsigned int) arr_49 [i_24] [i_22]))))));
                        arr_99 [i_25] [i_24] [i_23] [i_23] [i_24] [i_22] = (+(((long long int) ((-576460752303423477LL) >= (((/* implicit */long long int) var_6))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_26 = 0; i_26 < 13; i_26 += 1) 
        {
            arr_102 [i_22] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((~(max((var_7), (((/* implicit */unsigned long long int) arr_80 [2LL] [i_22] [i_22] [12LL] [i_22] [2LL])))))) : (((((/* implicit */_Bool) (unsigned char)141)) ? (8335327052040085146ULL) : (((/* implicit */unsigned long long int) 1670142066U))))));
            arr_103 [i_22] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(-3124444724573585593LL)))))) ? (((long long int) arr_72 [i_22] [6LL] [i_26] [i_26])) : (((/* implicit */long long int) (~(arr_1 [i_22]))))));
            var_37 = max((((((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) / (1125899906842623LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((2541190626556392996LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)44))))))) : ((+(1125899906842623LL))))), (min((((/* implicit */long long int) arr_76 [i_22] [i_22] [4LL] [i_26] [3ULL] [i_26] [i_26])), (((((/* implicit */_Bool) 10925426836624479240ULL)) ? (arr_0 [2ULL]) : (((/* implicit */long long int) arr_72 [i_22] [4LL] [i_22] [i_22])))))));
        }
        var_38 = ((/* implicit */unsigned long long int) ((int) ((576460752303423462LL) / (-2541190626556392997LL))));
        arr_104 [i_22] [i_22] = ((/* implicit */unsigned long long int) 3209443962U);
    }
}
