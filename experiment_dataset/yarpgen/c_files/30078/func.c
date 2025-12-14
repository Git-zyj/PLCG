/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30078
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
    var_18 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)41)) != (((/* implicit */int) max(((signed char)66), (var_1))))))) == (((/* implicit */int) var_3))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) ((signed char) ((signed char) (signed char)19))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((signed char) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((int) (signed char)66)) / (1273547987)))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) ((_Bool) arr_0 [i_0]))))) : (((/* implicit */int) (signed char)45))));
    }
    for (unsigned short i_1 = 3; i_1 < 21; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 3; i_2 < 23; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    {
                        var_20 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_1] [i_2 - 1] [i_3] [20]))));
                        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_3])) / (((((/* implicit */_Bool) arr_11 [i_1 + 1] [(signed char)16] [i_2 + 2] [i_2 - 3])) ? (((/* implicit */int) arr_11 [i_1 - 2] [(unsigned short)24] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) (unsigned short)49412))))));
                    }
                } 
            } 
            arr_12 [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned char) arr_7 [i_2 - 2]);
            arr_13 [i_1 - 1] [i_2] [i_2] = ((/* implicit */unsigned char) arr_6 [i_1] [i_1 - 3] [i_2 + 2]);
            var_22 = ((/* implicit */unsigned short) arr_4 [i_2]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                arr_16 [i_1] [i_1] [i_2 + 2] [i_2] = ((((/* implicit */int) arr_8 [i_1 - 3] [i_2] [i_2] [i_2])) >> (((((int) (unsigned char)215)) - (211))));
                arr_17 [i_1] [i_2] [(unsigned short)8] [(signed char)11] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)225)) | (((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2])))) != (1273547987)));
            }
            for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                var_23 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) -1592236366)) ? (((/* implicit */int) (signed char)11)) : (1405410042))), (((/* implicit */int) arr_4 [i_1 + 2]))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        {
                            arr_28 [i_1] [20] [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) arr_15 [i_1]);
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((((/* implicit */_Bool) 1592236365)) && (((/* implicit */_Bool) -1405410034)))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_26 [i_6] [(signed char)2] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_6] [i_7] [i_8])) : (((/* implicit */int) arr_7 [i_2])))), (((/* implicit */int) arr_6 [i_1 - 3] [i_2 + 2] [i_2 - 1]))))))))));
                            arr_29 [i_1 + 2] [i_2 - 3] [i_6] [i_7] [i_2] = ((/* implicit */signed char) ((_Bool) ((_Bool) (unsigned char)33)));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) (signed char)75);
                arr_30 [i_2] [i_6] = ((/* implicit */signed char) arr_9 [i_1 - 2] [i_2] [i_2]);
            }
        }
        for (signed char i_9 = 3; i_9 < 23; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                arr_38 [i_9] [i_9] = (((((~(((/* implicit */int) arr_25 [i_1] [i_1 - 3] [i_1] [i_9] [i_1])))) + (2147483647))) << (((((((/* implicit */int) arr_20 [i_9] [i_9] [i_9 + 2] [i_9] [i_9 - 1] [i_9])) + (((/* implicit */int) (signed char)-29)))) - (70))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    for (signed char i_12 = 1; i_12 < 24; i_12 += 3) 
                    {
                        {
                            arr_44 [i_9] [i_9] [i_9] [i_11] [i_12] = ((/* implicit */_Bool) arr_14 [i_12] [i_9] [i_10] [i_9]);
                            var_26 = ((((/* implicit */int) arr_34 [i_12 + 1])) | (-1273547988));
                            var_27 *= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_40 [i_12]))));
                        }
                    } 
                } 
                arr_45 [(unsigned short)21] [(unsigned short)21] [i_9] [(unsigned short)21] = ((/* implicit */_Bool) ((unsigned char) arr_41 [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_1 - 1]));
                arr_46 [(unsigned short)23] [i_9] [i_9] [i_1 + 3] = ((/* implicit */int) ((signed char) arr_34 [i_1 + 2]));
            }
            /* vectorizable */
            for (int i_13 = 1; i_13 < 24; i_13 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */int) (unsigned char)18);
                var_29 = ((/* implicit */unsigned short) ((((1405410031) > (((/* implicit */int) arr_40 [i_13])))) || (((/* implicit */_Bool) arr_35 [i_1 + 3] [i_9 + 2] [i_9 + 1] [i_13 + 1]))));
                var_30 = ((/* implicit */unsigned short) ((((-1424147609) / (1592236359))) > (-1273547995)));
                /* LoopSeq 1 */
                for (unsigned char i_14 = 0; i_14 < 25; i_14 += 4) 
                {
                    var_31 = ((/* implicit */signed char) ((int) ((((/* implicit */int) (unsigned short)3991)) | (((/* implicit */int) (_Bool)1)))));
                    arr_52 [i_9] [i_9] [i_9] [i_9] [i_9] [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_33 [i_9]))));
                    var_32 = -1405410043;
                }
            }
            for (int i_15 = 1; i_15 < 24; i_15 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned short) arr_20 [i_1] [i_9] [i_15] [(unsigned char)15] [i_15] [i_1]);
                var_34 = ((/* implicit */int) (signed char)-85);
                var_35 = ((/* implicit */signed char) (~(((/* implicit */int) arr_49 [(unsigned short)16] [i_9] [(unsigned short)16]))));
                arr_55 [i_9] [i_9 - 3] [i_15] = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) arr_18 [(signed char)4] [(signed char)4] [i_9])))));
            }
            for (signed char i_16 = 0; i_16 < 25; i_16 += 3) 
            {
                var_36 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_9 + 1] [i_16])) != (((/* implicit */int) arr_11 [i_1] [(_Bool)1] [(_Bool)1] [i_1])))))));
                arr_58 [i_1 + 2] [i_9] = ((/* implicit */_Bool) -1841206578);
                var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */int) arr_33 [(signed char)14])) : (272788490))))))))));
            }
            var_38 = ((/* implicit */unsigned short) min((((/* implicit */int) ((signed char) max(((signed char)113), (arr_18 [i_1] [i_9 - 3] [i_9]))))), ((~(((1592236365) ^ (((/* implicit */int) (unsigned short)9661))))))));
        }
        /* vectorizable */
        for (signed char i_17 = 3; i_17 < 23; i_17 += 1) /* same iter space */
        {
            arr_61 [i_1 + 3] [i_17] [i_17] = ((/* implicit */int) (signed char)27);
            arr_62 [i_1] = ((/* implicit */signed char) ((arr_48 [i_1 - 1] [(unsigned char)0] [i_1 - 1]) - (((/* implicit */int) arr_33 [(unsigned char)16]))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_18 = 0; i_18 < 25; i_18 += 4) 
        {
            var_39 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_63 [i_1 - 1] [i_1 - 1])) == (((/* implicit */int) arr_25 [i_1] [i_1] [(_Bool)1] [i_18] [i_1]))))) % (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64844)) && (((/* implicit */_Bool) arr_20 [i_1 + 4] [i_18] [(signed char)13] [(unsigned short)7] [i_1 + 4] [i_1])))))));
            var_40 = ((/* implicit */_Bool) (signed char)18);
            var_41 = ((/* implicit */_Bool) max((var_41), ((_Bool)0)));
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 25; i_19 += 2) 
            {
                for (signed char i_20 = 0; i_20 < 25; i_20 += 4) 
                {
                    for (signed char i_21 = 0; i_21 < 25; i_21 += 4) 
                    {
                        {
                            var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (unsigned char)96))))))));
                            arr_74 [i_1 + 1] [i_1 - 3] [i_1] [i_1 + 1] [i_1 - 3] [i_1] = ((/* implicit */int) (unsigned short)2958);
                        }
                    } 
                } 
            } 
            arr_75 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_64 [i_1 + 2])) + (((/* implicit */int) (unsigned short)12617))));
        }
        /* vectorizable */
        for (signed char i_22 = 0; i_22 < 25; i_22 += 1) 
        {
            arr_79 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)57465)) ? (((/* implicit */int) arr_50 [i_1] [i_1] [(signed char)10])) : (((/* implicit */int) (signed char)13)))) % (((/* implicit */int) (unsigned char)147))));
            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)64754)) << (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (signed char)112)))))));
            var_44 = ((((/* implicit */int) ((((/* implicit */int) arr_76 [i_1 - 1])) == (((/* implicit */int) arr_67 [i_22] [i_1 - 2]))))) == (((/* implicit */int) (unsigned short)28723)));
            arr_80 [i_1] = ((/* implicit */unsigned short) (signed char)-46);
        }
        arr_81 [i_1 + 2] = ((/* implicit */signed char) arr_8 [i_1] [i_1 - 3] [i_1 - 2] [i_1 + 1]);
    }
    /* vectorizable */
    for (unsigned short i_23 = 3; i_23 < 21; i_23 += 4) /* same iter space */
    {
        arr_84 [i_23] = ((/* implicit */unsigned short) ((arr_77 [i_23 - 3] [i_23 + 1] [i_23 - 1]) ^ (-1592236360)));
        arr_85 [i_23] = ((/* implicit */unsigned char) arr_11 [i_23] [i_23] [i_23] [9]);
    }
}
