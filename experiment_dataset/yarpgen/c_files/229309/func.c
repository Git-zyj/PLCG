/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229309
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)25998)) || (((/* implicit */_Bool) (unsigned short)16091)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (4194176LL)))) ? (((/* implicit */int) (unsigned short)39553)) : ((~(((/* implicit */int) var_13))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0] [(_Bool)1] [i_2])) : (((/* implicit */int) (_Bool)1))));
                    arr_7 [i_0] = ((/* implicit */signed char) var_1);
                    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_15)))))), ((+((-(arr_6 [i_2])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) (+(11503293651319055854ULL)));
    var_21 = ((/* implicit */unsigned long long int) ((0U) >> (((/* implicit */int) var_7))));
}
