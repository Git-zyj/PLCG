/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19509
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((signed char) var_2));
                arr_6 [i_0] [i_1] [i_1] = max((((/* implicit */unsigned long long int) var_9)), (18446744073709551609ULL));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) max((18446744073709551615ULL), ((~(18446744073709551609ULL)))));
                var_19 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26355)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? ((((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((arr_5 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (~(((/* implicit */int) (short)-26798))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)82)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))) ^ (max((((((/* implicit */_Bool) (short)26354)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_8))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_13)), (9717048623617907533ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-11)) >= (((/* implicit */int) var_17))))) <= (((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */unsigned long long int) var_13))))));
    var_22 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (signed char i_3 = 3; i_3 < 17; i_3 += 1) 
        {
            {
                var_23 ^= ((/* implicit */unsigned char) 268435456U);
                var_24 += ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2] [(signed char)8])) * ((-(((/* implicit */int) arr_10 [i_2] [(unsigned char)14]))))));
                var_25 -= ((/* implicit */unsigned char) ((((((18446744073709551605ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28526))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (15375675923603474363ULL)))))))));
            }
        } 
    } 
}
