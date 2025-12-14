/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236869
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
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) (~((+(((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_3] [i_3 - 1] [i_0]))))))));
                            var_18 = ((/* implicit */long long int) arr_6 [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 20; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) && ((!(((/* implicit */_Bool) (unsigned char)39)))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) arr_17 [i_0] [i_4 + 1] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_17 [i_4 + 1] [i_4 + 1] [i_5] [i_5] [i_4 + 1] [i_5])) : (((/* implicit */int) arr_17 [i_1] [i_4 + 1] [i_5] [i_5] [i_4 + 1] [i_5]))))));
                            var_20 |= ((/* implicit */signed char) max((0), (var_10)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 1; i_6 < 19; i_6 += 1) 
    {
        for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */int) arr_21 [i_8]);
                            arr_29 [i_9] [i_7] [i_7] [i_7] [i_6 + 2] [i_6 + 3] |= ((/* implicit */unsigned char) max((max((((((/* implicit */int) arr_26 [i_6])) >> (((var_10) + (1790129432))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))), (((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)234)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) arr_26 [i_11]);
                                var_23 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-21)), (arr_18 [i_11])))))), (((((/* implicit */_Bool) ((unsigned short) arr_30 [i_6 + 3]))) ? (((((/* implicit */_Bool) arr_31 [i_12] [i_7] [i_7])) ? (((/* implicit */int) var_7)) : (arr_34 [i_7] [i_10] [i_10] [i_10]))) : (((/* implicit */int) arr_35 [i_6] [i_7] [i_7] [i_11] [i_6 - 1] [i_10]))))));
                                var_24 = ((/* implicit */unsigned char) var_16);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
