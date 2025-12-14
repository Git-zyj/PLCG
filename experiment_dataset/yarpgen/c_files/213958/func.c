/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213958
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_4 = 3; i_4 < 18; i_4 += 2) 
                            {
                                var_10 = ((/* implicit */unsigned long long int) (((~(0))) | (((/* implicit */int) arr_12 [(_Bool)1] [(short)2] [(unsigned short)19] [i_0] [17LL] [(short)2] [i_0]))));
                                arr_13 [19ULL] [i_2] [i_3 - 2] [i_3 - 2] [i_0] = ((/* implicit */signed char) (-(-1)));
                                var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1518028114)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-109))) : (5860247570995206953LL)))) ? (((/* implicit */int) arr_10 [14LL] [i_2])) : ((-(1518028101)))));
                            }
                            var_12 = (unsigned short)52854;
                            var_13 = (unsigned short)64745;
                            var_14 = ((/* implicit */_Bool) (-((((+(-5422302692233988002LL))) / (((/* implicit */long long int) (~(2883143310U))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) 6392305062909473536LL))));
                /* LoopSeq 4 */
                for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    arr_16 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)-16)) : (((/* implicit */int) (_Bool)1))))), (((arr_3 [15U] [i_0]) >> (((arr_5 [i_0] [i_0] [(signed char)11] [i_0]) + (203289381)))))))))) : (((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)-16)) : (((/* implicit */int) (_Bool)1))))), (((arr_3 [15U] [i_0]) >> (((((arr_5 [i_0] [i_0] [(signed char)11] [i_0]) - (203289381))) - (1878000113))))))))));
                    arr_17 [11ULL] [i_0] [(short)5] [i_1 - 3] = ((/* implicit */short) ((min(((+(-1))), (((/* implicit */int) arr_9 [i_0] [i_0] [i_1 + 1] [16U] [i_5])))) >= ((-((+(((/* implicit */int) (_Bool)0))))))));
                    var_16 |= ((/* implicit */signed char) min((((((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 2] [2])) + (((((/* implicit */int) arr_14 [17LL] [i_0])) - (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (_Bool)0))));
                }
                for (signed char i_6 = 2; i_6 < 19; i_6 += 4) 
                {
                    arr_20 [(signed char)16] [i_0] [i_6 - 2] [i_6 + 2] = ((/* implicit */signed char) (-(8226332423432069526ULL)));
                    var_17 = ((/* implicit */long long int) ((-1518028114) <= (((-29) * (((/* implicit */int) ((((/* implicit */long long int) 401365927)) != (arr_2 [i_0]))))))));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [11] [(signed char)12] [i_6])) <= (((/* implicit */int) var_3)))) ? (arr_5 [i_6] [i_1 - 1] [i_1 - 3] [i_1 - 3]) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) min((arr_2 [i_6]), (((/* implicit */long long int) (_Bool)0))))) ? ((~(-4518777978986945337LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)63))))))))))));
                    var_19 = (i_0 % 2 == 0) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0]))) | (1ULL))), (((max((arr_3 [(short)19] [i_0]), (((/* implicit */unsigned long long int) arr_19 [7ULL] [i_0] [i_0] [(_Bool)1])))) >> (((((/* implicit */int) min((((/* implicit */short) var_1)), (arr_10 [i_0] [i_0])))) + (20025))))))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0]))) | (1ULL))), (((max((arr_3 [(short)19] [i_0]), (((/* implicit */unsigned long long int) arr_19 [7ULL] [i_0] [i_0] [(_Bool)1])))) >> (((((((/* implicit */int) min((((/* implicit */short) var_1)), (arr_10 [i_0] [i_0])))) + (20025))) + (1111)))))));
                }
                /* vectorizable */
                for (short i_7 = 2; i_7 < 20; i_7 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_7] [i_7 + 1] [i_7] [14])) ? (18U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_7 - 2] [i_7 - 2] [i_7] [(unsigned char)4] [(unsigned short)8] [i_7 + 1]))))))));
                    var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0] [(unsigned char)3] [12LL])) || (((/* implicit */_Bool) ((-912622374372331366LL) ^ (var_8))))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_7 - 2] [(unsigned short)11] [i_7 + 1] [i_1 + 1] [i_1 + 1])))))));
                }
                /* vectorizable */
                for (short i_8 = 2; i_8 < 20; i_8 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */long long int) (_Bool)1);
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64745))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)-4033)) / (((/* implicit */int) arr_19 [i_0] [i_8] [12LL] [i_0]))))))))));
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) -1LL))));
                }
                /* LoopNest 2 */
                for (unsigned char i_9 = 2; i_9 < 18; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        {
                            var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((!(((/* implicit */_Bool) (short)-1)))), (((((/* implicit */_Bool) (signed char)-93)) && (arr_7 [i_10])))))) > (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)119)) / (((/* implicit */int) (unsigned short)22338))))) && (((/* implicit */_Bool) var_4)))))));
                            var_27 ^= ((/* implicit */int) (signed char)108);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 18; i_12 += 1) 
                    {
                        {
                            arr_34 [i_0] [(short)10] [(_Bool)1] = ((/* implicit */long long int) (((~(max((arr_18 [i_0] [i_1 + 1] [i_11] [(short)18]), (((/* implicit */long long int) var_4)))))) <= (-5848983854619021252LL)));
                            arr_35 [i_0] [(short)13] [(short)10] = 2147483647;
                            var_28 |= ((/* implicit */short) (((~(((arr_1 [(short)1]) ^ (((/* implicit */unsigned long long int) 0LL)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_12] [i_12 - 3] [i_1] [i_1 + 1] [i_1 + 1])) ? (2501398958U) : (4294967278U))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 |= ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(10426247340747881420ULL)))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) var_5)))), ((~((~(((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (long long int i_13 = 0; i_13 < 11; i_13 += 4) 
    {
        for (unsigned int i_14 = 3; i_14 < 7; i_14 += 4) 
        {
            {
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) max((var_5), (((/* implicit */signed char) (_Bool)0))))), ((~(((/* implicit */int) var_4))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24817)) ? (-4518777978986945337LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-105)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_38 [i_13])), (arr_30 [19LL] [i_13] [i_13])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)44))) / (arr_1 [i_14 - 3]))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_15 = 0; i_15 < 11; i_15 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_15])) / (557669205)))) + (((arr_33 [i_13] [(short)19] [i_15]) * (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_13] [i_14 - 3])))))));
                        var_32 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + (arr_44 [i_13] [i_14 - 3] [(short)0] [i_14 - 1] [i_16] [10LL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))) - (var_6)))));
                    }
                    for (short i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)54)) / (((/* implicit */int) (_Bool)1)))))));
                        arr_50 [i_13] [i_14 + 4] [2ULL] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_14 - 2] [i_14 + 2] [(signed char)13])) && (((/* implicit */_Bool) -181666539022567977LL))));
                        var_34 = ((/* implicit */_Bool) ((arr_31 [i_14 - 3] [i_14 - 3] [i_14 - 3]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_31 [i_14 + 4] [(unsigned short)15] [i_14 + 1]))));
                        var_35 = ((/* implicit */unsigned short) ((arr_37 [i_14 - 1] [i_14 + 1]) > (arr_37 [i_14 + 4] [(_Bool)1])));
                        var_36 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-126)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                    }
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) arr_40 [i_13] [i_15]))));
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (short i_19 = 0; i_19 < 11; i_19 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_49 [i_13] [i_14 - 1] [i_18] [i_19]))))));
                                var_39 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_7)))) / (1518028095)));
                                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-25330)) >= (((/* implicit */int) (!(((/* implicit */_Bool) 2233785415175766016LL)))))));
                            }
                        } 
                    } 
                }
                for (signed char i_20 = 0; i_20 < 11; i_20 += 4) /* same iter space */
                {
                    var_41 = (signed char)39;
                    var_42 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [(signed char)10])) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(_Bool)1] [i_20] [i_20] [i_20] [i_20] [i_14 + 4] [i_20])))))) ? (((((/* implicit */int) (signed char)-60)) * (((/* implicit */int) (unsigned char)232)))) : (((((/* implicit */_Bool) 753348675U)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) arr_31 [16LL] [i_14 + 1] [(unsigned short)18]))))))));
                    var_43 *= ((/* implicit */unsigned long long int) arr_24 [i_20] [(unsigned char)6]);
                    var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_25 [(short)16] [i_14 + 2] [i_20]) >> (((arr_25 [i_13] [i_14 + 3] [i_20]) - (3604360337124476935ULL)))))) ? (max((((/* implicit */int) (short)4625)), ((-(((/* implicit */int) (short)6039)))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) ((((/* implicit */int) arr_15 [i_20])) < (((/* implicit */int) arr_4 [(signed char)0] [i_14 - 2] [20LL])))))))))))));
                }
                var_45 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-60)) || (((/* implicit */_Bool) arr_39 [6ULL]))))), ((+(((/* implicit */int) arr_4 [(_Bool)1] [(short)19] [(short)0]))))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (short)4625))) != (2545548926U))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))) + (arr_23 [i_13] [(short)0] [i_13] [i_14 - 1]))) : (((/* implicit */unsigned long long int) arr_26 [i_14 + 4] [i_14 + 3] [i_14 - 1] [i_14 + 3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4615)))));
                /* LoopNest 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (unsigned int i_22 = 0; i_22 < 11; i_22 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) arr_52 [i_22])) / (((/* implicit */int) arr_52 [i_22]))))), (max((3098651413705035722LL), (((/* implicit */long long int) (unsigned short)28070)))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_23 = 0; i_23 < 11; i_23 += 4) 
                            {
                                var_47 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-47)) * (((/* implicit */int) arr_63 [i_23] [i_21] [i_14]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_29 [i_13] [i_22] [i_21])))))) : (((2070671514698140251LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-4626)))))));
                                var_48 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(2070671514698140251LL))))));
                                var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) var_3))));
                                var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_14 + 3] [i_14 + 1] [i_14 + 3] [i_14 - 2])) && (((/* implicit */_Bool) arr_24 [i_13] [(unsigned char)20])))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_51 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)4625)) : (((/* implicit */int) var_1))))) > (((var_6) >> (((((/* implicit */int) (short)18999)) - (18978)))))))) < (((/* implicit */int) var_7))));
    var_52 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 2545548926U)))))) : ((-(var_8))))), (((/* implicit */long long int) ((((((/* implicit */int) var_2)) / (((/* implicit */int) var_5)))) <= (((/* implicit */int) min((var_5), (var_4)))))))));
}
