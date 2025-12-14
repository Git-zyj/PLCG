/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202674
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (_Bool)1);
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned long long int) (unsigned short)65535);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) -2069642247006250366LL);
                    var_16 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [7])) : (((/* implicit */int) arr_5 [i_0 + 2] [i_1] [i_2]))))));
                }
            } 
        } 
    }
    var_17 = var_5;
    var_18 = max((var_9), (((/* implicit */unsigned char) (!(var_6)))));
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4 + 1] [i_3 - 1] [i_3 - 1])) << (((/* implicit */int) var_12))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (916931492) : (((/* implicit */int) var_3))))))))))));
                arr_15 [i_4] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((arr_5 [6] [i_4] [i_4]) ? (var_11) : (((/* implicit */int) (unsigned char)33))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)64181)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (unsigned char)0)))));
                var_20 = ((/* implicit */unsigned long long int) ((int) min((((((/* implicit */_Bool) (unsigned short)26623)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22))) : (0ULL))), (((/* implicit */unsigned long long int) -1646431471)))));
                arr_16 [i_3] [i_4] = var_7;
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 3; i_5 < 14; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                {
                    arr_25 [i_5] [i_5] [i_5 - 2] [(unsigned char)1] = ((/* implicit */short) arr_6 [15]);
                    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((arr_19 [i_5]), (arr_19 [i_5])))), (var_2)));
                }
            } 
        } 
    } 
}
