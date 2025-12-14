/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229384
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
    var_11 = (signed char)-117;
    var_12 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) (((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))) : (arr_4 [9LL] [(signed char)11] [(unsigned short)11]))))) | ((+(((unsigned int) arr_1 [i_1 - 3] [i_2 - 1]))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_13 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? ((~(arr_12 [i_0] [i_2 + 3] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_1]))))) << (((((/* implicit */int) (signed char)90)) - (90)))));
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_1] [(unsigned short)10]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))))) ? (((/* implicit */unsigned int) arr_3 [6])) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (arr_0 [7U])))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_12 [i_4] [i_4] [i_4]))));
                        var_16 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 3]) | (arr_0 [0ULL])))) ? (((long long int) arr_1 [9U] [i_1 + 1])) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4])))))) ? (((/* implicit */unsigned long long int) min((((long long int) 258048U)), (arr_12 [7LL] [i_1] [i_1 + 1])))) : (((((/* implicit */_Bool) arr_8 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_2 + 1] [i_1])) : (((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_1 [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [i_0])))))));
                    }
                    arr_15 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_0 - 1] [i_0]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) -8543122335946816937LL);
}
