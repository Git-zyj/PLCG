/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225393
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
    var_14 = ((((/* implicit */_Bool) max((((8972965856843903586ULL) >> (((18446744073709551615ULL) - (18446744073709551575ULL))))), ((+(9473778216865648010ULL)))))) ? (((((/* implicit */_Bool) min((8972965856843903586ULL), (((/* implicit */unsigned long long int) var_10))))) ? (max((var_6), (((/* implicit */unsigned long long int) var_9)))) : (var_7))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) + (9473778216865648057ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))) : (var_11)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_3))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0 - 1] [i_0] = ((/* implicit */short) ((long long int) (unsigned char)210));
                arr_6 [i_0] [i_1 - 3] [i_1] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (((unsigned long long int) var_10)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(var_4))) >= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_2)) : (var_7)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((unsigned long long int) arr_11 [i_4 + 3]));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)40)) ? (9473778216865648028ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76)))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_7 [i_2 + 3]) : (arr_7 [i_2 + 3]))) : (((unsigned long long int) (unsigned char)194))));
                }
            } 
        } 
    } 
}
