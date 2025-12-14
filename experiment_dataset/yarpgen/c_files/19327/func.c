/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19327
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
    var_14 = ((/* implicit */signed char) (+(-1185617348)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_2] [i_3 + 1] = (~(((/* implicit */int) (!(((/* implicit */_Bool) -547165667))))));
                        arr_12 [i_1] [10] [6LL] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [4U])) || (((/* implicit */_Bool) arr_10 [i_1]))))) < (((/* implicit */int) (unsigned short)1175))));
                    }
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [(unsigned short)0])))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                arr_19 [i_1] [i_2] = ((/* implicit */int) arr_10 [i_1]);
                                arr_20 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))));
                                var_16 = ((/* implicit */int) var_4);
                                arr_21 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) var_6)), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), ((-(((/* implicit */int) arr_8 [i_0] [i_0] [4] [i_1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */long long int) (unsigned short)23692);
    }
    var_17 = ((/* implicit */int) (unsigned short)20155);
    var_18 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 3 */
    for (int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] = min((((/* implicit */unsigned int) 547165685)), (4294967295U));
        var_19 = ((/* implicit */int) arr_2 [i_6]);
        arr_27 [i_6] = arr_9 [i_6] [i_6];
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            for (unsigned int i_8 = 1; i_8 < 9; i_8 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) ((unsigned long long int) -1185617363));
                    arr_33 [i_6] [i_8] [i_6] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(-547165667))))));
                }
            } 
        } 
        var_21 -= ((/* implicit */unsigned int) var_0);
    }
    for (int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            for (signed char i_11 = 3; i_11 < 6; i_11 += 3) 
            {
                {
                    arr_42 [i_9] [i_9] = ((/* implicit */unsigned int) max((((/* implicit */int) ((244713308U) < (var_13)))), (max((((/* implicit */int) arr_8 [i_11 + 1] [i_11 + 1] [i_11] [i_9])), (arr_36 [i_10] [i_11] [i_11])))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_10] [i_9] [(short)1]));
                        arr_47 [i_9] [i_10] [i_9] = ((/* implicit */int) (!(((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_10] [i_10]))))) < (((((/* implicit */int) arr_16 [i_11 - 1] [i_11 - 1])) % (var_1)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_13 = 0; i_13 < 10; i_13 += 3) 
                        {
                            var_23 = ((/* implicit */signed char) arr_28 [i_11 + 2]);
                            arr_50 [i_9] [i_10] [i_12] = (-(((/* implicit */int) arr_8 [i_10] [(short)11] [i_11 - 2] [i_9])));
                            arr_51 [i_9] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */int) ((_Bool) ((-3450706729000811153LL) < (((/* implicit */long long int) arr_15 [i_9] [i_10] [i_10] [i_10] [i_13] [i_11])))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            arr_55 [i_14] [i_14] [i_9] = ((/* implicit */unsigned short) (~(var_2)));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (+((~(1874075514U))))))));
                            var_25 = ((/* implicit */short) ((max((min((var_8), (((/* implicit */long long int) 2147483647)))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)50080))))))) & (max((((/* implicit */long long int) max((var_10), (((/* implicit */int) arr_10 [i_9]))))), (arr_41 [i_9] [i_9] [i_9] [i_9])))));
                            var_26 = ((/* implicit */unsigned long long int) var_5);
                            var_27 += ((/* implicit */long long int) min((max((((/* implicit */int) arr_53 [i_11 - 1] [i_11 - 1] [i_11] [i_11 + 3] [i_11 + 1])), (arr_36 [i_9] [i_11 + 3] [i_11 + 3]))), ((+(((/* implicit */int) arr_53 [i_11 - 2] [i_11 + 4] [i_11 - 2] [i_11 + 1] [i_11 + 2]))))));
                        }
                    }
                    var_28 ^= ((/* implicit */unsigned char) arr_44 [i_9]);
                    var_29 += ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
        arr_56 [i_9] [i_9] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)127)), (2420891782U)));
        arr_57 [i_9] = ((/* implicit */unsigned short) (~(arr_46 [i_9] [i_9])));
    }
    for (int i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
    {
        var_30 ^= (!(((/* implicit */_Bool) min((4294967275U), (max((1U), (((/* implicit */unsigned int) 503187988))))))));
        /* LoopSeq 3 */
        for (short i_16 = 0; i_16 < 10; i_16 += 3) 
        {
            arr_62 [i_15] [i_15] [i_15] = (~((+(arr_48 [i_15] [i_15] [i_15] [2LL]))));
            /* LoopSeq 3 */
            for (long long int i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                arr_67 [i_15] [i_16] [(short)3] [(short)3] |= ((/* implicit */int) min((max((((/* implicit */unsigned int) 1906026563)), (1874075541U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [6])))))));
                arr_68 [i_17] [i_16] [i_15] = ((/* implicit */int) ((signed char) 1226799358));
                /* LoopNest 2 */
                for (int i_18 = 3; i_18 < 8; i_18 += 3) 
                {
                    for (long long int i_19 = 2; i_19 < 9; i_19 += 3) 
                    {
                        {
                            arr_76 [(short)0] [(short)0] [(short)0] |= ((/* implicit */long long int) (((+(((/* implicit */int) arr_13 [i_15] [i_16] [i_17] [i_18 - 1])))) | ((-((~(arr_0 [i_19])))))));
                            arr_77 [i_15] [i_16] [i_19] [i_16] [i_16] [i_19 + 1] [i_19] = ((/* implicit */int) (short)511);
                            arr_78 [i_15] [i_15] [i_17] [i_19] [0LL] |= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((((/* implicit */long long int) var_5)) < (-1633652026064828055LL)))));
                            var_31 = ((/* implicit */long long int) (~(((int) (+(((/* implicit */int) var_12)))))));
                            arr_79 [i_15] [i_19] [(signed char)5] [i_19] = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((6512349380803003224LL) == (var_8)))), ((unsigned short)13404)));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_20 = 0; i_20 < 10; i_20 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_21 = 0; i_21 < 10; i_21 += 1) 
                {
                    for (unsigned char i_22 = 0; i_22 < 10; i_22 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */int) max((var_32), ((+(arr_44 [i_15])))));
                            var_33 = var_2;
                            arr_87 [i_22] = ((/* implicit */int) ((_Bool) var_9));
                            var_34 = (+(((int) arr_73 [i_20] [i_16] [i_20] [(unsigned short)2] [i_20] [i_20])));
                        }
                    } 
                } 
                var_35 = ((/* implicit */int) ((((/* implicit */unsigned int) ((var_10) * (((/* implicit */int) (_Bool)1))))) < (var_5)));
            }
            for (int i_23 = 0; i_23 < 10; i_23 += 4) 
            {
                var_36 = ((/* implicit */unsigned short) (~(var_10)));
                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((int) -974091592)))));
                var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_10)))))))));
            }
            var_39 = ((/* implicit */int) max((var_39), ((-(-468336096)))));
        }
        for (unsigned short i_24 = 3; i_24 < 6; i_24 += 3) /* same iter space */
        {
            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) min((2207008473U), (((/* implicit */unsigned int) ((var_5) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))))))))) && (((/* implicit */_Bool) arr_65 [i_24 + 1] [i_24 - 3] [i_24 - 3] [i_24 + 4]))));
            var_41 *= ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (max((2674772767U), (((/* implicit */unsigned int) arr_66 [i_15])))))), (((/* implicit */unsigned int) var_7))));
        }
        /* vectorizable */
        for (unsigned short i_25 = 3; i_25 < 6; i_25 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 10; i_26 += 1) 
            {
                for (long long int i_27 = 0; i_27 < 10; i_27 += 3) 
                {
                    {
                        var_42 = ((/* implicit */int) ((unsigned short) arr_80 [6] [6] [i_25 + 3]));
                        var_43 = ((/* implicit */int) arr_53 [i_25] [i_25] [3LL] [3LL] [i_26]);
                        /* LoopSeq 2 */
                        for (unsigned short i_28 = 0; i_28 < 10; i_28 += 3) 
                        {
                            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_15] [i_25 - 1] [i_25] [6LL]))))))));
                            arr_102 [i_26] [i_26] [i_26] [i_26] [i_28] = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_25] [(unsigned short)7] [i_28] [i_27]))))));
                            arr_103 [i_15] [(signed char)8] [i_15] [i_27] [i_26] [i_15] = ((((/* implicit */_Bool) arr_31 [i_25 + 2] [i_26] [i_25 + 2])) && (((/* implicit */_Bool) 8191ULL)));
                            var_45 = ((/* implicit */_Bool) (+(arr_15 [i_26] [i_26] [i_26] [(_Bool)1] [i_25 - 3] [i_26])));
                            var_46 &= ((/* implicit */int) ((arr_64 [i_25 - 2] [i_26]) == (-1412024035)));
                        }
                        for (unsigned int i_29 = 0; i_29 < 10; i_29 += 1) 
                        {
                            var_47 = ((/* implicit */long long int) -571381891);
                            arr_108 [i_15] [i_25] [i_26] [i_26] [i_15] [i_26] [i_26] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
                            var_48 += ((/* implicit */int) (short)23937);
                        }
                        var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) ((((((arr_91 [i_15] [i_25 - 1] [i_27]) | (var_1))) + (2147483647))) << ((((((((~(9223372036854775807LL))) - (-9223372036854775787LL))) + (37LL))) - (16LL))))))));
                    }
                } 
            } 
            var_50 = ((/* implicit */unsigned char) arr_24 [i_15] [i_25 + 3]);
        }
        var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) var_1))));
    }
}
