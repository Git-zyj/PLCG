/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28426
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
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned char)57);
                arr_6 [i_0] [i_1] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)20368)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (594257096U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-18413))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((short) (_Bool)1))), (var_6)));
    var_15 = ((/* implicit */unsigned short) var_0);
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */short) ((signed char) (~(-6770321474816395894LL))))), ((short)18412)));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                arr_15 [i_2] [i_3] [(short)18] |= ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_11 [i_2]) : (arr_11 [i_2]))))));
                var_18 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)3)))) << (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2))))))) << (((/* implicit */int) ((((/* implicit */_Bool) ((short) 18446744073709551606ULL))) || (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) == (var_4))))))));
                arr_16 [i_3] [i_3] [i_3] = (unsigned short)23536;
                var_19 = ((/* implicit */unsigned int) ((_Bool) (-(4294967289U))));
            }
        } 
    } 
}
