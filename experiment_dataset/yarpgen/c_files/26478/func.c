/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26478
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27314)) - (((/* implicit */int) (_Bool)1))))) ? (((var_2) + (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) max((var_6), (((/* implicit */int) (unsigned short)1549)))))))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) ((_Bool) (unsigned short)1550))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 &= ((/* implicit */long long int) (unsigned short)1558);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_8 [i_1] = ((/* implicit */int) var_0);
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)4))))))) ? (((((/* implicit */long long int) arr_3 [i_0])) / (var_2))) : (arr_6 [i_0]))))));
                        }
                    } 
                } 
                arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)63986)) % (((/* implicit */int) (unsigned short)1549))));
            }
        } 
    } 
}
