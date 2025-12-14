/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48925
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [(unsigned short)15] [i_1] [i_2] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) max((arr_4 [i_1]), (arr_4 [i_2])))))), ((-(max((((/* implicit */int) arr_4 [i_1])), (arr_0 [12LL] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [0LL] [0LL] [i_2] [i_3 + 1] [i_4] = ((/* implicit */unsigned short) ((short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2 - 2] [i_0] [i_4] [i_2])) ? (var_14) : (arr_2 [i_4])))) | (((var_5) / (((/* implicit */long long int) arr_2 [i_2])))))));
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((1682117394132111659ULL) / (((/* implicit */unsigned long long int) arr_8 [i_4] [i_2] [i_1]))))))) ? (((/* implicit */int) (short)-25281)) : ((+((-(((/* implicit */int) var_11)))))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */short) min(((~(arr_13 [i_2 - 3] [i_1] [i_1] [i_0 + 1] [i_0] [i_0]))), ((~((~(var_4)))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_2 + 1] [i_2] [i_2] [i_2 - 2])) >= (((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_2 - 1] [i_0 - 1] [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */signed char) var_3);
    /* LoopNest 3 */
    for (unsigned char i_5 = 3; i_5 < 9; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            for (short i_7 = 3; i_7 < 8; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 9; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 3; i_9 < 8; i_9 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */long long int) ((((unsigned int) (-(((/* implicit */int) arr_5 [14U] [i_8] [i_6] [i_5]))))) >= (((/* implicit */unsigned int) ((arr_19 [i_7 + 1]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_19 [i_7 - 1])))))));
                                arr_31 [7U] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) (+(arr_21 [i_9 - 1])))))));
                                arr_32 [i_5] [i_5] [i_6] [i_5] [i_5] [i_9 - 2] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)30709))));
                            }
                        } 
                    } 
                    arr_33 [i_7 - 3] [i_5] [(signed char)3] = ((/* implicit */short) ((unsigned short) (~((~(201639140U))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */long long int) var_0)), (min((var_5), (((/* implicit */long long int) var_8)))))));
}
