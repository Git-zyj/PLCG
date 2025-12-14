/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1961
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
    var_10 = ((/* implicit */long long int) var_6);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) ((min((arr_1 [i_0]), (((/* implicit */long long int) (!((_Bool)1)))))) + (((arr_1 [i_0]) - (((/* implicit */long long int) arr_2 [i_0] [i_0]))))));
        arr_3 [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) (signed char)31))))), (min((arr_2 [i_0] [i_0]), (min((((/* implicit */unsigned int) arr_0 [i_0])), (2745643740U))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) var_5);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_8 [i_0] [i_1] = ((/* implicit */short) (_Bool)1);
            var_12 = ((((((/* implicit */int) var_2)) + (2147483647))) << (((((var_5) + (8422487723340215499LL))) - (26LL))));
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned char) (signed char)58);
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
            {
                for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1331495016)) ? (1854742713082695554ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196)))));
                        arr_19 [i_3] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */short) arr_14 [i_0] [i_2]);
                        arr_20 [i_3] [i_4] [i_4 + 1] [i_4] = ((signed char) var_9);
                        arr_21 [i_3] = ((/* implicit */int) max((min((var_5), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (unsigned char)13))));
                    }
                } 
            } 
            var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-73))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) * (min((arr_0 [i_0]), (((/* implicit */int) (_Bool)0))))));
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 17; i_7 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) -777683381);
                    var_16 = ((/* implicit */int) 18446744073709551615ULL);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 18; i_9 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) -7540808288322171975LL);
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)54600)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)105))) : (var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1495411034)) ? (-1195746729) : (((/* implicit */int) (signed char)-80)))))));
                                var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_3)) : (-1311687563)))) ? (((((/* implicit */_Bool) -1720678596)) ? (arr_28 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (-8688461505363288229LL))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        arr_39 [i_10] = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_10])) * (((/* implicit */int) arr_6 [i_10] [i_10] [i_10]))));
        /* LoopNest 3 */
        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
        {
            for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                for (unsigned int i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    {
                        arr_47 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_11] [i_11] [i_11] [i_10] [i_12] [i_10]))) ^ (var_9)));
                        arr_48 [i_10] [i_10] [i_12] [i_13] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)25812)) == (((/* implicit */int) (signed char)-13))));
                        var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_16 [i_10])) && (((/* implicit */_Bool) var_7)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8))))));
        /* LoopSeq 3 */
        for (unsigned int i_14 = 1; i_14 < 11; i_14 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2170015564U))));
            /* LoopSeq 2 */
            for (signed char i_15 = 1; i_15 < 12; i_15 += 3) 
            {
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) -979687563)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_35 [i_10]))));
                /* LoopSeq 3 */
                for (long long int i_16 = 2; i_16 < 12; i_16 += 4) 
                {
                    arr_57 [i_10] [i_10] [i_15] [i_16] = (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_34 [i_10] [i_10] [i_10] [i_15] [i_16] [i_16 + 1])));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 1; i_17 < 10; i_17 += 2) 
                    {
                        arr_60 [i_10] [i_10] [i_15 - 1] [i_16] [i_10] = ((((/* implicit */_Bool) ((2654412313U) >> (((1356020653688937674ULL) - (1356020653688937652ULL)))))) ? (((((/* implicit */int) (short)17253)) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-3682)));
                        arr_61 [i_17] [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_14] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_14] [i_15 + 1] [i_15])) || (((/* implicit */_Bool) (short)5320))));
                        arr_62 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_44 [i_10] [i_14 + 1] [i_14 + 1] [i_10])) ^ (((/* implicit */int) arr_44 [i_10] [i_10] [i_14 + 1] [i_10]))));
                        arr_63 [i_15] [i_17] = ((/* implicit */short) ((arr_41 [i_16 + 1] [i_16 - 2]) * (arr_41 [i_16 + 1] [i_16 - 1])));
                    }
                    arr_64 [i_14 - 1] [i_10] = ((/* implicit */unsigned int) var_5);
                }
                for (short i_18 = 0; i_18 < 13; i_18 += 4) 
                {
                    arr_67 [i_10] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_51 [i_15 - 1] [i_15 - 1] [i_14 + 1])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_2))));
                    arr_68 [i_10] [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)25)) : (-1493743037))));
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    arr_71 [i_10] [i_10] [i_19] [i_10] = (+(((/* implicit */int) (_Bool)1)));
                    var_25 = ((/* implicit */unsigned long long int) var_0);
                }
                var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_9)));
            }
            for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 2) 
            {
                arr_74 [i_10] [i_14 + 1] [i_10] = (~(1937720101));
                var_27 = ((var_5) | (((/* implicit */long long int) arr_66 [i_10] [i_14 + 2] [i_14] [i_14 + 2])));
                /* LoopSeq 2 */
                for (signed char i_21 = 0; i_21 < 13; i_21 += 3) 
                {
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1023U)) ? (((/* implicit */int) (short)18630)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_25 [i_21])) : ((~(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_14 + 1] [i_10] [i_10]))));
                        var_30 = ((/* implicit */_Bool) (~(((/* implicit */int) ((3053455697851665859ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))));
                        arr_80 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_66 [i_21] [i_14 - 1] [i_10] [i_14 - 1])) ? (arr_7 [i_10] [i_20] [i_22]) : (arr_66 [i_21] [i_21] [i_14] [i_21])));
                    }
                    arr_81 [i_10] [i_10] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (short)-5068)) ^ (((/* implicit */int) var_7)))) + (2147483647))) << (((/* implicit */int) (_Bool)0))));
                }
                for (unsigned char i_23 = 0; i_23 < 13; i_23 += 3) 
                {
                    arr_84 [i_23] [i_14] [i_20] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(6136397436979809793ULL)))) ? (((/* implicit */int) arr_40 [i_10] [i_10])) : (((/* implicit */int) var_3))));
                    var_31 = ((/* implicit */unsigned int) 1640296174886074709LL);
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_9))));
                }
                arr_85 [i_10] [i_10] = ((/* implicit */long long int) (unsigned char)107);
                var_33 = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
            }
        }
        for (unsigned char i_24 = 0; i_24 < 13; i_24 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_25 = 0; i_25 < 13; i_25 += 3) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    {
                        arr_93 [i_10] [i_10] [i_10] [i_26] [i_10] = ((/* implicit */int) (~(var_1)));
                        arr_94 [i_26] = ((/* implicit */_Bool) var_3);
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (int i_27 = 0; i_27 < 13; i_27 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_28 = 0; i_28 < 13; i_28 += 3) 
                {
                    for (unsigned int i_29 = 1; i_29 < 12; i_29 += 3) 
                    {
                        {
                            arr_103 [i_27] [i_24] [i_27] [i_29 + 1] [i_29 + 1] [i_28] = ((/* implicit */unsigned char) (_Bool)1);
                            arr_104 [i_24] [i_27] [i_28] [i_27] [i_27] [i_27] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) (short)-1))))) - ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19068))) : (var_5)))));
                            var_34 = ((/* implicit */_Bool) var_5);
                        }
                    } 
                } 
                arr_105 [i_27] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_0))))));
                var_35 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
            }
            for (unsigned char i_30 = 2; i_30 < 12; i_30 += 1) 
            {
                var_36 = ((/* implicit */signed char) ((((/* implicit */int) arr_45 [i_10] [i_10] [i_10] [i_24] [i_30 + 1] [i_10])) < (((/* implicit */int) arr_36 [i_24]))));
                var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_15 [i_10] [i_10] [i_30]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) && (((/* implicit */_Bool) ((int) var_4)))));
                arr_110 [i_10] [i_24] [i_30] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_10] [i_24] [i_10] [i_30 + 1])))));
                var_38 = ((/* implicit */unsigned char) arr_108 [i_24] [i_10]);
            }
            for (unsigned int i_31 = 0; i_31 < 13; i_31 += 4) 
            {
                arr_113 [i_31] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1818587868U)) && (((/* implicit */_Bool) arr_14 [i_10] [i_10]))));
                arr_114 [i_31] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((2305843009213693951ULL) >> (((((/* implicit */int) var_8)) - (153))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) var_3)))))));
                /* LoopSeq 1 */
                for (int i_32 = 0; i_32 < 13; i_32 += 4) 
                {
                    var_39 = ((/* implicit */signed char) (~(527384555U)));
                    arr_117 [i_31] [i_31] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_17 [i_32]))));
                    var_40 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_30 [i_31] [i_10] [i_10]) : (((/* implicit */long long int) -1113669105))))) ? (127) : (((/* implicit */int) var_4)));
                    var_41 = ((/* implicit */unsigned int) (-(arr_88 [i_32] [i_10] [i_10] [i_10])));
                }
            }
            for (signed char i_33 = 1; i_33 < 12; i_33 += 1) 
            {
                var_42 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_30 [i_33] [i_33] [i_33 + 1])));
                arr_120 [i_33] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_76 [i_10] [i_24] [i_33 - 1] [i_10] [i_10])) & (((/* implicit */int) (unsigned char)255))));
                /* LoopNest 2 */
                for (int i_34 = 0; i_34 < 13; i_34 += 4) 
                {
                    for (int i_35 = 0; i_35 < 13; i_35 += 4) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned char) 1145295454U);
                            var_44 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
                            var_45 = ((/* implicit */_Bool) ((arr_66 [i_33 - 1] [i_33] [i_33 + 1] [i_33 - 1]) >> (((arr_66 [i_33 + 1] [i_33] [i_33 + 1] [i_33 - 1]) - (1788063078U)))));
                            var_46 = ((/* implicit */unsigned char) ((6891912424133134494LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-55)))));
                        }
                    } 
                } 
                arr_129 [i_33] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -2003597407)) + (arr_89 [i_33 - 1] [i_33 - 1] [i_33] [i_33 + 1])));
            }
            arr_130 [i_10] [i_24] [i_24] = (unsigned char)174;
            /* LoopSeq 1 */
            for (signed char i_36 = 2; i_36 < 12; i_36 += 3) 
            {
                arr_133 [i_36] [i_36] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) arr_31 [i_10] [i_24] [i_10] [i_36 - 1])) : (((/* implicit */int) arr_31 [i_36] [i_24] [i_36] [i_36 - 1]))));
                var_47 = ((/* implicit */signed char) arr_86 [i_10] [i_24]);
            }
        }
        for (unsigned long long int i_37 = 2; i_37 < 10; i_37 += 4) 
        {
            var_48 = ((/* implicit */short) ((((/* implicit */int) var_3)) == ((-(((/* implicit */int) var_7))))));
            var_49 = ((/* implicit */short) (unsigned char)129);
            /* LoopNest 2 */
            for (unsigned char i_38 = 2; i_38 < 12; i_38 += 1) 
            {
                for (unsigned char i_39 = 0; i_39 < 13; i_39 += 3) 
                {
                    {
                        var_50 = ((/* implicit */int) var_9);
                        var_51 = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_10] [i_38] [i_10])) ? (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_128 [i_10] [i_37] [i_10] [i_38 - 2] [i_38 - 2] [i_39]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_137 [i_10] [i_37] [i_38 - 2])))));
                    }
                } 
            } 
            var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_37 - 2] [i_37 - 2] [i_37 - 2])) ? (((/* implicit */int) (unsigned char)68)) : (-1706730744)));
        }
    }
    var_53 = var_5;
}
