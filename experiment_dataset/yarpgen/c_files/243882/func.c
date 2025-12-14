/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243882
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_16 ^= arr_10 [i_4] [18U] [10ULL] [i_2] [18U] [22ULL];
                                arr_15 [i_1] = ((/* implicit */short) ((signed char) (((+(var_9))) >> (((arr_4 [i_3] [(unsigned short)17] [i_0]) - (15387253386692780858ULL))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_1] [i_2] [i_1] [i_1] [i_0])) ? (arr_10 [i_0] [i_1] [i_1] [i_2] [i_0] [i_1]) : (arr_10 [i_0] [i_1] [i_0] [i_1] [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1])) ? (arr_10 [i_2] [i_1] [i_1] [i_0] [i_1] [i_0]) : (((/* implicit */int) (unsigned short)45519)))) : ((~(arr_10 [i_0] [i_1] [i_0] [i_1] [i_2] [i_2])))));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))), ((+(var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned short)56139)))) < (var_15)))))));
}
