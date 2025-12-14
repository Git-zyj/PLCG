/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28603
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0]) & (arr_2 [i_1 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (4253876065U)))))))) : ((-((+(var_6)))))));
                var_13 ^= ((/* implicit */unsigned char) max((var_8), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) min((((/* implicit */signed char) arr_3 [17U])), (var_4)))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (-((+((-(((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    arr_13 [i_2] [i_2] = ((/* implicit */_Bool) (unsigned char)81);
                    var_14 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) max(((-(var_0))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))))), ((+(((var_3) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)81)))), (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) -1631854674)) : (max((((var_2) + (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)5)) && (((/* implicit */_Bool) var_5)))))))));
    var_16 = ((/* implicit */int) min((((/* implicit */long long int) max((var_0), (max((2139367836), (((/* implicit */int) (unsigned short)7999))))))), (min((((/* implicit */long long int) var_9)), (max((var_5), (((/* implicit */long long int) (short)24576))))))));
}
