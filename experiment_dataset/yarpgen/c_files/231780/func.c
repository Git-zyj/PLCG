/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231780
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */signed char) var_14);
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = (-(arr_0 [i_2 + 2]));
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
                        var_21 = ((/* implicit */unsigned short) ((arr_5 [i_2 - 1] [i_2 + 3] [i_2 + 2]) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 3] [i_2 + 2])) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) var_10)))))));
                            arr_17 [i_1] [i_2 - 1] [(unsigned short)12] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_4 - 2] [i_4 - 2] [i_1] [i_1] [i_1]))));
                        }
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            arr_20 [i_1] [i_3] [(_Bool)1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 3] [i_2 + 1]))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~(((((/* implicit */unsigned int) 2147483647)) - (669227727U))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_11)) <= (arr_3 [i_3]))))) : (((long long int) arr_15 [i_3])))))));
                            arr_23 [i_1] [(_Bool)1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)46))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) arr_13 [i_2] [i_1])) : (arr_18 [i_6] [i_3] [i_2] [i_0]))))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((((/* implicit */_Bool) (unsigned char)184)) ? (2870238651U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                } 
            } 
        }
        for (short i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            arr_26 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(0U)));
            var_26 += ((/* implicit */short) (((-(arr_1 [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
        }
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))));
    }
    var_28 = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))))));
    var_29 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(var_18)))), (max((var_8), (((/* implicit */long long int) (_Bool)0))))));
    var_30 = ((/* implicit */short) var_14);
}
