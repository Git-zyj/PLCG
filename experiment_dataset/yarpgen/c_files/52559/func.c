/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52559
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) ((var_7) > (((/* implicit */int) (unsigned short)24131))))) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)35)) || (((/* implicit */_Bool) (signed char)7))))))) << (((/* implicit */int) ((((var_7) ^ (((/* implicit */int) var_13)))) != (((/* implicit */int) ((var_11) && (((/* implicit */_Bool) 4398046511103ULL))))))))));
                var_17 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-114)) + (2147483647))) >> (((-3358776462215171853LL) + (3358776462215171880LL)))))) / (((((8694704622112387471ULL) / (18446744073709551615ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)72)) - (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))))))));
                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_1])) & (((/* implicit */int) (unsigned char)255)))) & (((((/* implicit */int) arr_2 [18] [18])) | (((/* implicit */int) (signed char)(-127 - 1)))))))) && (((((4398046511103ULL) + (arr_0 [i_0]))) > (((((/* implicit */unsigned long long int) var_2)) & (4398046511103ULL)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((var_14) >= (((/* implicit */unsigned long long int) -1LL))))) > (((/* implicit */int) ((4398046511103ULL) < (((/* implicit */unsigned long long int) var_0))))))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) <= (((/* implicit */long long int) ((/* implicit */int) (short)3))))))) + (((18446739675663040513ULL) >> (((var_2) - (3037451199487349917LL)))))))));
}
