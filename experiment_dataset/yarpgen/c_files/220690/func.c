/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220690
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
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_14 -= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)178)) >= (2036617953))))));
                    var_15 = ((/* implicit */int) 5682639737751244771LL);
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((arr_1 [i_0 - 4] [i_0 - 1]) >> (((((/* implicit */int) arr_0 [i_0] [i_1])) + (18))))))));
                }
            } 
        } 
        arr_8 [8ULL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_10) / (var_10))))));
        var_17 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) && (((/* implicit */_Bool) var_9))))) >= (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (unsigned short)11673))))));
    }
    var_18 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)53372)) ^ (((/* implicit */int) (unsigned short)11652))));
    var_19 = max((((/* implicit */long long int) (unsigned char)108)), (min((((/* implicit */long long int) (unsigned char)187)), (-4540488067234075248LL))));
    var_20 = var_2;
}
