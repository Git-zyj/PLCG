/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200292
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) (unsigned short)2161)) : (((/* implicit */int) (unsigned short)25751))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) min((((unsigned long long int) ((signed char) 2339664839U))), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (signed char)0)), (var_10))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-113)))))))))))));
            arr_5 [i_0] [(signed char)2] &= ((/* implicit */signed char) min((((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)58))))) / (4294967295U))), (((/* implicit */unsigned int) ((int) (-(var_0)))))));
            var_13 = ((/* implicit */_Bool) var_8);
        }
        for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            arr_9 [(unsigned short)2] [0U] = ((/* implicit */signed char) max(((short)-22788), (max((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-34))))), (max((((/* implicit */short) var_5)), ((short)31744)))))));
            arr_10 [2U] [9LL] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((short) 1767014178))) ? (((((/* implicit */_Bool) var_1)) ? (arr_6 [4ULL] [14U]) : (var_2))) : (((/* implicit */int) var_4)))));
        }
        for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    {
                        arr_20 [(signed char)0] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_15 [i_3 + 1] [1])) / (arr_17 [i_3 - 2] [3] [(short)14] [(signed char)13])))));
                        var_14 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) (short)4216)))) || ((!(((/* implicit */_Bool) var_5)))))) && (((/* implicit */_Bool) var_7))));
                    }
                } 
            } 
            arr_21 [(_Bool)1] [(short)19] = max((((/* implicit */int) arr_13 [(short)3])), ((+(((/* implicit */int) var_8)))));
            arr_22 [11ULL] [(unsigned short)19] [17] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [(unsigned short)2])) && (((/* implicit */_Bool) (short)-22788)))) ? (((/* implicit */int) ((var_6) || (((/* implicit */_Bool) (unsigned short)46510))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(_Bool)1] [8LL] [(short)11] [14LL]))))))))));
        }
        for (unsigned int i_6 = 2; i_6 < 17; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_7 = 2; i_7 < 18; i_7 += 2) 
            {
                var_15 = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [6ULL] [(short)4])) ? (3952626674U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [16] [(_Bool)1] [(signed char)18] [0ULL])))))) / (((((/* implicit */_Bool) 2594242587818263854ULL)) ? (((/* implicit */long long int) arr_19 [(signed char)19] [9ULL] [(short)10] [(short)8] [(unsigned short)10])) : (arr_8 [(signed char)10])))))));
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) arr_19 [14] [14U] [(signed char)10] [4LL] [3]))))) || (((/* implicit */_Bool) ((unsigned long long int) (signed char)1))))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
                {
                    var_17 *= (-(((/* implicit */int) min((var_7), (((/* implicit */short) arr_3 [i_6 - 2] [i_7 + 1]))))));
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        arr_35 [(signed char)17] [7] [18] [1U] [(short)7] [(signed char)10] [(short)10] = ((/* implicit */unsigned long long int) arr_23 [3] [(short)12]);
                        var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned short) -1244574564))) : (((/* implicit */int) arr_11 [i_7 + 2] [i_6 - 2] [(unsigned short)3]))))));
                    }
                    for (short i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        arr_38 [0] [(_Bool)0] [(short)13] [(short)1] [5] [(signed char)6] [(unsigned short)2] &= (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((arr_23 [(signed char)0] [(signed char)7]) / (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) arr_17 [(short)10] [i_7 - 1] [17LL] [16])))));
                        var_19 = ((/* implicit */_Bool) arr_37 [15]);
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        arr_45 [16] [(signed char)16] [17] [(short)0] [(signed char)18] [(short)18] = ((/* implicit */int) ((long long int) var_0));
                        arr_46 [16] [18] [(short)12] = ((/* implicit */int) arr_29 [(signed char)4] [(_Bool)1] [8]);
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        arr_50 [(_Bool)1] [(_Bool)1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)28672))))) ? (var_9) : (((/* implicit */unsigned long long int) var_2)));
                        var_20 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) 492697728U)))) ? (arr_12 [(_Bool)1] [(short)15] [8]) : (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22143)))))));
                    }
                    for (unsigned long long int i_14 = 3; i_14 < 17; i_14 += 2) 
                    {
                        arr_54 [i_14] [(signed char)5] [7ULL] [3U] [(signed char)13] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((arr_11 [19U] [9] [(short)2]) ? (arr_25 [(signed char)8] [(short)11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) < (((((/* implicit */_Bool) (signed char)16)) ? (676498473792808061LL) : (((/* implicit */long long int) arr_24 [(short)3] [4ULL] [(short)11]))))));
                        arr_55 [i_6] &= arr_23 [4ULL] [(unsigned short)6];
                        arr_56 [5ULL] [i_14] [16U] [(signed char)1] [4] [7LL] [(short)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2161)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2138))) : (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)45))) : (3612654668U)));
                        arr_57 [i_14] = ((/* implicit */short) ((unsigned long long int) ((short) 520093696)));
                        arr_58 [i_14] [9] [4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [(unsigned short)14] [(signed char)10] [(short)5] [(_Bool)1])) ? (((/* implicit */int) (short)-17323)) : ((-(var_2)))));
                    }
                    var_21 &= ((/* implicit */unsigned int) var_2);
                    arr_59 [16U] [16ULL] [(signed char)18] [(signed char)17] [6] = ((/* implicit */_Bool) (short)-26253);
                }
                arr_60 [10ULL] = ((/* implicit */unsigned long long int) arr_48 [(_Bool)1] [(short)4] [(short)6]);
            }
            for (long long int i_15 = 0; i_15 < 20; i_15 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_16 = 3; i_16 < 19; i_16 += 3) /* same iter space */
                {
                    arr_65 [(short)10] [(short)5] [(signed char)1] [18LL] [(short)8] [i_16] = ((/* implicit */signed char) (-(6215179327027409747ULL)));
                    arr_66 [(signed char)17] [(unsigned short)0] [i_16] = ((/* implicit */short) (-(((/* implicit */int) var_6))));
                }
                for (int i_17 = 3; i_17 < 19; i_17 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_39 [3] [13])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-125))))), (((unsigned int) -1195203773))));
                    arr_69 [(short)11] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [(short)7] [2LL] [(short)10])) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_8 [4LL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-30744)))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7))))))))));
                    arr_70 [i_17] [2LL] [(short)12] [12] = ((/* implicit */short) ((int) 1299651683));
                }
                for (int i_18 = 3; i_18 < 19; i_18 += 3) /* same iter space */
                {
                    var_23 -= ((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551613ULL))));
                    /* LoopSeq 1 */
                    for (int i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        arr_77 [19ULL] [(signed char)11] [(signed char)17] [(short)11] [i_19] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_53 [(short)5] [0] [9U] [13] [(signed char)6])) && (((/* implicit */_Bool) 6889920666909225863LL))))), ((unsigned short)53272))))));
                        arr_78 [(short)12] [16] [i_19] [(signed char)0] [(short)9] = ((/* implicit */long long int) 18446744073709551615ULL);
                    }
                    var_24 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -1147011422)))) || (((/* implicit */_Bool) arr_2 [(signed char)14] [i_0]))));
                }
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) min((((int) 6889920666909225870LL)), (((/* implicit */int) (short)112))))) && (((/* implicit */_Bool) 16135397280087412614ULL))));
            }
            for (long long int i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) ((arr_7 [(short)7]) || (var_6)))), (((((/* implicit */_Bool) 4073893793U)) ? (((/* implicit */int) (short)-26208)) : (((/* implicit */int) var_6)))))), (((/* implicit */int) (short)-26208))));
                arr_82 [7] = (short)(-32767 - 1);
                arr_83 [10] [(unsigned short)15] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((var_3), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_6 - 2] [(signed char)14] [(_Bool)0] [2U] [8ULL]))) : (412316860416ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((((/* implicit */int) arr_63 [8U] [i_6] [14U])) / (((/* implicit */int) (short)6995)))))))));
                arr_84 [1U] [(short)18] [(short)19] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~((-2147483647 - 1))))))) ? (((/* implicit */int) (short)-8733)) : (((((/* implicit */_Bool) 2943664170U)) ? (((/* implicit */int) arr_13 [i_6 + 2])) : (((/* implicit */int) arr_13 [i_6 - 1]))))));
            }
            arr_85 [1LL] [4U] = ((/* implicit */int) var_6);
            var_27 = ((/* implicit */short) ((((1105587116364338951ULL) < (((/* implicit */unsigned long long int) 4073893777U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_41 [8] [17] [1U] [(short)18] [i_6 - 1])) || (((/* implicit */_Bool) arr_52 [11ULL] [8] [(short)10] [(_Bool)1] [16]))))) : (((/* implicit */int) arr_47 [(_Bool)1] [(short)6] [6] [(short)14] [(short)7]))));
        }
    }
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) ((short) var_1))) : (1779310822)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-1)))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_5)))))))));
}
