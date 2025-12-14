/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230191
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 &= ((/* implicit */signed char) (_Bool)1);
                    var_17 = ((/* implicit */int) arr_1 [(_Bool)1]);
                    arr_8 [i_0] [i_1] [i_2] = (+((-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [6LL])) : (1737031159000144575ULL))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)118))));
    /* LoopNest 2 */
    for (signed char i_3 = 4; i_3 < 23; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            {
                arr_14 [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_10 [i_4] [i_3 - 3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [i_4])) || (((/* implicit */_Bool) var_11)))))) : (max((1737031159000144586ULL), (((/* implicit */unsigned long long int) (signed char)-16))))))) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_4])) ? (min((var_7), (((/* implicit */unsigned int) arr_12 [i_4])))) : (((unsigned int) var_3)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                arr_15 [14ULL] [i_3] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(((/* implicit */int) (short)12114))))), (((((-2559672129670262484LL) + (9223372036854775807LL))) << (0ULL)))));
                arr_16 [i_3] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_11 [i_3] [i_3 - 2]))))));
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) ((_Bool) max(((short)9127), (((/* implicit */short) (signed char)-54))))))));
}
