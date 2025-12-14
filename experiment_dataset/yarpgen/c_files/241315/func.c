/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241315
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] = (+(max((max((816006568), (-466483516))), (((/* implicit */int) var_3)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((474331466U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3)))));
                    var_14 = ((/* implicit */long long int) var_9);
                    var_15 = ((/* implicit */long long int) arr_6 [i_0]);
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) min((var_6), (((/* implicit */int) var_11)))))) - (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (-501535882))), (((/* implicit */int) max(((signed char)-6), ((signed char)-20))))))));
        var_17 = ((/* implicit */int) var_2);
        var_18 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) -1990011082))), (((((/* implicit */int) (signed char)98)) | (((int) 321029039))))));
    }
    for (signed char i_4 = 3; i_4 < 8; i_4 += 3) 
    {
        var_19 = ((int) ((int) 1610612736));
        arr_19 [(signed char)8] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1377975725)) ? (2089637694) : (545420875)));
    }
    var_20 = ((/* implicit */signed char) 31);
    var_21 += ((/* implicit */unsigned int) ((max((((/* implicit */int) var_9)), (var_6))) >= (((/* implicit */int) var_10))));
}
