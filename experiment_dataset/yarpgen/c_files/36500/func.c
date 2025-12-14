/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36500
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_11 -= ((/* implicit */short) max((((/* implicit */long long int) (-(min((var_7), (((/* implicit */unsigned int) arr_6 [i_0]))))))), (min((max((((/* implicit */long long int) var_8)), (arr_3 [i_3] [i_1] [i_0]))), (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) (unsigned short)0)))))))));
                        var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((max(((unsigned short)65535), ((unsigned short)65535))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)-29474))))))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_0)), (min((min((((/* implicit */unsigned int) var_4)), (var_7))), (var_6))))))));
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_1)), (var_6))) | ((+(var_6)))))) ? (max((min((arr_0 [7U]), (((/* implicit */long long int) (_Bool)0)))), ((-(var_5))))) : (min((arr_0 [i_1 + 2]), (min((((/* implicit */long long int) var_1)), (var_2))))))))));
                    }
                    for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */int) max((min((arr_7 [i_0] [i_1 - 1]), (arr_7 [i_0] [i_1 - 1]))), (((/* implicit */long long int) ((var_6) / ((-(var_6))))))));
                        var_16 = ((/* implicit */short) ((((/* implicit */int) max((var_1), (arr_13 [i_1] [i_1 + 2] [i_2] [20ULL])))) << (((((min((((/* implicit */long long int) var_10)), (arr_11 [i_0] [13U] [i_0] [i_0] [i_0] [i_0]))) - (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) var_1))))))) + (2480534427428183347LL)))));
                        var_17 = ((/* implicit */int) ((((((/* implicit */long long int) var_3)) <= (min((((/* implicit */long long int) (unsigned short)0)), (var_2))))) ? (min((var_8), (((/* implicit */unsigned int) arr_10 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)29453)) ? (((/* implicit */int) (short)-1)) : (arr_9 [i_0] [i_0]))))))));
                    }
                    var_18 = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) ((unsigned int) var_8))), (max((((/* implicit */long long int) var_6)), (arr_0 [i_1])))))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40578))) < (var_8))))));
                }
                for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    var_20 = max(((-(var_5))), (((/* implicit */long long int) arr_5 [i_1 + 1])));
                    var_21 = ((/* implicit */int) min((max((((/* implicit */long long int) var_1)), (((var_5) & (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1 + 1] [i_1] [i_6] [i_6]))))))), (((/* implicit */long long int) ((int) min((var_10), (((/* implicit */short) arr_5 [i_1 + 2]))))))));
                    var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(min((((/* implicit */unsigned int) var_0)), (var_7)))))), (-4029294157557203658LL)));
                }
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29812))) == (var_5)))), (((((/* implicit */_Bool) arr_12 [(unsigned short)12] [i_0] [(unsigned short)12] [i_7] [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40811)))))))) ? (min((((/* implicit */long long int) arr_20 [(_Bool)1] [i_1 - 1] [(_Bool)1] [i_7])), ((-(arr_11 [i_0] [(unsigned short)5] [i_7] [i_0] [i_7] [i_0]))))) : (((/* implicit */long long int) ((min((1210887834), (-1))) + (((/* implicit */int) arr_5 [i_0])))))));
                    var_24 = ((/* implicit */long long int) var_9);
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) var_3)) & (var_9))), (((/* implicit */unsigned long long int) max((arr_25 [i_0] [i_1 + 2] [i_7] [i_8]), (((/* implicit */long long int) -2067103743)))))));
                                var_26 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_3)))))), (((((/* implicit */_Bool) min((arr_12 [i_0] [14LL] [i_0] [i_0] [i_0]), (-7864931928880129314LL)))) && (((/* implicit */_Bool) min((arr_23 [i_0] [i_1 - 1] [i_7] [i_7] [i_0]), (((/* implicit */unsigned int) var_0)))))))));
                            }
                        } 
                    } 
                }
                var_27 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_11 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))) == (min((((/* implicit */long long int) ((int) var_9))), (arr_12 [i_1] [i_1 + 1] [(unsigned short)8] [i_1] [i_0])))));
            }
        } 
    } 
    var_28 = max((((/* implicit */unsigned long long int) var_0)), (((var_9) >> (((((((/* implicit */int) var_1)) - (-1))) - (22348))))));
}
