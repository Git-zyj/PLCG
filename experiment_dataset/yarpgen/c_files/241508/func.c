/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241508
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) min((((/* implicit */int) var_6)), (-1669005462))))))) >> (((((/* implicit */int) var_9)) + (102)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (+(arr_0 [i_2])))) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) var_9)))) : (1669005462))) : ((+((-(((/* implicit */int) (unsigned short)10470))))))));
                    var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) ((signed char) arr_6 [i_1]))))));
                    arr_8 [i_1] [i_2] |= ((/* implicit */unsigned char) (((-(arr_3 [i_1] [i_2 - 1]))) - (((/* implicit */int) (unsigned short)65535))));
                    var_14 = ((/* implicit */_Bool) max((((unsigned long long int) min((1669005473), (((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) (unsigned short)10440))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] [0ULL] = (((-(arr_1 [i_0] [i_3]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_3])) < (((/* implicit */int) var_6)))))));
                        arr_12 [i_0] [i_1] [i_0] = ((/* implicit */short) ((unsigned long long int) -1669005475));
                        arr_13 [i_0] = (-((-(arr_0 [i_0]))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_2 - 1] [i_4] = ((/* implicit */unsigned short) ((((long long int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [6LL] [i_0] [i_4]))))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_1] [i_2 - 1] [(signed char)9] [(signed char)0] [i_0] [i_4]))))));
                        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [7])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_14 [i_1] [6ULL] [i_1] [6ULL] [i_1] [i_1])) : (arr_6 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        var_16 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(arr_4 [i_0] [i_1])))))) ? (((((var_2) != (var_10))) ? (min((1573310407U), (((/* implicit */unsigned int) (unsigned short)10468)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6873660110682387114ULL)) ? (70422811) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) var_2))));
                        var_17 = ((unsigned long long int) arr_16 [i_0]);
                    }
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */int) min((var_18), ((-(((/* implicit */int) ((unsigned short) arr_9 [(signed char)10] [i_1] [i_0 - 1] [i_5] [i_1] [i_2 - 1])))))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(var_2))))));
                    }
                }
                for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    var_20 = (((((~(((/* implicit */int) var_5)))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0 - 1] [i_1] [i_0])) || (((/* implicit */_Bool) var_8))))))) ^ (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)23017)) : (-1669005467))) * (((/* implicit */int) ((short) var_4))))));
                    var_21 *= ((/* implicit */unsigned short) (~((-(max((((/* implicit */long long int) (unsigned short)10478)), (arr_22 [i_0] [i_0] [i_6] [i_0 - 1])))))));
                }
                arr_25 [i_0 - 1] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (((long long int) arr_7 [i_1] [i_0] [i_0 - 1] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 2; i_7 < 14; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            {
                var_22 = ((/* implicit */long long int) ((unsigned long long int) (-(arr_27 [i_7 - 1]))));
                var_23 = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_26 [i_7 - 2]) <= (((((/* implicit */_Bool) -1669005467)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8] [i_7 + 3] [i_7]))) : (arr_27 [i_8]))))))));
                arr_30 [i_8] [(signed char)8] [(signed char)8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_7 + 3] [i_7 + 2])) ? (var_2) : (((/* implicit */int) var_8))))) ? (((arr_29 [i_7 + 3] [i_7 - 2]) | (arr_29 [i_7 + 1] [i_7 + 4]))) : (((/* implicit */unsigned long long int) var_1))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
}
