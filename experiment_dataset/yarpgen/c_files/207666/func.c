/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207666
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
    var_17 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */short) ((unsigned char) var_8))), (var_16)))), (((((/* implicit */_Bool) min((-1137474265), (-1137474265)))) ? (((/* implicit */unsigned long long int) ((-1137474279) / (((/* implicit */int) (unsigned short)30721))))) : (max((((/* implicit */unsigned long long int) (unsigned short)30438)), (10ULL)))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) (unsigned char)83)))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) var_13))))) ? (((18446744073709551606ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned long long int) var_0)), (16383ULL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_19 *= ((/* implicit */int) min((max((((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (16377ULL))), (min((var_6), (((/* implicit */unsigned long long int) 115085642)))))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_9)) > (((/* implicit */int) (unsigned char)173)))), (((((/* implicit */_Bool) (unsigned short)30721)) || (((/* implicit */_Bool) 18446744073709551606ULL)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned long long int) (_Bool)0);
                    arr_11 [i_1] = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */long long int) ((unsigned char) (_Bool)0))), (max((((/* implicit */long long int) var_3)), (var_10))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1])))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        arr_16 [i_0] [i_4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30428)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)3] [(_Bool)1])) ? (arr_9 [i_0] [i_0] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [(unsigned short)12] [(unsigned short)12])))))) : (((unsigned long long int) var_16))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (((-(arr_9 [i_1] [i_1] [i_1] [i_1]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(_Bool)1] [i_1] [i_1 - 1] [i_1] [i_1]))))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-13346)) + (4095)));
                    }
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((2405162007U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_1 + 1])))));
                        var_24 = ((/* implicit */signed char) ((arr_4 [i_3] [i_1 + 1] [i_1 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) (short)19162)))));
                    }
                    for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        var_25 -= ((/* implicit */_Bool) ((arr_6 [i_1] [i_1 - 1]) ^ (arr_6 [i_1] [i_1 - 1])));
                        var_26 *= (((+(arr_23 [i_6] [i_6]))) >> (((((unsigned long long int) 16383ULL)) - (16355ULL))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_27 = ((/* implicit */short) ((15492888871790336214ULL) | (((/* implicit */unsigned long long int) arr_5 [(unsigned short)13] [i_1 - 1]))));
                        arr_29 [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */long long int) arr_6 [(signed char)2] [i_1])))));
                        var_28 += ((/* implicit */short) ((((/* implicit */int) arr_24 [i_1 - 1] [(unsigned char)12] [i_1 - 1])) >= (((/* implicit */int) arr_24 [i_1 + 1] [(_Bool)1] [i_1 - 1]))));
                    }
                    for (unsigned short i_8 = 1; i_8 < 16; i_8 += 3) 
                    {
                        var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 16313417738499277336ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1 - 1] [(signed char)12] [i_8 + 4]))) : (var_10)));
                        arr_34 [i_0] [i_0] [i_0] [i_1] [i_3] [i_3] = ((/* implicit */int) var_7);
                        var_30 = ((/* implicit */int) ((10821859410151513690ULL) - (6093399889520086144ULL)));
                        var_31 = ((/* implicit */signed char) ((int) -4095));
                    }
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        var_32 = ((/* implicit */short) ((unsigned char) arr_31 [1] [i_0] [i_3] [i_1 + 1]));
                        var_33 = ((/* implicit */long long int) arr_0 [17U] [17U]);
                    }
                }
                arr_37 [i_1] = ((/* implicit */_Bool) arr_8 [i_1] [i_1 - 1]);
                /* LoopNest 2 */
                for (signed char i_10 = 2; i_10 < 19; i_10 += 4) 
                {
                    for (unsigned short i_11 = 2; i_11 < 18; i_11 += 1) 
                    {
                        {
                            arr_42 [i_0] [4LL] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)147));
                            var_34 = ((/* implicit */unsigned short) ((((_Bool) 155031050U)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)11154))) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_24 [i_0] [i_1] [i_10])), (-7497747438133374116LL))))))) : (min((((/* implicit */int) var_12)), ((((_Bool)1) ? (((/* implicit */int) (short)-14167)) : (((/* implicit */int) arr_25 [i_1] [12U] [i_1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_35 = ((/* implicit */int) -5859227110672096237LL);
}
