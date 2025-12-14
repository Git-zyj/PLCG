/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49416
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
    var_12 = ((/* implicit */int) ((unsigned char) var_8));
    var_13 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (var_0)))) ? (((/* implicit */unsigned int) ((int) var_9))) : (((((/* implicit */unsigned int) var_4)) - (var_1))))), (((/* implicit */unsigned int) max((var_10), (((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) var_11))))) << (((((/* implicit */int) ((var_1) < (var_1)))) % (((/* implicit */int) min((((/* implicit */short) var_9)), (var_8)))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_15 -= ((/* implicit */short) max((max((((/* implicit */long long int) min((var_5), (((/* implicit */unsigned short) var_9))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_0))))), (((/* implicit */long long int) ((((unsigned int) var_6)) <= (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (var_1))))))));
                            arr_11 [i_0] [i_1] = ((/* implicit */long long int) min((min((max(((unsigned short)32248), (((/* implicit */unsigned short) (signed char)23)))), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) > (var_6)))))), (((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_2)))) > (((/* implicit */int) ((unsigned short) var_1))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned int) var_4))))) ? (var_6) : (max((var_10), (((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_9))))) ? (((var_7) / (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) min((var_6), (var_6))))))));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))) : (max((((/* implicit */long long int) var_3)), (max((var_0), (((/* implicit */long long int) var_9))))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) min((var_0), (((/* implicit */long long int) var_2)))))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) var_9))))) : (min((var_7), (((/* implicit */unsigned long long int) var_11))))))));
            }
        } 
    } 
}
