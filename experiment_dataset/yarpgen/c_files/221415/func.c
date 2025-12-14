/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221415
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 2])) : (((/* implicit */int) var_4)))));
                    var_11 += ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37501))) & (((((/* implicit */_Bool) var_9)) ? (9223372036854775807LL) : (-1130330650976326417LL))))) < (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-29744)))) > (((/* implicit */int) ((((/* implicit */unsigned int) var_6)) < (var_5))))))))));
                    arr_10 [11] [1LL] [i_2 - 2] = ((/* implicit */long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) var_7)))) != (((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_1])) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_1 [i_1])))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */_Bool) (+(((unsigned int) ((unsigned short) -1836923742)))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((long long int) ((-8676226612800028693LL) % (9223372036854775807LL)))) : (((/* implicit */long long int) (+(((/* implicit */int) ((short) 3731873175U))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (arr_11 [i_3]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 3) 
        {
            for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_11 [i_4])) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1944)))))));
                    var_16 = ((/* implicit */int) (+(((long long int) var_8))));
                    arr_18 [i_5] [i_4] [i_4] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (arr_14 [i_4]) : (((/* implicit */unsigned int) -852350799))))) ? (arr_17 [(unsigned short)18] [i_3] [i_3] [i_5 + 2]) : (((var_0) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            {
                                var_17 &= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_21 [22] [i_7] [i_7] [i_7])) || (((/* implicit */_Bool) var_1)))));
                                arr_25 [i_3] [i_5] = ((/* implicit */int) ((long long int) (unsigned short)49958));
                                var_18 |= ((unsigned char) ((((/* implicit */_Bool) arr_24 [i_3] [i_4 - 1] [i_3] [i_6] [i_7])) ? (var_1) : (((/* implicit */unsigned long long int) arr_21 [i_7] [i_7] [i_7] [i_3]))));
                                var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (arr_12 [i_3]) : (arr_12 [i_4])))));
                                var_20 = ((unsigned int) (-(((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1518772532U)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_21 [i_3] [i_3] [i_5] [i_3])) <= (var_1)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) arr_16 [i_5]))))));
                }
            } 
        } 
    }
}
