/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210668
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
    var_19 = (signed char)-1;
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_20 = (-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)37)))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned char) 815648310)))));
        var_22 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 61440ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-6218367064955732316LL))))));
        var_23 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) : (var_16))), (((/* implicit */unsigned int) arr_3 [i_1] [i_1]))));
        var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) var_1)))), (arr_4 [i_1] [i_1])));
        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 201556228))));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) max((arr_3 [i_1] [i_1]), ((+(((/* implicit */int) (short)32767))))));
    }
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_26 -= ((/* implicit */unsigned long long int) arr_4 [i_2] [i_2]);
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((int) max((arr_8 [i_2]), (arr_8 [i_2])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_3 = 3; i_3 < 13; i_3 += 2) 
        {
            arr_13 [(unsigned char)2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((((/* implicit */int) (signed char)-112)) + (116))) - (4)))));
            var_28 *= ((/* implicit */_Bool) (-((+(arr_3 [i_2] [i_3 + 1])))));
        }
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            arr_16 [i_2] [i_2] [i_4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (short)32735)))), (max((-2047393594), (((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))))))) ? (arr_14 [i_2]) : (((/* implicit */long long int) (-(((((/* implicit */int) (signed char)-127)) & (((/* implicit */int) arr_11 [i_2] [i_4] [i_4])))))))));
            arr_17 [i_4] [i_4] [i_2] = ((/* implicit */_Bool) var_17);
        }
        var_29 += ((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [i_2]);
    }
}
