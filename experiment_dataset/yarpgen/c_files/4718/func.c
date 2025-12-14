/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4718
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_10 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (short)31408)), (3726170323094779091LL)))) ? (((3726170323094779087LL) | (3726170323094779091LL))) : ((-(3726170323094779106LL))))) / (3726170323094779072LL)));
                    var_11 = ((/* implicit */unsigned int) -3726170323094779092LL);
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3726170323094779072LL)) ? (arr_4 [i_2]) : (3726170323094779063LL)))) ? (min((-3726170323094779092LL), (3726170323094779076LL))) : (((/* implicit */long long int) ((int) arr_3 [i_2]))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3726170323094779083LL)) ? (((/* implicit */int) arr_8 [i_1] [i_3 + 2] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_0 [i_1 + 1] [i_0]))));
                        var_14 = ((/* implicit */long long int) min((var_14), (var_2)));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */long long int) (+(var_8)))) == (-3726170323094779090LL))))));
                        var_16 |= ((/* implicit */unsigned int) var_6);
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) var_3))))), (((-3726170323094779073LL) ^ (-3726170323094779083LL)))))) ? (((3726170323094779089LL) | (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (-3726170323094779073LL))))));
                    }
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned int) var_8)) - (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((3726170323094779089LL) << (((((-3726170323094779084LL) + (3726170323094779145LL))) - (60LL)))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_0)))))))), (((((((var_4) + (9223372036854775807LL))) >> (((-3726170323094779090LL) + (3726170323094779130LL))))) >> (((((/* implicit */int) var_9)) + (102)))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 4; i_5 < 7; i_5 += 2) 
    {
        for (unsigned char i_6 = 3; i_6 < 7; i_6 += 2) 
        {
            {
                var_20 ^= (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -3726170323094779094LL)) | (((unsigned long long int) var_0))))));
                var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? ((-(min((-3726170323094779092LL), (-3726170323094779090LL))))) : ((~(3726170323094779082LL)))));
            }
        } 
    } 
}
