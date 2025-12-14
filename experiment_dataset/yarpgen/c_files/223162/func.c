/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223162
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
    var_12 = ((/* implicit */signed char) (-((-((~(5219848624761688166LL)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned int) (-((+((-(((/* implicit */int) var_10))))))));
                    var_13 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                    var_14 = ((/* implicit */unsigned int) (+((~((~((-2147483647 - 1))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        arr_12 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */signed char) (-((-(arr_6 [i_1] [i_1] [i_3])))));
                        arr_13 [i_3] [i_3] = (~((-(((/* implicit */int) (short)-26551)))));
                        var_15 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_3))))));
                        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_7))))));
                    }
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+((+((-(var_4))))))))));
                }
            } 
        } 
        var_18 *= ((/* implicit */unsigned int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 3; i_5 < 21; i_5 += 3) 
        {
            arr_19 [i_5] [i_5] [i_5] = (-((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_5]))))))));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            arr_29 [i_4] [i_5] [i_4] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */signed char) (!((!((!(((/* implicit */_Bool) arr_20 [i_4] [i_5] [i_4] [i_7]))))))));
                            var_19 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)102))))))))));
                            arr_30 [i_4] [i_5] [i_7] [i_7] [(_Bool)1] = (-((-((-(arr_27 [i_4] [i_5 - 2] [i_6] [(signed char)2] [i_4]))))));
                            arr_31 [i_4] [i_4] [i_6] [4] [i_8] |= ((/* implicit */unsigned short) (~((-((-(arr_27 [(short)15] [i_5] [(short)15] [(unsigned char)3] [i_8])))))));
                            var_20 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) (~((-(-5219848624761688166LL)))));
                    arr_34 [i_6] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
                }
                for (long long int i_10 = 2; i_10 < 18; i_10 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        arr_40 [i_6] |= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(4294965248U)))))))));
                        arr_41 [i_4] [i_5] [i_4] [i_10] [i_6] [i_4] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(-1LL))))))));
                        arr_42 [(_Bool)1] [i_5] [i_6] [i_10] [i_10] [(unsigned char)15] = ((/* implicit */short) (~((~((-(((/* implicit */int) (short)30734))))))));
                    }
                    for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)10)))))))))))));
                        arr_45 [i_4] [i_5] [i_5] [i_10] [i_4] = ((/* implicit */long long int) (~((+((~(((/* implicit */int) (_Bool)1))))))));
                        var_23 *= ((/* implicit */unsigned short) (-((-((-(var_1)))))));
                        arr_46 [i_5] [i_5] = ((/* implicit */short) (~((~((~(((/* implicit */int) (unsigned short)24459))))))));
                    }
                    arr_47 [i_5] = ((/* implicit */unsigned short) (+((~((~(1160433256U)))))));
                }
                for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    arr_51 [i_6] [i_6] [i_6] [i_13] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_3)))))))));
                    /* LoopSeq 4 */
                    for (int i_14 = 0; i_14 < 22; i_14 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(538850481U))))))))))));
                        arr_55 [i_4] [i_13] [i_5] [i_13] [i_14] = ((/* implicit */short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_11)))))))));
                        var_26 = ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) var_5))))))));
                    }
                    /* vectorizable */
                    for (short i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_27 = (+((-(var_6))));
                        var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5] [i_5 - 2] [i_5])))))));
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_56 [i_5] [i_6] [i_6] [i_5] [i_4])))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_16 = 1; i_16 < 19; i_16 += 4) 
                    {
                        arr_64 [i_5] [i_5] = (-((-(arr_22 [i_5] [i_6] [i_5]))));
                        var_30 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_24 [i_4] [i_5] [i_6] [i_4] [i_6]))))));
                        var_31 = ((/* implicit */int) (~((-(arr_50 [i_4] [i_6] [(_Bool)1])))));
                    }
                    for (unsigned char i_17 = 4; i_17 < 19; i_17 += 1) 
                    {
                        arr_67 [i_4] [i_5] [i_5] [i_6] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_6] [14U] [i_5] [i_13] [i_17]))))))))));
                        arr_68 [i_5] [i_5] [i_6] [i_13] [i_5] = ((/* implicit */unsigned char) (+((+((-(arr_32 [i_4] [i_5 - 2] [i_5 - 2] [i_5] [(unsigned short)20] [i_5])))))));
                    }
                    arr_69 [i_5] [3U] [i_13] [i_13] = ((/* implicit */short) (-((-((+(var_5)))))));
                    var_32 += ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_54 [(unsigned short)14] [i_13] [i_4] [i_4] [i_5] [(unsigned short)14] [i_4])))))))));
                }
            }
            /* LoopSeq 3 */
            for (unsigned short i_18 = 2; i_18 < 20; i_18 += 2) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_19 = 0; i_19 < 22; i_19 += 2) 
                {
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))))));
                    /* LoopSeq 3 */
                    for (long long int i_20 = 0; i_20 < 22; i_20 += 2) 
                    {
                        arr_76 [i_5] = ((/* implicit */int) (+((+(5219848624761688165LL)))));
                        var_34 = ((/* implicit */short) (~((~(arr_16 [i_4])))));
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_2)))))))));
                    }
                    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) /* same iter space */
                    {
                        arr_80 [i_4] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_4] [i_5 + 1] [i_18 + 1] [i_5] [i_5 - 2] [i_5 - 2] [i_19])))))));
                        arr_81 [i_5] = (+((-(var_7))));
                        var_36 = ((/* implicit */unsigned short) (~((-(arr_37 [i_4] [i_5] [(unsigned char)12] [i_21])))));
                    }
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) /* same iter space */
                    {
                        arr_84 [i_5] [i_5] [i_5] [9ULL] [i_22] [i_5] = ((/* implicit */short) (~((~(538850481U)))));
                        var_37 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_18 - 2] [i_19] [i_22])))))));
                        arr_85 [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_23 = 2; i_23 < 21; i_23 += 3) 
                {
                    var_38 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)44))));
                    /* LoopSeq 3 */
                    for (int i_24 = 0; i_24 < 22; i_24 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned int) max((var_39), ((-((-(3425459939U)))))));
                        arr_93 [11] [11] [11] [i_5] [i_24] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_38 [i_4] [i_5] [i_5] [i_23] [(unsigned short)2]))))));
                    }
                    for (int i_25 = 0; i_25 < 22; i_25 += 2) 
                    {
                        var_40 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_87 [i_4] [i_5] [i_4] [i_4]))))));
                        arr_98 [i_4] [i_5] [i_5] [i_5] [i_25] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)26))))));
                    }
                    for (long long int i_26 = 1; i_26 < 20; i_26 += 3) 
                    {
                        var_41 += (!((!(((/* implicit */_Bool) (unsigned char)96)))));
                        var_42 += ((/* implicit */unsigned short) (-((~(((/* implicit */int) (short)9))))));
                    }
                    arr_102 [i_5] [i_5] [i_18] [i_23] [i_23] [i_23] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-104))));
                }
                for (unsigned int i_27 = 0; i_27 < 22; i_27 += 3) 
                {
                    arr_105 [i_4] [i_4] [i_5] = ((/* implicit */long long int) (-((+((~(247914527U)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_28 = 4; i_28 < 19; i_28 += 2) 
                    {
                        var_43 = (-((-((+(((/* implicit */int) (unsigned char)61)))))));
                        arr_109 [i_18 - 2] [i_5] = ((/* implicit */short) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_10)))))))));
                        var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)249)))))))));
                        var_45 = ((/* implicit */unsigned char) (+((+((+((-2147483647 - 1))))))));
                    }
                }
                var_46 = ((/* implicit */unsigned short) (-((+((+(var_4)))))));
                arr_110 [i_4] [i_18] [i_5] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_83 [i_4] [i_5 + 1])))))))));
            }
            for (int i_29 = 0; i_29 < 22; i_29 += 2) 
            {
                arr_113 [i_4] [i_29] [i_29] [i_5] = ((/* implicit */long long int) (-((+((-(var_6)))))));
                arr_114 [i_4] [i_5] [i_29] = ((/* implicit */unsigned short) (+((-((-(((/* implicit */int) (signed char)-30))))))));
            }
            for (unsigned int i_30 = 0; i_30 < 22; i_30 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_31 = 0; i_31 < 22; i_31 += 2) 
                {
                    for (long long int i_32 = 0; i_32 < 22; i_32 += 4) 
                    {
                        {
                            arr_123 [i_32] [i_5] [i_30] [i_5] [i_4] = ((/* implicit */long long int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31272)))))))));
                            var_47 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (-(arr_21 [i_30] [(unsigned char)14] [i_32] [i_31]))))))));
                        }
                    } 
                } 
                var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) (+((+((+(((/* implicit */int) (unsigned short)34289)))))))))));
            }
        }
        arr_124 [i_4] [i_4] = ((/* implicit */unsigned char) (~((-((-(var_0)))))));
        /* LoopNest 2 */
        for (short i_33 = 1; i_33 < 21; i_33 += 3) 
        {
            for (unsigned int i_34 = 0; i_34 < 22; i_34 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_35 = 0; i_35 < 22; i_35 += 2) /* same iter space */
                    {
                        arr_132 [i_33] [i_33] [i_35] = ((/* implicit */long long int) (+((+((-(1160433266U)))))));
                        var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) (~((-((-(((/* implicit */int) arr_126 [i_35] [i_35])))))))))));
                        arr_133 [i_4] [i_4] [(unsigned short)20] [i_35] [i_4] [i_35] |= ((/* implicit */unsigned long long int) (+((~((+(((/* implicit */int) (signed char)-41))))))));
                        var_50 = ((/* implicit */long long int) (-((-((-(((/* implicit */int) var_11))))))));
                        arr_134 [i_33] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                    }
                    for (unsigned short i_36 = 0; i_36 < 22; i_36 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_37 = 0; i_37 < 22; i_37 += 4) 
                        {
                            var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)5)))))))))))));
                            arr_141 [i_33 - 1] [i_34] [i_33] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_77 [i_4] [i_4] [i_34] [i_36] [i_37] [i_36]))))))))));
                            arr_142 [i_33] [i_33] [i_33] [i_36] [i_36] [(_Bool)1] = ((/* implicit */short) (~((-((-(((/* implicit */int) var_9))))))));
                            var_52 = ((/* implicit */signed char) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                            var_53 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) 1160433266U)))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_38 = 1; i_38 < 21; i_38 += 2) 
                        {
                            arr_145 [i_4] [i_33] [i_33] [i_33] [i_38] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) arr_136 [i_33] [i_34] [i_36] [i_38])))))))));
                            var_54 = ((/* implicit */unsigned short) (~((~((-(((/* implicit */int) var_10))))))));
                            arr_146 [i_38] [i_33] [i_33] [i_33] = (+(((/* implicit */int) (short)830)));
                            arr_147 [i_33] [i_4] [i_33] [i_33] [i_33] = ((/* implicit */short) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_77 [i_4] [(_Bool)1] [i_38] [i_4] [i_38 + 1] [i_38])))))))));
                        }
                        arr_148 [i_33] [(_Bool)1] [i_33] [i_36] [i_34] = ((/* implicit */int) (!(((/* implicit */_Bool) (~((-(arr_62 [i_34] [i_33 - 1] [i_34] [i_36] [i_4]))))))));
                    }
                    arr_149 [i_33] = ((/* implicit */unsigned int) (~((~((-(((/* implicit */int) var_8))))))));
                    var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) (~((+((-(((/* implicit */int) var_9)))))))))));
                }
            } 
        } 
        arr_150 [i_4] [i_4] = (-((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_79 [i_4] [i_4] [i_4] [(short)20] [i_4] [i_4] [i_4]))))))));
    }
    for (unsigned short i_39 = 0; i_39 < 22; i_39 += 4) /* same iter space */
    {
        arr_155 [i_39] = ((/* implicit */signed char) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_103 [i_39] [i_39] [i_39] [i_39] [i_39] [i_39])))))))));
        /* LoopNest 3 */
        for (long long int i_40 = 0; i_40 < 22; i_40 += 3) 
        {
            for (unsigned long long int i_41 = 0; i_41 < 22; i_41 += 3) 
            {
                for (long long int i_42 = 0; i_42 < 22; i_42 += 3) 
                {
                    {
                        arr_163 [i_39] [i_40] [i_40] [i_41] [i_41] [i_39] = ((/* implicit */long long int) (~((-((+(((/* implicit */int) arr_121 [i_39] [i_40] [i_42]))))))));
                        var_56 *= (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_33 [i_39] [12]))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_43 = 0; i_43 < 22; i_43 += 4) 
        {
            var_57 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4LL)))))));
            arr_167 [i_39] [i_43] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_137 [i_39] [i_39] [i_39] [i_39] [i_39]))))));
            arr_168 [i_39] [i_43] = ((/* implicit */unsigned long long int) (+((+(arr_91 [i_39] [i_39] [i_43] [i_43] [i_43] [i_39] [i_39])))));
            /* LoopNest 3 */
            for (long long int i_44 = 3; i_44 < 19; i_44 += 2) 
            {
                for (unsigned short i_45 = 3; i_45 < 19; i_45 += 3) 
                {
                    for (long long int i_46 = 0; i_46 < 22; i_46 += 4) 
                    {
                        {
                            var_58 = ((/* implicit */int) (-((-(arr_60 [i_39] [i_46] [i_44] [i_39] [i_45] [i_39])))));
                            var_59 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_103 [i_43] [i_43] [i_44 + 1] [i_45] [15] [(unsigned short)21])))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_47 = 0; i_47 < 22; i_47 += 1) 
        {
            arr_182 [i_39] [i_39] [i_39] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((-(arr_66 [i_47] [i_47]))))))));
            /* LoopSeq 1 */
            for (unsigned int i_48 = 1; i_48 < 21; i_48 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_49 = 0; i_49 < 22; i_49 += 2) 
                {
                    arr_188 [i_47] [i_48] [i_47] = ((/* implicit */long long int) (+((-((-(arr_22 [i_39] [i_49] [i_47])))))));
                    arr_189 [i_49] [i_47] [16LL] [i_49] [i_48 - 1] [i_49] |= ((/* implicit */int) (-((~((-(var_7)))))));
                }
                var_60 = ((/* implicit */unsigned int) (+((+((+(((/* implicit */int) (_Bool)1))))))));
                var_61 *= ((/* implicit */signed char) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) 7ULL)))))))));
            }
        }
        var_62 = (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_96 [i_39] [i_39] [i_39] [(short)3] [i_39]))))))));
    }
}
