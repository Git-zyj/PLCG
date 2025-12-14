/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205441
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
    var_18 = ((/* implicit */unsigned short) var_5);
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_10)));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = var_5;
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = min(((short)18910), (((/* implicit */short) (unsigned char)146)));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)146)) ? (16026377620394072862ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21578)))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            arr_12 [i_0] [i_0] [i_2 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)146))))) & (((/* implicit */int) var_6))));
            var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_2])))) ^ (((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_2 + 1]))));
            var_21 *= ((/* implicit */short) arr_4 [i_2] [i_2 + 1] [i_2]);
        }
        for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            var_22 = ((/* implicit */int) ((unsigned int) ((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (779646141U)))));
            var_23 += ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18910)) ? (var_9) : (((/* implicit */long long int) var_11))))) ? (((long long int) var_11)) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_16)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned int) var_16))))) ? (max((((/* implicit */unsigned int) var_12)), (var_11))) : (0U))))));
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_9 [(unsigned char)1] [i_3])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_14 [i_0] [(unsigned short)0] [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_11 [i_0])))))));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                arr_20 [i_0] [i_3] [10ULL] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (((((/* implicit */_Bool) 3942692882U)) ? (((/* implicit */int) (unsigned short)9213)) : (((/* implicit */int) arr_8 [i_0] [i_0])))) : (arr_13 [(signed char)9] [i_3] [i_3]))));
                var_24 -= ((/* implicit */unsigned char) (((((~(((/* implicit */int) var_2)))) % (((/* implicit */int) arr_1 [10])))) >= (((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_3] [i_0] [i_0])) < (((((/* implicit */_Bool) var_11)) ? (var_16) : (((/* implicit */int) (signed char)95)))))))));
                var_25 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((_Bool) arr_18 [i_0] [(unsigned char)14] [i_3]))), ((unsigned char)64)));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_2))));
                arr_23 [i_0] [i_0] [i_0] = min((-4904287959430768399LL), (((/* implicit */long long int) (unsigned char)68)));
                arr_24 [2LL] [11U] [12U] = ((/* implicit */int) ((((/* implicit */_Bool) min((((var_17) ? (((/* implicit */long long int) var_8)) : (-9223372036854775807LL))), (((/* implicit */long long int) arr_13 [i_0] [i_3] [i_5]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_0))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) * (((/* implicit */int) arr_2 [i_0])))))))) : (((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (unsigned char)146))))) ? (((((/* implicit */_Bool) 5360957564156551126LL)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (456463906687467011ULL))) : (max((arr_14 [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_13 [i_0] [6LL] [i_0]))))))));
            }
        }
        /* vectorizable */
        for (unsigned char i_6 = 2; i_6 < 14; i_6 += 1) 
        {
            arr_29 [i_6] = ((/* implicit */short) 0ULL);
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                for (signed char i_8 = 3; i_8 < 14; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        {
                            var_27 *= ((/* implicit */_Bool) ((int) ((signed char) 0U)));
                            var_28 ^= ((/* implicit */long long int) arr_14 [i_0] [i_8] [i_9]);
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                {
                    arr_42 [i_0] [i_0] [5U] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_11])) ? (((/* implicit */int) arr_18 [i_10] [i_10] [i_11])) : (((/* implicit */int) arr_18 [i_0] [i_10] [i_10])))));
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102))) : (0U)));
                    var_30 = ((/* implicit */int) ((long long int) (unsigned short)40958));
                    arr_43 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) (-((((_Bool)0) ? (var_11) : (((/* implicit */unsigned int) min((1889981415), (arr_13 [(_Bool)0] [i_10] [9]))))))));
                }
            } 
        } 
    }
    for (long long int i_12 = 0; i_12 < 16; i_12 += 4) /* same iter space */
    {
        arr_46 [i_12] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (var_8) : (var_8)))) ? (((((/* implicit */_Bool) arr_5 [i_12] [(unsigned char)1])) ? (((/* implicit */long long int) arr_13 [i_12] [i_12] [i_12])) : (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))) : (var_3)))))));
        /* LoopSeq 2 */
        for (unsigned char i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            arr_49 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((159764930U) / (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_13)) <= (((((/* implicit */_Bool) 347688473U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58974))) : (-4378168603641239664LL)))))))));
            var_31 = ((/* implicit */unsigned int) var_7);
        }
        for (unsigned int i_14 = 1; i_14 < 13; i_14 += 4) 
        {
            var_32 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((arr_32 [i_12] [i_12] [(unsigned char)6] [i_12]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15))))) : (((long long int) arr_10 [i_12] [10U] [i_14])))), (((/* implicit */long long int) max((2583718425U), (min((arr_9 [i_12] [i_12]), (((/* implicit */unsigned int) (unsigned char)11)))))))));
            arr_52 [i_12] [i_12] [i_12] = var_6;
            arr_53 [i_12] [4U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [(unsigned char)15] [i_12])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180))) : (min((((/* implicit */unsigned int) arr_19 [(unsigned char)6] [(unsigned short)5] [i_12] [(unsigned short)5])), (var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_36 [i_12] [i_12] [i_14] [i_14] [i_12]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (4135202366U))))) : (var_13))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_12])) & (((/* implicit */int) arr_22 [i_12])))))));
        }
        arr_54 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2047624245)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_15 = 0; i_15 < 16; i_15 += 4) /* same iter space */
    {
        arr_59 [i_15] [i_15] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) -6257498477361892483LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 159764930U)) : (arr_11 [i_15]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) -2147483644)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (6257498477361892482LL))) : (max((var_9), (var_9))))))));
        var_33 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (_Bool)1)))))) == (var_3))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) - (((/* implicit */int) arr_35 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))))) : (arr_10 [0U] [i_15] [i_15])));
        arr_60 [i_15] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)127)), (((unsigned char) arr_31 [6U] [i_15] [i_15]))));
    }
    /* vectorizable */
    for (unsigned char i_16 = 4; i_16 < 19; i_16 += 3) 
    {
        arr_64 [18U] = ((/* implicit */_Bool) var_16);
        arr_65 [i_16] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(arr_63 [(unsigned short)13]))))));
        arr_66 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)51))) : (arr_63 [i_16 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_61 [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1413138642U)))) : (arr_63 [i_16 - 4])));
    }
    /* LoopNest 2 */
    for (signed char i_17 = 3; i_17 < 23; i_17 += 1) 
    {
        for (unsigned short i_18 = 0; i_18 < 25; i_18 += 3) 
        {
            {
                arr_73 [i_17] [i_17] [(signed char)0] = ((/* implicit */unsigned int) min((min((arr_68 [i_17] [i_17]), (((/* implicit */long long int) 159764930U)))), (min((arr_68 [i_17] [i_17]), (arr_68 [i_17] [i_17])))));
                arr_74 [i_17] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(278265905)))) ? (((/* implicit */long long int) var_3)) : (min((((arr_68 [i_17] [i_17]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_17] [i_17]))))), (((/* implicit */long long int) arr_72 [i_18] [i_17]))))));
                var_34 = ((/* implicit */int) max((var_34), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_17 - 3] [i_17 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_18] [(unsigned char)12]))) : (var_11)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_70 [i_17] [i_17 + 2])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_72 [i_18] [(signed char)6])), ((unsigned short)59242))))))));
            }
        } 
    } 
}
