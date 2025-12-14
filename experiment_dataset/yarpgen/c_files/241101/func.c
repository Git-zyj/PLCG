/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241101
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
    var_10 = ((/* implicit */int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_4)) : (((var_8) ^ (((/* implicit */unsigned long long int) 1065353216U)))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_6)) | (((/* implicit */int) var_6)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_6)) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) > (((long long int) (signed char)115)))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_10 [i_2 + 3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_1] [i_0]))));
                    arr_11 [9U] = ((/* implicit */unsigned short) var_0);
                    arr_12 [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 2]))) > (max((var_4), (((/* implicit */unsigned int) (signed char)119))))))) & ((-(((/* implicit */int) arr_8 [i_2 + 3] [i_2 + 1]))))));
                }
            } 
        } 
        var_11 = ((/* implicit */int) max((((/* implicit */unsigned int) (signed char)-76)), (4294967282U)));
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
    {
        var_12 ^= ((/* implicit */signed char) ((int) (-(((((/* implicit */_Bool) arr_15 [(signed char)6])) ? (var_9) : (var_2))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                {
                    arr_23 [i_3] [i_3] [(signed char)5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((arr_17 [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4]))))))));
                    arr_24 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */short) (-(max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_13 [i_3])), (arr_20 [i_3] [i_3] [i_3] [i_3])))), (min((((/* implicit */long long int) (signed char)76)), (var_0)))))));
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 29U)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) var_1)))) + (((((((/* implicit */int) (signed char)-2)) + (2147483647))) >> (((var_8) - (18337854395689217306ULL)))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_4]))))) ? (((/* implicit */int) ((short) arr_9 [i_3] [i_3] [i_3]))) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3])) && (((/* implicit */_Bool) arr_6 [i_5]))))))))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
    {
        arr_27 [i_6] = ((/* implicit */signed char) var_5);
        arr_28 [i_6] [i_6] &= ((/* implicit */unsigned short) (+((+(arr_22 [(signed char)6] [(signed char)6])))));
    }
    var_14 ^= ((/* implicit */unsigned long long int) var_2);
}
