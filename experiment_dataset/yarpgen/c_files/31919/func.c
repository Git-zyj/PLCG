/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31919
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-7259))))), (181878975252780433ULL)));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_13 *= ((/* implicit */unsigned char) arr_10 [i_0] [i_1 - 1]);
                        var_14 = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned int) (short)31247)), (857544355U))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned int) ((18264865098456771183ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 3758096384U))))));
    }
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */_Bool) var_10);
        arr_15 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1849196131015666784LL))));
    }
    var_16 = ((/* implicit */unsigned int) var_8);
}
