/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216860
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_20 |= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : ((-2147483647 - 1))))));
        arr_2 [(unsigned char)5] [(unsigned char)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4095ULL)) ? (((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-32))))) : ((+(((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)14)), (arr_0 [i_0]))))));
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)41))))) & (((/* implicit */int) arr_0 [i_0])))))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    for (unsigned char i_4 = 2; i_4 < 17; i_4 += 1) 
                    {
                        for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) (~((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_4]))) ^ (6514815011549021688ULL)))))));
                                var_23 = ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) max((arr_11 [i_4 - 2]), (arr_11 [i_4 - 1])))) : ((+(((/* implicit */int) arr_11 [i_4 - 1])))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_2] [i_2 + 2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (1696917995509768236ULL) : (6ULL))))))), ((~(16485819199093774851ULL)))));
                arr_17 [i_1] [i_2] |= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((arr_6 [i_1] [i_1]) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2])))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2 - 3] [i_2 + 2]))) - (arr_3 [i_2]))) : ((~(arr_14 [i_1] [i_2 - 2] [i_1] [i_1]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (+(var_13)));
}
