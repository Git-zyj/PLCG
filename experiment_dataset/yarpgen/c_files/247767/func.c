/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247767
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [6U] [i_0] [6U] |= (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -5020056722201780239LL)) == (14482166060013894281ULL))))) : (14482166060013894281ULL));
                    var_11 *= ((/* implicit */unsigned int) ((((3964578013695657335ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))))) << ((((-(((/* implicit */int) arr_3 [i_2 + 1] [i_2] [(unsigned char)14])))) + (137)))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) (-((~(((/* implicit */int) var_8))))));
}
