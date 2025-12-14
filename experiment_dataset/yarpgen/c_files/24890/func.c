/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24890
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] = (!(((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) (short)28672)))))));
                var_11 = ((/* implicit */signed char) (short)-28672);
                arr_5 [i_0] [(short)6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 18446744073709551615ULL))) ? (((/* implicit */unsigned long long int) 1500473623U)) : (((((/* implicit */_Bool) (short)28671)) ? (max((((/* implicit */unsigned long long int) 2794493654U)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)12))))))));
                var_12 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((18446744073709551615ULL) > (18446744073709551598ULL))))));
                arr_6 [i_0] = ((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) 11534100138129228478ULL))))) < (((/* implicit */int) (signed char)40)))) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) ((unsigned short) -4044562019104210722LL)))));
            }
        } 
    } 
    var_13 += ((/* implicit */unsigned short) ((16ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((int) (short)-1)) : (((int) var_9)))))));
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        for (unsigned char i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            {
                var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15ULL)) || (((/* implicit */_Bool) 2097151LL))));
                arr_11 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) var_9)) ? (-2097149LL) : (-8604060400455628909LL)))))));
            }
        } 
    } 
}
