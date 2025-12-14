/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21280
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_7 [i_0] [i_2] [i_2]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10336019598161653359ULL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) ? (((/* implicit */unsigned long long int) -1498284688)) : (10336019598161653358ULL)))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (0U)))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_4))));
                    arr_8 [i_2] [i_2] [i_2] [i_0] = var_6;
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((549755551744ULL), (10336019598161653359ULL)))) ? (16172037129642633481ULL) : (arr_2 [i_0]))) > (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_0 [i_0])))), (1649938022467815687ULL)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2274706944066918134ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))))))) : (10336019598161653368ULL)))) ? (((((/* implicit */_Bool) (+(var_3)))) ? (((((/* implicit */_Bool) 16172037129642633481ULL)) ? (3824676238904843456ULL) : (((/* implicit */unsigned long long int) -1397203678)))) : (((((/* implicit */_Bool) 2836673365U)) ? (((/* implicit */unsigned long long int) 0U)) : (6482750763439965875ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
}
