/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43142
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_13))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775799LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            var_19 = ((unsigned long long int) arr_3 [i_0] [i_0]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_20 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))));
            var_21 += ((/* implicit */unsigned long long int) (signed char)5);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_11 [(_Bool)1] [(_Bool)1] [(_Bool)1] = var_8;
            var_22 = ((/* implicit */unsigned long long int) ((signed char) arr_6 [(signed char)16] [(signed char)16]));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_5 = 2; i_5 < 16; i_5 += 1) /* same iter space */
                {
                    var_23 = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (9961667888071604901ULL))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 3) 
                    {
                        var_24 &= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))) : (arr_4 [i_6] [i_5 + 2] [i_3])));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_5 + 2] [i_0])) ? (arr_3 [i_5 + 3] [i_0]) : (17622091102710282478ULL)));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6697039457633976202LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-8))) : (7152406698092425824LL)));
                    }
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        var_27 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [(signed char)16] [i_3] [i_4] [i_3] [i_3])) ? (16226673444415898380ULL) : ((-(18446744073709551614ULL)))));
                        arr_23 [3LL] [i_3] [i_4] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8ULL)) ? (((2070813293772958240LL) << (((((-360424617910272044LL) + (360424617910272079LL))) - (34LL))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7] [3LL] [i_4] [i_3] [i_0]))) ^ (2070813293772958240LL)))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_8 = 1; i_8 < 18; i_8 += 1) 
                    {
                        arr_28 [i_4] [i_5] [i_4] [(_Bool)1] [i_0] = (!(((/* implicit */_Bool) 18014398509465600ULL)));
                        var_29 ^= ((/* implicit */_Bool) 2604740312043807203LL);
                    }
                    for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        arr_32 [i_9] [i_5] [4ULL] [12ULL] [12ULL] = (-((+(2070813293772958216LL))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_5 - 1] [i_5] [i_5] [i_5] [7ULL] [i_5])) <= (((/* implicit */int) arr_0 [i_5 + 2]))));
                        arr_33 [i_9] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 167707481878889067ULL)) ? (13575561394052170043ULL) : (arr_4 [i_0] [i_5 - 2] [i_0])));
                        arr_34 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_5 + 3]))));
                    }
                    for (unsigned long long int i_10 = 2; i_10 < 18; i_10 += 4) 
                    {
                        var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        var_32 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_38 [i_10] [i_5 - 1] [i_0] [i_4] [i_0] [i_0] &= arr_31 [14ULL] [i_0] [8LL] [i_4] [i_4] [(signed char)6] [i_0];
                    }
                }
                for (long long int i_11 = 2; i_11 < 16; i_11 += 1) /* same iter space */
                {
                    var_33 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9545594347000424077ULL))));
                    var_34 = ((/* implicit */unsigned long long int) (+(arr_25 [i_11 - 2] [(_Bool)1] [i_3] [i_3] [i_0] [i_0])));
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_45 [i_12] [i_11] [i_4] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8LL)) ? (-8042833483974189923LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || ((_Bool)0)))))));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        arr_46 [i_12] [i_12] [i_4] [i_3] [i_12] [i_0] = ((((/* implicit */_Bool) arr_43 [i_0] [i_11 + 3] [18ULL] [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((arr_31 [i_4] [16ULL] [i_4] [i_4] [(_Bool)1] [15LL] [i_0]) | (((/* implicit */unsigned long long int) 684160951579208900LL)))));
                        arr_47 [i_0] [i_12] [i_4] [i_12] [i_0] = ((/* implicit */unsigned long long int) ((((var_1) != (17622091102710282478ULL))) ? (2951883228807376598LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (signed char)56))))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        var_36 += ((/* implicit */unsigned long long int) (_Bool)1);
                        var_37 = ((/* implicit */signed char) ((arr_29 [i_11 + 1] [i_11] [i_11] [i_11] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_13] [i_11] [i_11 + 1] [0ULL])))));
                    }
                }
                arr_50 [i_4] [3LL] [3LL] [3LL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 15241554353691853853ULL)))))));
            }
            for (signed char i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 19; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 3; i_16 < 17; i_16 += 4) 
                    {
                        {
                            arr_60 [9ULL] [10ULL] [i_16] [i_16] [i_3] [i_0] = ((/* implicit */_Bool) ((941677856344429856ULL) + (arr_30 [i_16] [5ULL] [i_16 - 3] [i_16] [i_16 - 1] [i_16 - 3] [i_14])));
                            var_38 = (-(-1910695484249637587LL));
                        }
                    } 
                } 
                var_39 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_14])))))));
            }
            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_0]))) >= (6972612019556781920ULL))))));
        }
        for (unsigned long long int i_17 = 1; i_17 < 16; i_17 += 4) 
        {
            var_41 ^= (~(941677856344429827ULL));
            arr_65 [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_57 [i_17 - 1] [i_0] [i_17] [i_0] [i_0] [i_0]))))) ? (arr_29 [i_17 + 3] [i_17] [i_17] [i_0] [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
        }
        arr_66 [i_0] [i_0] = ((/* implicit */signed char) ((((_Bool) arr_7 [16ULL] [16ULL])) ? (((/* implicit */int) arr_6 [(signed char)18] [(signed char)18])) : ((+(((/* implicit */int) (signed char)-55))))));
        var_42 = ((/* implicit */unsigned long long int) (signed char)-98);
        var_43 = (((!(((/* implicit */_Bool) 9007198717870080LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (17592169267200ULL));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 3) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                {
                    arr_73 [i_18] [(_Bool)1] [i_18] [i_18] = ((/* implicit */signed char) 2305843009213677568ULL);
                    var_44 = ((/* implicit */unsigned long long int) var_12);
                    arr_74 [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_19 - 1])) ? (((/* implicit */int) ((_Bool) var_10))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_20] [i_19] [i_19] [(_Bool)1] [i_18])) : (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_20] [12ULL] [i_19 + 1] [i_19] [i_19 - 1] [i_19])) ? (((/* implicit */int) arr_0 [i_19 + 1])) : (((/* implicit */int) arr_15 [i_20] [6ULL] [i_19 - 1] [i_18] [i_18] [2LL]))))) : ((((_Bool)1) ? (5214763645652911477ULL) : (5214763645652911472ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_21 = 1; i_21 < 17; i_21 += 1) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) max((var_45), (((((arr_57 [i_21 + 2] [i_20] [i_20] [i_19 + 1] [i_19 - 1] [i_18]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_21 + 2] [i_20] [i_20] [i_19 + 1] [i_19] [i_18]))) : (34359730176ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1125899898454016ULL))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_22 = 0; i_22 < 19; i_22 += 3) 
                        {
                            var_46 = ((/* implicit */signed char) arr_59 [i_18]);
                            var_47 = ((/* implicit */unsigned long long int) ((arr_59 [i_18]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 17731131003142363101ULL)) ? (17505066217365121754ULL) : (21ULL))))));
                        }
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_23 = 0; i_23 < 19; i_23 += 1) 
        {
            for (long long int i_24 = 1; i_24 < 17; i_24 += 4) 
            {
                for (long long int i_25 = 0; i_25 < 19; i_25 += 3) 
                {
                    {
                        arr_85 [i_18] [i_24 + 2] [i_18] [i_18] = -7760061571446537317LL;
                        arr_86 [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) arr_77 [i_25] [(_Bool)1] [i_18] [i_18] [i_18])))));
                        var_48 = ((/* implicit */long long int) max((var_48), (((((/* implicit */_Bool) 672792714079125882ULL)) ? ((-(4436051707738642744LL))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_49 [i_24 + 2])))))));
                        var_49 *= min((((((/* implicit */unsigned long long int) (+(-3272246489097883415LL)))) % (min((2344870877950696966ULL), (941677856344429862ULL))))), (((/* implicit */unsigned long long int) arr_59 [(signed char)16])));
                        var_50 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((+(arr_22 [i_25] [i_18] [i_24] [i_18] [i_18])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [15ULL] [i_24 + 2] [i_23] [i_18]))))) : (2156933735205895891LL)));
                    }
                } 
            } 
        } 
        var_51 = ((/* implicit */long long int) arr_31 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]);
    }
    var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) -9223372036854775790LL))));
    var_53 = ((/* implicit */long long int) var_2);
    var_54 = (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (9545594347000424077ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) : (((9545594347000424077ULL) & (((/* implicit */unsigned long long int) 9007198717870097LL)))))));
}
