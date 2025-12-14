/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211882
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (~((~((~(((/* implicit */int) (signed char)-1))))))));
                                arr_11 [i_2] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */long long int) (~((~((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_2 + 1] [i_3] [i_3]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned int i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        {
                            arr_17 [i_0 - 1] [i_1 - 1] [i_5] [i_6] [i_5] [i_6 + 1] = ((/* implicit */unsigned short) (+((-((+(((/* implicit */int) var_15))))))));
                            var_20 = ((/* implicit */long long int) (+((+((+(((/* implicit */int) var_1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_0)))))))));
                var_22 = ((/* implicit */unsigned short) (~((-((-(((/* implicit */int) arr_21 [i_7] [9U]))))))));
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    arr_26 [i_7] |= ((/* implicit */_Bool) (-((+((+(((/* implicit */int) var_0))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 9; i_11 += 1) 
                        {
                            {
                                arr_32 [i_7] [i_7] [i_9] [i_9] [i_10] [i_11 - 2] = ((/* implicit */unsigned short) (+((+((+(((/* implicit */int) (unsigned short)4279))))))));
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) 266287972352ULL))))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (~((~((+(var_13)))))));
    var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!((!(var_12))))))));
}
