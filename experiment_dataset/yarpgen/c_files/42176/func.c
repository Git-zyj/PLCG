/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42176
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
    var_10 = ((/* implicit */int) min(((~((~(var_8))))), (var_0)));
    var_11 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)14)) / (((/* implicit */int) (unsigned char)62))))) ? (((/* implicit */unsigned long long int) (-(-1877019432)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65521))) : (var_9))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_12 = ((((/* implicit */int) ((short) max((((/* implicit */unsigned short) (unsigned char)201)), ((unsigned short)16128))))) >> (((/* implicit */int) ((unsigned short) (!(arr_4 [(signed char)0] [i_1]))))));
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)56)), ((unsigned short)16128))))));
                }
            } 
        } 
    } 
}
