/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41277
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
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((unsigned char) (signed char)-88))))))) | (max((3710083935U), (((/* implicit */unsigned int) ((unsigned short) (_Bool)1)))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((677712603741440199ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))))))) ^ (((var_6) ? (max((9112036837150869275ULL), (((/* implicit */unsigned long long int) (unsigned short)5157)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6))))))));
    var_20 ^= ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_3 [i_0] [(unsigned char)7]))));
                var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3710083934U) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [(short)7] [i_1])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3374)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)26693)) >> (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [7LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (var_4)))))) : (((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) arr_6 [i_0] [i_1]))))) : (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [7]))) : (3887515564U)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 3; i_2 < 18; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 15; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 18; i_4 += 4) 
            {
                {
                    var_23 = ((/* implicit */short) ((unsigned long long int) 677712603741440203ULL));
                    var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_8 [i_2])), (0ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)63)) ^ (-1817343368)))) : (((max((var_4), (((/* implicit */unsigned long long int) 964462526U)))) | (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) arr_9 [(unsigned short)10] [i_3])))))))));
                }
            } 
        } 
    } 
}
