/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28979
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
    var_17 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((long long int) ((((/* implicit */int) (unsigned char)156)) | (((/* implicit */int) arr_5 [i_0 - 1]))));
                var_18 = ((/* implicit */short) ((_Bool) (~(((((/* implicit */_Bool) (unsigned short)2600)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : (7812424385679202395ULL))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 576460752303161344LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL)));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -7738689032435137756LL)) ? (((/* implicit */int) (unsigned char)171)) : (1539544099)));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7738689032435137755LL)) ? (-1539544100) : (((/* implicit */int) (_Bool)1))))) && (((((/* implicit */int) var_7)) > (((/* implicit */int) arr_4 [i_0]))))));
            }
        } 
    } 
    var_20 &= ((/* implicit */short) ((_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
}
