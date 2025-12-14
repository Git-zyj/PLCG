/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195901
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */_Bool) ((unsigned short) ((min((3U), (((/* implicit */unsigned int) var_1)))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1])))))))));
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_2 + 1] [i_3] [i_3]))))))))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((2043560049), (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2]))))) ? (min(((+(var_2))), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_0 [i_0])) : (var_3))))) : ((+(((/* implicit */int) max(((unsigned short)42805), (((/* implicit */unsigned short) var_9)))))))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned short) (!(((((/* implicit */int) (unsigned char)123)) > (((/* implicit */int) arr_10 [i_0] [i_1]))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_16 [i_5] [(unsigned char)1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)130);
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_0] [i_0])))))))) ? ((-(((((/* implicit */_Bool) (unsigned short)48818)) ? (2116379780) : (((/* implicit */int) (short)4210)))))) : (((((/* implicit */int) (unsigned short)22731)) - (((/* implicit */int) (_Bool)0))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [i_2 + 1] [i_4 + 4]), (((/* implicit */unsigned short) var_8)))))) - (min((4294967290U), (2U)))));
                        }
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) (short)-12664);
                            var_21 = ((/* implicit */short) (+(((/* implicit */int) var_7))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) (short)-12645)) : (((/* implicit */int) var_1)))) ^ ((-(((/* implicit */int) (short)15)))))))));
                            var_23 = ((/* implicit */int) (~((+(arr_15 [i_7] [i_6] [i_1])))));
                        }
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)90))))) ? ((~(-543706500))) : (((/* implicit */int) (short)-31385)))) | (((int) min((arr_18 [i_0] [i_1]), (((/* implicit */int) arr_0 [i_0])))))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (1073741823) : (((/* implicit */int) (unsigned char)31))))), (((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (6990637377895609195ULL)))))) ? ((~(((/* implicit */int) (short)4)))) : (((/* implicit */int) var_11))));
                        var_25 -= ((/* implicit */int) var_0);
                    }
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            arr_32 [2U] [i_9] [i_9] [i_0] = (+(((/* implicit */int) min(((unsigned char)3), (var_1)))));
                            arr_33 [i_9] [i_9] [i_8] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 14142038193006300733ULL)))) ? (((17006673073979144495ULL) * (((/* implicit */unsigned long long int) 4294967281U)))) : (((/* implicit */unsigned long long int) arr_15 [i_2 - 1] [(signed char)0] [(signed char)0])))), (((((/* implicit */_Bool) ((unsigned int) (signed char)32))) ? (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) (short)-22580))))) : (((((/* implicit */_Bool) (short)12679)) ? (arr_30 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62)))))))));
                        }
                        var_26 = ((/* implicit */int) min((((((/* implicit */_Bool) var_5)) ? (0ULL) : (((/* implicit */unsigned long long int) 1368354009)))), (((/* implicit */unsigned long long int) arr_27 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]))));
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned short) ((short) 3U));
                            var_28 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (4294967266U))))))), (var_3)));
                        }
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)13356))))) ? (((((/* implicit */_Bool) 5864147049954092204ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-5873499201991718605LL))) : (((/* implicit */long long int) (-(2147483647))))));
                            var_30 = ((/* implicit */signed char) (~(var_3)));
                        }
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)240)) ? (arr_39 [i_2 + 1] [(short)3] [i_2] [i_2 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) -576717652)) ? (((/* implicit */unsigned int) var_3)) : (var_6)))))))));
                            var_32 = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    }
                    var_33 = ((((_Bool) min(((unsigned short)22863), (((/* implicit */unsigned short) (short)-12704))))) ? (((((/* implicit */_Bool) arr_5 [i_2])) ? (min((var_2), (var_2))) : (((/* implicit */int) max(((unsigned short)22863), (((/* implicit */unsigned short) var_12))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), (var_13)))) ? (((/* implicit */int) ((arr_39 [i_1] [i_1] [i_1] [i_1]) <= (((/* implicit */long long int) var_6))))) : (((((/* implicit */int) (unsigned char)6)) - (860569000))))));
                    var_34 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12698))) | (18389275761017536951ULL)))) ? (((/* implicit */int) ((short) (_Bool)0))) : (((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) arr_40 [i_0] [i_0])) : (((/* implicit */int) var_13))))))), (((arr_41 [i_1] [i_2 - 1] [5ULL]) ^ (arr_41 [i_0] [i_2 + 1] [i_2])))));
                }
            } 
        } 
        var_35 = ((/* implicit */signed char) (short)29697);
        var_36 = ((/* implicit */unsigned int) (short)127);
    }
    for (int i_13 = 0; i_13 < 11; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 3; i_16 < 10; i_16 += 4) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_37 = ((/* implicit */int) arr_22 [i_13] [i_16 - 2] [i_15 + 1] [(unsigned char)10] [(unsigned char)10]);
                                arr_57 [i_17] [(unsigned short)6] [i_15 + 1] [i_16] [6] = ((/* implicit */signed char) (unsigned char)3);
                            }
                        } 
                    } 
                    var_38 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) && (((/* implicit */_Bool) 4292478360U)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-14884)), ((unsigned short)58958)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (var_3)))) : (((var_6) - (((/* implicit */unsigned int) var_4)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((unsigned long long int) -2147483647)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_18 = 0; i_18 < 11; i_18 += 3) 
        {
            var_40 = ((/* implicit */unsigned short) 15656634001765415521ULL);
            var_41 = (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) != (14332496841144383304ULL))) ? (((/* implicit */int) (unsigned char)67)) : ((+(((/* implicit */int) var_10)))))));
        }
        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */long long int) max((((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((((/* implicit */_Bool) arr_48 [i_13])) ? (918703551U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))))) == ((~(((((/* implicit */_Bool) arr_19 [i_13] [i_13] [i_13] [i_13] [i_13])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))))));
        arr_62 [i_13] = ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) arr_34 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))));
        arr_63 [i_13] = ((/* implicit */unsigned char) var_12);
    }
    for (unsigned int i_19 = 0; i_19 < 15; i_19 += 4) 
    {
        var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((~(4846888493796136920ULL))) : (((/* implicit */unsigned long long int) min((614548486), (((/* implicit */int) var_8))))))))));
        var_44 = ((/* implicit */short) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_19]))) | (4292478370U))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51007))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_19] [i_19])) ? (var_2) : (((/* implicit */int) (signed char)63))))) ? ((-(((/* implicit */int) (unsigned short)16287)))) : (((((/* implicit */int) (short)16728)) - (((/* implicit */int) (unsigned short)5999)))))) : (max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (short)16876))))))));
    }
    for (unsigned long long int i_20 = 2; i_20 < 18; i_20 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_21 = 0; i_21 < 19; i_21 += 2) 
        {
            for (signed char i_22 = 0; i_22 < 19; i_22 += 1) 
            {
                for (unsigned long long int i_23 = 0; i_23 < 19; i_23 += 3) 
                {
                    {
                        var_45 = ((/* implicit */unsigned long long int) arr_68 [i_20]);
                        var_46 = ((/* implicit */unsigned long long int) arr_68 [i_21]);
                    }
                } 
            } 
        } 
        var_47 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 610026937)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_68 [i_20])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (1948308177U))))))) ? (((((/* implicit */_Bool) arr_75 [i_20 - 1] [i_20 - 2] [i_20] [i_20 + 1])) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)20586))))) : (min((((/* implicit */int) (short)26095)), (var_5))))) : (((((/* implicit */_Bool) min((((/* implicit */short) arr_71 [i_20] [6] [i_20])), (var_8)))) ? (((/* implicit */int) (unsigned char)21)) : (((((/* implicit */int) (unsigned char)10)) + (((/* implicit */int) (_Bool)1))))))));
        var_48 = ((/* implicit */unsigned long long int) min((var_48), (((((/* implicit */unsigned long long int) (+(2488912U)))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13276))) : (8822101316674253527ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) (signed char)-11)), (arr_79 [(signed char)4] [(signed char)4] [(unsigned char)14] [i_20] [i_20 + 1] [i_20 + 1])))))))));
        /* LoopNest 2 */
        for (signed char i_24 = 0; i_24 < 19; i_24 += 2) 
        {
            for (unsigned char i_25 = 0; i_25 < 19; i_25 += 1) 
            {
                {
                    var_49 = ((/* implicit */unsigned short) (unsigned char)245);
                    var_50 = ((/* implicit */_Bool) ((int) var_12));
                    arr_84 [i_20] [i_20] [i_20] [i_20] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned short) (unsigned char)255)))))) * (min((140737454800896ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))), ((+((~(4835992434125003702ULL)))))));
                    var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) (+(((/* implicit */int) max(((short)7750), ((short)16862)))))))));
                }
            } 
        } 
    }
    var_52 = ((/* implicit */unsigned short) var_9);
    var_53 = ((/* implicit */unsigned char) ((var_5) & (((/* implicit */int) var_7))));
}
