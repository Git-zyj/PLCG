/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25573
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
    var_13 = ((/* implicit */signed char) (-(((((/* implicit */int) var_10)) & (((((/* implicit */_Bool) (short)795)) ? (((/* implicit */int) (short)4690)) : (((/* implicit */int) var_10))))))));
    var_14 = ((/* implicit */int) (unsigned char)56);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) (((((~(((/* implicit */int) (_Bool)0)))) + (2147483647))) >> (((var_5) - (15574235209155577144ULL)))));
                    var_16 = (signed char)127;
                    var_17 = ((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) (signed char)-127)) ? (3035033376U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32766))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((long long int) var_8)))));
                                var_19 = ((((/* implicit */_Bool) 901166641)) ? ((-(((((/* implicit */_Bool) var_11)) ? (arr_9 [i_0] [i_1] [i_1] [i_3]) : (1517181467))))) : (((((/* implicit */_Bool) 2482371242U)) ? ((+((-2147483647 - 1)))) : ((+(((/* implicit */int) var_8)))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_11 [i_0] [(_Bool)1] [i_2] [i_3])))) ? (((/* implicit */int) ((unsigned char) var_11))) : (arr_0 [i_2])))) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4 - 2] [i_1 - 2] [i_1 - 2])) && (((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)2818)) && (((/* implicit */_Bool) var_9)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (var_5))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = var_10;
}
