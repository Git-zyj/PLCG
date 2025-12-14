/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211885
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
    var_12 = ((/* implicit */short) var_8);
    var_13 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1126471795)) ? (((/* implicit */int) (unsigned short)54745)) : (((/* implicit */int) (short)10109))));
                    arr_6 [(unsigned char)5] [i_0] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54747)) ? (((/* implicit */long long int) 2147483647)) : (-587769274531801634LL)))) ? (max((var_4), (((/* implicit */unsigned long long int) var_9)))) : (var_4));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251)))))) : (min((arr_2 [i_0] [i_1] [i_0]), (((/* implicit */long long int) var_9))))))) || (((/* implicit */_Bool) (((_Bool)1) ? (max((arr_4 [i_0] [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_8)))) : (((((/* implicit */_Bool) arr_3 [i_2] [i_1] [3LL])) ? (arr_4 [i_0] [i_1] [18U] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
                }
            } 
        } 
    } 
}
