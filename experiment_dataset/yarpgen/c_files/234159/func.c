/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234159
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)212)) ? (var_12) : (((/* implicit */long long int) var_5))))) ? (var_17) : (((/* implicit */long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [(short)10] [2ULL] [16LL] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_21 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_3 [i_0] [i_0 + 1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0 + 3])))))));
                var_22 = ((((/* implicit */_Bool) min(((short)32762), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2197949513728ULL)) ? (123650654383027502LL) : (((/* implicit */long long int) 1786873856))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (123650654383027502LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65514))))) : (((((/* implicit */_Bool) -123650654383027507LL)) ? (var_17) : (123650654383027502LL))))) : (((((/* implicit */_Bool) ((short) 7532447555304183053LL))) ? (3LL) : (((/* implicit */long long int) 2518448684U)))));
                var_23 -= ((/* implicit */short) 1776518618U);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 8; i_2 += 1) 
    {
        for (unsigned short i_3 = 2; i_3 < 7; i_3 += 3) 
        {
            {
                arr_12 [8ULL] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_9 [i_3 - 2] [i_2 + 1])) < (((/* implicit */int) arr_9 [i_3 - 2] [i_2 - 1])))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4] [i_5])) && (((_Bool) (signed char)-118)))))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 1353847797U)) && (((/* implicit */_Bool) (short)5032))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) -123650654383027528LL);
}
