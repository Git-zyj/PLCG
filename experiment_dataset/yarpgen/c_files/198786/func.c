/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198786
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)77)) < (((/* implicit */int) ((((/* implicit */_Bool) (short)9572)) || ((_Bool)0)))))))));
                            var_15 = ((/* implicit */unsigned long long int) var_3);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 2; i_4 < 9; i_4 += 2) 
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)67)), ((short)22255))))))) : (var_13)));
                    var_17 = ((/* implicit */unsigned int) ((_Bool) ((unsigned int) var_11)));
                }
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))) + ((((!(((/* implicit */_Bool) var_13)))) ? (((var_1) + (((/* implicit */int) var_4)))) : (var_1)))));
                var_18 = var_8;
                var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((((/* implicit */int) var_6)) > (((/* implicit */int) var_9)))) && (((/* implicit */_Bool) var_0)))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_6))));
}
