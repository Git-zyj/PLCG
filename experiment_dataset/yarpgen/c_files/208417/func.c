/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208417
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
    var_15 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) ((4028501914U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_17 = ((/* implicit */short) (unsigned char)29);
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */_Bool) (((+((+(arr_6 [i_0] [i_0] [i_0]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        var_19 &= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) != (var_10)))))))));
    }
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))))));
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((min((var_14), (((/* implicit */unsigned long long int) (unsigned short)13221)))), (((/* implicit */unsigned long long int) ((((-1550247864) != (((/* implicit */int) arr_13 [i_4])))) ? (((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (((/* implicit */int) (short)18110)) : (((/* implicit */int) (short)-29131)))) : (((/* implicit */int) arr_14 [i_5]))))))))));
                var_22 = ((/* implicit */short) (-(((/* implicit */int) arr_15 [i_5] [i_4]))));
            }
        } 
    } 
}
