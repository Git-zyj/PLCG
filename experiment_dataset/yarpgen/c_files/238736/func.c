/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238736
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
    var_14 &= (~(((int) (unsigned short)39403)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */short) ((((/* implicit */_Bool) 15ULL)) ? (-2LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_9) : (((/* implicit */int) arr_2 [i_0])))))));
                var_16 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_2 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_17 &= ((/* implicit */unsigned char) ((unsigned long long int) (+(((((/* implicit */_Bool) 1493003723U)) ? (arr_0 [(unsigned short)4]) : (15LL))))));
                            arr_11 [i_2] = ((/* implicit */long long int) (-((+(((/* implicit */int) ((_Bool) arr_4 [i_0])))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])) : (((unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1]))))))))));
                arr_12 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((((((int) arr_0 [7])) + (2147483647))) << ((((((~(((/* implicit */int) var_8)))) + (70))) - (16)))))), (((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */long long int) var_4)), (arr_4 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 3242239578173299085LL))))))));
            }
        } 
    } 
}
