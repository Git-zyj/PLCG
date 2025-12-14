/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37006
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
    var_15 = min((var_4), (((int) 1152903912420802560ULL)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_11 [i_4 - 1] [1] [i_0 + 1] = ((/* implicit */int) min((min((((/* implicit */long long int) arr_5 [i_3])), (max((((/* implicit */long long int) arr_1 [i_3])), (arr_0 [i_3]))))), (((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1]))) : (arr_2 [i_1] [i_1])))));
                                var_17 ^= ((/* implicit */int) min((min((16496082096457842776ULL), (((/* implicit */unsigned long long int) (signed char)84)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3] [0ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) : (2386023114U))))));
                                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 2] [i_0 + 1]))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] = ((/* implicit */signed char) ((arr_3 [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (min((arr_2 [i_1] [i_2]), (arr_2 [i_0 + 2] [i_1])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    {
                        var_19 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) var_9)))) : (((int) arr_18 [i_0 + 1] [i_5] [16ULL] [i_7])))), (max((((var_5) | (((/* implicit */int) var_13)))), (((/* implicit */int) arr_8 [i_0 - 1] [i_5] [i_5] [i_6] [i_7]))))));
                        var_20 ^= ((/* implicit */unsigned int) arr_8 [i_0 + 2] [i_0] [i_5] [i_6] [(unsigned short)4]);
                        var_21 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_18 [i_0] [i_5] [i_5] [i_7])), (var_14))) + (((/* implicit */long long int) ((arr_18 [i_0] [i_5] [i_6] [(_Bool)1]) | (arr_18 [i_5] [i_5] [i_5] [i_5]))))));
                    }
                } 
            } 
        } 
        var_22 &= ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_5 [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 + 1])) <= (arr_10 [i_0] [i_0 - 2] [i_0] [i_0] [i_0]))))));
    }
    var_23 = ((/* implicit */short) max((var_7), (((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_7)))) < (var_4))))));
}
