/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210653
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */short) 1099511365632ULL);
                    var_20 = ((/* implicit */int) max((max((((((/* implicit */_Bool) arr_6 [2ULL] [i_1])) ? (((/* implicit */unsigned long long int) -5497044807121041198LL)) : (var_19))), (((/* implicit */unsigned long long int) max((arr_5 [11] [(_Bool)1] [i_1]), (5497044807121041198LL)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_8 [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) - (((((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_0)))) + (((/* implicit */int) var_0))))));
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((5497044807121041197LL), (-5497044807121041197LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) 2662531509U)) : (5497044807121041198LL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5497044807121041197LL)) ? (-5497044807121041197LL) : (5497044807121041197LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5497044807121041198LL)))) : (((arr_16 [4U] [i_3] [i_3]) ? (4067180513691940123ULL) : (((/* implicit */unsigned long long int) 0))))))));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) -5497044807121041198LL)) ? (max((arr_7 [i_3] [i_4] [i_4 - 3] [17LL]), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)17136), ((unsigned short)48399))))))))));
                }
            } 
        } 
    } 
}
