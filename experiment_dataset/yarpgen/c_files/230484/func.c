/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230484
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
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_18 = ((unsigned char) arr_0 [i_2]);
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((2936245912067758863ULL), (((/* implicit */unsigned long long int) (signed char)1)))))))) != (((/* implicit */int) ((((2936245912067758863ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) != ((+(var_3))))))));
                }
            } 
        } 
        var_20 = var_0;
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? ((+(((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_3 [i_0 - 4] [i_0] [i_0]))))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_1 [i_0])))))))));
        var_22 = ((/* implicit */unsigned char) (~(((((((/* implicit */int) (short)-11011)) & (((/* implicit */int) var_10)))) ^ (((/* implicit */int) var_5))))));
    }
    var_23 = ((/* implicit */signed char) (+(min((2936245912067758863ULL), (((/* implicit */unsigned long long int) var_4))))));
}
