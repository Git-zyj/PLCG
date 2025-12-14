/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233302
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_11 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [(unsigned char)12])) >= (((/* implicit */int) arr_1 [(unsigned short)0]))))) : (((((((/* implicit */int) arr_1 [(signed char)12])) + (2147483647))) >> (((((/* implicit */int) arr_1 [18])) + (108)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_10)))) ? (max((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 10; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) var_9);
        var_12 = ((((/* implicit */_Bool) max((arr_1 [22U]), (((/* implicit */signed char) var_6))))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) var_9)) : (max((arr_0 [i_1]), (((/* implicit */int) arr_1 [(signed char)6])))))) : (min((-13), (((/* implicit */int) arr_1 [(signed char)4])))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_5))));
                        var_14 -= ((/* implicit */signed char) ((((unsigned long long int) max((var_9), (arr_12 [4] [i_2] [4U] [i_4] [i_2] [(_Bool)1])))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_1 - 3])))))));
                        var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (((int) arr_10 [i_1 - 1] [i_3] [i_4])) : (((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 1])))), (((arr_9 [i_1 - 1] [i_3] [(unsigned short)8]) & (arr_9 [i_1 + 2] [i_3] [i_3])))));
                        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) -1053300476)) ? (((/* implicit */int) (unsigned short)15169)) : (var_7)))))) ? (((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [i_1 + 2])) : (((/* implicit */int) (signed char)117))));
                    }
                } 
            } 
        } 
        arr_14 [i_1 - 1] = ((/* implicit */_Bool) var_5);
    }
    for (signed char i_5 = 2; i_5 < 17; i_5 += 3) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */signed char) var_3);
        /* LoopNest 2 */
        for (unsigned int i_6 = 2; i_6 < 17; i_6 += 2) 
        {
            for (long long int i_7 = 1; i_7 < 16; i_7 += 3) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned char) min((((int) var_10)), (((/* implicit */int) ((signed char) arr_18 [i_5 - 2] [i_5 + 2])))));
                    var_18 -= ((/* implicit */int) ((unsigned int) ((unsigned short) var_9)));
                }
            } 
        } 
        arr_22 [i_5] = var_2;
    }
    var_19 = ((/* implicit */unsigned char) var_0);
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 1330573019U)) : (((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */unsigned long long int) var_4)) : (var_10)))));
}
