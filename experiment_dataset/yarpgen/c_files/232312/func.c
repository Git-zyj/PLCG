/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232312
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    arr_10 [i_0] [i_1] [i_0] [6ULL] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (((int) (+(1063962447)))) : ((-(((((/* implicit */_Bool) (signed char)-73)) ? (arr_9 [i_0]) : (((/* implicit */int) (signed char)0)))))));
                    var_15 = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) var_2)) ? (8748679295184389518LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */int) ((signed char) -8748679295184389518LL))) : (((/* implicit */int) ((signed char) var_1))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    var_16 = ((/* implicit */unsigned char) ((((int) (~(5631365551245338622LL)))) <= (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_10))) <= (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (arr_7 [(unsigned short)1] [i_0] [(unsigned short)1] [(unsigned char)2])))))))));
                    var_17 = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 8191))))), (arr_8 [8] [i_3] [i_3] [(short)1]))))));
                }
                var_18 = ((unsigned short) min((((/* implicit */long long int) ((-8748679295184389519LL) >= (((/* implicit */long long int) (-2147483647 - 1)))))), (((((/* implicit */long long int) ((/* implicit */int) var_11))) % (-5631365551245338624LL)))));
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 9; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            arr_17 [i_0] [(short)5] [i_1] [(unsigned short)0] [i_4 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (max((((/* implicit */unsigned long long int) ((int) var_13))), (max((var_2), (((/* implicit */unsigned long long int) -8748679295184389518LL)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)24)) : (arr_9 [i_0])))), (9223372036854775807LL))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : ((~(16158389929053951802ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (short)14989)) - (14976)))))) % (((((/* implicit */unsigned long long int) 4294967295U)) & (var_2))))), (max((min((0ULL), (((/* implicit */unsigned long long int) 8748679295184389518LL)))), (((/* implicit */unsigned long long int) (_Bool)1))))));
}
