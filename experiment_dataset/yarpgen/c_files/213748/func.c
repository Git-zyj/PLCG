/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213748
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
    var_17 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) -3LL)) + (((unsigned long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 313897376U)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [2] [i_2] |= ((/* implicit */int) 3838563922062618434ULL);
                    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((long long int) var_10))) && (((/* implicit */_Bool) var_2)))) ? (739141025U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 2999087966U))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-32)), (15728640U))))))))));
                    arr_7 [i_0] [i_0] [(unsigned short)9] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((3838563922062618434ULL) < (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2]))))) >= (arr_1 [4LL])));
                    arr_8 [i_0] [i_1] [3] [12] = ((/* implicit */short) (((~(-5065289700934227205LL))) << ((((+(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_3)) : (18446744073709551615ULL))))) - (4425024628760089508ULL)))));
                }
            } 
        } 
    } 
}
