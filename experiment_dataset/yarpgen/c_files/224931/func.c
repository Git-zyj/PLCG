/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224931
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) min((min(((-(arr_1 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_0 [i_0]))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-43)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) var_2)))) : (arr_0 [i_0])))), (min((((/* implicit */unsigned int) (unsigned char)22)), (var_11)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_3] [(unsigned char)16] [(unsigned short)9] = ((/* implicit */unsigned char) var_9);
                        arr_13 [i_3] [(unsigned char)0] [i_2] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)235))));
                    }
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */int) (unsigned short)57479))))) ? (min((var_5), (((/* implicit */long long int) arr_0 [i_1])))) : (((/* implicit */long long int) max((arr_0 [i_4]), (arr_0 [i_1]))))));
                        arr_18 [i_0] [14LL] [i_0] [i_0] = ((/* implicit */signed char) ((((long long int) min(((signed char)-65), ((signed char)-110)))) == (min((arr_10 [i_0]), (((/* implicit */long long int) arr_6 [i_0] [i_2] [i_4]))))));
                        arr_19 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((min((((/* implicit */long long int) arr_9 [i_1])), (var_4))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_4]))))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)235)))))));
                        arr_20 [i_0] [i_1] [11LL] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */signed char) var_12)), (((signed char) min((-578794218), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_4])))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        arr_25 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */int) (~(min((var_6), (((/* implicit */long long int) arr_6 [i_5] [i_2] [i_1]))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */int) (+(max((max((arr_21 [i_1]), (1947449020464558231LL))), (((/* implicit */long long int) arr_5 [i_2]))))));
                            arr_29 [i_0] [i_0] = ((/* implicit */_Bool) 4372263244018410118LL);
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_32 [i_1] [(unsigned char)16] = ((/* implicit */signed char) ((unsigned int) arr_8 [i_0] [4] [i_5] [i_7]));
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned char) arr_27 [i_0] [i_1] [i_1] [i_5] [i_7]));
                            arr_34 [8U] [i_1] [8U] [i_5] [i_1] &= ((/* implicit */unsigned short) var_7);
                            arr_35 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [i_7]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            arr_38 [i_0] [20U] [i_2] [i_0] [i_5] [i_0] = ((/* implicit */signed char) var_5);
                            arr_39 [i_0] = ((/* implicit */_Bool) 877422287);
                            arr_40 [i_0] [i_1] [i_0] [i_5] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_37 [i_1] [13]))))) <= (((/* implicit */int) ((var_13) < (((/* implicit */long long int) ((/* implicit */int) (signed char)125))))))));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 1; i_9 < 23; i_9 += 3) 
                        {
                            arr_43 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) arr_10 [i_0]);
                            arr_44 [i_0] [i_0] [i_1] [i_0] [i_5] [(signed char)15] = ((/* implicit */_Bool) arr_11 [i_0]);
                            arr_45 [11LL] [i_1] [i_0] [(_Bool)1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1947449020464558231LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0]))))) : (((/* implicit */int) arr_14 [i_0] [5U] [i_9] [i_9 - 1]))));
                        }
                        arr_46 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_5] [i_1] [(unsigned short)13])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [7LL] [i_2]))))), (((var_4) << (((((-468185245) + (468185298))) - (53)))))));
                        arr_47 [23U] [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_8)) ? (1431664147415991042LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))) : ((+(var_13))))), (((/* implicit */long long int) min((var_12), ((!(((/* implicit */_Bool) var_0)))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_52 [i_0] [20U] [i_2] [i_1] [i_10] [i_10] = ((/* implicit */long long int) var_8);
                        /* LoopSeq 4 */
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            arr_56 [i_0] [i_0] [i_2] [(signed char)11] [i_11 + 1] = ((/* implicit */unsigned short) (((_Bool)1) ? (arr_48 [i_11] [i_11 + 1] [i_11] [i_11] [i_11 + 1] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                            arr_57 [i_11] [i_11] [i_11] [i_0] [i_11] [i_11] [i_11] = ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_0] [i_0] [(signed char)8] [i_0] [(unsigned char)8]))))) << (((((((/* implicit */int) (unsigned char)102)) << (((((/* implicit */int) (signed char)95)) - (87))))) - (26112)))));
                        }
                        for (unsigned char i_12 = 4; i_12 < 23; i_12 += 1) 
                        {
                            arr_61 [i_2] [i_2] [(_Bool)1] [i_2] [i_0] [13LL] [(signed char)17] = ((((/* implicit */_Bool) arr_24 [i_0] [i_10] [i_2] [i_0])) ? (17179869183LL) : (((long long int) (unsigned char)149)));
                            arr_62 [i_0] = (-(-7912526251084399966LL));
                            arr_63 [i_0] [(unsigned char)16] [i_0] [i_10] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0] [i_12 - 3] [i_12] [i_12 - 1])) + (((/* implicit */int) (unsigned char)235))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            arr_66 [i_1] = arr_14 [i_1] [6] [(signed char)12] [(signed char)4];
                            arr_67 [i_0] [i_0] [14U] [i_0] [i_0] = arr_55 [i_0] [(_Bool)1] [i_2] [i_10] [(_Bool)1];
                            arr_68 [(unsigned char)4] [i_1] [6LL] [16] [i_1] [i_1] [(unsigned char)4] = ((/* implicit */long long int) var_11);
                        }
                        for (unsigned int i_14 = 0; i_14 < 24; i_14 += 1) 
                        {
                            arr_71 [20U] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) -794634267)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_6))));
                            arr_72 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((unsigned char) (+(arr_0 [i_0]))));
                            arr_73 [i_0] [i_1] [i_2] [i_1] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_2] [i_1])) && (((/* implicit */_Bool) -7490120909011063204LL))));
                        }
                    }
                    arr_74 [i_0] [i_1] [(_Bool)1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3272791230U)) ? (94478814) : (((/* implicit */int) (signed char)-90))))));
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned char i_16 = 2; i_16 < 22; i_16 += 2) 
                        {
                            {
                                arr_83 [i_0] [i_1] [i_16] [i_0] [i_0] [i_16 + 2] = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) (unsigned char)247)));
                                arr_84 [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)191), (((/* implicit */unsigned char) arr_65 [i_0] [i_1] [8LL] [i_0] [i_16])))))) : (2027063253U))));
                                arr_85 [i_0] [i_1] [i_2] [i_0] [i_16 + 1] [i_16 + 1] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)212))))) / (var_4))), (((/* implicit */long long int) ((signed char) -468185245)))));
                                arr_86 [i_0] [22U] [22U] [8U] [i_16] [i_15] [i_16] = ((/* implicit */signed char) arr_69 [i_16] [i_1]);
                            }
                        } 
                    } 
                    arr_87 [i_1] [i_1] [(signed char)20] [i_0] = ((long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102))) | (286209168U))));
                }
            } 
        } 
    }
    for (int i_17 = 0; i_17 < 19; i_17 += 1) 
    {
        arr_90 [(unsigned short)17] = min((((/* implicit */unsigned char) ((signed char) arr_23 [i_17]))), (((unsigned char) -2103848658)));
        arr_91 [i_17] = ((/* implicit */_Bool) min((((int) max((((/* implicit */unsigned short) (unsigned char)21)), (arr_78 [8LL])))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22247))) >= (arr_10 [(_Bool)1])))) > (((/* implicit */int) ((unsigned char) 393536270331312038LL))))))));
        arr_92 [i_17] = min((536870911U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_80 [i_17] [i_17])) << (((((/* implicit */int) (signed char)-1)) + (25)))))));
        /* LoopSeq 4 */
        for (int i_18 = 0; i_18 < 19; i_18 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
            {
                for (unsigned char i_20 = 1; i_20 < 16; i_20 += 4) 
                {
                    for (int i_21 = 1; i_21 < 16; i_21 += 3) 
                    {
                        {
                            arr_106 [i_17] [i_19] [i_19 + 1] [i_19] [i_20] [i_19] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_17] [i_18] [i_17] [(unsigned char)11] [i_21 + 2] [i_17])) ? (arr_49 [(unsigned char)1] [(unsigned char)15] [i_19] [i_20] [i_20 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24623)))))) ? (min((((/* implicit */long long int) (signed char)-26)), (var_13))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_17] [i_17] [i_17])))))));
                            arr_107 [i_20] [(unsigned short)16] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) -1074115500)))), ((!(((/* implicit */_Bool) -165219179))))))), (((unsigned int) max((((/* implicit */int) var_12)), (-468185245))))));
                            arr_108 [i_17] [i_18] [i_18] [i_19] [i_20 + 3] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -7846612770595342139LL)) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)212))) : (arr_54 [i_17] [i_17] [i_19] [i_19] [i_20] [i_21] [i_19]))), (var_9))) : (((5241534348320383810LL) / (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_22 = 0; i_22 < 19; i_22 += 2) 
            {
                arr_113 [8LL] [i_18] [8LL] = ((/* implicit */long long int) max((((/* implicit */int) min(((_Bool)1), (arr_64 [i_22] [i_22] [i_22] [i_18] [i_22] [i_17] [i_17])))), (((((/* implicit */_Bool) 991070509881629777LL)) ? (((/* implicit */int) arr_64 [i_17] [i_17] [i_22] [i_17] [i_17] [4U] [i_17])) : (((/* implicit */int) arr_64 [i_17] [i_18] [i_22] [i_18] [i_17] [i_22] [i_18]))))));
                arr_114 [15] [i_18] [i_22] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (var_11))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_112 [i_22]))))) : (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) arr_42 [14U] [i_18] [i_22] [16U] [16LL] [i_22] [i_18]))))) ? (((/* implicit */long long int) 1300395676)) : ((-9223372036854775807LL - 1LL))))));
                arr_115 [i_17] [i_18] [i_17] = (!(((/* implicit */_Bool) var_13)));
                arr_116 [i_17] [i_17] = ((/* implicit */int) var_8);
            }
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 19; i_23 += 3) /* same iter space */
        {
            arr_120 [i_17] [i_17] [18U] = (+(((/* implicit */int) arr_22 [i_17] [i_23] [0LL] [i_23])));
            arr_121 [i_17] [(unsigned char)16] [18LL] = ((/* implicit */unsigned int) arr_22 [i_17] [i_17] [(unsigned short)8] [i_17]);
        }
        for (unsigned int i_24 = 0; i_24 < 19; i_24 += 2) 
        {
            arr_125 [i_17] [i_17] = ((/* implicit */unsigned char) ((min((2227756476402886475LL), ((-(-1054990330007416344LL))))) + (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_24]) < (var_4)))))));
            arr_126 [i_17] = ((/* implicit */int) ((min((((/* implicit */long long int) max((var_12), (arr_60 [i_24] [i_24] [(_Bool)1] [i_24] [i_17])))), (var_5))) < (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
            arr_127 [i_17] [8U] [i_17] = ((/* implicit */signed char) (unsigned char)125);
            arr_128 [i_17] [i_24] = ((/* implicit */unsigned char) var_1);
        }
        /* vectorizable */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            arr_131 [i_25] = ((/* implicit */signed char) arr_70 [i_25] [i_25] [i_17] [i_25] [i_17]);
            arr_132 [(unsigned short)12] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
            arr_133 [(_Bool)1] [i_25] [6U] &= ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)1))));
        }
    }
    var_14 = ((/* implicit */long long int) var_2);
    /* LoopSeq 1 */
    for (long long int i_26 = 0; i_26 < 15; i_26 += 3) 
    {
        /* LoopNest 2 */
        for (int i_27 = 1; i_27 < 12; i_27 += 4) 
        {
            for (unsigned char i_28 = 0; i_28 < 15; i_28 += 1) 
            {
                {
                    arr_143 [i_26] = ((/* implicit */_Bool) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_8)))))))));
                    arr_144 [i_26] [i_27] [i_27] = ((/* implicit */unsigned char) ((arr_117 [i_27 + 1] [i_27 + 1] [i_27 - 1]) << (((((((/* implicit */_Bool) arr_24 [10LL] [i_27 + 2] [i_27 + 2] [i_27 - 1])) ? (((/* implicit */unsigned int) arr_24 [22] [i_27 - 1] [i_27 + 3] [i_27 + 2])) : (4294967285U))) - (3628824877U)))));
                    arr_145 [i_26] [0U] = (+(max((((/* implicit */long long int) (unsigned char)253)), ((+(var_6))))));
                    arr_146 [i_28] [0LL] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (arr_139 [i_26] [i_26])))) ? (arr_110 [i_27 + 2] [i_27 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (arr_94 [2LL] [14U] [i_26])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2103848642)))))) : (min((var_5), (arr_23 [i_27 + 2])))));
                }
            } 
        } 
        arr_147 [i_26] = ((((/* implicit */_Bool) (unsigned char)21)) ? (max((((/* implicit */long long int) (-(((/* implicit */int) arr_104 [i_26] [i_26] [i_26] [i_26] [i_26]))))), (min((var_4), (((/* implicit */long long int) arr_129 [12U])))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_78 [20U])))));
        arr_148 [i_26] = ((/* implicit */unsigned int) 926954946479364617LL);
    }
    /* LoopNest 2 */
    for (int i_29 = 0; i_29 < 13; i_29 += 1) 
    {
        for (signed char i_30 = 1; i_30 < 10; i_30 += 4) 
        {
            {
                arr_154 [i_29] [i_29] [i_29] = ((/* implicit */unsigned char) var_11);
                arr_155 [i_30] [i_29] = arr_110 [i_29] [i_29];
                arr_156 [i_29] [i_29] [(unsigned char)0] = ((/* implicit */signed char) ((int) 468185249));
                arr_157 [i_29] [10LL] [i_30] = ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_81 [i_30 + 3] [i_30] [i_30] [0] [i_30])))))));
            }
        } 
    } 
}
