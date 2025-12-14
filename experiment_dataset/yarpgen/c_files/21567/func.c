/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21567
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
    var_19 = ((/* implicit */short) var_18);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) 100663296)) ^ (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((262136U) ^ (((/* implicit */unsigned int) 100663293)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_10))))) * (((/* implicit */int) ((unsigned char) var_5))))) * (((/* implicit */int) ((unsigned short) arr_3 [i_0])))));
                    var_22 = ((/* implicit */unsigned int) var_15);
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -100663317)) || (((/* implicit */_Bool) 469762048))))))) != (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_6 [i_2] [i_0 + 1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) max(((+(arr_3 [i_0]))), ((-(arr_4 [i_0 - 1] [2ULL] [i_0])))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_23 = ((unsigned char) 536870784);
        arr_11 [i_3] [i_3] = ((/* implicit */long long int) ((((-4323220234341831682LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))))) > (((/* implicit */long long int) min((var_17), (((/* implicit */unsigned int) var_7)))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        var_24 |= ((/* implicit */unsigned long long int) ((int) ((((-100663320) + (2147483647))) << (((arr_13 [i_4]) - (3230054061U))))));
        var_25 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 3568314923050631499ULL)) ? (3568314923050631508ULL) : (14878429150658920121ULL))));
    }
}
