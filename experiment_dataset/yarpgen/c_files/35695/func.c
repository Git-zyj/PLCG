/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35695
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_11 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) 2697589699U))))) ? (((/* implicit */int) ((unsigned char) 1597377601U))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [(unsigned short)5] [i_1])) < (((/* implicit */int) (_Bool)0))))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_1 [i_0]) : (var_1))) < (((((/* implicit */_Bool) (unsigned char)185)) ? (827343164U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) (short)-3781)) : (var_11)))) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_2] [i_0])) : (((/* implicit */int) (unsigned char)14)))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)27495)), (var_9)))) ? (min((var_10), (((/* implicit */unsigned long long int) (unsigned short)8191)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 9; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (_Bool)1))))), (((unsigned long long int) (unsigned char)206))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_4] [i_4]))) : (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18261415735993569542ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3 - 3])) ? (1216735064U) : (3226577335U))))));
                arr_17 [i_4] = ((/* implicit */long long int) ((short) (((_Bool)1) ? (18261415735993569542ULL) : (((/* implicit */unsigned long long int) 3226577335U)))));
            }
        } 
    } 
}
