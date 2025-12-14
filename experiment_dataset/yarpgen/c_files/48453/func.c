/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48453
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */short) arr_6 [i_1] [i_1] [i_0]);
                            arr_12 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */long long int) var_8);
                        }
                    } 
                } 
                var_13 -= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_1))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        for (short i_5 = 3; i_5 < 20; i_5 += 1) 
        {
            for (unsigned char i_6 = 2; i_6 < 20; i_6 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_19 [i_4] [i_5] [i_6 - 2])), ((+(var_9)))))), (((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_5 - 1])) ? (arr_16 [i_6 - 1] [14ULL] [i_5 - 3]) : (((/* implicit */unsigned long long int) 3838653171U))))));
                    var_15 = ((/* implicit */unsigned short) var_2);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 3) 
                    {
                        arr_23 [i_4] [i_6] [i_7] = ((/* implicit */short) (((!(((/* implicit */_Bool) 446364362)))) ? (((/* implicit */int) var_3)) : ((-(arr_19 [i_5 - 3] [i_7 - 1] [i_6])))));
                        arr_24 [i_6] [i_5] [i_4] &= ((/* implicit */unsigned int) min((var_1), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_20 [i_5] [20U] [i_7 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)201)))))))));
                    }
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        arr_27 [i_8] [i_6] [i_5] [i_4] |= ((/* implicit */unsigned short) arr_18 [i_4] [i_5]);
                        var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_25 [i_5] [i_5 + 3] [i_6 + 1] [i_6]) == (((/* implicit */unsigned long long int) var_1)))))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (short)6965))))) - (((/* implicit */int) var_10))))) : (var_9))))));
    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(4315189070558747500LL))), (((/* implicit */long long int) var_3))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) var_4)))))));
}
