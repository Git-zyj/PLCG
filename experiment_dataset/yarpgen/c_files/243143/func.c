/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243143
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [12ULL] [14LL] = ((/* implicit */short) (-(((8617550850664186923ULL) * (((/* implicit */unsigned long long int) 268427264LL))))));
                                arr_14 [i_0] [(unsigned char)11] [i_2] [i_3] [i_4] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (1646444008699034417ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((16800300065010517196ULL), (((/* implicit */unsigned long long int) var_18))))))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 - 3] [i_0 - 3] [i_4])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_19))))) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 3] [i_0 - 2] [(_Bool)1] [i_0 - 3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max(((short)-1), (((/* implicit */short) arr_3 [i_1] [i_3] [i_4]))))) && (((/* implicit */_Bool) (unsigned short)55619)))))))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (16800300065010517198ULL)));
                                var_22 ^= ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_4] [i_1]);
                            }
                        } 
                    } 
                    arr_15 [1] [0ULL] = ((/* implicit */long long int) (short)-31043);
                    var_23 = ((/* implicit */signed char) min((((/* implicit */int) max((arr_12 [i_0 - 3] [i_2] [i_2] [i_0] [i_0]), (arr_12 [i_0 + 1] [i_2] [(unsigned short)19] [i_0] [i_2])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_12 [i_0 + 1] [(unsigned short)10] [i_2] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (max((var_18), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_13)) == (var_10)))), (var_19)))))));
    var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), ((~(3604211396U)))));
    var_26 = ((/* implicit */signed char) ((((((var_2) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((var_0) << (((((/* implicit */int) var_16)) - (221)))))) : (((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_18))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            for (unsigned short i_7 = 4; i_7 < 17; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        var_27 -= ((/* implicit */unsigned int) arr_23 [i_5] [i_5] [i_6] [(_Bool)1]);
                        arr_30 [i_8] [i_6] [i_6] [i_6] [i_6] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_7 - 2] [i_7 - 2] [i_8] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_7 - 3] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 3]))) : (arr_24 [i_7 + 1] [i_7 - 4] [i_7 - 3])));
                        arr_31 [i_7] [11LL] [(_Bool)1] [i_7] = ((/* implicit */_Bool) (~(var_14)));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_5 [i_5] [i_6] [i_7] [i_8]))));
                        var_29 -= ((/* implicit */signed char) var_15);
                    }
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_9 [i_7 + 1] [i_6] [i_7] [i_6]) : (arr_9 [i_7 - 3] [i_5] [i_7 - 3] [i_7])));
                    arr_32 [i_5] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_7 - 3] [i_7 - 2] [i_7 - 4] [i_7 - 4] [i_7 - 2] [i_7 - 3])) <= (((/* implicit */int) arr_28 [i_7 - 3] [i_7 - 3] [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7 - 3]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        var_31 = ((/* implicit */short) 7281910067098031684LL);
                        arr_36 [i_5] [1LL] [i_7] [i_9] = ((4218266442U) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_1))))));
                    }
                }
            } 
        } 
        arr_37 [i_5] = ((/* implicit */_Bool) var_3);
    }
    for (short i_10 = 0; i_10 < 17; i_10 += 4) 
    {
        var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (max((arr_18 [i_10] [i_10] [i_10]), (var_0)))));
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (short i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                {
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_10] [(_Bool)1] [i_12])) : (((/* implicit */int) arr_6 [i_10] [i_12] [i_11]))))) ? (var_0) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_28 [i_10] [i_10] [i_10] [i_11] [i_11] [i_10]))))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 4) 
                    {
                        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_10])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_12])) ? (((/* implicit */int) arr_3 [i_11] [i_12] [i_13])) : (((/* implicit */int) arr_40 [i_10]))))) : (arr_33 [i_13]))))));
                        arr_48 [i_10] [i_12] [(signed char)9] = ((/* implicit */signed char) var_15);
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 17; i_14 += 2) 
                        {
                            arr_51 [i_10] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */unsigned int) (unsigned char)196);
                            var_35 = ((/* implicit */short) 236276647U);
                            arr_52 [i_12] [i_10] [(_Bool)1] [14LL] [i_12] &= ((/* implicit */int) max((min((((/* implicit */long long int) var_8)), (max((arr_20 [i_10]), (((/* implicit */long long int) arr_47 [(_Bool)1] [(signed char)13] [(signed char)13] [i_13] [i_14])))))), (((((/* implicit */_Bool) (~(arr_9 [i_11] [i_11] [i_11] [i_13])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_11]))) : (-7009295737399820901LL)))));
                            var_36 = ((/* implicit */int) var_8);
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_15 = 3; i_15 < 15; i_15 += 4) 
                    {
                        arr_55 [i_12] = ((/* implicit */signed char) 16800300065010517199ULL);
                        arr_56 [i_10] [i_10] [i_10] [i_10] [(unsigned char)4] [i_12] = ((/* implicit */long long int) (unsigned char)206);
                    }
                    var_37 *= ((/* implicit */_Bool) (~(((/* implicit */int) var_17))));
                }
            } 
        } 
        arr_57 [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) max(((short)-1), (((/* implicit */short) var_17))))))))));
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 17; i_16 += 3) 
        {
            for (int i_17 = 0; i_17 < 17; i_17 += 3) 
            {
                {
                    var_38 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_10] [i_16] [i_17])) ? (var_18) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) min((arr_4 [i_10] [i_16] [i_16]), (arr_4 [i_10] [i_16] [i_17]))))));
                    var_39 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (arr_11 [i_10] [i_16] [i_17] [i_10] [i_16] [i_16] [i_17]))))) >= ((+(var_4)))));
                }
            } 
        } 
        arr_63 [i_10] = ((/* implicit */short) arr_24 [i_10] [i_10] [i_10]);
    }
    for (unsigned int i_18 = 1; i_18 < 11; i_18 += 2) 
    {
        arr_66 [i_18] = ((/* implicit */short) var_14);
        arr_67 [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_18] [i_18 + 1] [i_18 - 1]))))) : (((/* implicit */int) var_16))));
        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((min((12547778573493474599ULL), (11053291922670951037ULL))) + (((/* implicit */unsigned long long int) (-(var_4)))))))));
        arr_68 [i_18] [i_18] = ((/* implicit */int) var_3);
    }
    /* vectorizable */
    for (short i_19 = 0; i_19 < 13; i_19 += 2) 
    {
        arr_73 [i_19] = ((/* implicit */unsigned int) arr_39 [i_19]);
        var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
        arr_74 [i_19] [i_19] = ((/* implicit */unsigned long long int) arr_72 [i_19] [i_19]);
    }
}
