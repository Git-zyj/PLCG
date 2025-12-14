/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193052
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) arr_0 [(short)9] [(short)9]);
        var_13 &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))) == (-9076300866574854234LL)));
                        arr_11 [i_0] = ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) min((arr_1 [i_2]), (((/* implicit */short) var_8))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 3136191394U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19115))))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-46))))))))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (unsigned short)65505)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1)))))) + (((((/* implicit */_Bool) (unsigned short)65505)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))) : (var_10)))))));
    }
    var_16 = ((/* implicit */unsigned int) min((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (var_7)))) : (((/* implicit */int) var_2)))))));
}
