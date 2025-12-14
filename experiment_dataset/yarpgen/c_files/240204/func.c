/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240204
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) 245839677))))), (var_11))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2] [(signed char)11])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))))) || (((/* implicit */_Bool) ((2322826013U) ^ (((/* implicit */unsigned int) max((-245839680), (-1180801935)))))))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((70368744177663LL) - (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))))))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_7)))))))) ^ (max((max((var_0), (arr_8 [i_0] [i_2] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 245839679)) % (4611404543450677248LL))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 3; i_3 < 16; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_18 [i_3 - 2] [i_6 + 4] [i_6] [i_6]))))) : (((var_0) >> (((((/* implicit */int) var_13)) + (56)))))));
                            arr_20 [i_3] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)236)) ? (1180801935) : (((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_5)))))))), (max((((/* implicit */long long int) (unsigned char)206)), (-5625253253524080836LL)))));
                            var_22 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((max((3595283104461916951LL), (((/* implicit */long long int) var_12)))) - (((/* implicit */long long int) arr_15 [i_5] [i_3] [i_5] [i_3 - 3]))))) & (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_12 [i_4] [i_5] [i_6])), (var_15)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_11)))))));
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1180801918)) % (5625253253524080833LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)32756)) || (((/* implicit */_Bool) var_0)))))) : (max((3595283104461916951LL), (var_15)))))) ? (min((((/* implicit */unsigned long long int) ((unsigned short) var_14))), (1847171447846698659ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_10))))) == (((((/* implicit */_Bool) var_11)) ? (3595283104461916951LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))));
                        }
                    } 
                } 
                arr_21 [i_4] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_7)), (var_0))) - (((/* implicit */unsigned long long int) var_16))));
            }
        } 
    } 
}
