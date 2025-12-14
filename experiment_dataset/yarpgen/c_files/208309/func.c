/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208309
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((unsigned int) max((arr_8 [i_2] [2LL] [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_3)))))))))));
                    var_14 = ((/* implicit */int) var_6);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_11))))), (var_6)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_1)) ? (var_7) : (min((var_7), (((/* implicit */unsigned int) var_4))))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            {
                var_16 = ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_12 [i_3])))) ^ (((((/* implicit */_Bool) arr_9 [i_3] [i_4])) ? (2446843197906188210LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4])))))))));
                arr_16 [13LL] [i_4] [i_4] = ((/* implicit */unsigned int) var_2);
                var_17 -= ((long long int) ((unsigned short) arr_15 [13LL] [13LL] [i_4]));
            }
        } 
    } 
}
