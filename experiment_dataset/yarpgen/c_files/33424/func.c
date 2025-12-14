/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33424
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
    for (unsigned char i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) (short)1792)) ? (((/* implicit */int) (short)1792)) : (((/* implicit */int) (short)1792)))), (((/* implicit */int) (unsigned char)246)))), (((/* implicit */int) var_13))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_0 - 3] [i_0 - 2] [i_0 - 2])), (var_2)))) : (((/* implicit */int) var_0))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (14262574388541064024ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1792)))))));
                        arr_10 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */_Bool) ((short) ((((/* implicit */int) var_14)) - (((/* implicit */int) var_10)))));
                    }
                    for (short i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        arr_13 [i_0 - 2] [(unsigned short)11] [(unsigned char)3] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_11 [i_0 - 3] [i_1] [i_2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 3]))))));
                        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_1)) : (var_4))) : (((/* implicit */unsigned long long int) var_1)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (unsigned char)58))))))));
                    }
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_2] [i_5])) * (((/* implicit */int) arr_12 [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_0 - 3] [i_0]))))) * (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_1)) : (var_4))) / (((arr_15 [i_0] [i_0] [i_0] [i_2] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_5])))))))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_5))))) != (arr_5 [i_0] [i_0 - 1] [i_0 - 3] [i_0 - 3])))) << (((((/* implicit */int) var_2)) % (((/* implicit */int) arr_12 [i_0] [6LL] [(signed char)6] [i_5] [i_2]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_6 = 1; i_6 < 19; i_6 += 3) 
    {
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_16 [i_6])) : (var_6))))) ^ (((arr_23 [i_6] [i_7] [i_7] [i_8]) | (arr_23 [i_6 + 2] [3ULL] [i_8] [i_7])))));
                    arr_26 [(unsigned char)20] [(unsigned char)20] [i_8] [i_6] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_20 [i_6 - 1] [i_6 - 1])), (((((/* implicit */_Bool) (short)-1803)) ? (2890803150701314439ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1788))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >= ((~(((/* implicit */int) var_14)))))))));
                    arr_27 [i_6] [i_6] [i_8] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_22 [i_8] [i_7] [i_6 - 1] [(unsigned char)15]))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-127)) ^ (((/* implicit */int) (short)-31447)))))));
                }
            } 
        } 
    } 
}
