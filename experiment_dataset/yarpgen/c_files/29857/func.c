/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29857
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
    var_11 = ((/* implicit */short) (+((-(((/* implicit */int) var_5))))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (~(2723953129U)))) != ((+(var_6)))))) * (((/* implicit */int) (((~(var_8))) > (((var_7) * (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 ^= ((/* implicit */long long int) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((arr_6 [(signed char)12] [i_2] [5U] [(_Bool)1]) << (((var_4) - (6046929522270090985LL))))))));
                    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [(_Bool)1] [(signed char)12])))))) ? (-6195990854476456201LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (arr_5 [i_2] [i_2]))))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
                }
            } 
        } 
    }
}
