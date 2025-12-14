/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52840
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
    var_10 = ((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) max(((signed char)-86), (var_6))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_4))));
                    var_12 = ((/* implicit */unsigned int) ((int) (unsigned char)245));
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_4), (890871764994870079LL)))) || ((!(((/* implicit */_Bool) 528482304U)))))) || (((/* implicit */_Bool) arr_3 [(_Bool)1]))));
                    var_13 = (unsigned short)51509;
                    var_14 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) -4151082396526786385LL)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (unsigned char)7))))));
                }
            } 
        } 
    } 
}
