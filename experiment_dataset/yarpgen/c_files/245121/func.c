/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245121
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
    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)181))))), (((4715919279925763013LL) * (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 998838550665528656LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)75)))))));
                            arr_12 [i_0] = (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)240)))) > (max((((/* implicit */unsigned int) var_8)), (var_0)))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_7 [(signed char)8] [21LL] [(signed char)8]))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_9 [i_0] [i_1 - 1])), ((unsigned char)79))))));
                arr_14 [i_1] &= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 + 1]);
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 9219328791656437968ULL)) && (((/* implicit */_Bool) -4715919279925763014LL))))))), (var_0)));
    var_12 = ((/* implicit */unsigned long long int) var_5);
}
