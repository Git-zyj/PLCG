/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248698
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
    var_17 = var_0;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_18 ^= ((((/* implicit */_Bool) (signed char)109)) ? (((((_Bool) (unsigned char)83)) ? (arr_1 [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_7 [i_0 - 1] [i_1] [i_2]))), (((/* implicit */unsigned int) (unsigned char)83))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((short) (unsigned char)70));
                    var_19 = ((/* implicit */_Bool) (unsigned char)173);
                    arr_9 [i_0] [(short)16] [i_2 + 1] [(unsigned char)12] &= ((/* implicit */unsigned char) ((((_Bool) (short)31183)) ? (min((((/* implicit */int) (unsigned char)181)), (((((/* implicit */_Bool) arr_4 [8] [14LL] [(signed char)16])) ? (((/* implicit */int) arr_4 [(unsigned short)18] [18LL] [i_2])) : (((/* implicit */int) var_13)))))) : (((((/* implicit */int) (unsigned char)83)) | (((/* implicit */int) (unsigned short)475))))));
                }
            } 
        } 
    } 
}
