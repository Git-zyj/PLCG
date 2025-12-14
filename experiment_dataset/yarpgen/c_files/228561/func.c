/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228561
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
    var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) min(((unsigned short)30439), ((unsigned short)15965))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [8ULL] [i_0] [i_1] |= ((arr_3 [i_0]) + (((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned long long int) min((arr_2 [8ULL]), (((/* implicit */long long int) var_7))))) : (((((/* implicit */unsigned long long int) var_7)) + (var_2))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) var_3);
                arr_7 [4ULL] [4ULL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7)))) ? ((-(arr_2 [(unsigned short)4]))) : (((((/* implicit */_Bool) var_0)) ? (arr_2 [0ULL]) : (((/* implicit */long long int) arr_0 [i_0]))))))) || (((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) arr_2 [4ULL])), (13775982914912918911ULL))))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_12);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) var_9);
                arr_14 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 2684085041U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) : (arr_9 [i_3 + 3] [i_3 + 1])))))) % ((+(((((/* implicit */_Bool) arr_13 [13ULL] [i_3])) ? (10894740515018802750ULL) : (((/* implicit */unsigned long long int) 4514462722024386046LL))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_1);
    var_18 = ((/* implicit */signed char) var_6);
}
