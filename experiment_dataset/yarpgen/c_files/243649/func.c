/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243649
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_16 = (((!(((/* implicit */_Bool) var_10)))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))));
        var_17 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) (short)-1842)) && (((/* implicit */_Bool) var_13))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_9))));
        var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))) > ((-(((/* implicit */int) var_8))))));
        var_20 ^= ((/* implicit */unsigned int) arr_2 [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_21 ^= ((/* implicit */_Bool) var_15);
        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-1842)))) ^ (((/* implicit */int) arr_3 [i_1]))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_1] [i_1]))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_3 = 4; i_3 < 9; i_3 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_3] [i_3])))))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_3])) << (((/* implicit */int) (!(((/* implicit */_Bool) -1860672581072008982LL)))))));
            var_25 = ((/* implicit */signed char) var_10);
        }
        for (int i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_5 = 4; i_5 < 10; i_5 += 1) 
            {
                for (short i_6 = 1; i_6 < 10; i_6 += 4) 
                {
                    for (short i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3458764513820540928LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_4]))))), (((unsigned long long int) ((((/* implicit */int) (unsigned short)51264)) / (((/* implicit */int) var_14)))))));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (short)-30651))) & ((~(arr_8 [i_2]))))) - (((/* implicit */long long int) -1260119802)))))));
                            var_28 = ((/* implicit */unsigned short) (unsigned char)183);
                        }
                    } 
                } 
            } 
            arr_23 [i_4] [i_4] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((int) arr_19 [(short)1] [i_4] [(short)1] [i_2] [i_4]))) ? (((/* implicit */long long int) ((unsigned int) (short)-1832))) : (0LL))));
            arr_24 [i_4] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) var_5)) ? (arr_21 [i_4] [i_2] [i_2] [i_2]) : (max((((/* implicit */long long int) 2809985522U)), (var_5)))))));
            var_29 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_4])) : (((/* implicit */int) arr_20 [i_2] [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (3912972615U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (((/* implicit */int) arr_4 [i_4] [i_2]))));
        }
        for (int i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_8])) ? (var_4) : (var_4)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_11 [i_2] [i_2] [i_2])))) : (arr_18 [i_8] [i_8] [i_8] [i_8] [i_8]))));
            var_31 = ((/* implicit */short) ((((max((((((/* implicit */_Bool) arr_14 [i_8] [8LL] [8LL])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_5 [i_8] [i_8])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [(short)1] [(short)1])) : (((/* implicit */int) var_11)))))) + (2147483647))) << (((((((/* implicit */int) var_14)) + (21466))) - (14)))));
        }
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (short)28391))));
        var_33 += ((/* implicit */signed char) ((((/* implicit */int) arr_3 [(signed char)8])) << ((((((~(((/* implicit */int) ((short) var_10))))) + (26848))) - (20)))));
    }
    for (short i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (~(var_13))))));
        arr_29 [i_9] [i_9] = ((/* implicit */long long int) (((((_Bool)1) ? (arr_21 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) == (min((arr_21 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */long long int) var_3))))));
    }
    var_35 = (~(var_5));
    var_36 = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) var_11))))) : (max((var_13), (((/* implicit */long long int) var_12)))))) << ((((~(var_15))) - (2504583798U)))));
}
