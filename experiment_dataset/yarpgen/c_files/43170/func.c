/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43170
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (var_5)))) ? (((/* implicit */int) var_15)) : (max((((/* implicit */int) var_15)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (unsigned short)464))))))));
    var_18 = ((/* implicit */unsigned short) min((max(((~(((/* implicit */int) (signed char)110)))), (((/* implicit */int) ((unsigned char) (unsigned short)61523))))), (((/* implicit */int) (unsigned short)61523))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4026)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (unsigned short)45958)))))));
                    var_20 = ((/* implicit */signed char) (+(((((((/* implicit */int) arr_4 [i_0])) != (((/* implicit */int) arr_0 [i_1] [(unsigned char)2])))) ? (((/* implicit */int) arr_0 [i_2 - 1] [i_0 + 1])) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 - 1]))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)45939)) + ((~(((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) arr_7 [i_0 + 2] [i_1] [i_1] [i_0]))))))));
                }
            } 
        } 
    } 
    var_22 = ((signed char) var_0);
}
