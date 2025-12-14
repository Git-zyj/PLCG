/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53031
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 10237859559182594344ULL)) ? (4764247254851281933LL) : (((/* implicit */long long int) 846653131U)))), (9007199254740992LL))))));
                    var_20 = ((/* implicit */unsigned short) (-((+((-(-9007199254740993LL)))))));
                    arr_7 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) -9007199254741019LL);
                    var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((9007199254740992LL), (9007199254741010LL)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)36))))) : (2863619198U)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            {
                var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2035130936)) ? (((/* implicit */int) (short)16132)) : (((/* implicit */int) (signed char)-17))))))) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) (short)17748))))))) : (1282257313U)));
                var_23 = ((/* implicit */unsigned char) 5041289520184113828LL);
                arr_13 [i_3] [i_3] [i_4] = ((/* implicit */long long int) 472062438);
            }
        } 
    } 
    var_24 -= ((/* implicit */unsigned int) (signed char)-35);
}
