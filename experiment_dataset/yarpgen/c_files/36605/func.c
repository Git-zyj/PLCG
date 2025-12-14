/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36605
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
    var_12 = ((/* implicit */int) var_7);
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (max((((/* implicit */unsigned long long int) (signed char)-43)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_9)) : (var_7)))))))));
    var_14 = ((/* implicit */int) ((unsigned long long int) (-(var_9))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */int) ((((long long int) -300099891)) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_1] [i_0])))));
                        arr_13 [i_0] [i_1] [i_2] [i_3 - 1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2943)) ? (arr_10 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43)))))) ? (((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])) : ((-2147483647 - 1)))) : (((/* implicit */int) ((signed char) var_2)))));
                    }
                    var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)43)) ? (300099890) : (2147483647))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)44)))))))) ? (((((/* implicit */_Bool) 8055203336621695326ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149)))));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 2; i_4 < 16; i_4 += 4) /* same iter space */
                    {
                        var_17 = ((((long long int) (signed char)107)) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0 - 1])) || (((/* implicit */_Bool) ((unsigned long long int) 10391540737087856282ULL)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 4; i_5 < 16; i_5 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((arr_2 [i_0]) >> (((((/* implicit */int) arr_12 [i_0])) - (196))))) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_4] [i_5 - 1]))))) ? (((((/* implicit */_Bool) arr_12 [i_4 + 1])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1]))) : (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [15ULL] [i_5 - 3] [i_4 + 1] [i_0 + 2])) * (((/* implicit */int) arr_6 [i_4 + 1] [i_0 + 2])))))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) (short)18324)))))));
                        }
                        for (unsigned char i_6 = 4; i_6 < 16; i_6 += 2) /* same iter space */
                        {
                            arr_21 [i_0] = ((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)37)))) + ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) min((((/* implicit */long long int) (signed char)37)), (arr_18 [i_0] [i_1] [i_0] [i_1] [i_6 + 1] [(short)9])))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_5))))), (min((((/* implicit */long long int) (short)2182)), (arr_14 [i_4]))))));
                            var_20 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3404617481U)) ? (((((/* implicit */_Bool) arr_8 [i_6] [i_2] [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767)))) : (((/* implicit */int) arr_15 [i_6 - 1] [(short)15] [i_2] [i_4] [i_4]))))), (((min((((/* implicit */unsigned int) (short)7042)), (var_3))) % (((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_6] [15] [15] [i_4] [i_6 + 1])))))))));
                        }
                        var_21 &= ((/* implicit */unsigned int) ((_Bool) max((((((/* implicit */_Bool) 1181702313172846942LL)) ? (((/* implicit */int) arr_17 [i_0 - 1] [(unsigned short)4] [i_4])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))));
                        var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 13046713294717661982ULL)) || (((/* implicit */_Bool) ((1089288952294778932ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    for (signed char i_7 = 2; i_7 < 16; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 2; i_8 < 15; i_8 += 4) 
                        {
                            var_23 *= ((/* implicit */unsigned long long int) 1790732718);
                            arr_26 [i_8 - 2] = ((((/* implicit */_Bool) ((unsigned long long int) arr_25 [i_8 + 1] [i_7 + 1] [i_0 + 2] [i_7 - 2] [i_8 + 1] [i_0] [i_8 + 2]))) ? (((((/* implicit */_Bool) -6151536203633304702LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)0))))) : (min((((/* implicit */unsigned long long int) var_9)), (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_0 + 1])))));
                            var_24 = ((/* implicit */_Bool) var_11);
                        }
                        var_25 *= ((/* implicit */unsigned int) (~(max((var_0), (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_2]))))));
                    }
                    for (signed char i_9 = 2; i_9 < 16; i_9 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 1; i_10 < 16; i_10 += 1) 
                        {
                            var_26 ^= ((/* implicit */unsigned long long int) (((((~((((_Bool)1) ? (((/* implicit */int) (signed char)42)) : (var_0))))) + (2147483647))) << (((((min((((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_9] [i_2]))))), (arr_14 [i_0 + 2]))) + (8379199173689358556LL))) - (16LL)))));
                            arr_31 [i_0] [i_1] [i_2] [i_9] [i_10] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_10 - 1] [i_9 - 1] [i_0 - 1]))) : (2056501050U))) - (max((max((arr_9 [i_1] [i_2] [i_9] [i_10 + 1]), (((/* implicit */unsigned int) (unsigned char)168)))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1]))) & (0U)))))));
                            var_27 *= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)229)) && (((/* implicit */_Bool) 657921522)))) ? (890349817U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                            var_28 *= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)162))));
                            var_29 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1181702313172846922LL)) ? (((/* implicit */int) (signed char)38)) : (-300099904))))));
                        }
                        for (long long int i_11 = 1; i_11 < 16; i_11 += 2) 
                        {
                            var_30 = min((((/* implicit */long long int) (short)-28788)), (9223372036854775807LL));
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) max((((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0 + 2] [i_9 - 1] [i_11 + 1] [i_9]))))), (((/* implicit */unsigned int) ((_Bool) arr_22 [i_0 + 1] [i_9 - 2] [i_11 - 1] [i_0 + 1]))))))));
                            var_32 &= ((/* implicit */int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_2] [i_2] [i_9] [i_9]))) : (2599642112U)))) % (-1181702313172846943LL))) ^ ((+(8524401577384077921LL)))));
                        }
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */int) max((arr_15 [i_0 + 1] [i_0 + 2] [i_9 - 1] [i_9 - 1] [i_9 + 1]), (arr_15 [i_0 + 1] [i_0 + 2] [i_9 - 1] [i_9 - 1] [i_9 - 1])))) * (((/* implicit */int) max((arr_16 [i_0 + 1]), (var_8)))))))));
                        var_34 = (~(((max((5978936212559261511LL), (3971314041606490773LL))) ^ (((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_9])) ? (-5472291332573856828LL) : (((/* implicit */long long int) var_0)))))));
                    }
                }
                var_35 = ((((/* implicit */_Bool) 0U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (var_2) : (27U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_14 [i_0])))))))));
                var_36 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1321905246), (((/* implicit */int) (short)11165))))) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((((/* implicit */int) arr_27 [i_0 - 1] [(unsigned short)4] [i_0 + 1] [i_0] [i_0])) <= (((/* implicit */int) (unsigned short)35363)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-14051)) % (((/* implicit */int) arr_25 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 2] [5ULL]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [9LL] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (17999870091179909679ULL)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)83), (var_10)))))))));
            }
        } 
    } 
    var_37 *= ((/* implicit */short) ((((/* implicit */_Bool) 824015977U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((((var_9) / (604837991U))), (((/* implicit */unsigned int) ((unsigned char) 824015977U)))))));
}
