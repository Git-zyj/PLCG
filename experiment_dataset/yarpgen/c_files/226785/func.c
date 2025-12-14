/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226785
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
    var_10 = ((/* implicit */int) min((((/* implicit */unsigned int) ((int) (-(((/* implicit */int) (unsigned short)504)))))), (((((/* implicit */_Bool) ((long long int) -893866108))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))) * (0U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)2727)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */long long int) ((var_1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [(unsigned short)15] [i_0])))) ? (((((/* implicit */_Bool) (signed char)-52)) ? (var_2) : (((/* implicit */int) (short)2711)))) : (((/* implicit */int) var_3)))))));
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) ^ (((unsigned long long int) arr_1 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))));
                arr_5 [(_Bool)1] [7ULL] [7ULL] = ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)51))));
}
