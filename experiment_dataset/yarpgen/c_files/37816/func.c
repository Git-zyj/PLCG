/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37816
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_0))))))) ? ((~((~(var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) var_2)))) <= (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_2] [9U] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_2)) - (4)))))) > (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                                var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_1))))) * ((+(((/* implicit */int) var_9))))))) ? ((-((~(var_6))))) : (((((/* implicit */_Bool) (-(var_4)))) ? (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))))));
                                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (-((~((~(((/* implicit */int) var_2)))))))))));
                                var_14 = ((/* implicit */short) var_8);
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_7)) : (var_6)))) ? ((~(var_3))) : (((/* implicit */int) var_2)))) : ((~((-(((/* implicit */int) var_10))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 23; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        {
                            var_16 = (+(var_6));
                            arr_22 [(unsigned short)19] [(signed char)20] [(unsigned char)17] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (short)29608))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (((((var_6) + (9223372036854775807LL))) >> (((var_7) - (1214285002U))))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))))))));
                            arr_23 [(short)20] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) var_10);
                            arr_24 [i_0] [i_1] [i_5] [i_6] &= ((/* implicit */short) var_5);
                        }
                    } 
                } 
                arr_25 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_10)))))))) ? ((+((~(var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : ((+(var_7))))))));
            }
        } 
    } 
}
