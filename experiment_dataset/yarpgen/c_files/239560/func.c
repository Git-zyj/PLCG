/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239560
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
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((max((arr_2 [i_0] [i_0]), (arr_2 [i_0 - 1] [i_0]))) && ((!(((/* implicit */_Bool) (unsigned short)16384))))))) == (((/* implicit */int) arr_0 [i_0])))))));
                    var_12 = ((/* implicit */signed char) 42867340U);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_7 [i_0] [i_2 - 1] [15ULL])) > (((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) + (arr_13 [i_4 + 1] [i_4 + 1] [i_4 - 1]))))))));
                                var_14 += ((arr_13 [i_1] [i_1] [i_4 - 4]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1]))));
                                var_15 = ((/* implicit */int) (~(arr_6 [i_1] [i_1] [(signed char)3])));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) 42867340U)), (arr_8 [i_0 + 2] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_2 - 1] [i_0 + 2])) & (((/* implicit */int) arr_2 [i_2] [i_0 + 2]))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 16; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                {
                    arr_22 [i_6] [(unsigned short)15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_6] [i_5] [i_5] [i_6] [i_7] [(signed char)5]))))))) ? (((/* implicit */unsigned long long int) ((42867359U) >> (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 4194176)), (arr_13 [i_5] [i_6] [i_7])))) - (8608566785420798460ULL)))));
                    var_17 &= ((((/* implicit */_Bool) max((42867359U), (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */int) (unsigned char)29)) : (min((((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)223))))), (((arr_2 [7ULL] [i_5]) ? (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5] [(_Bool)1] [i_7])) : (((/* implicit */int) var_1)))))));
                    var_18 *= ((/* implicit */short) ((unsigned char) ((((((/* implicit */int) var_7)) << (((/* implicit */int) arr_2 [i_6] [16])))) / ((~(((/* implicit */int) var_2)))))));
                }
            } 
        } 
    } 
}
