/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53320
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max(((~(max((var_1), (var_5))))), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((max((var_11), (((/* implicit */signed char) var_2)))), (min((var_18), (((/* implicit */signed char) var_2)))))))));
        arr_2 [(short)14] [(short)14] = ((/* implicit */short) min(((-(var_0))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_13)))))));
        var_21 = ((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) var_10))))), (max((var_7), (((/* implicit */short) var_3))))));
    }
    for (unsigned short i_1 = 2; i_1 < 14; i_1 += 4) /* same iter space */
    {
        arr_5 [(short)7] = (~(max((min((((/* implicit */long long int) var_18)), (var_1))), (((/* implicit */long long int) (-(((/* implicit */int) var_2))))))));
        var_22 = ((/* implicit */signed char) max((var_16), (((/* implicit */unsigned short) var_15))));
        var_23 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned short) var_11)))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (unsigned short i_3 = 3; i_3 < 13; i_3 += 4) 
        {
            {
                arr_12 [i_2] [i_2] [i_3] = min(((+(((/* implicit */int) var_18)))), (max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                arr_13 [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_11)), (var_17)))))))));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 1; i_4 < 14; i_4 += 4) 
                {
                    var_24 *= ((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) (-(var_6))))));
                    var_25 += ((/* implicit */long long int) min(((+(((/* implicit */int) var_13)))), (((/* implicit */int) max(((short)12020), ((short)-12028))))));
                }
                for (unsigned long long int i_5 = 4; i_5 < 14; i_5 += 2) 
                {
                    arr_19 [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) (-(((/* implicit */int) var_11))))), (max((var_1), (((/* implicit */long long int) var_0))))))));
                    arr_20 [i_2] [i_3] = ((/* implicit */long long int) (-((+(var_12)))));
                    var_26 *= ((/* implicit */signed char) var_7);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (long long int i_7 = 3; i_7 < 15; i_7 += 4) 
                        {
                            {
                                arr_26 [i_2] [i_3] [12] [i_3] [i_7 - 1] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                                var_27 = ((/* implicit */long long int) min(((~(max((((/* implicit */unsigned int) var_7)), (var_0))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3)))))));
                            }
                        } 
                    } 
                    arr_27 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */signed char) max(((short)15), ((short)18052)));
                }
            }
        } 
    } 
    var_28 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) var_4)), (min((min((((/* implicit */unsigned int) var_7)), (var_6))), (((/* implicit */unsigned int) var_10))))));
    var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
}
