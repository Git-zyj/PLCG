/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191326
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
    var_14 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                arr_7 [(short)1] = ((/* implicit */unsigned char) ((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned char) -6602618646133431019LL)))))));
                arr_8 [i_0] = ((/* implicit */unsigned short) min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) (short)-19274))))) ? (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65504))))) : (((/* implicit */long long int) ((((/* implicit */int) (short)19281)) ^ (((/* implicit */int) (signed char)102))))))))));
                var_15 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) min(((short)-19281), ((short)19268)))), (min((((/* implicit */unsigned long long int) var_9)), (var_13)))))));
                var_16 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (min((((/* implicit */long long int) (unsigned short)0)), (252201579132747776LL)))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (8686097975170483103LL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((-141646289279711909LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))))) << (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))) : (-141646289279711909LL)))))), (var_11)));
}
