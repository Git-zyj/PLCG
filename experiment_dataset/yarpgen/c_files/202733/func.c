/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202733
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
    var_15 = ((/* implicit */signed char) (((~(min((12641874410523679955ULL), (((/* implicit */unsigned long long int) (signed char)81)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0 + 1]))) ? (min((max((14285107767383141879ULL), (((/* implicit */unsigned long long int) (short)-32751)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)5))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_1])) ? (min((((/* implicit */int) (unsigned short)56330)), (132120576))) : (((/* implicit */int) min(((unsigned short)11805), ((unsigned short)17)))))))));
                arr_8 [i_1] [i_1] = ((/* implicit */signed char) var_8);
                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_0] [i_1])) % (((/* implicit */int) max(((unsigned char)128), (((/* implicit */unsigned char) (signed char)-23)))))));
                arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 3] [i_0 - 2])) : (((/* implicit */int) arr_4 [i_0] [i_1 + 2] [i_0 + 3])))));
            }
        } 
    } 
}
