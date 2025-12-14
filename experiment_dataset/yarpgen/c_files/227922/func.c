/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227922
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
    var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)245)))))));
    var_14 -= ((/* implicit */long long int) min(((~(var_0))), (((/* implicit */unsigned long long int) var_11))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] [i_1] = min((max((((/* implicit */unsigned int) (unsigned char)127)), (arr_5 [i_1 + 1]))), (((/* implicit */unsigned int) ((signed char) min((var_4), (((/* implicit */int) (unsigned short)20223)))))));
            var_15 = ((unsigned int) (~(((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2] [i_1 + 2]))));
            var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)31619))))) * (max((((1466618967947478265ULL) << (((3394595169452512836LL) - (3394595169452512795LL))))), (((/* implicit */unsigned long long int) (_Bool)1))))));
            arr_7 [(_Bool)1] &= ((/* implicit */int) var_1);
        }
        for (long long int i_2 = 1; i_2 < 17; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [(unsigned char)15] [i_2] = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) max(((short)1620), ((short)1614)))), (arr_9 [i_2 - 1] [i_2 - 1])))));
            arr_11 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) (short)-1614)))))) ? ((+(((arr_9 [i_2 - 1] [i_0]) & (((/* implicit */long long int) -969627109)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 + 2] [4LL])) ? (((/* implicit */int) (short)-1621)) : (-654704369))))));
        }
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_17 -= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_3] [i_0])), (((((/* implicit */_Bool) 4539628424389459968LL)) ? (-5142605372088071451LL) : (((/* implicit */long long int) 2671909401U)))))))));
            arr_15 [i_0] [i_3] = ((/* implicit */unsigned int) min((-969627109), (((/* implicit */int) (unsigned short)7182))));
            var_18 += ((/* implicit */long long int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1620))))))) + (((((/* implicit */_Bool) (signed char)0)) ? ((~(((/* implicit */int) arr_12 [i_0] [i_0])))) : (((/* implicit */int) arr_3 [i_0] [i_3] [i_3]))))));
        }
        for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_7))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3755297347U)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_4 - 1] [i_4 - 1]))));
                var_21 = ((/* implicit */short) arr_18 [i_4] [i_4 + 2] [i_4 + 1]);
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) (short)1614);
                    var_23 = ((/* implicit */unsigned long long int) (-(arr_22 [i_4 - 1] [i_4] [i_4 + 1])));
                }
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    arr_29 [(unsigned char)12] [(unsigned char)12] [i_5] [i_0] [i_7] = ((/* implicit */signed char) ((unsigned long long int) (+(arr_0 [i_5] [i_0]))));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((signed char) -969627109));
                        arr_32 [i_0] [i_0] [i_4] [i_4 - 1] [i_5] [i_7] [i_8] = ((/* implicit */long long int) ((((unsigned long long int) arr_8 [i_5] [i_8])) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_0] [i_8 + 1] [i_0] [7U])))))));
                    }
                    var_25 = (+(((((/* implicit */int) var_7)) ^ (((/* implicit */int) (unsigned short)8671)))));
                    /* LoopSeq 1 */
                    for (int i_9 = 2; i_9 < 18; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-1615))));
                        var_27 = ((/* implicit */unsigned int) (-(var_4)));
                        var_28 |= ((int) arr_31 [i_9 - 2] [i_9 - 1] [i_9] [i_9 - 2] [i_5] [i_9 + 1]);
                    }
                }
            }
            for (short i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_12 = 1; i_12 < 18; i_12 += 4) 
                    {
                        var_29 *= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                        arr_43 [i_0] [i_12] [i_10] [i_10] [i_11] [i_0] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-1620)) > (((/* implicit */int) (short)1614)))))) == ((-(539669948U)))));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_2))))) * (((/* implicit */int) (unsigned short)46192)))))));
                    }
                    for (unsigned short i_13 = 1; i_13 < 18; i_13 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned short)7184)))) == (((/* implicit */int) arr_17 [6U] [9LL])))))));
                        var_32 = ((/* implicit */_Bool) (~(var_12)));
                        arr_47 [i_0] [i_4] [i_4] [3U] [i_11] [(unsigned short)12] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_0] [i_4 + 2] [i_13 + 1] [i_11] [i_13] [i_10])) ? (arr_39 [i_11] [i_4 + 1] [i_13 - 1] [i_11] [i_13] [i_4 - 1]) : (arr_39 [i_0] [i_4 + 1] [i_13 - 1] [i_11] [i_13 - 1] [i_13 - 1])));
                    }
                    var_33 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0]))) : (arr_27 [i_4] [16LL] [i_11])))));
                    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) > (arr_37 [i_0] [i_4 - 1]))))));
                }
                for (signed char i_14 = 2; i_14 < 18; i_14 += 4) 
                {
                    var_35 = ((/* implicit */int) ((unsigned char) 539669948U));
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */int) max((var_36), (max(((+(((/* implicit */int) arr_3 [(signed char)18] [i_4 - 1] [i_4])))), (((/* implicit */int) ((969627127) == (-1867563974))))))));
                        var_37 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_24 [i_15] [i_14] [i_10] [i_10] [i_4] [i_0]), (((/* implicit */signed char) var_5))))) ? (max((((/* implicit */unsigned int) var_11)), (arr_26 [i_15] [i_10] [i_10] [i_4] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_23 [i_0] [i_4 + 2] [i_10] [i_10]), (((/* implicit */short) arr_51 [i_14 - 1] [i_10] [i_10] [8LL] [i_10] [i_15 + 1])))))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((1073610752), (((/* implicit */int) arr_46 [i_15] [i_14 - 1] [i_10] [i_10] [1LL] [i_4 + 1] [i_0]))))) ? (((/* implicit */int) arr_4 [i_0] [i_4 + 2] [i_10])) : ((~(((/* implicit */int) arr_21 [i_4] [i_10] [i_14])))))))));
                        var_38 = ((/* implicit */int) (((-(((arr_16 [i_15 + 1] [i_4] [i_15 + 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))))))) >= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)58374)))))));
                    }
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
                    {
                        var_39 *= ((/* implicit */_Bool) (+(max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3755297322U)) | (arr_38 [i_0] [(short)7] [i_10] [i_16]))))))));
                        var_40 = ((int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7184))) : (1401760566U)));
                    }
                }
                for (long long int i_17 = 1; i_17 < 18; i_17 += 2) 
                {
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) arr_38 [i_0] [i_0] [i_17 - 1] [i_4 - 1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (~(((/* implicit */int) (!(var_7)))))))));
                        var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))));
                        var_44 = ((unsigned int) (+(var_6)));
                    }
                }
                for (short i_19 = 0; i_19 < 19; i_19 += 4) 
                {
                    arr_63 [i_0] [3] [3] [i_0] [i_19] [i_19] = ((/* implicit */long long int) ((int) ((((arr_58 [i_10] [i_4] [i_10] [i_19]) + (2147483647))) >> (((/* implicit */int) arr_54 [i_4] [i_4 - 1] [i_4 - 1] [(unsigned char)17] [i_4 + 2] [i_10])))));
                    var_45 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) arr_16 [i_19] [i_4 + 2] [i_4 + 2]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_19] [i_10] [i_0]))) + (arr_27 [i_0] [i_0] [(unsigned char)11]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32))) | (3230578049U))))))) ? (min((max((((/* implicit */unsigned long long int) arr_42 [i_0] [i_0] [i_4 + 1] [i_10] [15LL] [i_19])), (var_0))), (max((((/* implicit */unsigned long long int) arr_51 [i_0] [i_0] [i_0] [i_4] [i_10] [i_19])), (arr_50 [10ULL]))))) : (((((/* implicit */_Bool) var_8)) ? (max((var_8), (2049366579883245181ULL))) : (((/* implicit */unsigned long long int) arr_9 [i_19] [i_10]))))));
                    arr_64 [i_4] [i_4] [i_10] [(unsigned char)5] [i_4] [i_0] = ((/* implicit */unsigned short) max((min((max((((/* implicit */long long int) (unsigned char)88)), (var_6))), (var_6))), (((/* implicit */long long int) ((unsigned int) arr_54 [i_4] [i_4] [i_4 - 1] [11ULL] [i_4 - 1] [i_4])))));
                }
                arr_65 [i_4] [i_10] = ((/* implicit */unsigned int) ((((arr_57 [i_0] [i_10]) && (arr_57 [i_0] [i_0]))) ? (((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_5)), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) max((((/* implicit */short) arr_4 [i_0] [i_0] [i_0])), (arr_8 [i_4] [i_10]))))))) : ((-(((((/* implicit */_Bool) (short)-1615)) ? (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_0] [i_0]))) : (arr_22 [i_10] [18U] [i_0])))))));
                arr_66 [i_10] [i_0] [i_10] [i_4 + 1] |= ((/* implicit */_Bool) (~((-(arr_16 [i_4 + 1] [i_4] [i_4])))));
                var_46 *= max((((((/* implicit */int) arr_45 [i_4 - 1] [i_4 - 1] [i_4 + 2])) < (((/* implicit */int) arr_31 [i_4] [i_10] [i_4 + 2] [i_0] [i_10] [i_0])))), ((!(max((arr_55 [i_10] [i_10] [i_10] [i_0] [i_0]), (arr_62 [17LL] [17ULL] [i_0]))))));
            }
            var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_0] [(signed char)6] [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))) : (1592762567U))))) - (((/* implicit */unsigned int) max((((((/* implicit */int) var_9)) * (((/* implicit */int) (signed char)15)))), (((/* implicit */int) ((_Bool) 539669948U)))))))))));
        }
        var_48 = (+((~(((((/* implicit */_Bool) arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23))) : (0ULL))))));
        var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -708547948)) < (1304290462121944190ULL))))) == (max((((/* implicit */unsigned long long int) arr_27 [i_0] [(short)13] [i_0])), (min((((/* implicit */unsigned long long int) 7108897)), (1600568206243890143ULL))))))))));
        arr_67 [i_0] = min((((((/* implicit */_Bool) arr_59 [i_0] [i_0] [(_Bool)0] [(_Bool)0] [i_0] [i_0])) ? (arr_37 [i_0] [i_0]) : (arr_37 [i_0] [i_0]))), (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (arr_18 [i_0] [i_0] [i_0])))) * (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0])))));
    }
    for (signed char i_20 = 3; i_20 < 12; i_20 += 4) 
    {
        var_50 = ((long long int) (~(arr_30 [i_20 - 1] [i_20] [i_20 + 1] [i_20 + 2])));
        arr_71 [i_20] = ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)125)))) ? (var_6) : (arr_41 [i_20] [5])));
        arr_72 [i_20] [i_20] = (~(((max((((/* implicit */int) (signed char)25)), (var_11))) - (((/* implicit */int) max(((unsigned short)7634), (((/* implicit */unsigned short) arr_46 [i_20] [i_20 - 1] [i_20] [i_20] [i_20] [i_20] [i_20]))))))));
    }
    /* vectorizable */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_51 = (((((+(arr_30 [8ULL] [12] [12] [8ULL]))) + (2147483647))) << (((arr_0 [i_21] [i_21]) - (1382354455U))));
        var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) (+(arr_0 [i_21] [i_21]))))));
        var_53 = arr_37 [i_21] [i_21];
    }
    for (signed char i_22 = 1; i_22 < 9; i_22 += 1) 
    {
        var_54 = ((unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19142)))))));
        var_55 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 3230578049U)) ? (17142453611587607431ULL) : (((/* implicit */unsigned long long int) 1252002592)))), (((/* implicit */unsigned long long int) max(((_Bool)0), (arr_53 [i_22] [i_22 - 1] [i_22 + 2] [i_22] [i_22 + 2] [i_22 + 2] [i_22 - 1]))))));
        var_56 ^= ((/* implicit */_Bool) (+((-((+(var_4)))))));
    }
    var_57 = ((/* implicit */signed char) min((var_57), (((/* implicit */signed char) var_1))));
    var_58 = ((/* implicit */_Bool) var_6);
}
