/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233444
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((8624725723750793708ULL) ^ (((var_14) - (var_5))))) : (((/* implicit */unsigned long long int) var_6))));
    var_19 &= ((/* implicit */unsigned int) var_2);
    var_20 = ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))) / (8624725723750793718ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9));
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) (short)-1))))) : ((-(((/* implicit */int) var_11)))))) ^ (((/* implicit */int) ((-4558478618544686141LL) > (((/* implicit */long long int) ((((/* implicit */int) (signed char)-114)) + (((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_22 -= arr_1 [i_1 + 1] [i_0];
                var_23 = ((-4558478618544686138LL) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) >= (-4558478618544686123LL))))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((4558478618544686141LL) & (4558478618544686156LL)))) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) var_10))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)38322)), (var_2))))));
                                var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-114))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
