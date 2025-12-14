/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220135
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
    var_11 = ((/* implicit */unsigned long long int) max((var_0), (((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) -3LL)) ? (3LL) : (11LL))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_3)) : (-4008777728296852840LL)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_1] [(unsigned short)11] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(max((((/* implicit */int) (unsigned short)20432)), (-1683518257))))))));
                arr_7 [i_1] = ((/* implicit */unsigned char) arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_12 [i_1] [i_1] = ((/* implicit */short) max((-1900728824), (((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_1]))))));
                            arr_13 [i_1] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */short) var_2)), (var_1)))), (max((var_9), (arr_2 [i_1])))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))) <= (max((744947493U), (((/* implicit */unsigned int) arr_10 [i_0] [16ULL] [i_0] [i_1]))))))) : (((/* implicit */int) arr_9 [i_1] [i_1])));
                        }
                    } 
                } 
            }
        } 
    } 
}
