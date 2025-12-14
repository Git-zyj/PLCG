/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218205
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? ((~(((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) ((_Bool) arr_1 [i_0]))))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) ((((((/* implicit */int) var_16)) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) - (3024)))))), ((~(arr_0 [i_0] [i_0]))))), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2147483647))))), (arr_0 [i_0] [i_0])))));
    }
    for (short i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_7 [i_1]))))))));
        var_19 |= ((((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_4 [i_1]))))) + (((((/* implicit */int) (signed char)(-127 - 1))) / (2147483639))))) >= (((((/* implicit */_Bool) arr_7 [i_1])) ? (((((/* implicit */int) var_3)) & (arr_6 [i_1]))) : (2147483647))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (2147483647))))));
                    var_21 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? ((-(((/* implicit */int) arr_11 [i_1] [i_1])))) : (((/* implicit */int) arr_13 [(unsigned char)17] [i_2] [i_1] [i_1])))), (((/* implicit */int) (unsigned char)239))));
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((max((arr_6 [i_2]), (((/* implicit */int) arr_7 [i_3])))), (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    }
    for (signed char i_4 = 4; i_4 < 23; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_6])) | ((~(((/* implicit */int) (_Bool)1))))));
                    var_24 = (_Bool)1;
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) -2147483647))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) max((((short) (~(((/* implicit */int) (short)0))))), (((/* implicit */short) (!((_Bool)1))))));
        var_27 ^= ((/* implicit */short) ((long long int) ((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
    }
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        for (long long int i_8 = 3; i_8 < 24; i_8 += 4) 
        {
            {
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (-(2147483647))))));
                arr_24 [i_7] [i_7] |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)21280))));
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    var_29 += ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_26 [i_7] [i_7] [i_7] [i_7])), (arr_25 [16LL] [(_Bool)1] [(signed char)15] [(signed char)13])));
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) var_5))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (-(var_13))))) ? (((/* implicit */int) arr_21 [i_8])) : (((/* implicit */int) arr_21 [i_7]))));
                }
                var_32 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_7])) | (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) var_3)))))) : (((/* implicit */int) var_9))));
            }
        } 
    } 
    var_33 = ((/* implicit */signed char) ((((var_2) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
}
