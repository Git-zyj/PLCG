/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244258
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
    var_17 = ((/* implicit */short) max(((+((~(0U))))), (((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_2)) : (3447592626U))))));
    var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)0)))) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) (unsigned char)0);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (unsigned short)65535))));
            arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6182744537811728329ULL)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) arr_0 [i_1 + 1]))));
            arr_8 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) 351980178U)))));
        }
        for (short i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                arr_14 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(((/* implicit */int) arr_2 [i_0]))))))) * (((unsigned int) ((((/* implicit */int) (unsigned short)65535)) % (arr_13 [i_0] [i_0]))))));
                var_21 |= ((/* implicit */int) ((unsigned char) ((unsigned short) (signed char)0)));
                var_22 = ((/* implicit */signed char) min((((((/* implicit */int) (signed char)-58)) / (((/* implicit */int) (unsigned char)248)))), ((-((-(((/* implicit */int) (_Bool)1))))))));
            }
            for (unsigned char i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                var_23 *= (-(((3447592626U) ^ (((/* implicit */unsigned int) ((-1176461266) | (((/* implicit */int) var_8))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    arr_19 [i_0] [(unsigned char)8] [i_2] [i_5] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) arr_11 [i_4] [i_4 - 1] [i_4] [i_4 - 1]))));
                    var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-29271)) : ((~(((/* implicit */int) arr_9 [i_0] [(unsigned short)8]))))))));
                    var_25 = ((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_2 + 2] [i_2 + 3] [i_4 - 1]));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */long long int) 4294967295U)) : (arr_10 [i_6] [i_2] [i_0])));
                    var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_17 [i_2 - 1] [i_2 + 1]))));
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)2))))) == (((((/* implicit */unsigned int) -1114606787)) * (0U))))))));
                }
                var_29 &= ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4096))) : ((-9223372036854775807LL - 1LL))))))));
            }
            arr_22 [i_0] [(unsigned char)10] &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_0] [i_2] [i_0])) ? (((/* implicit */int) (unsigned char)248)) : ((~(((/* implicit */int) (unsigned char)224))))))), ((~((+(var_5)))))));
            arr_23 [i_2] = ((/* implicit */_Bool) ((unsigned short) (+(arr_3 [i_2 - 1] [i_2 + 3]))));
        }
        for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 4) 
        {
            var_30 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((4611686018418999296ULL), (((/* implicit */unsigned long long int) (unsigned short)36563))))) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) var_16))))));
            var_31 = ((/* implicit */unsigned int) min((((unsigned short) arr_13 [i_0] [i_7])), (((unsigned short) (signed char)-51))));
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned short) arr_27 [i_8]);
        arr_29 [i_8] |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (4194303U) : (((/* implicit */unsigned int) 564314820))))));
        arr_30 [i_8] [i_8] = ((/* implicit */long long int) ((unsigned short) -1701587074));
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_10 = 3; i_10 < 21; i_10 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        var_32 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2582764028U)) ? (-1295270569) : (((/* implicit */int) (unsigned char)108)))) / (1295270569)));
                        var_33 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_39 [i_9 + 2] [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 2])) == (((/* implicit */int) (unsigned char)242))));
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((~(8528875))) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                    }
                    var_35 += ((/* implicit */unsigned long long int) arr_32 [i_8] [i_8] [i_8]);
                    var_36 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)56028)) ? (var_7) : (((/* implicit */int) (signed char)7))))));
                }
                var_37 = ((/* implicit */unsigned short) ((var_1) << (((-1701587074) + (1701587078)))));
            }
            arr_42 [i_9] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_38 [i_8] [i_9 - 1] [i_9] [i_9] [i_9 + 1] [i_9 + 2]))));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                for (int i_14 = 0; i_14 < 23; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_38 -= ((/* implicit */unsigned int) (unsigned short)12360);
                            var_39 += ((/* implicit */short) var_13);
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_17 = 1; i_17 < 21; i_17 += 4) 
            {
                for (unsigned short i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    {
                        var_40 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)30)) ? (((((/* implicit */_Bool) 3009548361698823523ULL)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (short)-9682)))) : (((/* implicit */int) (short)-3370))));
                        /* LoopSeq 2 */
                        for (unsigned int i_19 = 0; i_19 < 23; i_19 += 4) 
                        {
                            var_41 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_52 [i_8] [i_19])) ? (((/* implicit */int) var_6)) : (1701587073))) * (((/* implicit */int) ((((/* implicit */int) arr_41 [i_8] [i_16] [i_17] [i_18] [i_19])) == (((/* implicit */int) arr_37 [i_8] [i_8] [i_19] [i_8] [i_19])))))));
                            var_42 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))));
                        }
                        for (int i_20 = 0; i_20 < 23; i_20 += 3) 
                        {
                            arr_64 [i_8] [i_8] [i_16] [i_8] [i_8] [i_8] [i_8] = (~(((/* implicit */int) arr_40 [i_17 - 1] [i_16] [i_17] [i_18] [i_17] [i_17])));
                            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned short)32742)))))))));
                            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1266280087U)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0))))))));
                            var_45 = ((/* implicit */int) max((var_45), (((((-8528875) + (((/* implicit */int) (short)-205)))) - (((/* implicit */int) (unsigned char)46))))));
                        }
                        var_46 *= ((/* implicit */unsigned long long int) 3524923353U);
                        var_47 = ((/* implicit */int) (unsigned char)255);
                    }
                } 
            } 
            var_48 = ((/* implicit */unsigned short) arr_62 [i_16] [i_16] [i_8]);
            var_49 -= ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-116)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)255)) - (248)))));
        }
    }
    for (unsigned int i_21 = 2; i_21 < 23; i_21 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            for (unsigned short i_23 = 1; i_23 < 24; i_23 += 2) 
            {
                for (int i_24 = 0; i_24 < 25; i_24 += 1) 
                {
                    {
                        var_50 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */int) min((arr_67 [i_23 - 1]), (((/* implicit */unsigned short) (unsigned char)14))))) * (((/* implicit */int) (unsigned char)49)))) : (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (int i_25 = 1; i_25 < 24; i_25 += 4) 
                        {
                            arr_79 [i_21 + 1] [i_23] [i_23] [i_23] = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) (signed char)3)), (8528875))), (((/* implicit */int) arr_72 [i_23] [i_22]))));
                            var_51 = ((/* implicit */int) arr_67 [i_24]);
                        }
                    }
                } 
            } 
        } 
        var_52 = ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (unsigned char)238)))), (((/* implicit */int) ((unsigned char) arr_66 [i_21 - 2])))));
        var_53 -= ((/* implicit */unsigned int) var_11);
    }
    var_54 = ((/* implicit */unsigned char) (signed char)-88);
}
