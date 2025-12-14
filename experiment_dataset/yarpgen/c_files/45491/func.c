/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45491
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
    for (int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~((+(var_17)))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = arr_17 [i_1];
                                var_19 = ((/* implicit */unsigned long long int) (unsigned short)65213);
                                arr_18 [(unsigned short)9] [i_2] [i_1] = ((/* implicit */_Bool) (unsigned char)41);
                                var_20 ^= ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) 259291277U)) ? (var_17) : (var_17))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) var_11);
                            var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(var_7)))) ? (((1389455116) | (((/* implicit */int) min(((short)32767), (((/* implicit */short) var_9))))))) : (((/* implicit */int) (signed char)-46))));
                        }
                    } 
                } 
                arr_25 [(unsigned char)6] |= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1])) || (((/* implicit */_Bool) var_5)))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_6 [i_0 - 3] [i_1])) ? (var_17) : (var_6))), (((/* implicit */unsigned int) arr_17 [i_1]))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_8 + 1])) ? (arr_8 [i_8 + 1]) : (arr_8 [i_8 + 1])))) ? (((1048575LL) & (((/* implicit */long long int) arr_8 [i_8 + 1])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1)))));
                            var_25 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)32768)) & (((/* implicit */int) var_16))))), ((+(var_15))))), (((/* implicit */unsigned long long int) var_10))));
                            var_26 = (!(((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) << (((var_17) - (1870667570U)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_9 = 2; i_9 < 20; i_9 += 1) 
    {
        for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                {
                    arr_38 [i_11] [i_10] [(signed char)9] = ((/* implicit */long long int) (unsigned short)41504);
                    var_27 = ((/* implicit */unsigned int) ((max(((+(var_7))), (((((/* implicit */_Bool) arr_31 [i_11])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) < (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_30 [i_9] [i_11]))))))))));
                }
            } 
        } 
    } 
    var_28 ^= ((/* implicit */_Bool) (~(var_3)));
    /* LoopSeq 3 */
    for (unsigned long long int i_12 = 4; i_12 < 13; i_12 += 4) 
    {
        arr_41 [i_12] &= ((/* implicit */int) max((((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((var_15) <= (((/* implicit */unsigned long long int) arr_36 [i_12])))))));
        arr_42 [i_12 + 3] = ((/* implicit */int) (!((_Bool)1)));
        /* LoopNest 3 */
        for (unsigned int i_13 = 2; i_13 < 14; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 2; i_14 < 14; i_14 += 3) 
            {
                for (int i_15 = 2; i_15 < 16; i_15 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((_Bool) arr_33 [i_15 - 1] [13ULL] [i_12 - 1])) ? (((unsigned int) (!(var_13)))) : (((unsigned int) ((arr_32 [i_12] [i_13 - 1] [13U]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                        var_30 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_32 [i_14 - 2] [i_13 - 1] [i_12 - 3]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_16 = 1; i_16 < 8; i_16 += 3) 
    {
        var_31 = (!(var_9));
        arr_55 [i_16] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-((((_Bool)1) ? (arr_51 [(_Bool)1]) : (((/* implicit */int) (_Bool)1))))))) / (((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (13466332813384765940ULL)))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_18 = 0; i_18 < 15; i_18 += 3) 
        {
            var_32 = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (839254345U)))) : (((var_15) << (((/* implicit */int) var_9)))));
            /* LoopSeq 1 */
            for (unsigned int i_19 = 0; i_19 < 15; i_19 += 2) 
            {
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 259291258U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16))));
                var_34 = ((/* implicit */unsigned long long int) 4294967265U);
            }
        }
        /* vectorizable */
        for (int i_20 = 3; i_20 < 14; i_20 += 1) 
        {
            arr_66 [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) var_16);
            var_35 *= ((((((/* implicit */_Bool) var_2)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) >= (((/* implicit */long long int) ((/* implicit */int) ((259291258U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_17] [i_20] [i_20]))))))));
            var_36 = var_9;
        }
        for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 1) 
        {
            arr_69 [i_21] = ((int) var_14);
            var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 4035676019U))) ? (arr_48 [i_17] [i_17] [i_17] [i_21] [i_21] [i_21]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 11708592969191551425ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))))))));
        }
        var_38 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_36 [2U])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (6738151104518000185ULL)))) ? (((((/* implicit */_Bool) (~(6738151104518000184ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [15U] [15U])) || (var_13))))) : ((+(8388607ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) arr_39 [i_17] [i_17])) : (var_3)))));
        var_39 |= ((/* implicit */int) ((((/* implicit */_Bool) ((int) -1346163259370873253LL))) ? (11708592969191551437ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) -1649413113)) : (48519816U))) : (((/* implicit */unsigned int) ((int) var_13))))))));
    }
}
