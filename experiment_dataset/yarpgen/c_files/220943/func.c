/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220943
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + ((-(var_0)))))) ? (((var_3) & (((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)23769)) ? (((/* implicit */int) (short)-23770)) : (((/* implicit */int) (unsigned short)4423))))) <= (var_2))))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((_Bool) min((var_9), (((/* implicit */unsigned long long int) var_0))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((((+(((/* implicit */int) (short)-23769)))) + (2147483647))) >> (((7896392247368609574LL) - (7896392247368609568LL)))))) ^ (10636656148581064650ULL)));
                            arr_12 [i_1] [i_1 - 2] = ((/* implicit */long long int) var_8);
                            arr_13 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23750))))), (min((var_3), (((/* implicit */long long int) (_Bool)0))))));
                            arr_14 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7896392247368609574LL)) ? (((/* implicit */int) (short)23783)) : (((/* implicit */int) ((((/* implicit */_Bool) 1048572)) && (((/* implicit */_Bool) (short)23783)))))))) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (short)23769)) : (((/* implicit */int) (_Bool)0))))) : (0ULL)));
                            var_12 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)120)) : ((+(((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */int) min((((/* implicit */unsigned int) 1578431079)), (((((/* implicit */_Bool) (~(-3891421695636674500LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((3413392294U) % (var_1)))))));
            }
        } 
    } 
    var_14 = -1LL;
    /* LoopSeq 2 */
    for (long long int i_4 = 4; i_4 < 9; i_4 += 2) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1662649525U)) ? (-1349169788439891429LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((var_9), (((/* implicit */unsigned long long int) (unsigned short)65535))))))) : (((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9)))) ? (min((var_6), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1875326601972119027LL)) || (((/* implicit */_Bool) var_4))))))))));
        var_15 = ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-123)))) || ((!(((/* implicit */_Bool) var_10)))));
        var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (0ULL) : (((/* implicit */unsigned long long int) var_6))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)143)))) + (((((/* implicit */int) (short)23778)) + (((/* implicit */int) (unsigned short)9266))))));
    }
    for (int i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        var_17 = ((/* implicit */short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) 743312520))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) 8191393891351996537ULL)))))));
        var_18 &= (~(((/* implicit */int) ((((/* implicit */_Bool) ((18446744073709551614ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23768)))))) && (((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (unsigned short)29489)))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)39604), (((/* implicit */unsigned short) (_Bool)1))))) ? (((((/* implicit */_Bool) ((var_3) * (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [4LL])))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((+(arr_20 [0LL]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
}
