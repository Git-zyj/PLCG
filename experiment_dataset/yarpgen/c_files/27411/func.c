/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27411
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
    var_11 = ((/* implicit */short) ((var_1) / (var_8)));
    var_12 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)255))) == (1741829847156497006LL))))) % (arr_2 [(unsigned char)18])))) > (((((/* implicit */_Bool) 3777225326U)) ? (-1741829847156497007LL) : (((/* implicit */long long int) arr_2 [i_0 + 1]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_12 [i_0] [i_0] [(unsigned char)22] = ((/* implicit */int) ((((((/* implicit */_Bool) max(((-2147483647 - 1)), (866751045)))) ? (((((/* implicit */long long int) arr_10 [i_0] [24LL])) / (-3032903825760841526LL))) : (((406544280226380523LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))) < (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13528))) ^ (((((/* implicit */unsigned int) -866751045)) + (2556322944U))))))));
                    arr_13 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned long long int) 3032903825760841534LL));
                }
            } 
        } 
        arr_14 [i_0] [i_0] = var_0;
        arr_15 [9LL] = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */short) var_7)), ((short)1))))));
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((-(arr_2 [i_0 - 1]))), (((unsigned int) arr_2 [i_0 - 1]))));
    }
}
