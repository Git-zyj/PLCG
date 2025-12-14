/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236122
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) arr_2 [i_0]))))))));
                    arr_10 [i_1] [i_0] = ((/* implicit */unsigned long long int) (+((~((+(((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (~((-((~(12652484513388692579ULL)))))));
                var_18 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned char)11))))));
                arr_17 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((~(12652484513388692584ULL))))))));
            }
        } 
    } 
    var_19 ^= (~((~(12652484513388692584ULL))));
    var_20 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
}
