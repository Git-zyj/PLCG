/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247829
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned short) (signed char)-121))), (min((((((/* implicit */_Bool) 1646024909503838448LL)) ? (((/* implicit */long long int) 4294967295U)) : (1646024909503838466LL))), (((/* implicit */long long int) var_2))))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_8)))))) ? (max((((/* implicit */unsigned int) (signed char)126)), (2630240997U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)30347))))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)120)), (1646024909503838466LL)))) && (((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)126)) || (((/* implicit */_Bool) (short)210))))), (arr_4 [i_2 + 1] [i_2 - 1] [i_2]))))));
                }
            } 
        } 
    }
    for (long long int i_3 = 2; i_3 < 14; i_3 += 3) 
    {
        var_13 *= ((/* implicit */unsigned int) max(((~(var_5))), (((long long int) min((((/* implicit */long long int) (unsigned char)255)), (1646024909503838438LL))))));
        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1LL))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        var_15 = ((/* implicit */short) ((2630241015U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-32766)))));
        var_16 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((min((arr_0 [i_4] [i_4]), (((/* implicit */long long int) (_Bool)1)))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) == (arr_11 [i_4] [i_4])))))))), (max(((~(2630240970U))), (((var_3) << (((((/* implicit */int) var_7)) + (61)))))))));
        var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (1428348091)));
    }
    var_18 ^= var_9;
}
