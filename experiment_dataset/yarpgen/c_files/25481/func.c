/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25481
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((1567068314U) == (1567068314U))))))) : (((((/* implicit */_Bool) -5692679083611946931LL)) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 *= ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (arr_5 [i_0] [i_1]))))) | (((((/* implicit */_Bool) ((long long int) (unsigned char)15))) ? (arr_7 [i_0] [i_1]) : (arr_7 [(signed char)9] [(signed char)9]))));
                arr_8 [i_0] [(unsigned short)5] [i_0] = ((/* implicit */_Bool) ((unsigned int) var_10));
                var_13 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))) == (arr_3 [i_0]))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_3 [i_1]))) : (((/* implicit */unsigned long long int) ((unsigned int) 2097150U)))));
                arr_9 [i_0] [9] [i_0] = ((((var_9) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [2LL] [2LL])))) & (((((/* implicit */_Bool) 1433976545)) ? (((/* implicit */int) (unsigned short)49203)) : (((/* implicit */int) (unsigned char)5)))));
                arr_10 [i_0] [(unsigned short)13] [i_0] = ((/* implicit */long long int) (short)-14818);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_9);
    var_15 = ((/* implicit */unsigned char) var_10);
}
