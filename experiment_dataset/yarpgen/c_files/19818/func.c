/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19818
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (((+(3564879307014999726LL))) < (((/* implicit */long long int) ((unsigned int) arr_0 [i_0] [23]))))))) < ((+(min((((/* implicit */long long int) 1056629071U)), (var_6)))))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */long long int) ((short) (unsigned char)61));
                        var_18 = ((/* implicit */unsigned char) arr_10 [i_3 + 1] [i_2 - 2] [i_1] [i_0]);
                    }
                } 
            } 
        } 
    }
    var_19 = ((((/* implicit */_Bool) -1405018326)) || (((((/* implicit */int) var_11)) > (((((/* implicit */_Bool) (unsigned char)0)) ? (1405018335) : (((/* implicit */int) (unsigned char)194)))))));
    var_20 = ((/* implicit */short) min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) ((short) 1405018325)))));
}
