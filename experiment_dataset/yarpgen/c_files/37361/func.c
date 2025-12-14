/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37361
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -4878487421180112806LL)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))), (((var_7) | (((/* implicit */int) (unsigned char)153))))))) ? (((((/* implicit */int) arr_5 [i_0] [i_0])) - (((/* implicit */int) (short)-10990)))) : (((/* implicit */int) min((((/* implicit */short) arr_3 [5] [i_1])), (arr_5 [i_0] [i_0]))))));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >= (max(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 9223372036854775800LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)20936)))))))))));
                arr_8 [i_0] = arr_2 [i_0];
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 1) 
        {
            {
                var_20 += ((/* implicit */long long int) ((((max((((/* implicit */long long int) (short)-32750)), (-707406237515466677LL))) / (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_2] [i_3]))))))) == (((min((var_15), ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_6))))) : (((long long int) (unsigned short)37524))))));
                arr_13 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) max((arr_10 [i_2 + 1] [i_3 + 1]), (arr_10 [i_2 + 1] [i_3 + 1]))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((unsigned long long int) (+((((_Bool)1) ? (87494295) : (arr_6 [i_3])))))))));
            }
        } 
    } 
}
