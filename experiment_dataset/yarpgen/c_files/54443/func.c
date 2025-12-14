/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54443
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_17 = var_4;
        arr_2 [i_0] = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-15))) : (var_7)))) ? (max((34359738367LL), (0LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)31)))))));
        var_18 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 1])))), (((/* implicit */int) (signed char)-23))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) (((~(0LL))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (~(-2LL)))) ? (((/* implicit */int) max(((signed char)93), (var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+(max((arr_9 [i_1] [i_2] [i_2]), (arr_0 [i_1] [i_1]))))))));
            arr_10 [i_1] [i_1] |= ((-8796935061873046885LL) | (9223372036854775800LL));
        }
        for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            var_20 = arr_8 [7LL] [i_3] [i_3];
            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)43))));
        }
        var_22 = ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (signed char)0))))))) : (min((((/* implicit */long long int) (~(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) -2LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_11))))));
        arr_14 [i_1] = ((long long int) arr_12 [i_1]);
    }
    /* LoopSeq 1 */
    for (long long int i_4 = 3; i_4 < 8; i_4 += 3) 
    {
        var_23 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-16))));
        var_24 = ((/* implicit */signed char) var_3);
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-4))))) : ((~(((/* implicit */int) arr_17 [i_4] [i_4] [i_6]))))))) ? ((((-(arr_9 [i_4] [1LL] [i_6]))) << (((((var_15) + (649985781516339188LL))) - (7LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    /* LoopSeq 4 */
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (signed char)2))));
                        var_27 = max((908950929034753262LL), (7045890727233694972LL));
                        var_28 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4 + 1])) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) arr_5 [i_4 + 1])))))));
                        var_29 *= ((signed char) min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))) : (var_7)))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 4; i_8 < 7; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 1; i_9 < 6; i_9 += 2) 
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_4] [i_9 + 2] [i_9 + 4] [i_9 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_4] [i_9] [i_9] [i_9 + 2] [i_9 + 1] [i_9 + 2]))) : (var_12)));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) < (-6417421821379792341LL)));
                        }
                        for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            var_32 = (-(((((/* implicit */_Bool) var_5)) ? (-1586316046026716065LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                            var_33 ^= ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) var_14))))));
                            arr_29 [i_4] [(signed char)6] [i_10] [i_8] [i_10] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((-1079293601502331666LL) / (-4685695256925387388LL)))) ? (((/* implicit */int) arr_15 [i_4 + 1])) : ((~(((/* implicit */int) (signed char)-1))))));
                            var_34 = ((/* implicit */signed char) ((var_7) >> (((((/* implicit */int) var_9)) / (((/* implicit */int) (signed char)-15))))));
                            var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_12) / (6752671513608086021LL))))));
                        }
                        arr_30 [i_4] [i_5] [i_4] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-22)) < (((/* implicit */int) (signed char)0))));
                    }
                    for (long long int i_11 = 1; i_11 < 9; i_11 += 4) 
                    {
                        var_36 *= ((/* implicit */signed char) (+((-(5641593740204353656LL)))));
                        var_37 = ((long long int) (!(((/* implicit */_Bool) (signed char)45))));
                        var_38 = ((/* implicit */signed char) var_16);
                    }
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        var_39 -= ((/* implicit */signed char) (+(((long long int) arr_8 [i_4 + 2] [i_4 - 2] [i_4 - 1]))));
                        arr_36 [(signed char)1] [i_4] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((signed char) (signed char)-43)))))));
                    }
                    var_40 = arr_25 [(signed char)6] [(signed char)0] [i_5] [(signed char)6] [8LL] [i_5] [i_6];
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_13 = 0; i_13 < 10; i_13 += 1) 
        {
            for (signed char i_14 = 3; i_14 < 7; i_14 += 3) 
            {
                for (long long int i_15 = 3; i_15 < 6; i_15 += 4) 
                {
                    {
                        arr_46 [i_4] [i_13] [i_13] [2LL] [i_15] [i_15 + 1] = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_12 [i_4 - 2])))), (((((/* implicit */int) (signed char)-42)) - (((/* implicit */int) (signed char)127))))));
                        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) 63LL))));
                    }
                } 
            } 
        } 
    }
    var_42 = ((signed char) ((signed char) var_1));
    var_43 = ((/* implicit */signed char) min((var_43), ((signed char)69)));
    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (var_8) : (var_5))) <= ((-((+(-1LL))))))))));
}
