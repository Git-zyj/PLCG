/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40210
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) == ((-(var_5)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_1] = ((/* implicit */unsigned char) (~((-(arr_5 [i_2])))));
                    var_18 = ((/* implicit */_Bool) var_0);
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) -812092446))));
                    arr_7 [7U] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) var_3);
                    var_20 = ((/* implicit */_Bool) (~(((((((/* implicit */int) (signed char)-127)) + (2147483647))) << (((/* implicit */int) var_8))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) + (((/* implicit */int) ((_Bool) var_2)))))) - (var_3)));
    var_22 = ((/* implicit */long long int) (!(var_14)));
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) var_0)) : (var_13)));
}
