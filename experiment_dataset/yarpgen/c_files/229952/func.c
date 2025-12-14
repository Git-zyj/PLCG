/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229952
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
    var_12 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (+(-1964104318)))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)24)) + (((/* implicit */int) var_3)))), (((/* implicit */int) arr_3 [i_0] [i_0]))))) : (max((((unsigned long long int) arr_2 [i_0] [i_1])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) arr_4 [i_1] [(signed char)6]);
                                arr_12 [i_0 + 2] [i_0 + 2] [i_1] [i_2] [11] [i_3 - 1] [i_4 + 1] = ((/* implicit */_Bool) (-(((int) arr_8 [i_2] [i_1]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)12780)))) || (((/* implicit */_Bool) ((arr_6 [i_0 - 1] [i_5] [i_5]) ? (7302994944944631219LL) : (((/* implicit */long long int) (+(arr_8 [i_5] [i_5])))))))));
                            arr_19 [i_5] [i_1] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) (~(min((arr_1 [i_0] [i_5]), (arr_15 [i_0 - 1] [i_1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        {
                            arr_24 [i_8] = ((/* implicit */unsigned int) var_9);
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (int i_9 = 1; i_9 < 13; i_9 += 1) 
                            {
                                arr_27 [i_0] [i_1] [i_0] [i_9] = ((/* implicit */int) arr_8 [i_9] [i_1]);
                                arr_28 [(unsigned short)15] [i_9] [i_0] [i_7] [i_9] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)60974)) != (((/* implicit */int) (_Bool)1))));
                                var_15 = ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) (signed char)-63)))));
                            }
                            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                            {
                                var_16 = ((/* implicit */long long int) max((((/* implicit */signed char) (((-(var_1))) != (15U)))), (min((min((((/* implicit */signed char) var_3)), (arr_0 [i_0] [i_1]))), ((signed char)-2)))));
                                arr_32 [i_0] [i_1] [i_7] [i_8] [i_10] = ((/* implicit */_Bool) max(((signed char)22), (((/* implicit */signed char) (_Bool)1))));
                                var_17 = ((/* implicit */signed char) ((((_Bool) var_1)) && ((!(((/* implicit */_Bool) 6668102342054476579LL))))));
                            }
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                            {
                                arr_35 [i_11] [i_8] [i_7] [i_1] [i_0] = (signed char)100;
                                var_18 = ((/* implicit */unsigned int) arr_31 [i_11] [i_11] [i_7] [13ULL] [i_11]);
                                var_19 = ((/* implicit */unsigned short) arr_26 [i_0] [(unsigned short)14] [i_0] [i_0] [i_0]);
                            }
                            for (short i_12 = 3; i_12 < 14; i_12 += 3) 
                            {
                                arr_39 [i_0 + 2] [i_7] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) (+(2096640ULL)));
                                arr_40 [i_0] [i_1] [i_0] [i_0] [i_12 - 1] [3ULL] [i_12 + 2] = ((/* implicit */_Bool) max((140737488355327LL), (((/* implicit */long long int) (short)22721))));
                            }
                            var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)71)), ((~(max((var_5), (((/* implicit */unsigned int) var_0))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 1] [i_1])) != (((/* implicit */int) arr_6 [i_1] [i_1] [i_0 + 1]))))) | ((-(((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_1]))))));
            }
        } 
    } 
}
