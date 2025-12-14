/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27278
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(var_2)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (min((var_4), (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((long long int) ((_Bool) var_10)))));
                var_11 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) var_9)))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2))), (min((var_2), (((/* implicit */unsigned long long int) var_10))))));
                                arr_14 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] = ((/* implicit */signed char) (~(var_6)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (long long int i_6 = 3; i_6 < 20; i_6 += 4) 
                    {
                        {
                            arr_19 [i_6] [i_1] [i_1] [i_6] [i_1] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                            var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((+(var_2))), (((/* implicit */unsigned long long int) var_3)))))));
                            var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) var_10))))), (min((((/* implicit */unsigned long long int) var_3)), (var_2)))));
                            arr_20 [i_0] [i_6] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (max((var_6), (((/* implicit */long long int) var_9))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_0), (var_0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_4)) : (var_10))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_3) : (var_4))))) ? (((/* implicit */unsigned long long int) (+((~(var_8)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */long long int) var_10))))), (max((var_2), (((/* implicit */unsigned long long int) var_3))))))));
    var_16 = ((/* implicit */long long int) var_7);
}
