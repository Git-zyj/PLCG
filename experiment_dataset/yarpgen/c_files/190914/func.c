/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190914
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_1 [i_0] [i_1]))) ? (var_5) : (((/* implicit */long long int) ((2577535991U) ^ (arr_0 [i_0]))))))) ? (((/* implicit */int) (unsigned short)39207)) : (((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) arr_0 [i_0]))), (var_10))))));
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1507265523)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)195))))) ? ((+(-1387102620362825293LL))) : (((/* implicit */long long int) ((int) 1160460401U))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((signed char) 699739263478675374LL)))))));
                }
                var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1 - 1]))))), (((/* implicit */unsigned int) min((((/* implicit */signed char) arr_4 [i_0])), (arr_5 [i_1] [i_1 + 1]))))));
                var_15 = ((/* implicit */unsigned short) (((+(arr_0 [i_0]))) + (((/* implicit */unsigned int) var_6))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (signed char i_4 = 2; i_4 < 15; i_4 += 1) 
        {
            {
                arr_13 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) || (((/* implicit */_Bool) var_7)))))))) | (((unsigned long long int) arr_9 [i_4 - 2]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 599426403)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)89))) : (462571714U)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_10), (var_10))))) : (((((/* implicit */_Bool) (unsigned short)30591)) ? (var_5) : (((/* implicit */long long int) var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_17 [i_5] [i_4] [i_6] [i_7]))))))) : (var_8)));
                            arr_24 [i_5] [i_4 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(3134506888U)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)80)), ((unsigned short)44633)))) ? (((unsigned int) arr_9 [i_3])) : (((/* implicit */unsigned int) ((int) arr_22 [i_3] [i_4] [i_5] [i_6] [i_7] [i_6] [i_7]))))) : (var_1)));
                        }
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                        {
                            arr_27 [i_5] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49772))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_11 [i_4 - 2]), (var_7))))))) : (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) arr_18 [i_3] [i_4 - 1] [i_5] [i_5] [i_8])))) <= (((/* implicit */int) max((var_11), ((unsigned short)35438))))))))));
                            var_17 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) min((var_7), (var_3))))))), (max((((arr_14 [i_3] [i_3] [i_6]) - (((/* implicit */long long int) arr_15 [i_3] [i_4] [i_6])))), (((/* implicit */long long int) ((unsigned char) 3134506897U)))))));
                        }
                        var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_25 [i_4] [i_5 + 1] [i_5] [i_6] [i_5])) ? (arr_25 [i_3] [i_5 - 1] [i_5] [i_6] [i_5]) : (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-39)) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned short)64401)) ? (((/* implicit */unsigned long long int) arr_10 [i_3])) : (16318285579180281549ULL))) - (18446744073260320364ULL))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            arr_30 [i_4] [i_5] = ((/* implicit */unsigned short) (!(((1092767446) == (((/* implicit */int) var_3))))));
                            var_19 = ((/* implicit */unsigned short) (signed char)29);
                            arr_31 [i_3] [i_4] [i_5] [i_6] [i_6] [i_6] [i_9] = ((/* implicit */signed char) (((((-2147483647 - 1)) <= (((/* implicit */int) (signed char)-3)))) || (((((/* implicit */_Bool) arr_12 [i_9] [i_5] [i_3])) || (((/* implicit */_Bool) 2029947661U))))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            arr_35 [i_4 - 2] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56383))) : (var_12))) == (var_12)));
                            arr_36 [i_3] [i_6] [i_5 + 1] [i_6] [i_10] [i_10] [i_3] &= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_14 [i_3] [i_6] [i_6]))) - (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((unsigned int) arr_37 [i_5 + 1] [i_4 - 2])), ((+(arr_26 [i_3] [i_4] [i_5] [i_6] [i_5])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64401))) : (arr_9 [i_6])))) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_4))))))) : (((/* implicit */long long int) ((((/* implicit */int) ((18391171670142295091ULL) == (((/* implicit */unsigned long long int) var_6))))) | (((/* implicit */int) arr_34 [i_4 + 1] [i_11]))))))))));
                            var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_39 [i_6] [i_5 - 1] [i_5] [i_5]))) ? (((((/* implicit */_Bool) (+(2147483647)))) ? (min((((/* implicit */long long int) 2147483647)), (var_5))) : (((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_3] [i_4 + 1] [i_3] [i_6] [i_11])) ^ (((/* implicit */int) arr_20 [i_3] [i_4] [i_5] [i_6]))))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((arr_21 [i_4] [i_5] [i_6] [i_11]) || (((/* implicit */_Bool) var_7))))), ((unsigned short)30591)))))));
                            var_22 = max(((unsigned char)72), (((/* implicit */unsigned char) ((1060473398813458932ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        }
                        var_23 &= ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_6] [i_4 - 2] [i_5] [i_6]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)29)) + (((/* implicit */int) var_7))))) : ((+(arr_16 [i_6] [i_4] [i_5 - 1]))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_6] [i_4] [i_4] [i_4])) ? (((/* implicit */int) ((var_6) != (((/* implicit */int) var_7))))) : (((/* implicit */int) arr_20 [i_4 + 1] [i_5 - 2] [i_5] [i_5 + 1])))))));
                    }
                    for (long long int i_12 = 2; i_12 < 15; i_12 += 1) 
                    {
                        var_24 ^= (+((+(max((arr_14 [i_3] [i_5] [i_3]), (((/* implicit */long long int) var_11)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_13 = 2; i_13 < 15; i_13 += 1) 
                        {
                            arr_44 [i_5] = ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_10))));
                            var_25 = ((/* implicit */int) arr_37 [i_13 + 1] [i_5]);
                            var_26 = ((/* implicit */_Bool) 4234854648225437686LL);
                        }
                    }
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_28 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */unsigned int) arr_15 [i_3] [i_4] [i_5])) - (4294967295U))) : (((/* implicit */unsigned int) 0))))) ? ((+((~(10272888741700301541ULL))))) : (((/* implicit */unsigned long long int) 2287828902U))));
                }
            }
        } 
    } 
}
