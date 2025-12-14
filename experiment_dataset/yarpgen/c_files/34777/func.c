/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34777
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) (unsigned short)6144);
                arr_6 [i_1] = ((/* implicit */unsigned int) (unsigned char)14);
            }
        } 
    } 
    var_17 ^= ((/* implicit */int) (unsigned char)197);
    var_18 = ((/* implicit */unsigned short) var_10);
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) var_12);
                var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_3])) ? (((/* implicit */unsigned int) -1386536446)) : (arr_8 [(unsigned char)20]))))))), (min((((/* implicit */int) arr_7 [i_2] [i_3])), ((-(((/* implicit */int) (unsigned short)48878))))))));
                var_22 = ((max((max((5403313432724966377LL), (-3927853067102308802LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) var_15))))))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) min((arr_11 [i_3] [i_2]), (((/* implicit */unsigned short) arr_10 [i_2]))))) : ((+(((/* implicit */int) var_3)))))));
            }
        } 
    } 
}
