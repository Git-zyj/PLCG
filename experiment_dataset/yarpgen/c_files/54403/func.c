/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54403
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [(unsigned short)4] [i_1] [i_1] = ((/* implicit */unsigned char) arr_3 [i_0]);
                arr_7 [7U] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-20007)) ? (((/* implicit */int) (unsigned short)2042)) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)79)), ((unsigned short)2046)))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) min(((signed char)-54), (((/* implicit */signed char) var_12))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-54))) / (var_8))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
}
