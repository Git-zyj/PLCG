/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226725
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+(((unsigned long long int) -9223372036854775806LL))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (+(3960535014U)));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (-(((unsigned int) (~(var_12))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_14 += ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
        var_15 = ((/* implicit */unsigned long long int) (+((+(-9223372036854775784LL)))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    arr_13 [i_3] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-((-(var_0)))))), (min(((~(-9223372036854775779LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))))));
                    arr_14 [5ULL] [i_3] [5ULL] = var_8;
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) var_2))), ((+(((/* implicit */int) var_8))))));
    }
    var_16 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_10)), ((~(1442546396160892062ULL)))));
    var_17 = max((((/* implicit */unsigned int) var_0)), ((~(((unsigned int) (unsigned char)1)))));
    var_18 += ((/* implicit */long long int) ((unsigned char) var_1));
    var_19 = ((/* implicit */_Bool) var_1);
}
