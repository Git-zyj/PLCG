/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234811
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) 3026325631U))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (short)30720))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_12 [i_4] [i_1] [i_2] [i_3] [i_4] [i_3] [i_1] = ((/* implicit */_Bool) arr_2 [i_0]);
                                arr_13 [i_0] [(signed char)12] [i_4] [i_3] [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-1)))) >> ((((+(((/* implicit */int) (unsigned char)88)))) - (76)))));
                                arr_14 [i_0] [i_4] [i_2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */signed char) min((((/* implicit */int) (short)-17697)), (((int) (unsigned short)5801))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (~((~(((/* implicit */int) min(((short)17697), (arr_11 [i_0 - 2] [i_1] [i_0] [i_0] [i_1]))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) (+(-1)));
        var_20 = (-((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [(signed char)11] [(signed char)11]))))))));
        arr_16 [(signed char)15] = ((/* implicit */_Bool) 2191520845U);
    }
    for (unsigned char i_5 = 2; i_5 < 18; i_5 += 4) /* same iter space */
    {
        var_21 = min(((+(min((((/* implicit */long long int) arr_0 [i_5] [i_5])), (arr_4 [i_5 - 2]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_8 [i_5 + 1] [i_5] [18] [i_5])))) ? (((((((/* implicit */int) (short)-23521)) + (2147483647))) >> (((/* implicit */int) arr_6 [8U] [i_5] [i_5] [i_5 + 1])))) : (((/* implicit */int) min((arr_11 [i_5] [i_5 + 1] [i_5] [i_5 - 2] [i_5 - 1]), (((/* implicit */short) (_Bool)1)))))))));
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) % (min((((/* implicit */unsigned int) (_Bool)1)), (arr_10 [i_5] [i_5 - 2] [(unsigned char)3] [i_5]))))) >> (((arr_20 [i_5]) % (arr_20 [i_5 - 1])))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 17; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_23 ^= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)99))));
                                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_6] [i_6 + 2] [i_6 + 2])))))));
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    arr_31 [i_6 + 1] [i_6] [i_6] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_8 [i_5] [i_5 - 1] [i_5] [i_5]), (arr_8 [i_7] [i_7] [i_6] [i_5]))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_9), (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) 0)), (624820581U)))))) ? (((/* implicit */int) (_Bool)1)) : (min((((((/* implicit */int) var_0)) >> (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_5)) >> (((-3) + (25)))))))));
    var_27 += (!(((/* implicit */_Bool) ((unsigned char) (signed char)-22))));
    var_28 = ((/* implicit */unsigned short) (signed char)-21);
}
