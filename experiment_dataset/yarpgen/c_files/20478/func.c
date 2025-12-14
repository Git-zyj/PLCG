/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20478
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
    var_16 = (!(((/* implicit */_Bool) ((((/* implicit */int) (!(var_5)))) + (((int) 6431158885954876374LL))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [i_0] [8LL] [i_2]) + (arr_7 [i_0] [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (arr_7 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) -480143299)))) : (((((/* implicit */_Bool) 7952442316288464102ULL)) ? (arr_7 [i_0] [i_1] [i_2]) : (arr_7 [i_0] [i_1] [i_2])))));
                    var_18 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_1 [i_2]))))));
                    var_19 = (unsigned short)8659;
                }
            } 
        } 
    } 
}
