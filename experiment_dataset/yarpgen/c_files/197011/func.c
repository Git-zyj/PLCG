/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197011
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
    var_13 = ((/* implicit */unsigned char) max((6720219660297690313ULL), (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16242))) % (1016U)))), (var_4)))));
    var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16221))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
    var_15 -= ((/* implicit */int) (unsigned short)49317);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */int) (unsigned short)41287);
                    var_17 = (-(((/* implicit */int) (unsigned short)16230)));
                    var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) 1856520519U)) ? (((/* implicit */unsigned int) var_9)) : (var_7)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (-1712806597769754047LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16216)))));
                                arr_13 [i_0] [i_1] [i_1] [i_0] [i_2 + 1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) (signed char)123)))));
                                arr_14 [i_0] [i_0] [i_1] [i_1] [i_3] [i_4 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)49315)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (signed char)96)))));
                            }
                        } 
                    } 
                    var_19 ^= (~(10141583944044435150ULL));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */long long int) (unsigned char)67);
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0])) - (1712806597769754066LL)));
    }
    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 4) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned short) (unsigned char)67);
        var_21 += ((/* implicit */unsigned long long int) (signed char)-77);
    }
    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (unsigned int i_8 = 4; i_8 < 13; i_8 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned short) arr_4 [i_7 + 1] [i_7 + 1]))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16219))) | (arr_22 [i_7 + 1] [i_8 - 2] [i_8])))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 4; i_10 < 10; i_10 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */int) 303780549U);
                                arr_31 [i_6] [i_6] [i_6] [i_7 + 1] [i_8] [i_9] [i_10 + 3] = ((/* implicit */signed char) (+(min((arr_8 [i_6] [i_7 + 1] [(unsigned short)17] [(_Bool)1] [3U]), ((-9223372036854775807LL - 1LL))))));
                            }
                        } 
                    } 
                    var_24 = ((signed char) max((((unsigned int) (_Bool)1)), (arr_6 [i_8 - 2] [i_7] [i_6])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                {
                    arr_37 [i_6] [i_6] [i_11] [11LL] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_35 [i_6] [(short)0] [i_12])) ? (((/* implicit */int) arr_26 [i_6] [i_11] [i_12])) : (((/* implicit */int) (unsigned short)16233)))), (((/* implicit */int) (signed char)109))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 14; i_14 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */int) var_8);
                                var_26 = ((/* implicit */unsigned short) max((((unsigned long long int) (unsigned short)49317)), (((/* implicit */unsigned long long int) var_3))));
                                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((((/* implicit */int) (signed char)-109)) % (((/* implicit */int) (unsigned char)67))))))) : (var_11)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_42 [i_6] [(unsigned char)4] = ((/* implicit */unsigned int) max((((-4096570193503649692LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24248))))), (((/* implicit */long long int) ((_Bool) ((2147483647) - (arr_30 [i_6] [i_6] [(unsigned char)8] [(unsigned char)8] [i_6])))))));
        arr_43 [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */long long int) arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) : (1712806597769754046LL))))));
        var_28 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)16217)) / (1927127338))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 2) 
    {
        for (unsigned int i_16 = 0; i_16 < 14; i_16 += 1) 
        {
            {
                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (!(((arr_21 [i_15]) <= (var_11))))))));
                var_30 = arr_8 [i_15] [(short)7] [i_15] [i_15] [i_16];
            }
        } 
    } 
}
