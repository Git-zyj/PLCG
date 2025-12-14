/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2813
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
    var_19 = var_1;
    var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_9)))) > (((((/* implicit */_Bool) (unsigned short)65280)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) var_15)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)28238)) ? (((/* implicit */int) min(((unsigned short)43147), ((unsigned short)58678)))) : (((/* implicit */int) (signed char)6))));
        var_22 = ((unsigned short) (-(((/* implicit */int) (signed char)-22))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)6867)))) > (((/* implicit */int) arr_1 [i_3 - 1]))));
                        var_24 = ((/* implicit */unsigned short) var_13);
                        var_25 = (signed char)48;
                        var_26 = min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)33467)) && (((/* implicit */_Bool) (signed char)127))))), ((unsigned short)43167));
                    }
                } 
            } 
        } 
        var_27 = (unsigned short)28232;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)49152)) != (((/* implicit */int) var_5))))) % (((/* implicit */int) ((signed char) (unsigned short)65535))))))));
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)105)) || (((/* implicit */_Bool) var_17))));
                arr_14 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) arr_4 [i_0] [(unsigned short)10])) : (((/* implicit */int) arr_12 [i_5]))))));
            }
            for (unsigned short i_6 = 1; i_6 < 18; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    arr_21 [i_0] [i_4] [i_0] [i_7] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_14))))) ? ((+(((/* implicit */int) var_18)))) : (((/* implicit */int) ((signed char) (unsigned short)6854)))));
                    arr_22 [i_7] [(signed char)2] [i_6] [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        arr_25 [i_0] [i_0] [i_6] [i_7] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_6 + 3] [i_7] [(unsigned short)7])) > (((/* implicit */int) (unsigned short)37298))));
                        var_30 = (unsigned short)65524;
                        arr_26 [i_0] [i_4] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)0))));
                        arr_27 [i_7] [(signed char)16] [(signed char)16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)43140)) ? (((/* implicit */int) (unsigned short)21531)) : (((/* implicit */int) (unsigned short)65535))));
                        var_31 += var_2;
                    }
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (signed char)123)))) / (((/* implicit */int) (unsigned short)6858))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (unsigned short)25301)) : (((/* implicit */int) (signed char)125))));
                        arr_31 [i_0] [i_4] [i_0] [i_7] [i_7] [i_7] [(signed char)16] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)58678)) ? (((/* implicit */int) (unsigned short)10940)) : (((/* implicit */int) (unsigned short)23196)))) / (((/* implicit */int) (signed char)127))));
                    }
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)65509)) : (((/* implicit */int) (unsigned short)65534))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))));
                        var_35 |= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)99)) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_1))))));
                        arr_35 [(unsigned short)9] [i_4] [(unsigned short)9] [(unsigned short)9] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (signed char)126))));
                    }
                }
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    var_36 = ((/* implicit */signed char) (-(((/* implicit */int) var_16))));
                    arr_39 [(unsigned short)15] = ((signed char) var_15);
                    arr_40 [i_0] [i_0] [(unsigned short)15] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) var_2));
                }
                arr_41 [i_0] [i_4] [(signed char)10] |= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-125)) % (((/* implicit */int) (unsigned short)2133))));
            }
            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        {
                            var_37 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)58678)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)114))))));
                            var_38 &= ((/* implicit */signed char) (unsigned short)768);
                            arr_51 [i_0] [i_4] [i_12] [i_12] [(signed char)16] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)(-127 - 1))) != (((/* implicit */int) (signed char)84))));
                            arr_52 [i_4] [i_14] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)5764))));
                            arr_53 [i_14] [i_12] [i_12] [i_4] [i_4] [i_0] = arr_15 [i_4] [i_12] [i_14];
                        }
                    } 
                } 
                var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)33903)))) != (((/* implicit */int) ((signed char) (signed char)114))))))));
                var_40 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (unsigned short)13084)) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_0])))) > (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-25)) || (((/* implicit */_Bool) var_4)))))));
                var_41 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_28 [(signed char)19] [i_0] [i_4] [i_12] [i_12]))));
            }
            /* LoopSeq 1 */
            for (signed char i_15 = 0; i_15 < 22; i_15 += 1) 
            {
                var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((unsigned short) (unsigned short)42330)))));
                /* LoopSeq 3 */
                for (signed char i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    arr_60 [i_0] [i_0] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)5761)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-119)) != (((/* implicit */int) (signed char)121))))) : (((/* implicit */int) (signed char)0))));
                    arr_61 [i_0] [i_15] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)5] [i_4])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_15] [i_16])) : (((/* implicit */int) var_6))))));
                }
                for (signed char i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
                {
                    var_43 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-13))))) ? (((/* implicit */int) arr_42 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_15))));
                    arr_64 [i_0] [i_4] [i_0] [i_15] = arr_8 [i_0] [i_4] [i_15] [i_17] [(signed char)5];
                    var_44 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)22381))));
                }
                for (signed char i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
                {
                    arr_67 [i_0] [i_4] [i_0] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_46 [i_0] [i_4] [i_4] [i_15] [i_18] [i_18])) ? (((/* implicit */int) arr_49 [i_0] [i_0] [i_4] [(unsigned short)0] [i_15] [i_4] [i_15])) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_12 [i_0])))))));
                    arr_68 [i_4] [i_15] [i_15] |= ((/* implicit */unsigned short) arr_38 [i_0] [i_4] [i_15] [i_18]);
                    var_45 = ((/* implicit */unsigned short) var_16);
                    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-106))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))));
                }
            }
        }
    }
    /* LoopSeq 1 */
    for (signed char i_19 = 0; i_19 < 17; i_19 += 2) 
    {
        var_47 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-70))))) ? (((((/* implicit */int) (unsigned short)65533)) * (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((unsigned short) (unsigned short)42350)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) var_15)))))))));
        arr_71 [i_19] = (unsigned short)46787;
        arr_72 [i_19] = var_12;
    }
}
