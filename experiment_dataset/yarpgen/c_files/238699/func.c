/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238699
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
    var_10 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_0] [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (((var_4) & (((/* implicit */unsigned long long int) 1951363445U))))))));
                arr_6 [(unsigned char)0] [(unsigned char)0] [i_1] = ((/* implicit */_Bool) arr_0 [i_0]);
                arr_7 [i_1] [4] = (+((-2147483647 - 1)));
                var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned char)12)), (13048984474497076588ULL)));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_3)), (5397759599212475028ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14U)) ? (1974113878U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176)))))))))));
            }
        } 
    } 
}
