/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28489
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
    var_12 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) max(((~(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_10))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            arr_6 [7LL] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 2])))) & (arr_4 [i_1 + 1] [i_1 - 2] [i_1])));
            var_14 |= ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) max((var_6), (var_3)))), (((unsigned int) var_11))))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_15 += ((/* implicit */unsigned long long int) var_8);
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    {
                        var_16 = var_10;
                        var_17 *= ((/* implicit */short) max(((-(((var_5) % (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (65504U))))))));
                    }
                } 
            } 
        } 
        arr_16 [i_2] = ((/* implicit */short) var_0);
    }
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */long long int) var_1);
        var_18 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_15 [i_6] [i_6] [(_Bool)1] [i_6])) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) max((arr_15 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) ((var_7) || (((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6] [i_6])))))));
    }
    for (short i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) ((arr_2 [i_7]) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))), (max(((-(((/* implicit */int) (short)-32763)))), (((/* implicit */int) max((((/* implicit */short) arr_1 [(short)11])), ((short)-8))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            for (long long int i_9 = 3; i_9 < 14; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_31 [i_8] = ((/* implicit */long long int) max((var_3), (arr_14 [i_7] [i_8] [i_8] [i_9] [i_10])));
                        var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_14 [i_7] [i_8] [i_9] [i_9] [(_Bool)1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-32763))))) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) arr_12 [i_9 + 1] [i_9 - 2] [i_9 + 3] [i_9 + 3]))))), (((max((arr_27 [i_8] [i_9] [i_8] [i_8]), (((/* implicit */unsigned long long int) var_0)))) / (((/* implicit */unsigned long long int) max((-9223372036854775788LL), (((/* implicit */long long int) arr_7 [(_Bool)1])))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_9] [i_11] [i_9] [i_9 - 2])) - (((/* implicit */int) arr_28 [i_11] [i_9 - 3] [i_9] [i_9 + 1]))))), (((long long int) arr_26 [(_Bool)1] [i_11] [4U] [i_9 - 1])))))));
                            var_22 = ((/* implicit */short) (_Bool)1);
                            arr_34 [i_7] [i_8] [i_9 + 2] [i_7] [9U] = ((/* implicit */long long int) arr_29 [i_7] [i_8] [16U] [i_7] [i_7]);
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_23 = max(((+(arr_33 [i_9 + 2] [i_9 - 2]))), (((/* implicit */unsigned long long int) ((arr_33 [i_9 - 2] [i_9 + 3]) < (arr_33 [i_9 + 3] [i_9 + 3])))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < ((+(arr_0 [9ULL])))))) * (((((/* implicit */_Bool) arr_15 [i_9 + 2] [i_9 - 1] [i_9 - 1] [i_9 + 2])) ? (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_7 [i_7]))))) : (((/* implicit */int) (!(var_4))))))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((_Bool) ((((var_3) || (((/* implicit */_Bool) var_9)))) ? (max((var_0), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))))));
                            arr_38 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) arr_24 [i_7] [i_7] [i_8])))));
                            var_26 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_7] [7U])) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) (short)-19297)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        }
                    }
                } 
            } 
        } 
        var_27 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)9)))) - ((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_19 [(_Bool)1] [i_7]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), ((_Bool)1))))) : (max(((-(var_0))), (((/* implicit */unsigned int) var_7))))));
    }
}
