/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191763
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
    var_14 = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */unsigned int) var_8)), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (2324048986U))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)83))) >= (arr_0 [(unsigned char)17])))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */long long int) (+((~(max((3211375982047262904ULL), (((/* implicit */unsigned long long int) var_5))))))));
                    arr_10 [i_0] [(unsigned short)4] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_0] [(unsigned short)21] [i_0])) >= (arr_0 [i_2])))) <= (((/* implicit */int) ((unsigned char) ((unsigned short) 15235368091662288712ULL))))));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (-(((arr_2 [i_0] [i_0] [i_0]) ^ (((/* implicit */int) (unsigned char)67)))))))));
    }
}
