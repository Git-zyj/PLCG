/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203817
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)179)) << (((/* implicit */int) (unsigned char)5))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned short) (((-(arr_2 [i_3 - 1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 3] [i_3 + 3])) : (((/* implicit */int) arr_8 [i_3 + 3] [i_3 - 1] [i_3 + 1] [i_3 + 1])))))));
                                arr_14 [i_0] [i_0] [i_3] [i_3 + 1] [i_4] [13] = ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)1997)))))) >= (min((((/* implicit */long long int) -278383774)), (arr_9 [i_0] [i_1] [i_1] [i_3 + 2] [i_4])))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -278383774)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)246))))) ? (((/* implicit */int) max((arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1]), (arr_11 [i_3 - 1] [i_3 + 2] [i_3 - 1])))) : (((/* implicit */int) (!(arr_11 [i_3 + 2] [i_3 + 1] [i_3 + 2]))))));
                                arr_15 [15U] [(unsigned char)13] [i_2] [i_3] [i_4] [i_0] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) var_16)))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_3 + 3] [(short)16])) > (var_7)))) : (((/* implicit */int) ((unsigned char) (unsigned char)150)))))) : (((((/* implicit */_Bool) var_1)) ? (min((arr_7 [i_0] [i_0]), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [(unsigned char)10] [(unsigned char)14] [(unsigned char)10])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 17; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((unsigned short) arr_13 [i_0] [i_6] [i_2] [i_6] [i_6]);
                                arr_21 [i_6] [i_1] [i_1] [i_1] [10ULL] [i_1] = ((/* implicit */unsigned long long int) var_14);
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_10 [i_0] [0U] [i_0] [i_0]))))))) <= ((~(((/* implicit */int) arr_10 [i_0] [i_1] [i_5 + 2] [i_5 - 2])))))))));
                                arr_22 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) ((unsigned int) 12U));
                            }
                        } 
                    } 
                    arr_23 [i_2] [i_2] [(unsigned char)11] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_11)))))))));
                    var_23 = ((/* implicit */unsigned short) (((((_Bool)0) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2])))) >> ((((+(((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_2])))) - (115)))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_8] [i_7] [(unsigned char)17] [i_1] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) (unsigned short)0)))))));
                                arr_30 [i_0] [18U] = ((/* implicit */unsigned int) ((unsigned short) (+(arr_27 [i_0] [i_1] [i_2] [i_7] [i_8]))));
                                arr_31 [i_0] [i_1] [i_1] [i_7] [i_8] |= ((/* implicit */long long int) var_13);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 &= ((/* implicit */unsigned int) var_9);
}
