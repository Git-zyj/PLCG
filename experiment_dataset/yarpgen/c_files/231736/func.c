/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231736
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
    var_10 = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-90))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((9006649498927104ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))));
                    var_11 = ((/* implicit */short) (-(min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_0] [(unsigned char)6])))), ((~(((/* implicit */int) arr_5 [i_0]))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-90)), ((unsigned char)27)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)228)))))) << (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (var_5))) > (((/* implicit */int) var_2)))))));
    var_13 += ((/* implicit */unsigned char) ((min((((((/* implicit */unsigned int) var_5)) ^ (var_6))), (((/* implicit */unsigned int) min((((/* implicit */signed char) var_8)), ((signed char)-90)))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 18437737424210624532ULL))))));
}
