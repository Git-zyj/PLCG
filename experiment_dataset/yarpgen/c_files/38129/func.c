/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38129
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) (unsigned short)23))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_14 [i_3] [i_1] [i_1] [i_3] [i_4] [i_0] [(signed char)2] = ((/* implicit */_Bool) (-((+((+(((/* implicit */int) var_6))))))));
                                var_14 *= ((/* implicit */unsigned int) (-((+((+(((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned short)12] [i_3]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_5]))))))))))));
                arr_19 [(unsigned short)8] [i_6] [i_5] |= ((/* implicit */_Bool) (-((+((+(((/* implicit */int) var_3))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (short i_8 = 1; i_8 < 22; i_8 += 4) 
        {
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                {
                    arr_27 [i_7] = ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) arr_2 [i_7]))))))));
                    var_16 = ((/* implicit */unsigned int) (-((~((+(arr_12 [18U] [18U])))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_12)))))))));
}
