/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205704
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))), (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (min((((/* implicit */long long int) (-(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_7)) ? (var_1) : (var_6))))) : (min((var_5), (((/* implicit */long long int) (+(((/* implicit */int) var_2))))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_13 &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((-7), (6)))))) ? (arr_0 [(_Bool)1]) : (min((var_1), ((~(arr_3 [0ULL] [0ULL])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_14 &= (~((~(((/* implicit */int) var_10)))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) arr_11 [i_3] [i_1] [i_3] [i_3])) ? (var_8) : (((/* implicit */unsigned long long int) var_6))))));
                    }
                    for (unsigned char i_4 = 4; i_4 < 15; i_4 += 2) 
                    {
                        var_16 &= ((/* implicit */_Bool) (~(min((min((var_1), (((/* implicit */long long int) arr_11 [i_0] [i_4 - 2] [i_2] [i_4])))), (((/* implicit */long long int) arr_2 [i_0]))))));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 1; i_5 < 14; i_5 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(min((((/* implicit */long long int) var_2)), (arr_0 [i_4]))))))));
                            arr_18 [i_0] [i_0] [i_0] [(unsigned char)8] = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(min((((/* implicit */int) (_Bool)1)), (-7)))))), (min((((((/* implicit */_Bool) var_9)) ? (var_6) : (arr_0 [i_0]))), (max((var_6), (((/* implicit */long long int) arr_11 [i_2] [i_0] [i_0] [i_2]))))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 1; i_6 < 14; i_6 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1)))))));
                            arr_21 [i_0] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -9))));
                            var_19 += ((/* implicit */signed char) var_5);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_1] [i_1] [i_4] [i_0] [i_7] = ((/* implicit */long long int) arr_20 [13U] [13U] [i_2] [i_2] [13U] [i_2] [i_2]);
                            arr_26 [i_0] [i_1] [i_0] [i_0] [i_4] [i_7] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_24 [i_0] [i_2] [i_2] [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_4])))) : ((-(((/* implicit */int) var_7))))));
                        }
                        var_20 &= ((/* implicit */unsigned long long int) var_9);
                        arr_27 [i_0] [i_4] [i_0] [i_0] &= ((/* implicit */_Bool) (+(var_6)));
                        var_21 = ((/* implicit */unsigned int) min(((~(max((var_5), (((/* implicit */long long int) var_0)))))), (var_5)));
                    }
                    var_22 *= (~(min((((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [0ULL])), (var_8))));
                }
            } 
        } 
    }
}
