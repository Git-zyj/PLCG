/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21556
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
    var_15 &= ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_1] [1]))))) || (((/* implicit */_Bool) ((((var_0) ? (((/* implicit */int) arr_6 [6LL] [i_1] [i_1] [(unsigned char)4])) : (((/* implicit */int) (unsigned short)23445)))) | (((((/* implicit */_Bool) (unsigned short)42096)) ? (((/* implicit */int) (unsigned short)23448)) : (((/* implicit */int) (unsigned short)42093))))))))))));
                    var_17 |= ((/* implicit */unsigned long long int) arr_5 [(signed char)2] [i_1] [(signed char)2]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)23436)))))));
                                arr_14 [i_0] [(short)6] [i_2] [i_3] [(_Bool)1] |= ((/* implicit */short) arr_12 [i_4] [i_4] [i_4 + 2] [i_4 - 1] [i_4]);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] |= ((/* implicit */unsigned long long int) ((long long int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)42120))))));
                                var_19 = ((/* implicit */unsigned char) ((min(((-(arr_2 [i_0]))), (((/* implicit */int) (unsigned short)42082)))) > (((/* implicit */int) ((unsigned char) (unsigned short)42092)))));
                                var_20 += ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_13 [i_2] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1])) <= (((((((/* implicit */int) var_12)) + (2147483647))) >> (((arr_4 [i_0] [i_3]) + (283568247695043551LL))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        arr_19 [i_5] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)23423))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (unsigned short)23415)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23442)) ? (arr_5 [(_Bool)1] [i_2] [i_5]) : (((/* implicit */long long int) arr_7 [i_2] [i_2] [i_1] [i_0]))))) ? (arr_16 [i_1] [i_1] [i_1] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)42097), (((/* implicit */unsigned short) (_Bool)1))))))))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_12 [i_5] [i_2] [i_2] [i_1] [i_0]))) | (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)42112))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!((_Bool)1)))))))))));
                        var_23 |= ((/* implicit */unsigned char) arr_18 [i_5] [i_1]);
                    }
                    for (signed char i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2]))));
                        var_25 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_9 [i_6 - 1] [i_6 + 1])))) ? (arr_1 [i_0]) : (arr_20 [i_6] [i_0])));
                    }
                    for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) + (((((/* implicit */int) arr_0 [i_7])) % (arr_2 [3U])))));
                        var_27 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) -5300958808893947173LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_0] [i_1] [i_7]) == (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_7])) ? (((/* implicit */unsigned long long int) arr_5 [i_7] [i_1] [i_0])) : (3490436593777622209ULL)))));
                        var_28 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned short)23424))))) ? ((-(((/* implicit */int) (unsigned short)27)))) : (((/* implicit */int) arr_17 [i_0] [i_1] [8U] [i_7])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42135)))))));
                        var_29 = ((/* implicit */unsigned char) arr_3 [i_0] [i_7]);
                    }
                }
                var_30 += ((/* implicit */_Bool) arr_7 [i_1] [i_1] [(unsigned short)1] [(unsigned short)1]);
                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (((((-((-(var_2))))) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (unsigned short)23420)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))))));
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 15; i_8 += 4) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                {
                    arr_35 [i_8] [i_9] [i_9] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_24 [i_8 + 1])) ? (arr_24 [i_8 + 1]) : (arr_24 [i_8 + 1]))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_31 [i_8] [i_10] [i_9] [i_8])))) && (((/* implicit */_Bool) (unsigned short)23419)))))));
                    arr_36 [i_8 - 2] [i_9] [(unsigned short)12] [15] |= ((/* implicit */unsigned char) var_14);
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) var_1))));
                    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)42095)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_10]))))) : (((/* implicit */int) ((var_0) && (((/* implicit */_Bool) -5300958808893947199LL)))))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (-5300958808893947198LL))) : (min((min((arr_31 [i_8] [i_9] [i_8] [i_8]), (((/* implicit */long long int) (unsigned short)42118)))), (((/* implicit */long long int) (unsigned short)42118)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 21; i_11 += 3) 
    {
        for (signed char i_12 = 1; i_12 < 21; i_12 += 3) 
        {
            {
                arr_42 [i_11] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_38 [i_12 + 2]) != (arr_38 [i_12 - 1])))), (arr_38 [i_11 - 1])));
                var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)23458)) << (((((((/* implicit */_Bool) (unsigned short)23436)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23444))) : (arr_41 [i_11 + 1] [i_12 + 1]))) - (23435U)))));
            }
        } 
    } 
}
