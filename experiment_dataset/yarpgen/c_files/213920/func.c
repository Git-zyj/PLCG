/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213920
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
    var_17 += ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)221))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 += ((/* implicit */signed char) max((((/* implicit */long long int) (-(((((/* implicit */int) arr_0 [(unsigned short)0])) / (((/* implicit */int) (signed char)67))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0]))))) ? (((3734307662497398014LL) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))));
                var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)22))))) ? (((/* implicit */int) ((-1994839119) < (((/* implicit */int) (short)-4))))) : (((/* implicit */int) ((unsigned short) (signed char)9)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (unsigned int i_4 = 3; i_4 < 20; i_4 += 4) 
            {
                {
                    arr_13 [i_2] [i_3] [(short)17] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) arr_6 [i_3])) < (((/* implicit */int) arr_5 [i_2] [i_2]))))), (((((/* implicit */int) (short)4)) << (((((/* implicit */int) (unsigned char)38)) - (29)))))))), (434470321U)));
                    var_20 ^= ((/* implicit */unsigned int) (short)-4);
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */signed char) max((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) : (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3))), (max((var_3), (((/* implicit */unsigned int) var_4))))));
}
