/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29405
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
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4289474690U)) != (var_12))))) : (2014080606895593249ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] &= ((/* implicit */short) ((((_Bool) ((signed char) 18446744073709551615ULL))) ? ((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) arr_4 [0U] [0U]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_5 [i_0] [i_1]))))))));
                arr_8 [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */int) (signed char)31)) >= (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        for (long long int i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            {
                var_20 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(_Bool)1] [i_2 - 1])) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) arr_5 [i_3 + 1] [i_2 + 1]))))) ? (max(((-(arr_1 [i_3]))), (max((((/* implicit */unsigned long long int) 1645053379U)), (arr_1 [(signed char)9]))))) : (((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) arr_3 [i_2])))))));
                var_21 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (~(arr_9 [i_2])))) ? (((((/* implicit */int) arr_4 [(short)7] [(unsigned char)17])) >> (((((/* implicit */int) arr_5 [i_2] [i_2 - 1])) - (16847))))) : (((/* implicit */int) (signed char)-16)))));
                var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_3]))) <= (7209739559312575783ULL))), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_3]))) < (arr_11 [i_2] [i_3]))))))) >= ((~(max((((/* implicit */long long int) (signed char)-36)), (130944LL)))))));
            }
        } 
    } 
    var_23 &= ((/* implicit */long long int) var_2);
}
