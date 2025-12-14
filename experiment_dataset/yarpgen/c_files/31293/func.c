/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31293
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
    var_18 &= (+(max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != (var_1)))), (var_14))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */_Bool) var_4);
                    var_20 -= ((((/* implicit */_Bool) 15808669057893558506ULL)) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)7895)) ? (((/* implicit */int) var_10)) : (var_2)))))) : ((+(((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_1 [i_2]))))));
                    var_21 += ((/* implicit */int) ((unsigned char) max(((+(arr_0 [8U]))), (((/* implicit */int) (!((_Bool)0)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (+(min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)20261)) : (((/* implicit */int) var_6))))))));
    var_23 = var_7;
}
