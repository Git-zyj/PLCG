/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246270
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */int) min(((unsigned short)53548), ((unsigned short)65532)))), (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))))), ((((~(12951058440823825382ULL))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)16265)), (161581204U))))))));
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned short)4096), (((/* implicit */unsigned short) (unsigned char)255)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3552768749875770027LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 4095U)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) min(((-((~(((/* implicit */int) var_1)))))), (-1069143442)));
}
