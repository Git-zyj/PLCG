/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248110
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_10 = ((/* implicit */int) arr_1 [i_0] [(unsigned char)15]);
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) (!(var_1)))) <= (var_6)))) : (((((/* implicit */int) (_Bool)1)) >> (((852195048) - (852195048)))))));
        arr_3 [i_0] [(signed char)13] = ((signed char) ((((/* implicit */_Bool) var_0)) ? (var_6) : (arr_2 [i_0] [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0]) < (1803580784)));
        var_12 = ((/* implicit */short) min((((signed char) 3724152172666397198ULL)), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (arr_1 [i_0] [i_0]))))));
    }
    /* LoopNest 3 */
    for (short i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (short i_3 = 2; i_3 < 11; i_3 += 3) 
            {
                {
                    arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != (4865269226843577469LL)));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)6324)) ? (min((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)64988)) : (((/* implicit */int) (signed char)-8)))), (var_6))) : (((/* implicit */int) ((short) arr_5 [i_3 + 1])))));
                    var_14 = ((/* implicit */long long int) (signed char)-17);
                }
            } 
        } 
    } 
}
