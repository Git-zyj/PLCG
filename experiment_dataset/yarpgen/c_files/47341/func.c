/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47341
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) -922232404);
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((max((((/* implicit */int) (signed char)(-127 - 1))), (arr_4 [i_0] [i_1] [(unsigned char)5] [(unsigned char)5]))) - (((/* implicit */int) arr_1 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) var_3);
                                var_22 = ((/* implicit */short) var_14);
                            }
                        } 
                    } 
                    var_23 = ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-110))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)125)))) <= (min((arr_9 [i_0] [i_1] [(unsigned short)10] [i_1] [(unsigned short)10]), (arr_8 [i_0] [i_0] [i_2] [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 23; i_5 += 4) 
    {
        for (int i_6 = 3; i_6 < 23; i_6 += 3) 
        {
            {
                var_24 = ((/* implicit */int) ((966199914U) ^ (((/* implicit */unsigned int) arr_15 [i_6]))));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 24; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        {
                            var_25 ^= ((/* implicit */unsigned int) arr_16 [i_8]);
                            var_26 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */int) arr_21 [i_5] [i_6] [i_7 + 1] [(unsigned short)11])) : (((((/* implicit */int) arr_18 [i_5 + 2] [i_6] [i_8])) + (((/* implicit */int) arr_16 [i_5 - 2]))))))) ? ((~(((/* implicit */int) arr_18 [i_5] [i_5] [i_5])))) : (((/* implicit */int) min((arr_13 [i_7 - 1]), (arr_13 [i_7 - 2])))));
                            arr_23 [i_5] [i_5] [i_6] [i_7] [i_8] = (-((+(((/* implicit */int) arr_22 [i_5 + 1] [i_6 + 1] [i_7 + 1])))));
                            var_27 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_6] [i_6 - 1] [i_6 - 1])) ^ ((~(((/* implicit */int) arr_17 [i_7 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
