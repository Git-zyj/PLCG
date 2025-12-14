/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227790
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((var_13) * (((/* implicit */long long int) ((/* implicit */int) (!(((_Bool) 2004448127U))))))));
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_6)) / (arr_5 [i_2] [i_2 + 1]))) >= (((arr_5 [i_2] [i_2 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_0)))) == ((~(var_1))))))) < (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))) * (var_7))))));
    var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 1251409766U)) && (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (_Bool)1))))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39086)))));
    var_20 = ((/* implicit */long long int) var_12);
}
