/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198047
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
    var_20 = ((/* implicit */int) max((((/* implicit */long long int) var_15)), (5025772908203390063LL)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0 - 1]);
        arr_3 [i_0 + 1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0 - 2]) : (3227759332637176798ULL))));
        var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)5402)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 11; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 11; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_22 = (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
                        var_23 = ((/* implicit */unsigned long long int) var_6);
                        arr_15 [i_2] [i_4] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) (((-(arr_1 [i_2 + 1]))) >> (((max((14527377760778001933ULL), (0ULL))) - (14527377760778001884ULL)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    {
                        arr_24 [i_2] [i_2] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */long long int) (_Bool)1);
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36057)) ? (1046525131236093180ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15839)))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)19521)))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_7 = 1; i_7 < 11; i_7 += 3) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_30 [i_2] [i_7] [(_Bool)0] [i_2] = ((/* implicit */int) (!((_Bool)1)));
                        var_25 -= ((/* implicit */long long int) var_3);
                        var_26 = max((((/* implicit */long long int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))), (max((arr_29 [i_2] [i_8 - 1] [i_7 - 1] [i_2 - 1] [i_2 - 1] [i_2]), (((/* implicit */long long int) arr_5 [i_2 + 1] [i_2 + 1])))));
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned int) (~(max((arr_18 [i_1]), (((/* implicit */long long int) arr_12 [i_1] [i_1] [i_1] [i_1] [(unsigned char)8] [i_1]))))));
            var_28 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)50175)) ? (((/* implicit */int) (unsigned short)11020)) : (((/* implicit */int) arr_6 [i_1] [i_9]))))))), (8234823793133071358ULL)));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        {
                            arr_45 [i_13] [i_10] [i_10] [i_12] = ((/* implicit */short) ((unsigned char) 3227759332637176793ULL));
                            var_29 += ((long long int) (_Bool)1);
                            var_30 = ((min((arr_36 [i_10] [i_11]), (((/* implicit */unsigned int) ((arr_28 [i_1] [i_10]) >= (((/* implicit */long long int) 1563313808))))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_39 [i_13] [i_10] [i_11] [i_10] [i_1])), (var_4)))) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)52888)) > (((/* implicit */int) arr_6 [i_1] [i_1]))))))))));
                            var_31 += 2448769664U;
                            var_32 = (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0))))) * (4511423105190740466LL)))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned int) (((_Bool)1) ? (3227759332637176798ULL) : (0ULL)));
            arr_46 [i_1] |= ((/* implicit */int) var_19);
            var_34 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))) : (((((/* implicit */_Bool) -2050257205)) ? (17222161264112690833ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1])))))))) ? (max((((/* implicit */long long int) var_15)), (arr_20 [i_1] [i_10] [i_1] [i_10]))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)27140))))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 1; i_15 < 9; i_15 += 4) 
            {
                for (long long int i_16 = 3; i_16 < 10; i_16 += 4) 
                {
                    for (long long int i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        {
                            var_35 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_26 [i_15]))) ? (1996958178673930072LL) : (((/* implicit */long long int) ((var_18) | (((/* implicit */int) var_19)))))))) ? (((/* implicit */unsigned int) (~((~(13)))))) : (((arr_42 [i_1] [i_15 - 1] [i_16 + 1] [i_15 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1] [i_15 - 1] [i_17] [i_16])))))));
                            var_36 = ((/* implicit */unsigned long long int) var_11);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (int i_18 = 0; i_18 < 12; i_18 += 1) 
            {
                var_37 += ((/* implicit */int) var_11);
                arr_59 [4LL] [i_14] [i_18] [i_18] = ((((/* implicit */long long int) ((/* implicit */int) var_14))) ^ (var_10));
            }
            var_38 = ((/* implicit */long long int) max((7668728187674823786ULL), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_14]))))), (((((/* implicit */_Bool) arr_35 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)151)))))))));
        }
        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((var_17) ? (((/* implicit */int) var_15)) : ((-(((/* implicit */int) ((_Bool) arr_40 [i_1] [i_1] [i_1] [i_1]))))))))));
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 12; i_19 += 1) 
        {
            for (int i_20 = 2; i_20 < 11; i_20 += 3) 
            {
                for (unsigned int i_21 = 0; i_21 < 12; i_21 += 4) 
                {
                    {
                        arr_66 [i_19] [i_19] [i_20 + 1] [i_20] = ((/* implicit */_Bool) 8613659078123695160LL);
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)21363)) ? (((((/* implicit */int) (unsigned short)65535)) + ((~(((/* implicit */int) var_2)))))) : (((/* implicit */int) arr_49 [i_19]))));
                        var_41 = ((/* implicit */unsigned char) (_Bool)1);
                        arr_67 [i_1] [i_19] [i_1] [i_19] = ((/* implicit */unsigned short) (_Bool)1);
                        var_42 |= arr_64 [i_21] [i_19] [i_21] [i_21];
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_22 = 0; i_22 < 12; i_22 += 3) 
    {
        arr_72 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-16235))))) ? ((+(arr_29 [i_22] [i_22] [i_22] [i_22] [i_22] [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) == (max((15218984741072374838ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
        var_43 += ((/* implicit */_Bool) 15218984741072374818ULL);
        var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) (short)32322))));
    }
    for (unsigned long long int i_23 = 1; i_23 < 13; i_23 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_24 = 0; i_24 < 14; i_24 += 2) 
        {
            for (unsigned short i_25 = 0; i_25 < 14; i_25 += 4) 
            {
                {
                    var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(min((((/* implicit */int) var_14)), (var_18)))))) & (min((max((arr_78 [i_25]), (((/* implicit */unsigned long long int) arr_76 [i_23] [11ULL])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_19))))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_26 = 0; i_26 < 14; i_26 += 3) 
                    {
                        var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((((var_5) + (9223372036854775807LL))) >> (((arr_83 [i_23 - 1] [i_23 - 1]) - (98984306))))))));
                        arr_85 [i_26] = var_17;
                    }
                }
            } 
        } 
        var_47 = 2489904888U;
        arr_86 [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 1275490698)) : (((((/* implicit */_Bool) arr_82 [i_23 - 1])) ? (arr_78 [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((long long int) arr_81 [i_23] [2U] [2U] [i_23 - 1] [12ULL])) + (((arr_77 [2ULL] [i_23] [i_23]) + (((/* implicit */long long int) 1267189318)))))) : (((arr_73 [i_23 + 1] [i_23 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26))) : (min((arr_84 [0] [(_Bool)1] [(_Bool)1] [i_23]), (((/* implicit */long long int) var_15))))))));
    }
}
