/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4248
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
    var_20 = (!(((((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_9)))) != (min((((/* implicit */int) var_11)), (-412544673))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                var_21 |= ((/* implicit */_Bool) (unsigned char)253);
                var_22 = ((((arr_2 [i_1]) != (arr_2 [i_1]))) ? (((((/* implicit */_Bool) 7080738000936947385LL)) ? (arr_2 [i_1]) : (((/* implicit */int) arr_6 [i_1] [(unsigned char)0] [i_1] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
            }
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                arr_10 [i_0] [i_1] = ((/* implicit */unsigned long long int) -1932165473);
                var_23 -= ((/* implicit */short) 1662398211);
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 20; i_4 += 2) 
            {
                var_24 = ((/* implicit */signed char) var_5);
                arr_13 [i_1] = ((/* implicit */long long int) (~(((arr_3 [i_1] [i_4 - 1]) ^ (1932165463)))));
                var_25 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_1] [i_4 + 2] [i_1])) * (((/* implicit */int) (signed char)-80))));
                arr_14 [i_1] = ((/* implicit */int) ((unsigned char) ((arr_7 [i_1] [i_1] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))))));
                arr_15 [i_0] [i_1] [i_4 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_4] [i_4 + 1]))) : (-4533149966466688035LL)));
            }
            arr_16 [i_0] [i_1] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) min((((/* implicit */int) var_9)), (1932165474)))), (((((/* implicit */long long int) 1932165486)) % (var_15))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_2)) : (-1932165489))), (((/* implicit */int) ((_Bool) 868656269883003348LL))))))));
            arr_17 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) min((min((arr_2 [i_1]), (((((/* implicit */_Bool) arr_6 [i_1] [i_0] [i_1] [i_1])) ? (((/* implicit */int) (short)-20295)) : (((/* implicit */int) (short)-5024)))))), (arr_4 [i_0] [i_0])));
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((7644397175010981900LL) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (short)-32376)) : (((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_5 [i_0]))))))))));
            arr_18 [i_0] [i_1] |= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (arr_8 [i_0] [i_0]) : (arr_8 [i_0] [i_0]))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                arr_23 [i_6] [i_6] [(_Bool)1] [i_0] |= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) min((-1069817326), (-1588053089)))) ? (((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (739324685692028291LL))) : (((/* implicit */long long int) ((/* implicit */int) ((1932165474) <= (((/* implicit */int) arr_19 [20LL])))))))));
                arr_24 [i_5] [i_5] [8] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)109)) % (((/* implicit */int) ((_Bool) (_Bool)1)))))) ? (min((1932165473), (((/* implicit */int) (!(((/* implicit */_Bool) 1958392580858487461LL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_15)))))))));
                var_27 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)20294)) ? (((/* implicit */int) (short)-14819)) : (var_3))));
                arr_25 [i_6] [i_6] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((((arr_3 [i_5] [i_5]) + (2147483647))) << (((((((/* implicit */int) (short)-698)) + (713))) - (14)))))));
                arr_26 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) 3280462500447241012LL)))))) ? (min((-1932165475), (((/* implicit */int) arr_11 [i_5])))) : (((/* implicit */int) max((min(((short)20307), (((/* implicit */short) (unsigned char)93)))), (((/* implicit */short) var_17)))))));
            }
            for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                arr_30 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_5])) ? (((/* implicit */int) max((var_1), (((/* implicit */short) arr_1 [i_7]))))) : ((~(((/* implicit */int) (unsigned char)65))))));
                var_28 = ((/* implicit */short) ((arr_22 [i_0] [i_5] [i_0]) / (((((/* implicit */_Bool) 7089900851381008072ULL)) ? (arr_22 [i_7] [i_5] [i_0]) : (arr_22 [i_0] [i_5] [i_7])))));
            }
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_1 [i_8])) : (((/* implicit */int) arr_1 [i_5]))));
                /* LoopSeq 3 */
                for (int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    var_30 = ((/* implicit */_Bool) (~(arr_8 [i_5] [i_5])));
                    arr_38 [i_0] [i_5] [i_5] [i_5] [i_9] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)3))));
                    var_31 = ((unsigned char) arr_6 [i_5] [2LL] [i_8] [2LL]);
                }
                for (long long int i_10 = 1; i_10 < 20; i_10 += 1) 
                {
                    var_32 |= ((/* implicit */unsigned int) (~(((/* implicit */int) ((var_18) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_10 + 1] [i_10 + 2] [i_10 - 1])) ? (arr_35 [i_10 + 1] [i_10 + 2] [i_10 + 2] [13ULL] [i_10 + 1] [i_10 - 1]) : (arr_35 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 2])));
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    arr_45 [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1932165473))))) <= (((/* implicit */int) arr_9 [i_5] [i_11 - 1] [i_5]))));
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((-1932165473) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_0] [i_5]))))))))));
                }
                var_35 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_0] [i_8] [i_0] [i_8])) ? (-868656269883003349LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-19935)))));
            }
            /* LoopSeq 2 */
            for (unsigned char i_12 = 1; i_12 < 20; i_12 += 4) 
            {
                arr_49 [i_5] [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) min((-4740208483807439813LL), (((/* implicit */long long int) arr_31 [i_12 + 1])))))));
                var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_9))))) & (((/* implicit */int) min((((/* implicit */short) (unsigned char)54)), (var_1))))))))))));
                arr_50 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) min(((unsigned char)201), (arr_0 [i_0])))) << (((((/* implicit */_Bool) arr_3 [i_5] [i_12 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_12 - 1]))) : (var_14)))));
                var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((arr_7 [i_0] [i_5] [i_5]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_39 [(signed char)8] [i_12 - 1] [(short)5] [i_5] [i_0] [i_0])), (arr_8 [i_0] [i_0])))) ? ((-(((/* implicit */int) (unsigned char)64)))) : (((/* implicit */int) ((short) arr_33 [i_0] [i_0] [i_0])))))))))));
            }
            for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                var_38 -= ((/* implicit */long long int) (unsigned char)206);
                /* LoopSeq 4 */
                for (long long int i_14 = 1; i_14 < 21; i_14 += 4) /* same iter space */
                {
                    var_39 -= ((/* implicit */_Bool) (unsigned char)243);
                    var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) (short)-1553)) ? (((/* implicit */int) (short)30656)) : (((/* implicit */int) (signed char)101))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_33 [i_0] [i_0] [4])) : (((/* implicit */int) arr_52 [i_5] [i_5] [i_5]))))) ? (var_18) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [6LL] [6LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_0] [2] [i_0]))) : (var_19)))))))))));
                    arr_55 [i_14] [i_5] [i_5] [i_0] = ((/* implicit */signed char) (unsigned char)54);
                    var_41 = ((/* implicit */long long int) ((((/* implicit */int) ((17482088399116619709ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_14 - 1] [i_14 + 1] [i_14 + 1] [i_0])))))) - (((((/* implicit */_Bool) (signed char)37)) ? (arr_54 [i_5] [i_14 + 1] [i_14 + 1] [i_5]) : (arr_54 [i_5] [i_14 + 1] [i_14 - 1] [i_5])))));
                }
                for (long long int i_15 = 1; i_15 < 21; i_15 += 4) /* same iter space */
                {
                    arr_59 [i_15 - 1] [i_5] [(_Bool)1] [i_15 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-11608))));
                    var_42 |= ((/* implicit */long long int) (unsigned char)253);
                    var_43 = (i_5 % 2 == zero) ? (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 215097478U)))) && (((((((/* implicit */int) (short)15505)) >> (((arr_7 [i_5] [i_5] [i_13]) - (3124391869U))))) < (((/* implicit */int) var_13))))))) : (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 215097478U)))) && (((((((/* implicit */int) (short)15505)) >> (((((arr_7 [i_5] [i_5] [i_13]) - (3124391869U))) - (2334823068U))))) < (((/* implicit */int) var_13)))))));
                    var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((arr_47 [i_0] [(_Bool)1]) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_53 [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 - 1])), (max(((unsigned short)11516), (((/* implicit */unsigned short) arr_47 [i_0] [i_5]))))))) : (((/* implicit */int) ((unsigned char) arr_43 [(unsigned char)2] [i_15 + 1]))))))));
                }
                for (long long int i_16 = 1; i_16 < 21; i_16 += 4) /* same iter space */
                {
                    var_45 -= ((/* implicit */signed char) (+(((/* implicit */int) max(((short)24399), (((/* implicit */short) arr_43 [i_0] [i_16 - 1])))))));
                    arr_62 [i_0] [(unsigned char)6] [i_13] [i_16 + 1] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-62))) : (arr_42 [i_0] [18LL] [18LL] [i_16 + 1])))))) ? (((/* implicit */int) (signed char)37)) : ((-(((((/* implicit */_Bool) (short)20636)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (unsigned char)22))))))));
                    var_46 = min((((((/* implicit */_Bool) 8801455549525788273LL)) ? (((/* implicit */int) min(((unsigned char)2), (((/* implicit */unsigned char) (_Bool)1))))) : ((~(((/* implicit */int) arr_28 [(signed char)1] [(signed char)1] [(signed char)1] [(signed char)9])))))), (((/* implicit */int) ((((/* implicit */int) arr_37 [10])) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-11))))))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [i_5]), (arr_5 [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_5] [2U] [4LL] [i_17])) & (((/* implicit */int) (signed char)42))))) : (min((((/* implicit */long long int) ((((/* implicit */int) arr_56 [i_5] [i_0] [i_5] [i_5] [i_13] [i_0])) << (((((/* implicit */int) (unsigned char)19)) - (19)))))), ((~(-8801455549525788258LL)))))));
                    arr_66 [i_5] [i_17] = ((/* implicit */unsigned int) ((17848394773109292645ULL) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (unsigned char)246))))))))));
                }
                var_48 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_46 [i_0])) == (((/* implicit */int) var_4)))))))) ? (max((((/* implicit */long long int) min((var_2), (((/* implicit */signed char) arr_12 [i_0] [i_0] [i_13]))))), (((long long int) var_11)))) : (((((/* implicit */_Bool) var_5)) ? (8801455549525788258LL) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [(_Bool)1] [(_Bool)1])))))));
                var_49 = ((((/* implicit */_Bool) -1668018612)) ? (arr_3 [i_0] [i_5]) : ((~(((/* implicit */int) (_Bool)1)))));
                var_50 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_39 [i_0] [i_5] [i_5] [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (arr_36 [i_0])))) : (4079869818U)))));
            }
            var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_63 [i_5]))))) : (750003671U)))) || (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) >= (var_18)))), (((((/* implicit */int) var_17)) & (((/* implicit */int) var_2)))))))));
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            arr_71 [i_18] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) min((868656269883003343LL), (((/* implicit */long long int) var_11)))))))));
            arr_72 [i_0] [i_0] [i_18] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)16254))))) % (arr_39 [i_0] [i_0] [i_0] [i_18] [(short)18] [i_0])));
        }
        var_52 -= ((/* implicit */_Bool) -6840457021406295877LL);
    }
    /* vectorizable */
    for (unsigned char i_19 = 0; i_19 < 16; i_19 += 2) 
    {
        arr_76 [i_19] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)27510)) ? (868656269883003349LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25701)))))));
        var_53 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))));
    }
    var_54 = (_Bool)1;
}
