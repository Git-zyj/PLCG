/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51204
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) 7902998139403288980ULL);
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (-1962611811)))) >> (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) var_5))))))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */int) var_1)) * (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        var_16 -= ((/* implicit */unsigned int) var_5);
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) 492610507);
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_5 [i_1 + 1])))))));
    }
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            {
                var_18 = ((-1962611839) != (492610508));
                /* LoopSeq 3 */
                for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    arr_18 [(_Bool)1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) min((((/* implicit */long long int) arr_12 [i_2] [i_3] [i_4])), (arr_15 [i_2] [i_2] [i_2] [i_4])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_6), (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_12 [i_6] [i_4] [(_Bool)1])) > (-492610509)))))));
                                var_20 = ((/* implicit */signed char) (!(((((/* implicit */int) (signed char)-2)) != (((((/* implicit */_Bool) -1962611811)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) var_12))))))));
                                arr_24 [i_5] = ((/* implicit */unsigned short) ((min((9), (((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_5 + 1] [i_6] [i_5 - 1] [i_5 - 1])))) << (((((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_13 [i_4]))))) - ((-(arr_14 [i_2] [i_3]))))) - (1216334223015586888ULL)))));
                            }
                        } 
                    } 
                    arr_25 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) var_11);
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_16 [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2 + 1]))) ? (((/* implicit */int) max((arr_16 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]), (((/* implicit */short) var_5))))) : (((/* implicit */int) min((var_13), (((/* implicit */unsigned char) arr_20 [i_2 - 1] [i_2 - 1] [i_2]))))))))));
                }
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    var_22 = var_13;
                    var_23 *= ((/* implicit */signed char) (unsigned short)41583);
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (unsigned short)60684)))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) arr_19 [i_3] [i_3] [i_7] [(short)2])), (arr_13 [i_2 - 1])))) - (145)))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 611854629U)) || (((/* implicit */_Bool) 4294967278U)))))) % (arr_9 [i_2 + 1] [i_3])))));
                    var_25 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_2] [(unsigned short)2] [i_7]))))), (((((/* implicit */_Bool) var_6)) ? (arr_17 [i_2 - 2]) : (((/* implicit */long long int) -1962611811))))));
                }
                for (int i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    var_26 = (((+(2621294274U))) - (((/* implicit */unsigned int) ((/* implicit */int) var_14))));
                    var_27 = ((/* implicit */unsigned int) max((min((arr_19 [i_2] [i_2] [i_2 - 1] [i_2]), (arr_19 [i_8] [(unsigned char)11] [i_2 - 2] [i_2]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_2 - 1] [i_2])))))));
                }
            }
        } 
    } 
}
