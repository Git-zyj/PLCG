/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51232
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max(((+(min((330294202U), (((/* implicit */unsigned int) var_15)))))), (((/* implicit */unsigned int) min((arr_4 [i_0 - 2]), (arr_4 [i_0 - 1]))))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((int) ((((int) arr_1 [i_1 + 1] [i_0 + 1])) != (((((/* implicit */int) var_16)) | (arr_5 [i_0] [i_0]))))));
                var_21 |= ((/* implicit */short) (+(arr_5 [i_0 - 2] [(signed char)6])));
                arr_7 [i_1] [i_0] [i_0 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_1 + 1]) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1]))))) ? (max((((/* implicit */long long int) arr_2 [i_1] [(signed char)6])), (((((var_1) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)5368)) - (5367))))))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
            }
        } 
    } 
    var_22 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_8)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        var_23 = ((/* implicit */int) min((var_23), ((+(arr_5 [0LL] [0U])))));
        arr_12 [i_2] = ((/* implicit */unsigned short) (~(min((arr_1 [i_2 - 1] [i_2 - 1]), (((/* implicit */int) arr_10 [i_2]))))));
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_15)) ? (arr_5 [i_2] [18]) : (arr_0 [(unsigned char)2])))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 3] [i_2 + 1]))))))) : (min((max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))), (((/* implicit */int) (!(arr_4 [i_2])))))))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 16; i_3 += 3) 
        {
            arr_15 [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) var_16);
            arr_16 [i_3] [i_2 + 2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(-1989427778))) / (((/* implicit */int) arr_14 [i_2 - 1]))))) ? (((var_16) ? (max((var_1), (((/* implicit */long long int) arr_2 [i_3] [i_2])))) : ((+(9031310880041019155LL))))) : (((/* implicit */long long int) ((int) var_5)))));
        }
        var_25 = ((/* implicit */unsigned long long int) ((unsigned int) arr_0 [(_Bool)1]));
    }
    for (short i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        var_26 = ((/* implicit */_Bool) max((min((((unsigned int) arr_3 [i_4])), (var_6))), (((/* implicit */unsigned int) var_5))));
        var_27 -= max((((var_17) ^ (((((arr_0 [i_4]) + (2147483647))) << (((((/* implicit */int) var_3)) - (41355))))))), (((/* implicit */int) ((unsigned short) max((var_1), (((/* implicit */long long int) var_12)))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_23 [i_5] &= (~(((long long int) var_18)));
        var_28 = (-((~(arr_21 [i_5] [i_5]))));
    }
}
