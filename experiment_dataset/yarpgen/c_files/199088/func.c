/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199088
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
    var_13 += ((/* implicit */int) var_5);
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-80)))) ? (((/* implicit */int) ((-657670350) != (2147483647)))) : (((/* implicit */int) var_12)))))));
    var_15 = ((/* implicit */unsigned short) ((unsigned char) ((signed char) (!(((/* implicit */_Bool) (signed char)-43))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_16 -= ((/* implicit */long long int) ((_Bool) (short)32767));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_9 [i_1] = ((/* implicit */short) ((min((-1052188157), (((/* implicit */int) (short)32758)))) > (min((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_3])) ? (arr_4 [i_0] [i_1] [i_3]) : (arr_4 [i_1] [i_2] [i_3]))), (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) (signed char)20))))))));
                        var_17 = ((/* implicit */unsigned char) var_11);
                    }
                } 
            } 
        } 
    }
}
