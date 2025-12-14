/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198730
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1690808543)) ? (9312089375158412150ULL) : (((/* implicit */unsigned long long int) -3541299733129861149LL)))) << (((((((((/* implicit */int) var_2)) + (2147483647))) << (((((-8121166891998725343LL) + (8121166891998725361LL))) - (18LL))))) - (2147483547)))))) ? (((((/* implicit */_Bool) 12937623513059231773ULL)) ? (33554431U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) min((var_7), (((/* implicit */int) max(((unsigned char)8), (((/* implicit */unsigned char) (signed char)-125))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) ((min((arr_5 [i_2 + 3] [i_2] [i_2 + 1] [i_2]), (arr_5 [i_2 + 2] [i_2] [i_2 + 1] [i_2]))) >> (((arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))))));
                    var_14 -= ((/* implicit */int) ((((/* implicit */_Bool) 2320427278996280016ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)46)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1] [i_2 + 3]))) / (arr_4 [i_2] [i_1] [i_2 + 3])))));
                }
            } 
        } 
    } 
}
