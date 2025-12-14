/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196507
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
    var_16 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_0))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (570931384)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_8 [i_0 - 2] [i_1] [2ULL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1] [(short)24]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) min(((short)-30689), ((short)-30674)))))))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */int) (short)-30689)) >= (((/* implicit */int) (!(((/* implicit */_Bool) (short)30673))))))))));
                }
            } 
        } 
    } 
    var_18 = max(((short)30673), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)30677)))) > (max((590459707U), (((/* implicit */unsigned int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 18; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)36781)), ((+((+(2083743618U)))))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) (short)23234)))))));
                var_21 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)31)), ((+(var_6))))))));
            }
        } 
    } 
}
