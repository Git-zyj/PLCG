/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3654
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [6] [i_1 + 1] [i_2] = ((/* implicit */long long int) min((32767), ((-(((/* implicit */int) (unsigned char)192))))));
                    arr_8 [i_0] [8] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -32768)) ? (352775105295232047LL) : (((/* implicit */long long int) 32767))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)0)) ? (16911433728ULL) : (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)26)) / (((/* implicit */int) (short)-27517)))))))));
    var_14 = ((/* implicit */long long int) min((((/* implicit */int) var_3)), ((~(((/* implicit */int) (unsigned char)222))))));
}
