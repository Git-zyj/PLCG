/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243472
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
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = var_12;
                var_19 &= ((/* implicit */unsigned char) ((((/* implicit */int) min((var_16), ((short)-256)))) * (((/* implicit */int) (unsigned short)26489))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((short) ((var_4) >= (((/* implicit */long long int) ((((/* implicit */int) var_15)) - (((/* implicit */int) (unsigned char)99))))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            {
                arr_12 [i_3] [16ULL] = ((/* implicit */unsigned long long int) ((unsigned int) var_3));
                var_21 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 3226503214U)) > (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1763))) + (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (short)1763))))));
                arr_13 [0LL] &= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((signed char) (signed char)-28))), (((var_14) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28)))))));
                arr_14 [i_2] [9ULL] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned short)13317), (((/* implicit */unsigned short) ((((/* implicit */int) (short)1763)) < (((/* implicit */int) (short)-1751)))))))) <= (1994175887)));
                arr_15 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)18228)) && (((/* implicit */_Bool) (unsigned char)150)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (unsigned char)90))))) : (((/* implicit */int) (short)-5))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (96U)))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) 4294967295U);
}
