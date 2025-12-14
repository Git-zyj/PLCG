/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192968
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~((~(7572960582929673369LL)))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (((-(min((var_9), (((/* implicit */long long int) arr_1 [i_1])))))) > (((/* implicit */long long int) (~(arr_1 [i_1])))))))));
        var_14 = ((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) arr_3 [(_Bool)1] [i_1]))));
        arr_5 [i_1] = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) var_1)), (arr_4 [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-31250))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))))))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) ((unsigned long long int) (signed char)-55));
            var_16 += ((/* implicit */unsigned int) (signed char)-105);
        }
        for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 4) /* same iter space */
        {
            arr_14 [i_4] [i_4 + 2] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (((+(((/* implicit */int) (short)19524)))) > (((((/* implicit */int) arr_9 [i_2])) | (((/* implicit */int) (unsigned short)19317))))))), (min((min((((/* implicit */long long int) arr_10 [i_2 + 1])), (var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4 - 2] [i_2] [i_2])) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) arr_6 [i_2] [i_4])))))))));
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2])))))) + (var_9)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)-19525)))))));
                /* LoopSeq 1 */
                for (int i_6 = 3; i_6 < 17; i_6 += 1) 
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_6))));
                    arr_19 [i_4 + 1] [i_4 + 1] [i_6] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(short)12]))))) : ((+(arr_18 [i_4] [i_5] [i_6 + 3]))))) - (arr_18 [i_4] [i_5] [i_6 + 3])));
                    var_19 = ((/* implicit */long long int) arr_13 [i_2] [i_4] [i_5]);
                    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((signed char)-64), (arr_9 [i_2 + 1])))), (((long long int) (short)-7242))));
                }
                /* LoopSeq 3 */
                for (short i_7 = 2; i_7 < 20; i_7 += 3) 
                {
                    arr_22 [i_2] [i_4 - 3] [i_7] [i_2] = min((((unsigned int) (signed char)85)), (((/* implicit */unsigned int) ((min((-1142568016), (((/* implicit */int) (signed char)-9)))) & (((((/* implicit */int) (unsigned short)46219)) * (((/* implicit */int) (signed char)33))))))));
                    arr_23 [i_2] [i_4] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2]))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((0ULL), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)64)))) | (((arr_18 [i_2] [i_2] [i_2 + 1]) ^ (((/* implicit */int) (short)19524))))))))))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_0))));
                }
                for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    var_23 *= ((/* implicit */long long int) ((((((((arr_1 [i_4]) + (2147483647))) >> (((var_4) + (473713530531592592LL))))) ^ ((~(((/* implicit */int) (short)-23895)))))) & (((((/* implicit */_Bool) min((-6779998939843765960LL), (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) (signed char)64)) : ((~(((/* implicit */int) var_1))))))));
                    arr_27 [i_2] [i_2] [i_4] [i_8] [i_8] [i_8] = ((/* implicit */short) (!(((((/* implicit */int) (signed char)-64)) <= (((/* implicit */int) arr_8 [i_2] [i_2 + 1]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 4) 
                {
                    arr_32 [16LL] = ((/* implicit */unsigned short) arr_24 [i_2] [i_2 + 1] [i_4] [i_5] [i_9] [i_4]);
                    var_24 = ((/* implicit */int) 668499264859458025LL);
                }
            }
            for (unsigned int i_10 = 1; i_10 < 18; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    var_25 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_4 - 2])) ? (arr_7 [i_4 - 3]) : (arr_7 [i_4 - 1]))) - (arr_7 [i_4 - 2])));
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 2; i_12 < 17; i_12 += 4) 
                    {
                        var_26 -= ((/* implicit */long long int) ((short) min((var_9), (((/* implicit */long long int) ((signed char) (_Bool)0))))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_8))));
                        arr_41 [i_10] = ((/* implicit */long long int) var_11);
                        arr_42 [i_2] [i_4] [i_2] [i_11] [i_10] = min((((/* implicit */long long int) min((((/* implicit */short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-5)))), (min(((short)-19524), (((/* implicit */short) (signed char)8))))))), (((var_9) % (min((5998856950624793167LL), (((/* implicit */long long int) arr_40 [i_2 + 1] [i_2 + 1] [i_4] [i_10] [11ULL] [i_12])))))));
                        var_28 = ((/* implicit */long long int) min((var_28), (min((((long long int) arr_6 [i_4] [i_4 - 1])), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) (short)-19524)) : (((/* implicit */int) min((((/* implicit */short) var_2)), ((short)-19524)))))))))));
                    }
                    for (short i_13 = 2; i_13 < 20; i_13 += 2) 
                    {
                        arr_45 [i_2] [i_4] [i_10] [i_10] [i_11] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-27589)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)63))) : (-568205538627595035LL)));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) var_0))) <= (0ULL)))))))));
                        var_30 *= ((/* implicit */short) var_2);
                    }
                }
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) arr_24 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)(-127 - 1))) < (-1580454845))) ? (((/* implicit */int) (short)27590)) : (((/* implicit */int) ((signed char) 22448613)))))))))));
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (unsigned short)57490))));
            }
            /* vectorizable */
            for (long long int i_14 = 1; i_14 < 19; i_14 += 3) 
            {
                var_34 |= arr_6 [i_2] [i_4 - 3];
                arr_48 [i_2] [i_2] [(signed char)17] = (+(((/* implicit */int) (signed char)8)));
            }
            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_4] [i_2])) ? (((32LL) << (((7767011073914934028LL) - (7767011073914934010LL))))) : (((/* implicit */long long int) var_7))))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-45)))))))));
            arr_49 [i_2] [i_4] = ((/* implicit */short) min((7767011073914934028LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)23959)))))) ? (((/* implicit */unsigned int) (+(arr_40 [i_2 + 1] [i_4] [i_2 + 1] [(signed char)13] [i_4] [i_2 + 1])))) : (14U))))));
            arr_50 [i_4] [i_2] [i_2] = (+(((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19141))) : (101544114999700036LL))));
        }
        for (unsigned short i_15 = 0; i_15 < 21; i_15 += 2) 
        {
            var_36 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 1]))) & (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1)))));
            var_37 -= ((((long long int) arr_40 [i_2] [(_Bool)1] [i_2] [(_Bool)1] [9LL] [i_2 + 1])) * (((var_8) % (((/* implicit */long long int) arr_53 [i_2 + 1] [i_15])))));
            var_38 = ((/* implicit */long long int) ((((/* implicit */int) arr_47 [i_15] [i_15] [i_2])) | (((/* implicit */int) (signed char)63))));
        }
        for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
        {
            var_39 -= min((((/* implicit */long long int) (signed char)-45)), (arr_0 [i_16]));
            var_40 = ((/* implicit */_Bool) (-(((unsigned long long int) ((long long int) (signed char)-64)))));
            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5ULL)) ? (((((((/* implicit */int) min(((signed char)-64), (arr_26 [i_16] [i_2] [i_2] [i_2])))) + (2147483647))) << (((arr_35 [i_2] [i_2]) - (7489088623508140683ULL))))) : (arr_39 [i_2] [i_2] [i_2] [i_2] [i_2])));
        }
        var_42 *= (!(((/* implicit */_Bool) 4076046636048235709LL)));
        var_43 += min((((/* implicit */unsigned long long int) arr_13 [i_2] [i_2 + 1] [i_2])), (min((((unsigned long long int) (short)32040)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))))));
        arr_57 [i_2 + 1] [i_2] = ((/* implicit */unsigned long long int) (+((+(arr_52 [i_2] [i_2 + 1] [i_2 + 1])))));
    }
    for (unsigned short i_17 = 3; i_17 < 13; i_17 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_18 = 1; i_18 < 12; i_18 += 4) 
        {
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -456558268)) ? (-456558250) : (-190425810))))))) >> (((min((var_9), (((((/* implicit */_Bool) (signed char)-85)) ? (arr_24 [i_17] [i_18] [i_18] [i_18 + 2] [i_17] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) + (1062205907832908198LL)))));
            var_45 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_17 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_60 [i_18])));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_19 = 1; i_19 < 11; i_19 += 1) /* same iter space */
            {
                arr_65 [i_19] [i_17] [i_19] [i_19] = ((/* implicit */long long int) ((short) arr_30 [i_17 - 1] [i_17 + 1] [i_19 + 2] [i_19 + 2]));
                var_46 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_38 [i_18 - 1] [i_18 + 2] [i_18 - 1] [i_18 + 2]) : (arr_38 [i_18 - 1] [i_18 + 2] [i_18 + 2] [i_18 + 2])));
            }
            for (short i_20 = 1; i_20 < 11; i_20 += 1) /* same iter space */
            {
                var_47 = ((/* implicit */signed char) (+(((((/* implicit */int) (_Bool)1)) / (((((/* implicit */int) (signed char)-60)) + (((/* implicit */int) arr_31 [i_17 - 2] [i_18] [i_20]))))))));
                var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_35 [i_20 + 1] [i_20 + 1])) ? (((/* implicit */unsigned long long int) -8491828489148948599LL)) : (arr_35 [i_20 + 2] [i_20 + 1]))))))));
            }
        }
        for (long long int i_21 = 2; i_21 < 12; i_21 += 1) 
        {
            var_49 = ((/* implicit */long long int) var_10);
            var_50 += ((/* implicit */_Bool) (signed char)-90);
        }
        /* vectorizable */
        for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_23 = 0; i_23 < 14; i_23 += 2) 
            {
                arr_75 [i_17 - 1] [i_17 - 1] [i_22] [i_17] = ((/* implicit */signed char) (+(var_6)));
                var_51 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_17] [i_17] [i_23] [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_29 [i_17 - 3] [i_17 - 3] [i_23] [i_23])));
                var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) ((((-1939660956) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_23] [6LL] [i_23] [i_22] [(signed char)16]))))))))));
                var_53 = ((/* implicit */signed char) (+((+(1524885415U)))));
            }
            for (signed char i_24 = 0; i_24 < 14; i_24 += 1) 
            {
                var_54 = ((/* implicit */signed char) (+(((-1120757836514528419LL) % (4582768284506649691LL)))));
                var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) arr_10 [i_22]))));
                var_56 -= ((/* implicit */short) ((((((/* implicit */int) var_2)) >> (((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) ((((/* implicit */int) arr_66 [i_17] [i_17])) <= (arr_16 [i_17 - 2]))))));
            }
            var_57 = ((/* implicit */unsigned int) max((var_57), (((/* implicit */unsigned int) var_2))));
            arr_80 [i_17] = ((/* implicit */signed char) ((unsigned long long int) (signed char)59));
            arr_81 [i_17] = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (var_7)))) / (var_8));
            arr_82 [i_17] [i_17] [i_17] = ((/* implicit */signed char) ((int) (+(arr_40 [i_17] [i_17] [i_22] [i_17 - 1] [i_22] [i_22]))));
        }
        arr_83 [i_17] [i_17] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) (signed char)48)))) + (2147483647))) >> (((((/* implicit */int) min((arr_78 [i_17 - 1] [i_17]), (((/* implicit */unsigned short) (short)30426))))) - (30401)))));
        arr_84 [i_17] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(arr_30 [i_17 - 2] [i_17 - 2] [i_17 + 1] [(signed char)16])))) * (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-111))) == (arr_44 [i_17 - 2] [i_17 + 1] [1U] [1U] [i_17])))), (((((/* implicit */_Bool) var_11)) ? (12807759408894511760ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125)))))))));
    }
    var_58 = ((/* implicit */long long int) min((((/* implicit */int) min((var_2), (min(((signed char)-111), (var_5)))))), ((((((~(1142568016))) + (2147483647))) << ((((((+(((/* implicit */int) var_10)))) + (9578))) - (1)))))));
}
