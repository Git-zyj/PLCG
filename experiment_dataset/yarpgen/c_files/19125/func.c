/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19125
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_5 [i_0]) % (arr_5 [i_0])))) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) arr_5 [i_0])) : (((long long int) 8U))))));
                var_11 = ((/* implicit */unsigned short) ((unsigned long long int) var_6));
                var_12 += ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(max((arr_2 [i_0] [i_0] [i_0]), (var_2)))))), (min((arr_0 [i_1]), (((/* implicit */unsigned long long int) ((30U) ^ (var_2))))))));
                arr_6 [i_0] [(unsigned short)15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned char)13] [i_0])) ? (arr_4 [i_0] [i_0] [i_0]) : (min((arr_4 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))))))) ? (arr_4 [(signed char)13] [i_1] [(signed char)13]) : (((/* implicit */unsigned long long int) max(((+(arr_2 [i_0] [i_0] [16LL]))), (((/* implicit */unsigned int) var_9)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_8 [i_2] [i_2]))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (arr_8 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9))))));
        arr_11 [i_2] = ((/* implicit */short) ((unsigned long long int) arr_7 [i_2]));
    }
    var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_7)) * (var_2))))))) ? (2915057948U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    var_17 = ((/* implicit */unsigned long long int) ((int) (short)-2916));
}
