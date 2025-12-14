/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200013
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
    var_10 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_11 |= max((((/* implicit */unsigned int) ((int) var_9))), (((unsigned int) ((unsigned short) 1814822540264272879ULL))));
        var_12 = ((/* implicit */_Bool) var_3);
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_0)))) ? ((((_Bool)1) ? (arr_1 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_0]));
                        var_15 += ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)148))));
                        var_16 = ((unsigned int) 931022824U);
                        var_17 = ((/* implicit */long long int) ((((int) (signed char)127)) <= (((/* implicit */int) var_7))));
                    }
                    var_18 *= ((/* implicit */short) ((((/* implicit */long long int) var_1)) + (488206144485304983LL)));
                }
                for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        var_19 = ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (32767U)));
                        arr_18 [16U] [i_1] [i_2] [i_5] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [7LL] [i_0] [i_2] [1U] [i_2] [i_2]))) / (arr_15 [i_6] [i_5] [i_0] [(unsigned char)15] [i_0])));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) > (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [11] [i_1])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5] [i_0] [i_0]))) + (var_3)))));
                    }
                    var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)27882)))) <= (var_4)))), (((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [6U])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50161))))) >> (((arr_6 [i_0] [i_0] [7] [i_1]) - (98243511)))))));
                }
                arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)103))) != (var_4)))), (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_1] [i_2]) ? (((/* implicit */int) (short)2110)) : (((/* implicit */int) (short)27882)))))));
                var_22 = ((/* implicit */unsigned long long int) var_3);
                arr_20 [i_0] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) > (var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((-((-(arr_3 [i_0] [i_0])))))));
            }
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */short) arr_2 [i_1] [1LL] [i_1])))))) <= (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [(unsigned char)5])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_8))))));
            var_24 = ((/* implicit */_Bool) max((1053155924), (((/* implicit */int) (unsigned short)4542))));
        }
        for (short i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
        {
            arr_24 [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_2 [i_0] [0] [i_7])), ((-2147483647 - 1))));
            var_25 = ((/* implicit */unsigned long long int) (short)18190);
            var_26 |= ((/* implicit */_Bool) (+(min((((/* implicit */long long int) arr_23 [i_0] [(short)4] [i_7])), (((long long int) var_6))))));
        }
        for (short i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */_Bool) var_5);
            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (short)63))));
            var_29 += ((/* implicit */unsigned long long int) ((((arr_25 [i_8] [i_8] [(_Bool)1]) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0])))) ^ (((arr_25 [9] [4LL] [i_0]) ? (((/* implicit */int) arr_25 [i_8] [i_0] [i_0])) : (((/* implicit */int) var_7))))));
        }
        var_30 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [(short)0] [i_0] [14LL] [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) ((long long int) arr_12 [i_0] [i_0] [i_0] [i_0]))) ? (((arr_0 [i_0]) ^ (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_13 [i_0] [i_0]))))))))));
        arr_27 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */unsigned int) (~(var_9)))) : (((((/* implicit */_Bool) (short)7137)) ? (3395138118U) : (4294967295U))))), (((/* implicit */unsigned int) max((((/* implicit */short) (signed char)18)), (arr_26 [i_0] [i_0]))))));
    }
    var_31 = ((/* implicit */short) ((min(((((_Bool)1) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (min((var_6), (((/* implicit */unsigned long long int) var_1)))))) <= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4270316025U)) ? (((/* implicit */int) (short)-2110)) : (((/* implicit */int) (short)-10314))))), (((((/* implicit */_Bool) (short)-10302)) ? (((/* implicit */long long int) 4294967295U)) : (var_4))))))));
    var_32 &= ((/* implicit */int) ((((/* implicit */_Bool) (short)-10302)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1008))) : (780170259U)));
}
