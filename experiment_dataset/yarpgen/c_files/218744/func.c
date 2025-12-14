/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218744
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
    var_14 = ((/* implicit */unsigned short) min((10742946400314982350ULL), (((/* implicit */unsigned long long int) var_6))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))), (1073741823)));
        var_15 = ((/* implicit */unsigned int) ((arr_1 [i_0]) >> (((((arr_1 [i_0]) | (((/* implicit */unsigned long long int) arr_0 [i_0])))) - (690729305528680403ULL)))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) arr_3 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            for (unsigned int i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 4; i_5 < 15; i_5 += 3) /* same iter space */
                        {
                            arr_20 [i_1] [i_2] [i_1] [i_3] [i_1] [i_5] = ((/* implicit */unsigned short) arr_11 [i_1] [i_1]);
                            var_16 = var_5;
                            var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5 + 2] [i_5 - 1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [10] [i_3] [i_3 - 2] [i_5 - 4] [i_5 + 1]))) : (arr_18 [i_5 + 1] [i_5 - 1] [i_5])))) ? (arr_18 [i_5 - 2] [i_5 + 2] [i_5 - 2]) : (min((arr_18 [i_5 - 4] [i_5 - 1] [i_5]), (((/* implicit */unsigned int) -1073741824)))));
                        }
                        for (unsigned int i_6 = 4; i_6 < 15; i_6 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) min((arr_0 [i_2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-1683956630)))) ? (((/* implicit */int) ((unsigned short) arr_21 [i_1] [i_2 - 1] [i_6] [i_4] [i_6]))) : ((~(((/* implicit */int) arr_22 [i_1] [i_2 - 1] [i_3] [i_6] [i_6])))))))));
                            arr_23 [(short)13] [(short)13] [i_6] [i_6] [(short)13] [(short)13] = ((/* implicit */unsigned short) min((((1073741809) & (arr_15 [i_1] [i_2] [i_2] [i_4] [i_2]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_2] [i_1] [i_4] [i_6])))))));
                            var_19 = arr_21 [i_6 + 1] [i_3] [i_6] [i_2] [i_2];
                        }
                        for (short i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_1]))))), (761773478897319332ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_2 + 1] [i_2] [i_2] [i_2 - 1] [i_3 - 2])))))) : (4294967284U)));
                            var_21 = ((/* implicit */short) (~(max((((/* implicit */unsigned int) arr_16 [i_1] [i_2] [i_1] [i_1] [i_4] [i_7])), (arr_18 [i_1] [i_2] [i_4])))));
                            arr_27 [i_4] [6U] [i_4] = ((/* implicit */unsigned int) arr_17 [(unsigned char)15] [i_3] [i_4]);
                            arr_28 [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) (unsigned short)42572)))));
                        }
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned int) arr_13 [i_2] [i_3] [i_4])) : (max((((/* implicit */unsigned int) (unsigned short)22965)), (arr_0 [i_3])))))) ? (((/* implicit */unsigned long long int) 255012507U)) : ((+(arr_25 [i_1] [i_2] [i_1] [4U] [(unsigned short)4]))))))));
                    }
                } 
            } 
        } 
    }
}
