/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221032
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
    var_10 = var_3;
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(var_9)))) ? (arr_7 [i_0 - 2] [i_1] [i_0 - 2] [i_3]) : (((((/* implicit */_Bool) (unsigned short)7806)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) var_1))))))));
                                var_12 -= ((/* implicit */unsigned int) var_9);
                                var_13 = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) var_0)))))) ? (arr_11 [(unsigned char)16] [i_4]) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_7)))))))));
                            }
                        } 
                    } 
                } 
                var_14 -= ((/* implicit */signed char) arr_7 [17LL] [i_1] [i_1] [i_0]);
                var_15 = ((/* implicit */unsigned int) arr_1 [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)23161))) < (-1869141250762382295LL)))))))))));
}
