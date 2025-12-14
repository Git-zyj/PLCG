/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43976
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
    var_16 ^= ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)114)))), ((-(((/* implicit */int) var_4))))))));
    var_17 = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (_Bool)0)), ((~(((/* implicit */int) var_7)))))), ((((_Bool)0) ? (281373417) : (((/* implicit */int) (_Bool)1))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 += ((/* implicit */_Bool) (~(((arr_4 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(signed char)17] [(signed char)17] [0U]))) % (arr_0 [(short)8])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_0]))) / (arr_3 [i_0] [i_1])))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [(unsigned short)19]);
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_4 [i_1] [13]), (arr_5 [i_0] [i_1] [i_0])))) * (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)37173))))))) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2])) ? (((((/* implicit */int) (unsigned char)242)) % (((/* implicit */int) (unsigned short)37175)))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_1 [i_0 - 1] [i_0 - 1]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_0] [i_0])) : (((/* implicit */int) var_9))))))))));
            }
        } 
    } 
}
