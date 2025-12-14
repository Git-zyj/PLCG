/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1922
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) var_18)) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) > (var_5))))))) : (((/* implicit */int) var_17)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) -1068655855);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) 1771715732)), (arr_5 [i_0] [i_1] [i_2])))))) ? (var_16) : (((/* implicit */int) ((unsigned char) var_16)))));
                    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                    var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(var_7)))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)101)) ? (207174966U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)105)))))))) | (min((((/* implicit */long long int) arr_6 [i_1 + 1] [i_2])), (((var_1) ^ (var_15)))))));
                    arr_9 [i_0 + 4] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned int) var_1))))) ^ (((((/* implicit */_Bool) (~(arr_5 [i_0] [i_1] [i_2])))) ? (((/* implicit */long long int) arr_6 [i_0 + 4] [i_2])) : ((~(-9223372036854775784LL)))))));
                }
            } 
        } 
    } 
}
