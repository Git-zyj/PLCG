/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219264
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
    var_12 &= (!(((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (var_8)))) && (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned char) (signed char)-22))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_1] [i_2]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) (+(arr_4 [i_1 - 1] [i_2 - 3])));
                        var_15 = arr_2 [14LL] [i_2];
                        var_16 = ((/* implicit */_Bool) ((int) var_1));
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_2 [i_1 - 2] [i_2 + 1]))) ? (((unsigned long long int) arr_2 [i_1 - 1] [i_2 + 1])) : (min((arr_1 [i_1 - 2] [i_1 - 2]), (((/* implicit */unsigned long long int) arr_12 [i_2 - 2] [i_1 - 1] [i_0] [(short)17] [i_4 + 1])))))))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_1 - 2]) - (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_8 [i_1 + 1])) ? (arr_8 [i_1 - 2]) : (arr_8 [i_1 + 3]))) : (arr_8 [i_1 + 3])));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)32751)), (max((((/* implicit */long long int) (signed char)(-127 - 1))), (arr_11 [i_2] [i_4 + 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_6 [i_4 + 1] [i_1] [i_0])) : (arr_1 [i_2 - 2] [23U])))))) : (((((/* implicit */_Bool) (+(arr_11 [12U] [(unsigned char)10])))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2 - 3] [i_4] [i_4])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (arr_1 [(unsigned char)23] [i_4]) : (var_3)))))));
                    }
                }
            } 
        } 
    } 
}
