/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37915
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
    var_20 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_5))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_11)) : ((-(max((var_4), (((/* implicit */int) (_Bool)1))))))));
    var_22 = ((/* implicit */long long int) (-(((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */int) (short)19161)) << (((/* implicit */int) arr_1 [i_0])))) : ((~(((/* implicit */int) arr_0 [i_1]))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 3) /* same iter space */
                    {
                        arr_12 [(short)1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) arr_4 [i_1] [i_2]);
                        arr_13 [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19144)) ? (((/* implicit */int) (short)25082)) : (571917969)));
                    }
                    for (unsigned short i_4 = 2; i_4 < 12; i_4 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (short)-19162))) ? (((((/* implicit */_Bool) 3070613963U)) ? (((((/* implicit */_Bool) var_4)) ? (571917979) : (arr_14 [i_0] [i_0] [i_2] [i_4]))) : ((~(((/* implicit */int) var_11)))))) : (((/* implicit */int) (short)-19183)))))));
                        arr_16 [i_0] [i_4] [i_2] [i_2] [0ULL] = ((/* implicit */int) max((((/* implicit */long long int) arr_0 [i_1])), (var_8)));
                    }
                    for (unsigned short i_5 = 2; i_5 < 12; i_5 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((var_12) ? (var_4) : (((/* implicit */int) arr_19 [i_0] [i_1])))) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_1] [i_0]))))) * (((((/* implicit */_Bool) ((int) (short)19153))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_15 [i_0] [i_0] [i_2] [i_5] [i_5]))))))));
                        arr_20 [i_0] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_17)))), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 12; i_6 += 3) /* same iter space */
                    {
                        arr_23 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) arr_4 [(unsigned short)2] [i_6]);
                        var_25 |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1224353332U)), (arr_7 [i_1] [i_2])))))) ? (arr_15 [i_1] [i_0] [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6 - 1] [i_6] [i_6 + 1])))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_6])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)19161)))))))))))));
                    }
                    arr_24 [i_1] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_19))))) ? (((/* implicit */int) min(((short)19161), (var_9)))) : (min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
}
