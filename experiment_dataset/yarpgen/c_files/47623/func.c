/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47623
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)0)) ? (var_5) : (((/* implicit */int) (_Bool)1))))))) ? ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) var_5);
                            var_15 &= ((/* implicit */_Bool) max((var_5), (((/* implicit */int) arr_4 [i_0] [i_2] [i_0 - 1]))));
                            var_16 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((arr_8 [i_0] [i_1] [i_1] [i_3]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-12892)))) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_3] [i_0]))))));
                            /* LoopSeq 3 */
                            for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_0] [i_2]));
                                arr_13 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) arr_0 [i_4] [i_1]);
                            }
                            for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                            {
                                arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                                arr_18 [i_0] [i_5] [i_0] [i_3] [i_5] [i_0] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_5 [i_0] [i_3 + 2] [i_3 + 2] [i_0])))) ^ ((~(((((/* implicit */int) var_0)) * (((/* implicit */int) var_11))))))));
                            }
                            for (long long int i_6 = 3; i_6 < 8; i_6 += 2) 
                            {
                                arr_22 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (arr_12 [i_2] [i_2]))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_6]))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_12 [i_0] [i_6])))) : (((/* implicit */int) max((arr_4 [i_1 + 1] [i_0] [i_0]), (arr_4 [i_1 - 1] [i_0] [i_1]))))));
                                var_18 = ((/* implicit */unsigned short) (~((~(((((/* implicit */int) var_11)) - (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
                                arr_23 [i_0] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_3 + 4] [i_0 - 1])))) << (((/* implicit */int) arr_3 [i_3 + 4] [i_0 - 1]))));
                                arr_24 [i_6] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (((~((~(arr_16 [i_0] [i_0] [i_1] [i_1] [i_3] [i_6]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-(5039459234363845171ULL))))))));
                                var_19 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_3)), (var_10))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned short) var_2))))))));
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [(_Bool)1])) ? (((((/* implicit */_Bool) 16557350876763862010ULL)) ? (((/* implicit */int) var_9)) : (var_5))) : (((/* implicit */int) var_12))))))));
            }
        } 
    } 
}
