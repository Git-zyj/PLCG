/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37736
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_2)) : (((((_Bool) var_4)) ? (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)64485), (((/* implicit */unsigned short) var_8))))))))));
    var_12 = ((/* implicit */unsigned char) ((int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (11802800390240158702ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    var_13 = -1097144108;
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] [8] = ((/* implicit */unsigned char) var_7);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)40682)) >= (-1097144108))))))) ? ((-(1097144138))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > ((~(18446744073709551615ULL))))))));
                    var_14 -= ((/* implicit */int) (unsigned short)17410);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = (((~(((/* implicit */int) arr_0 [i_1 - 2] [i_3 - 1])))) + (((/* implicit */int) (((-2147483647 - 1)) == (arr_6 [i_1] [i_1])))));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_4 [i_1])) + (var_7)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) + (var_2))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_7 [i_1] [i_1 - 2] [(unsigned short)10] [i_1 + 4])), (2082765845)))) : (((((/* implicit */_Bool) ((1097144107) >> (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (0ULL)))));
                                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)32760)), (((unsigned long long int) arr_4 [i_0]))))) ? (max((3909055515703909566ULL), (arr_8 [i_1 - 2] [i_3 - 1] [i_3] [i_0]))) : (((unsigned long long int) 17996331183339452243ULL))));
                                var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (134152192) : (((/* implicit */int) (unsigned short)48111)))) < (((/* implicit */int) var_6))));
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) -2082765845))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] = ((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) (~(arr_2 [i_0])))) : (max((var_9), (((/* implicit */unsigned long long int) arr_2 [i_0])))));
    }
    /* vectorizable */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) ((unsigned long long int) var_3));
            arr_19 [i_5] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)62285)) > (((/* implicit */int) var_8))));
            var_21 = ((/* implicit */_Bool) ((int) 1097144120));
        }
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */unsigned long long int) -1317463795)) : (arr_17 [i_5] [i_5] [i_5])));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned short i_9 = 1; i_9 < 17; i_9 += 3) 
                {
                    {
                        arr_29 [i_5] [i_5] [(unsigned short)13] [i_5] [i_5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_5 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))));
                        var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                    }
                } 
            } 
        } 
        arr_30 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_5] [i_5 - 1])) ? (((/* implicit */int) var_8)) : (-1097144120)));
        var_24 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 2082765845)) ? (((/* implicit */int) (unsigned short)1016)) : (((/* implicit */int) arr_24 [i_5] [10] [10] [i_5 - 1]))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 4; i_12 < 13; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        {
                            arr_44 [i_11] [i_11] [i_12] [i_11] [(unsigned short)13] [(_Bool)0] [i_12] = ((((/* implicit */int) var_1)) ^ ((((~(((/* implicit */int) arr_25 [i_11] [i_11] [i_11])))) & (((((/* implicit */_Bool) 4921272633981768029ULL)) ? (1097144120) : (var_3))))));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_10] [i_10] [i_13] [i_14])))))));
                        }
                    } 
                } 
            } 
            var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1731804524)) ? (min((4ULL), (((/* implicit */unsigned long long int) 1097144111)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -1242557029)) : (5586042358474042566ULL)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (2147483647))))))));
            arr_45 [(unsigned short)11] [i_11] [i_10] = ((/* implicit */_Bool) (~(min((18446744073709551611ULL), (arr_37 [i_11] [i_11] [i_11] [i_11])))));
            var_27 = (~(((((/* implicit */int) (unsigned short)17)) & (639055961))));
        }
        for (int i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            var_28 = ((/* implicit */_Bool) (unsigned short)65535);
            /* LoopSeq 4 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_55 [i_15] [i_15] [i_15] [i_17] [i_16] [(unsigned short)7] = (+(-1090807735));
                    var_29 = ((((/* implicit */_Bool) arr_24 [i_10] [i_15] [i_10] [i_17])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46901)) ? (arr_22 [i_17] [i_16] [(unsigned short)2]) : (((/* implicit */int) var_4))))));
                    arr_56 [i_10] [i_16] [i_16] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_15])) ? (((/* implicit */int) arr_41 [i_10] [i_15] [i_16] [i_17])) : (((/* implicit */int) (_Bool)1))));
                }
                arr_57 [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> ((((((-2147483647 - 1)) - (-2147483637))) + (38)))))) ? (min((2097088ULL), (((/* implicit */unsigned long long int) -697444698)))) : (((/* implicit */unsigned long long int) ((int) arr_18 [i_10] [i_10])))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)93)) | (min((arr_28 [i_15] [i_18]), (-930024327)))));
                arr_62 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 14199390442549054311ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (481814211))))))) << ((((((-2147483647 - 1)) - (-2147483645))) + (19)))));
            }
            for (unsigned char i_19 = 0; i_19 < 15; i_19 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_48 [i_10]))) ? (((/* implicit */int) var_5)) : (max((((((/* implicit */_Bool) -2147483637)) ? (-560973481) : (2147483630))), (((-1) + (((/* implicit */int) var_5))))))));
                arr_66 [i_10] [i_10] [i_10] = (+(((/* implicit */int) (_Bool)1)));
            }
            for (unsigned char i_20 = 0; i_20 < 15; i_20 += 1) /* same iter space */
            {
                arr_71 [i_15] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (((((/* implicit */_Bool) (unsigned short)43205)) ? ((~(11ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8327)))))));
                var_32 ^= ((/* implicit */_Bool) arr_68 [i_15]);
                arr_72 [i_10] [i_20] [i_20] = ((/* implicit */unsigned long long int) max((min((-930024313), (arr_54 [i_10] [i_15] [(_Bool)1]))), ((+(((/* implicit */int) var_6))))));
            }
        }
        arr_73 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_7)))) ? (((((/* implicit */_Bool) -930024321)) ? (((/* implicit */int) (unsigned short)35629)) : (-238663343))) : (((/* implicit */int) (unsigned short)65530))));
        arr_74 [i_10] [i_10] = ((/* implicit */unsigned short) (_Bool)0);
        arr_75 [i_10] [i_10] &= ((/* implicit */unsigned long long int) (~(((int) arr_28 [i_10] [i_10]))));
    }
}
