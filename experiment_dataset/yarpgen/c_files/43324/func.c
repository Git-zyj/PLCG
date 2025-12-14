/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43324
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
    var_20 = ((/* implicit */_Bool) (~(max((var_3), (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))));
    var_21 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */short) (unsigned short)29771);
                var_23 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)46822)) <= (((/* implicit */int) (short)0))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */short) max((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) 46298812701958263ULL)) ? (((/* implicit */long long int) -2078663514)) : (2574766384661567444LL)))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_7 [(unsigned short)3] [i_1 + 2]))) ? (max((var_9), (((/* implicit */unsigned long long int) ((var_15) / (((/* implicit */int) (short)32767))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2544963664238722336LL))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) 805306368U))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) var_10);
}
