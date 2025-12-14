/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51758
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
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_15)), (var_11)));
    var_20 |= ((/* implicit */_Bool) ((((unsigned long long int) (unsigned short)19468)) * (((((/* implicit */_Bool) 1238061737U)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) 4539628424389459968LL))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [(unsigned short)11] [i_0] [i_0] [i_0] = ((unsigned int) -4539628424389459962LL);
                    arr_10 [i_0] [i_0] [(short)11] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)12331)) ? (((/* implicit */int) (short)-32757)) : (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (short)32763))));
                    arr_11 [i_2] [i_1] [i_0] = max(((-(2228731803U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 5ULL))))));
                    arr_12 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 4539628424389459982LL)), (((unsigned long long int) 251932695U))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_4);
}
