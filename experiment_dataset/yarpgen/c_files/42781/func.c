/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42781
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) max((((4013029715U) - (((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (16775168U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [14LL] [i_1])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1223176483U)) ? (-134217728) : (0)))) : (arr_5 [i_0] [i_1])))));
                var_21 = ((/* implicit */signed char) 3071790817U);
                var_22 = ((/* implicit */short) 281937589U);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) var_13);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (short i_3 = 2; i_3 < 21; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) arr_14 [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_3 + 1]);
                            var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-87))) : (arr_2 [i_5])))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) arr_12 [9U] [i_3]))))))) ? (((long long int) (-(((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_2] [i_3 - 2]), (arr_1 [i_2] [i_3 + 1])))))));
            }
        } 
    } 
}
