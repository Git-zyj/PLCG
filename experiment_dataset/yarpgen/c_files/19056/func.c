/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19056
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_12 = ((((/* implicit */_Bool) (-((-(var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((unsigned long long int) var_10)));
        var_13 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46563))) + (var_9)))) ? (((/* implicit */long long int) var_2)) : (var_8)))) ? (max((0ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((unsigned long long int) 3073240797U)));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_14 *= ((/* implicit */unsigned long long int) min((((arr_5 [i_1] [i_1]) + (267386880U))), (arr_4 [i_1] [i_1])));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    var_15 *= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_1] [15ULL] [i_3])), (var_5))))) != ((-(var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) (signed char)56)))) != (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_1] [i_2] [i_3])), (var_5)))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-32762))))) ? (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) (~(arr_7 [i_3] [i_3]))))))));
                    arr_14 [i_1] [i_2] [i_3] [7] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32753))) : (3504478634U)))));
                    arr_15 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) (~(0U)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 1083945006)) : (var_1))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((var_8) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (signed char)121)))))));
                    var_16 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) : (3530555106380083444LL)))), (min((4662498502931884345ULL), (var_9))))), ((-(arr_13 [(signed char)1] [i_3] [i_2] [i_1])))));
                }
            } 
        } 
        var_17 *= (((~(arr_7 [1LL] [i_1]))) != (max((((/* implicit */unsigned int) var_5)), (var_11))));
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((((arr_4 [i_4] [i_1]) << (((((/* implicit */int) var_5)) - (1672))))) | (((/* implicit */unsigned int) ((((var_2) + (2147483647))) >> (((arr_4 [i_6] [i_6]) - (414300402U))))))))));
                        arr_22 [i_5] [i_5] [i_4] [i_4] [i_5] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6]))) : (15838290831328824584ULL)))));
                        arr_23 [6] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */int) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_7 [i_1] [7LL])) : (18018800573522259559ULL)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_19 *= ((/* implicit */signed char) (+(((unsigned int) (signed char)22))));
                            var_20 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((arr_11 [i_7] [i_7]) > (var_4)))), (((unsigned char) arr_11 [i_4] [i_1]))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_1] [i_4] [i_5] [i_6] [i_6] [i_5] [i_7]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)32256))))) : (8555503756601644168ULL)));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            arr_29 [i_8] [i_8] [i_6] [i_5] [i_8] [i_1] &= ((/* implicit */unsigned int) arr_8 [i_1] [i_8] [i_5]);
                            var_22 *= ((/* implicit */_Bool) 4215074620873277542ULL);
                        }
                        for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            arr_34 [(signed char)2] [i_4] [i_1] [i_4] [i_1] &= ((/* implicit */unsigned int) ((unsigned long long int) arr_32 [i_1] [i_1] [i_4] [i_6] [(signed char)18] [i_6] [18U]));
                            arr_35 [i_1] [i_9] &= arr_20 [i_1] [0LL] [i_5] [i_5] [i_5] [i_1];
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((min((var_6), (((((/* implicit */_Bool) 9891240317107907447ULL)) ? (((/* implicit */long long int) 1386675128U)) : (var_0))))) << (((var_3) & (((/* implicit */int) arr_17 [i_10] [i_10])))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            for (signed char i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                {
                    var_24 *= ((/* implicit */unsigned char) ((((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12136))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_26 [i_11]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 1; i_13 < 16; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 2) 
                        {
                            {
                                var_25 *= min((16252928U), (((/* implicit */unsigned int) max((((((((/* implicit */int) (signed char)-22)) + (2147483647))) >> (((var_6) - (7569917120865996121LL))))), ((~(var_4)))))));
                                arr_48 [0U] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_45 [i_11] [i_12] [i_11]), (((/* implicit */int) (unsigned char)19))))) ? (((((/* implicit */int) (unsigned char)31)) ^ (((/* implicit */int) var_5)))) : (((/* implicit */int) var_10)))) < (((/* implicit */int) ((signed char) ((unsigned char) 3911131515807045105LL))))));
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */long long int) arr_11 [i_10] [i_10])), (var_0))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_10] [4U] [i_12]))));
                                var_27 *= ((/* implicit */int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)32747))) > ((~(var_6))))));
                            }
                        } 
                    } 
                    var_28 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_3)) <= (15333742669448005837ULL)))), (min((arr_43 [i_11] [i_10]), (((/* implicit */unsigned int) ((int) var_10)))))));
                }
            } 
        } 
    }
    var_29 -= ((/* implicit */unsigned int) var_10);
    var_30 &= var_8;
    /* LoopNest 3 */
    for (unsigned char i_15 = 2; i_15 < 10; i_15 += 1) 
    {
        for (long long int i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            for (unsigned int i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                {
                    arr_57 [i_16] [i_16] [i_16] = ((/* implicit */short) ((((((/* implicit */_Bool) max(((signed char)118), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */long long int) var_11)) : (var_6))) : (max((var_0), (((/* implicit */long long int) (signed char)-18)))))) & (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_15 - 1])))))));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_46 [i_15 + 1] [7LL] [i_16] [i_15 + 1] [i_17])) ? (var_8) : (((/* implicit */long long int) arr_11 [i_16] [i_17]))))))) ? (((/* implicit */long long int) arr_26 [i_15 - 1])) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) -7LL)) ? (var_6) : (((/* implicit */long long int) -297807870)))) : (((/* implicit */long long int) (+(var_11))))))));
                }
            } 
        } 
    } 
}
