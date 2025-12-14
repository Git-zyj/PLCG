/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218915
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_11)))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) 1607253579906060156LL)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1]))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46826)) >> (((((/* implicit */int) var_12)) - (5153)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) : (((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2 - 2] [i_3])) ^ (var_15)))))) ? ((~((((_Bool)0) ? (((/* implicit */long long int) -1)) : (-1993773592892604728LL))))) : (((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)26)))) + (((/* implicit */int) (_Bool)1)))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))))) | ((-(var_4)))))) | ((((!(((/* implicit */_Bool) var_5)))) ? (((unsigned long long int) arr_2 [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)51))))))));
                        }
                    } 
                } 
                var_19 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) ((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)11] [i_1])))))))));
                var_20 = ((/* implicit */long long int) (~((((!(((/* implicit */_Bool) (unsigned char)95)))) ? (((/* implicit */int) ((6204440806482298614ULL) > (((/* implicit */unsigned long long int) var_13))))) : (((((/* implicit */int) (signed char)80)) + (((/* implicit */int) var_9))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((unsigned char) (unsigned short)12510)))));
    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) ((int) var_4))))));
}
