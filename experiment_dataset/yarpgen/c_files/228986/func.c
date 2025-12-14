/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228986
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) (-(((((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) * (((/* implicit */unsigned long long int) var_3))))));
                arr_7 [(unsigned char)1] [i_0] [(unsigned char)1] = arr_3 [i_0];
                arr_8 [i_0] [5U] [i_0] = ((/* implicit */short) ((unsigned long long int) min(((unsigned short)56998), (((/* implicit */unsigned short) (_Bool)1)))));
            }
        } 
    } 
    var_12 &= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)192))) ? (((int) (unsigned char)153)) : (((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) (short)-22273)) : (((/* implicit */int) (unsigned short)32767)))))));
}
