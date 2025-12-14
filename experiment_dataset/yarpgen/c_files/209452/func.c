/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209452
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
    var_20 = ((/* implicit */long long int) var_3);
    var_21 |= ((long long int) max((min((-6465280266868223108LL), (((/* implicit */long long int) (unsigned short)52833)))), (((/* implicit */long long int) (~(((/* implicit */int) (short)-8527)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-8505)) | (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) max((arr_1 [(unsigned short)12]), (var_0)))) : (max((max((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0] [i_0]))), (((2147483647) ^ (((/* implicit */int) arr_1 [i_0]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (max((min((var_13), (((/* implicit */unsigned long long int) (unsigned short)65535)))), (((/* implicit */unsigned long long int) (unsigned short)0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (2656823877578856116LL)))) ? (min((-5870447097963689726LL), (((/* implicit */long long int) (unsigned short)36191)))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)3155))))))))));
        arr_3 [i_0] |= ((((/* implicit */_Bool) -6592159578787192253LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5159))) : (9223372036854775786LL));
    }
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    arr_11 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) arr_9 [i_1] [i_1] [i_1] [i_1]);
                    arr_12 [i_2] [(unsigned short)15] [i_2] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((unsigned long long int) arr_6 [2LL]))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_5 [i_1] [(unsigned short)5]))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8505))) : (9223372036854775786LL)))))));
                    var_23 &= ((/* implicit */short) min((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52833)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775787LL))))) : (((/* implicit */int) (unsigned short)14661)))))));
                }
            } 
        } 
    } 
}
