/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192986
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
    var_14 = ((/* implicit */long long int) min((10347038434798244075ULL), (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_16 = ((/* implicit */signed char) ((unsigned char) ((15311434868056132049ULL) << (((((/* implicit */int) arr_2 [i_0])) + (32571))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((17217903001840786665ULL) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)41))) >= (3135309205653419572ULL))))));
        arr_7 [i_1] = ((/* implicit */long long int) ((signed char) ((min((((/* implicit */long long int) var_6)), (var_9))) >= (var_5))));
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_9)), (min((max((((/* implicit */unsigned long long int) arr_9 [i_1] [i_2])), (10347038434798244075ULL))), (((/* implicit */unsigned long long int) arr_5 [i_1]))))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3908631795215430420ULL)) ? (8191LL) : (-8192LL)));
            arr_10 [i_2] = arr_2 [i_1];
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) 8514046113786250072LL))));
            arr_13 [i_3] [(signed char)12] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22804))) == (0ULL))))));
            var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) -20LL)) >= (arr_4 [i_1]))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 4; i_5 < 14; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_15 [i_5 - 4])))), (min((((/* implicit */int) arr_17 [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_6])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_1] [(unsigned short)0])) : (((/* implicit */int) (unsigned short)25600))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) (-(var_8)));
                            arr_25 [i_5] = ((/* implicit */long long int) var_11);
                            arr_26 [i_6] [(signed char)7] [(signed char)7] [i_5] [i_5] [(signed char)7] [13LL] = ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned long long int) -8192LL))));
                        }
                        /* LoopSeq 4 */
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            arr_31 [i_1] [i_5] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_21 [i_1] [i_5 + 2] [2ULL] [i_6] [i_8])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1] [i_5 - 1] [i_5 + 1] [i_1] [i_8]))) ^ (3135309205653419567ULL)))));
                            arr_32 [i_5] [i_4] [i_5] [i_6] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_23 [i_1] [i_4] [i_5] [i_6] [i_5])), (((((/* implicit */_Bool) arr_11 [i_8] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_1] [i_4] [2ULL] [i_6] [i_8] [i_8]))) : (arr_14 [i_5 + 1] [i_1]))))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_16 [8ULL] [8ULL])))) : ((~(arr_19 [(unsigned char)9] [(unsigned char)9])))))));
                            arr_33 [i_1] [i_4] [i_5] [i_8] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)8192)), (((((/* implicit */_Bool) -20LL)) ? (2449937366078955100ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            arr_37 [i_5] [i_4] [i_5] [(unsigned short)0] [(_Bool)1] [i_9] [i_9] = ((/* implicit */unsigned short) max(((((((+(arr_29 [i_9] [i_5] [i_1] [i_6] [i_1]))) + (9223372036854775807LL))) >> (((/* implicit */int) ((18446744073709551598ULL) >= (15311434868056132049ULL)))))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                            arr_38 [i_5] [i_4] [(unsigned short)2] [(unsigned char)0] [i_9] [i_5] = ((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_9]);
                        }
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) arr_5 [i_1]);
                            arr_41 [i_1] [i_5 - 2] [i_5] [i_5] [(signed char)1] = ((/* implicit */unsigned long long int) min((((short) arr_9 [i_5 - 2] [(signed char)5])), (((/* implicit */short) ((((/* implicit */int) arr_9 [i_5 + 2] [i_4])) != (((/* implicit */int) arr_9 [i_5 + 2] [i_4])))))));
                            arr_42 [i_5] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) var_10))))) & (((long long int) (unsigned short)65524))))), (((((/* implicit */_Bool) 8191LL)) ? ((+(arr_0 [i_1]))) : (5420053203875908676ULL)))));
                        }
                        for (long long int i_11 = 1; i_11 < 15; i_11 += 2) 
                        {
                            arr_46 [i_11] [i_4] [i_5] [i_5] [(_Bool)1] [i_6] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_4]))));
                            var_25 = (i_5 % 2 == 0) ? (((/* implicit */unsigned char) (-(((((/* implicit */int) ((short) arr_23 [i_1] [i_5] [(unsigned short)4] [i_6] [i_5]))) >> (((((/* implicit */int) arr_44 [i_1] [i_1] [i_5] [i_1] [i_11] [i_5])) - (52)))))))) : (((/* implicit */unsigned char) (-(((((/* implicit */int) ((short) arr_23 [i_1] [i_5] [(unsigned short)4] [i_6] [i_5]))) >> (((((((/* implicit */int) arr_44 [i_1] [i_1] [i_5] [i_1] [i_11] [i_5])) - (52))) + (91))))))));
                            arr_47 [i_1] [i_5] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) ((arr_23 [i_6] [i_4] [i_5 - 4] [(short)4] [i_5]) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) arr_22 [i_4] [6LL]))))))));
                            var_26 = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */long long int) arr_9 [i_5 - 1] [i_5 - 1])), (var_12))));
                            arr_48 [i_1] [i_5] [i_5 + 2] [i_6] [i_11] [i_1] = ((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)8805)))), ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)27075)) == (((/* implicit */int) arr_15 [i_1])))))))));
                        }
                        var_27 = ((/* implicit */unsigned short) ((_Bool) 285978576338026496LL));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                var_28 = ((/* implicit */unsigned long long int) arr_40 [i_1] [i_4] [i_4] [i_1] [i_4]);
                var_29 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (var_12))));
                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) arr_44 [i_1] [i_1] [i_1] [(unsigned short)14] [i_1] [i_12]))));
                arr_52 [(short)13] = ((((/* implicit */long long int) ((/* implicit */int) ((var_4) != (var_4))))) >= (((((/* implicit */_Bool) arr_39 [i_1] [i_4] [i_1] [i_12] [(unsigned char)10])) ? (20LL) : (19LL))));
                /* LoopSeq 4 */
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        var_31 -= ((/* implicit */unsigned short) ((unsigned long long int) (~(var_5))));
                        var_32 -= ((/* implicit */unsigned char) arr_51 [i_1] [i_1] [i_1] [i_13]);
                    }
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((-20LL) + (9223372036854775807LL))) >> (((3525579486746890109ULL) - (3525579486746890080ULL)))))) ? (((/* implicit */int) ((unsigned short) 18446744073709551615ULL))) : (((/* implicit */int) arr_50 [i_1] [i_12]))));
                    arr_59 [i_1] = ((((/* implicit */_Bool) arr_20 [i_12] [4LL] [i_1] [i_13])) ? (((/* implicit */unsigned long long int) var_8)) : (10347038434798244071ULL));
                }
                for (long long int i_15 = 1; i_15 < 13; i_15 += 2) 
                {
                    var_34 &= ((/* implicit */long long int) ((signed char) var_11));
                    arr_64 [i_15] [i_15] [i_1] [i_15] = ((unsigned short) 19LL);
                }
                for (unsigned long long int i_16 = 3; i_16 < 13; i_16 += 3) 
                {
                    arr_68 [i_1] = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_6 [i_1])))));
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [6ULL] [i_16 + 3] [i_1] [i_4] [i_12])) ? (((/* implicit */int) arr_39 [i_1] [i_16 - 1] [i_1] [i_16] [(_Bool)1])) : (((/* implicit */int) arr_39 [i_1] [i_16 - 2] [i_1] [i_1] [i_12]))));
                }
                for (unsigned short i_17 = 4; i_17 < 14; i_17 += 3) 
                {
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (18446744073709551603ULL)))) ? (((/* implicit */int) arr_55 [i_17 + 1] [i_1] [i_12] [i_1] [i_17 + 1] [(unsigned short)11])) : (((/* implicit */int) ((var_7) >= (var_4))))));
                    var_37 -= ((/* implicit */unsigned char) ((long long int) (unsigned char)37));
                }
            }
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_38 = ((/* implicit */unsigned short) arr_49 [i_1] [i_1] [i_1] [i_1]);
            arr_75 [i_1] [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_35 [12LL] [12LL] [i_1])), (((long long int) var_13)))))));
        }
    }
    var_39 = ((/* implicit */short) var_1);
    var_40 *= ((/* implicit */unsigned long long int) var_9);
}
