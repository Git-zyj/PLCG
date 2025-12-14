/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231240
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
    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) max(((signed char)-85), (((/* implicit */signed char) ((-2152361299600331991LL) > (((/* implicit */long long int) ((/* implicit */int) (short)511)))))))))));
    var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2490788952492819249LL)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85)))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (var_10) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) var_13))))) ? (var_1) : (var_10)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */long long int) (-(arr_3 [i_0] [17ULL] [(unsigned char)16])));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((int) arr_3 [i_0] [i_0] [(unsigned char)19]))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1] [i_0 - 1])) ? (arr_3 [i_0] [i_1] [i_1]) : (((/* implicit */int) arr_1 [i_0 + 1])))) : (((/* implicit */int) arr_1 [i_0 + 1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 12; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            {
                arr_11 [i_2 - 2] = ((/* implicit */unsigned long long int) (-((-((-(arr_0 [i_2])))))));
                arr_12 [i_2] [i_3] = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
}
