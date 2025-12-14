/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206329
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned int) min((arr_2 [i_0]), (((/* implicit */signed char) var_9))));
                arr_8 [i_1] [i_0] [(short)10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) arr_6 [i_1]))))) ? (var_7) : (min((8791798054912LL), (0LL)))))) ? (((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */unsigned long long int) 8791798054894LL)) : (2ULL))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (var_8) : (var_0))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            {
                arr_16 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) ((((/* implicit */int) ((short) var_6))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2])))))))) : (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (short)-32242))))) < (((((/* implicit */_Bool) 1753877566U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)46))))))))));
                arr_17 [i_3] = ((((_Bool) 18446744073709551603ULL)) || (((/* implicit */_Bool) min((arr_15 [i_3] [i_3 - 1] [i_3 - 1]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1)))))))));
                var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((((_Bool)0) ? (3256319197U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_14 [i_3])))))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((((var_8) + (9223372036854775807LL))) >> (min((var_1), (((/* implicit */unsigned int) var_11)))))), (var_5))))));
                var_15 = -2189245150510257518LL;
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 4; i_4 < 14; i_4 += 2) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            {
                arr_24 [i_5] [i_5 - 1] = ((/* implicit */unsigned long long int) arr_5 [15ULL] [i_5 - 1]);
                arr_25 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_9 [i_5])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (var_8)));
                var_16 = ((/* implicit */unsigned long long int) ((long long int) (_Bool)0));
            }
        } 
    } 
}
