/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3956
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) var_6);
                    var_11 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_6)), (min((min((6702656038532607368ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2 + 2]))))));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11744088035176944250ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (2386862979U)));
                    var_13 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_6)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_2])))) : (((/* implicit */int) var_4)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (signed char i_5 = 2; i_5 < 21; i_5 += 4) 
            {
                {
                    arr_17 [i_3] [i_5] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (((((/* implicit */int) var_5)) + (arr_15 [i_3] [(_Bool)1])))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    var_14 = ((/* implicit */short) max((((/* implicit */signed char) var_9)), (var_8)));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_12 [i_5] [i_4])) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_9)))))))) * (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_14 [i_3]) : (((/* implicit */int) var_8)))))))));
                    var_16 = ((/* implicit */short) var_7);
                    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_4))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (var_0)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_0);
    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) min((min((var_4), (((/* implicit */unsigned short) var_0)))), (((/* implicit */unsigned short) var_8)))))));
}
