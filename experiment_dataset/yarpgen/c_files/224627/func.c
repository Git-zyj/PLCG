/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224627
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) (~(2618404182U)));
        var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [20U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [16U]))) : (var_12)))) ? (((((/* implicit */_Bool) -1562923486)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(signed char)16])) : (((/* implicit */int) arr_0 [(signed char)4]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1562923486) >> (((1676563091U) - (1676563063U)))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) arr_3 [i_0]))))));
        var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150))) >= (5371638825920365857ULL)));
        var_19 = ((/* implicit */unsigned int) arr_2 [(signed char)4]);
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) min((arr_3 [i_1]), (arr_3 [i_1])))) : (arr_2 [i_1])));
        arr_7 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_2 [8]) : (((/* implicit */int) var_9))))) ? (1676563113U) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_1])), (arr_2 [i_1])))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        arr_8 [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) var_10))));
        arr_9 [i_1] = ((/* implicit */unsigned int) var_0);
        arr_10 [i_1] = ((/* implicit */unsigned int) arr_6 [i_1] [(signed char)14]);
    }
    /* LoopSeq 4 */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        arr_13 [i_2] |= ((/* implicit */long long int) arr_5 [i_2]);
        arr_14 [(unsigned short)2] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(4027138948U)))) ? (((/* implicit */int) max((arr_1 [i_2] [i_2]), (((/* implicit */short) var_13))))) : (((/* implicit */int) arr_6 [18U] [i_2]))))) > (min((13075105247789185761ULL), (((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) (short)5157)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    arr_19 [(unsigned short)7] [(unsigned short)7] [2LL] [i_2] = ((unsigned int) (unsigned short)32354);
                    arr_20 [i_2] &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_18 [i_4]))));
                    arr_21 [i_2] = ((/* implicit */_Bool) var_4);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_5 = 3; i_5 < 19; i_5 += 2) 
                    {
                        arr_25 [i_5 + 2] [i_3] = ((/* implicit */signed char) var_7);
                        arr_26 [i_2] [i_3] [i_4] [i_5 + 2] [14U] = ((/* implicit */unsigned int) arr_23 [i_2] [18U] [i_4] [17U]);
                        arr_27 [i_4] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)37466)) ? (((/* implicit */int) var_9)) : (-1562923486)))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        arr_30 [i_6] [i_4] [i_3] [i_2] = 2618404228U;
                        arr_31 [13LL] [(short)19] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)61)) ? (1676563098U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        arr_32 [i_6] [i_4] [i_3] [i_2] = ((/* implicit */unsigned char) 13075105247789185761ULL);
                    }
                    for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        arr_36 [i_2] [i_2] [i_4] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 254935597U)) ? (((/* implicit */int) arr_3 [i_7])) : (((/* implicit */int) arr_3 [i_2]))))) ? (((/* implicit */int) min((arr_23 [i_2] [6LL] [(unsigned short)13] [i_2]), (arr_23 [i_2] [(_Bool)1] [i_4] [i_7])))) : (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_23 [i_2] [i_3] [i_4] [i_7])) : (((/* implicit */int) arr_3 [i_2]))))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((var_15) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (((long long int) arr_6 [i_2] [(signed char)16])))))));
                        arr_37 [10U] [i_4] [i_3] [(unsigned short)14] = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (13075105247789185761ULL))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_3] [i_3])) || (((/* implicit */_Bool) arr_12 [(unsigned char)12]))))))));
                        arr_38 [i_2] [i_2] [i_2] [(unsigned char)10] = ((/* implicit */short) ((((/* implicit */_Bool) (-(1676563098U)))) ? (arr_17 [(short)18] [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)30)) - (((/* implicit */int) arr_33 [21U] [i_7] [i_4] [i_2])))))))))));
                        arr_39 [i_2] [i_3] [i_4] [i_7] &= min(((((!(((/* implicit */_Bool) arr_0 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) : (max((var_12), (((/* implicit */long long int) arr_3 [i_2])))))), (-3143943758415926087LL));
                    }
                    for (long long int i_8 = 2; i_8 < 19; i_8 += 2) 
                    {
                        var_22 = ((/* implicit */short) (~(4294967295U)));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            arr_46 [i_8] = ((/* implicit */short) (+((+(((/* implicit */int) arr_45 [i_8 + 1]))))));
                            var_23 = ((/* implicit */_Bool) min(((signed char)23), (((/* implicit */signed char) ((_Bool) ((2944812034U) >= (((/* implicit */unsigned int) 1560710789))))))));
                            arr_47 [i_2] [i_2] [i_2] [i_2] [i_2] [17LL] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)7881)), (0)));
                        }
                    }
                }
            } 
        } 
    }
    for (long long int i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        arr_51 [i_10] = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) ((unsigned int) var_6))))), ((!(arr_5 [i_10])))));
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((3578548737U), (((/* implicit */unsigned int) (short)0)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                arr_57 [i_12] [i_11] [i_10] [10ULL] = ((/* implicit */short) (unsigned char)133);
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_12] [i_11] [i_11] [i_10])) ? (arr_54 [i_10] [i_10] [i_11] [i_12]) : (arr_54 [i_12] [i_12] [i_12] [i_10]))))));
            }
            for (int i_13 = 3; i_13 < 13; i_13 += 2) 
            {
                var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_10] [i_13 + 2] [i_13] [i_10]))) >= (((((/* implicit */_Bool) var_5)) ? (956660303U) : (((/* implicit */unsigned int) arr_58 [(_Bool)1]))))));
                arr_61 [i_11] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4225086670011399789LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))))));
            }
            for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)7)))))));
                var_28 = ((/* implicit */signed char) arr_45 [i_11]);
                arr_65 [i_14] [i_10] [i_10] [i_14] = ((/* implicit */signed char) arr_52 [i_11]);
                /* LoopSeq 1 */
                for (unsigned short i_15 = 2; i_15 < 14; i_15 += 3) 
                {
                    arr_70 [i_14] [i_11] [i_14] [i_15] = ((/* implicit */signed char) arr_5 [i_10]);
                    arr_71 [i_14] [(unsigned short)1] [i_14] [i_11] [i_14] [i_11] = ((/* implicit */unsigned char) arr_69 [i_15 - 1] [i_14] [(unsigned char)14] [i_15 - 2] [i_14] [i_15 - 1]);
                    arr_72 [i_14] [12LL] [i_14] = ((/* implicit */long long int) var_8);
                    arr_73 [i_10] [i_14] [i_14] [11] [4U] = ((/* implicit */short) (unsigned short)58199);
                    arr_74 [i_15] [i_14] [i_14] [i_10] = (+(arr_34 [i_15 - 2] [i_15] [i_14] [i_14] [18LL] [i_10]));
                }
            }
            var_29 = ((/* implicit */long long int) arr_23 [6] [i_11] [i_11] [i_11]);
            arr_75 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_10])) - (arr_34 [i_11] [i_11] [i_11] [i_10] [i_10] [i_10])));
        }
        for (int i_16 = 0; i_16 < 15; i_16 += 4) 
        {
            var_30 = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_10] [i_16] [i_16])) ? (arr_34 [i_10] [i_16] [i_10] [i_16] [i_16] [i_16]) : (((/* implicit */int) (unsigned char)31)))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_68 [i_10] [i_10]))))) ? (arr_48 [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_10] [i_10] [i_10] [i_10] [i_16] [i_10])))))));
            arr_78 [i_16] [(signed char)1] = ((/* implicit */short) arr_3 [i_16]);
        }
        arr_79 [i_10] |= ((/* implicit */unsigned int) (-(((arr_5 [i_10]) ? (((/* implicit */int) arr_5 [i_10])) : (((/* implicit */int) arr_5 [i_10]))))));
        arr_80 [i_10] = ((var_15) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_10]))) : ((~(min((((/* implicit */long long int) (_Bool)1)), (1658152005522830517LL))))));
    }
    for (short i_17 = 0; i_17 < 24; i_17 += 2) 
    {
        arr_84 [14U] [i_17] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)51)) ? (3338306993U) : (3338307011U))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)19172)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)250)))))))));
        var_31 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_81 [i_17] [i_17])), (((((/* implicit */_Bool) arr_82 [i_17] [i_17])) ? (4686774771446779923ULL) : (((/* implicit */unsigned long long int) 2148966663U))))));
        /* LoopNest 2 */
        for (unsigned char i_18 = 0; i_18 < 24; i_18 += 2) 
        {
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                {
                    arr_91 [i_19] [i_18] [i_17] = ((/* implicit */unsigned int) arr_88 [i_17] [i_17] [i_17] [i_17]);
                    arr_92 [i_17] [i_19] [i_19] [i_17] = ((/* implicit */signed char) arr_90 [i_19] [i_18] [i_17]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_20 = 0; i_20 < 13; i_20 += 3) 
    {
        arr_97 [i_20] = arr_2 [i_20];
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (arr_43 [i_20] [i_20]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [12ULL]))))))));
    }
    var_33 |= ((/* implicit */int) var_13);
}
