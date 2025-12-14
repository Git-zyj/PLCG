/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40063
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
    var_11 = min((9007199254740992ULL), (9007199254740988ULL));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14462786533473121423ULL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-54)))));
    var_13 = ((/* implicit */unsigned short) ((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_0 - 1] [i_0 - 3] [i_0] = ((unsigned long long int) var_8);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) max((arr_0 [i_0 + 1]), (3983957540236430188ULL))))) < ((~(((/* implicit */int) (signed char)27))))));
                            var_16 = ((((/* implicit */_Bool) 540988380U)) ? (1624077242732145320ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17429))));
                        }
                    } 
                } 
            }
        } 
    } 
}
