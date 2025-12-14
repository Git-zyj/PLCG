/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53377
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
    var_11 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) ((int) (_Bool)0))) == (max((-3915780831562141257LL), (((/* implicit */long long int) var_9)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) max((min((((/* implicit */long long int) arr_6 [i_0])), (3915780831562141256LL))), (((((/* implicit */long long int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1])) | (max((((/* implicit */long long int) arr_4 [i_2] [(unsigned short)17] [i_0])), (3915780831562141270LL)))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned char) ((var_6) != (((/* implicit */long long int) ((unsigned int) (-(3915780831562141264LL)))))));
                        var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_5))))))) ? (max((((((/* implicit */_Bool) (unsigned short)256)) ? (arr_9 [2LL] [2LL] [2LL] [2LL] [2LL]) : (-1547675275))), (((((/* implicit */int) (short)0)) ^ (((/* implicit */int) (short)0)))))) : (((/* implicit */int) arr_0 [i_0]))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */int) arr_0 [8LL]);
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_8))));
                        var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) 973054823)) ? (arr_4 [i_0] [i_0] [(_Bool)1]) : (arr_8 [i_0] [i_1] [i_2 + 2] [i_2])));
                        arr_14 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-12))));
                    }
                    var_16 += ((/* implicit */unsigned int) min((min((((((-1414003647) + (2147483647))) << (((((/* implicit */int) var_1)) - (7934))))), (arr_9 [(unsigned short)6] [i_1] [i_2] [i_2 + 2] [i_2 + 1]))), (max((((/* implicit */int) var_3)), (max((var_10), (((/* implicit */int) (signed char)53))))))));
                }
            } 
        } 
    } 
}
