/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28142
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
    var_17 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27953))) : (14U)))) ^ (var_0));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
                            var_19 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_0)))) ? (((/* implicit */int) (((-2147483647 - 1)) < (((/* implicit */int) (unsigned short)19541))))) : (((/* implicit */int) var_7)))) <= (((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */int) var_7))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((var_1) - (var_13))) != (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) << (((var_10) + (1630022511))))))))) <= ((+(((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */int) var_5))))))));
                        }
                    } 
                } 
                arr_9 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((var_9) ? (var_12) : (((/* implicit */long long int) var_1)))) != (((/* implicit */long long int) ((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) + (((/* implicit */int) var_6))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        {
                            arr_16 [(short)0] [i_1] [3LL] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((var_2) >= (var_16)))) << (((((((/* implicit */unsigned long long int) var_10)) % (var_16))) - (1531703950828415806ULL))))) % ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : ((-(((/* implicit */int) var_11))))))));
                            var_21 += var_7;
                            arr_17 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((var_13) >> (((/* implicit */int) var_9)))) * (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))))) || (((/* implicit */_Bool) ((((((/* implicit */int) var_5)) & (((/* implicit */int) var_3)))) | (var_10))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) * (var_2))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (var_10)))))))));
}
