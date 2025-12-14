/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219550
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [7ULL] [i_1] = ((/* implicit */short) (~(((max((var_9), (((/* implicit */long long int) arr_1 [(signed char)0])))) | (((/* implicit */long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned char)173)))))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_17);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((_Bool) arr_7 [i_0 + 1]))), (((((((/* implicit */long long int) ((/* implicit */int) var_4))) + (var_15))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) arr_7 [i_0 - 1])) : (((/* implicit */int) var_2)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 4; i_4 < 13; i_4 += 4) 
            {
                for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) ((((_Bool) min((((/* implicit */long long int) var_13)), (arr_15 [i_0] [i_3] [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_4] [12])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_3] [i_4])) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_16 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_2 [12ULL])))))) : ((~(((/* implicit */int) (unsigned char)72))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            arr_22 [i_5] = ((/* implicit */unsigned int) var_9);
                            arr_23 [(unsigned short)6] [i_5] [(unsigned short)6] [13U] [i_4] [i_5] [(_Bool)1] = ((((/* implicit */_Bool) arr_18 [i_3 - 2] [i_4] [7LL] [i_4 - 2] [i_6])) || (((/* implicit */_Bool) arr_18 [i_3 + 4] [i_4] [i_3 + 4] [i_4 - 4] [i_4])));
                            arr_24 [i_6] [i_5] [i_3] [i_3] [i_3] [i_5] [(unsigned char)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3 + 2])) ? (arr_4 [i_3 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                        }
                        for (unsigned short i_7 = 3; i_7 < 11; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) var_2);
                            arr_28 [i_5] [i_4] [1] [i_5] = (unsigned char)129;
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 11; i_8 += 3) 
            {
                for (long long int i_9 = 1; i_9 < 13; i_9 += 1) 
                {
                    for (signed char i_10 = 1; i_10 < 12; i_10 += 1) 
                    {
                        {
                            arr_36 [i_10] [i_3] [i_8 + 3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_26 [(signed char)13] [i_10 + 2] [i_10 + 1] [(_Bool)1] [i_10])) % (((/* implicit */int) arr_26 [i_10 + 2] [i_10 + 2] [i_10 + 1] [i_10] [i_10])))) > ((-(((/* implicit */int) ((unsigned char) (signed char)-11)))))));
                            var_22 = ((/* implicit */unsigned char) min((((arr_11 [i_3] [i_8] [i_9]) >> (((((/* implicit */int) (signed char)-83)) + (91))))), (((/* implicit */long long int) max((arr_21 [i_10]), ((unsigned char)52))))));
                            arr_37 [i_10 + 2] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */short) ((arr_32 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0] [(short)3] [(unsigned char)2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_10]))))))))) ? ((-(-1899942654))) : ((~(((/* implicit */int) arr_7 [i_8 + 1]))))));
                        }
                    } 
                } 
            } 
            var_23 &= ((/* implicit */unsigned short) (+(((/* implicit */int) max(((signed char)98), ((signed char)-11))))));
            arr_38 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)101)) - (((/* implicit */int) var_0)))) <= (((/* implicit */int) (unsigned char)124))))), (arr_14 [3] [i_0] [i_0])));
        }
        var_24 = ((/* implicit */unsigned char) ((arr_4 [i_0 - 1]) == (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_20 [i_0] [i_0] [i_0 + 2] [i_0])))))));
    }
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
    {
        arr_41 [i_11] [10U] = ((/* implicit */_Bool) min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) max((var_11), (((/* implicit */short) var_18)))))));
        var_25 = min((((/* implicit */int) ((((/* implicit */int) var_8)) == (((int) var_1))))), (((((/* implicit */_Bool) max((arr_33 [(unsigned char)7] [i_11] [i_11] [i_11] [i_11] [i_11]), (var_14)))) ? (((((/* implicit */int) arr_27 [i_11] [(_Bool)1] [(unsigned short)8] [i_11] [i_11] [i_11] [i_11])) - (((/* implicit */int) var_13)))) : (arr_33 [i_11] [i_11] [11LL] [11LL] [11LL] [11LL]))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_12 = 1; i_12 < 13; i_12 += 4) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 3) 
        {
            for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (~(var_7))))));
                    var_27 = ((/* implicit */_Bool) min((var_27), (var_5)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
    {
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            for (int i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                {
                    arr_59 [9ULL] [i_16] [i_16 - 1] = ((/* implicit */unsigned char) (~(252013130U)));
                    var_28 = ((/* implicit */long long int) min((min((((/* implicit */int) (unsigned char)101)), (1899942653))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_15] [i_16 - 1] [12ULL]))))) ? (((((/* implicit */int) arr_55 [i_15] [i_15] [i_15])) & (((/* implicit */int) var_0)))) : (max((((/* implicit */int) arr_35 [(signed char)12])), (-1899942654)))))));
                    arr_60 [i_15] [i_16] [i_16] = ((/* implicit */_Bool) ((arr_25 [i_16 - 1] [(unsigned char)10]) & (((/* implicit */long long int) arr_33 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (unsigned short i_20 = 0; i_20 < 20; i_20 += 4) 
            {
                {
                    var_29 -= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_66 [i_20] [i_20] [i_20] [i_20])) || (((/* implicit */_Bool) arr_61 [i_20])))))));
                    arr_67 [i_19] [i_19] [i_18] [i_20] = ((/* implicit */unsigned char) min((min((arr_64 [i_18]), (arr_64 [i_18]))), (((/* implicit */int) min((var_17), (((/* implicit */unsigned short) var_18)))))));
                    var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1899942651))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_21 = 1; i_21 < 13; i_21 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_22 = 0; i_22 < 17; i_22 += 4) 
        {
            var_31 = ((((/* implicit */_Bool) arr_63 [i_22])) ? (arr_66 [i_22] [i_21] [i_21 + 1] [i_21 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_69 [(short)14])) || (((/* implicit */_Bool) (unsigned char)101)))))));
            var_32 += ((/* implicit */unsigned long long int) (+(arr_65 [i_21 + 4] [11LL] [i_21] [i_21 + 2])));
            var_33 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_71 [i_21 + 2] [i_21])) : (1899942640)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 4) 
            {
                arr_75 [i_21 + 3] [i_22] [i_22] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_74 [i_22] [i_22] [i_22] [8U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_74 [(unsigned short)3] [(unsigned short)3] [i_22] [14ULL]))) : (var_15)));
                /* LoopNest 2 */
                for (long long int i_24 = 2; i_24 < 16; i_24 += 3) 
                {
                    for (long long int i_25 = 0; i_25 < 17; i_25 += 3) 
                    {
                        {
                            arr_82 [i_25] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (signed char)-76)))));
                            arr_83 [i_25] [i_23] [i_23] [i_22] [i_25] [i_21] [i_23] = ((/* implicit */unsigned char) ((_Bool) arr_81 [i_24] [i_24 - 1] [i_24] [i_24 - 2] [i_24]));
                            var_34 *= ((/* implicit */unsigned char) ((arr_66 [i_23] [i_21 + 3] [i_24 + 1] [0ULL]) < (arr_66 [i_23] [i_21 + 4] [i_24 - 1] [i_21 + 4])));
                        }
                    } 
                } 
                arr_84 [i_21 + 4] [8U] [(unsigned char)3] = ((/* implicit */unsigned short) ((arr_69 [i_21 + 1]) <= (((/* implicit */unsigned long long int) 1837753492))));
            }
            for (unsigned long long int i_26 = 2; i_26 < 15; i_26 += 1) 
            {
                arr_89 [i_21] [i_21] [i_22] [i_26] &= ((/* implicit */long long int) ((((/* implicit */int) arr_88 [i_21 + 3])) / (((/* implicit */int) arr_88 [i_21 - 1]))));
                arr_90 [i_22] [i_22] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [(signed char)4] [i_22])) ? (arr_81 [i_22] [i_26 - 2] [i_26 + 2] [6LL] [i_26 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_21 + 2] [i_22] [i_26 + 2] [i_21 + 2] [i_26 - 2])))));
            }
            var_35 = ((/* implicit */unsigned int) ((short) 1899942653));
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-32754))))) || (((/* implicit */_Bool) var_0)))))));
            var_37 = ((/* implicit */signed char) ((((/* implicit */int) arr_76 [i_21] [i_21 + 1] [i_21 + 3] [i_21] [i_21])) - (((/* implicit */int) arr_76 [i_21 + 4] [i_21 - 1] [i_21 + 3] [i_21] [i_21]))));
        }
        for (int i_28 = 0; i_28 < 17; i_28 += 1) 
        {
            arr_97 [i_28] [i_28] [i_28] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) arr_85 [i_21 + 3] [i_21 + 3] [(short)11] [i_28])) : (((/* implicit */int) var_6)))) <= (arr_64 [i_21 + 1])));
            /* LoopNest 3 */
            for (unsigned char i_29 = 0; i_29 < 17; i_29 += 3) 
            {
                for (unsigned char i_30 = 4; i_30 < 14; i_30 += 2) 
                {
                    for (unsigned long long int i_31 = 3; i_31 < 16; i_31 += 1) 
                    {
                        {
                            arr_104 [i_28] = ((/* implicit */long long int) ((((/* implicit */int) arr_98 [i_21 - 1] [i_21] [i_30 + 2])) & (((/* implicit */int) var_8))));
                            arr_105 [i_21] [i_21] [i_29] [i_28] [i_31] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_76 [i_21 + 1] [i_21 + 1] [i_29] [i_30 - 4] [i_31 - 1])) ? (((/* implicit */int) arr_76 [i_21] [i_28] [i_29] [i_30 + 1] [(signed char)3])) : (((/* implicit */int) arr_76 [i_21 + 2] [i_28] [i_29] [i_30] [i_31 - 3]))));
                        }
                    } 
                } 
            } 
            arr_106 [i_28] = ((/* implicit */long long int) (unsigned char)150);
            arr_107 [(signed char)16] &= ((/* implicit */short) (((~(var_9))) | (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        }
        for (signed char i_32 = 1; i_32 < 16; i_32 += 4) 
        {
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 34359738352ULL)) ? (((/* implicit */int) ((unsigned short) arr_66 [i_32] [i_21] [i_21] [2]))) : (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) arr_99 [i_21] [i_21] [i_21] [i_32 - 1])) : (((/* implicit */int) arr_92 [i_32] [(unsigned char)4] [i_21 + 3]))))));
            var_39 = ((/* implicit */_Bool) ((signed char) var_7));
        }
        arr_110 [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_73 [i_21 - 1] [i_21])) % (((/* implicit */int) arr_88 [i_21]))));
        var_40 *= ((/* implicit */_Bool) var_14);
    }
}
