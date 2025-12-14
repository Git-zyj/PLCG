/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36055
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) max((min((9790483778684677283ULL), (((/* implicit */unsigned long long int) 1567499356)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (8037569321219276052LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33531))))))));
                arr_6 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-77)) ? (498341762U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77)))))), (9790483778684677304ULL)));
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) 9790483778684677296ULL))));
                arr_7 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)41056)), (((((/* implicit */_Bool) (signed char)-24)) ? (2156541926U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15298)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6091)) - (((/* implicit */int) (unsigned short)6091))))) ? (((((/* implicit */_Bool) 4040906381206809355ULL)) ? (8656260295024874339ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))))) : (((9790483778684677277ULL) << (((((/* implicit */int) (signed char)-6)) + (35)))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((498341739U) << (((3796625534U) - (3796625515U)))))) ? (9790483778684677288ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57433)))));
            }
        } 
    } 
    var_13 = max((((max((((/* implicit */unsigned long long int) (unsigned short)0)), (9790483778684677296ULL))) ^ (min((7000664610802991629ULL), (((/* implicit */unsigned long long int) 2911013012U)))))), ((+(max((((/* implicit */unsigned long long int) 1060359487)), (8656260295024874333ULL))))));
}
