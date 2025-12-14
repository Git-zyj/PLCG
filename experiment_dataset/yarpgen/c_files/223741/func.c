/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223741
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((signed char) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_5))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min((min((min((((/* implicit */int) var_6)), (var_10))), ((~(((/* implicit */int) var_1)))))), (((int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (var_3))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [(short)6] [i_1] [(short)6] = ((/* implicit */signed char) ((max((((/* implicit */int) max((var_2), (var_5)))), (var_10))) / (max((((/* implicit */int) var_9)), ((~(((/* implicit */int) var_8))))))));
                    var_11 = ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (min((((/* implicit */unsigned long long int) var_10)), (var_7))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((signed char) var_8))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned int) var_1);
                        var_13 -= ((/* implicit */signed char) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        var_15 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                    }
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) var_6)))), (((((/* implicit */int) var_1)) < (((/* implicit */int) var_1))))))))))));
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(var_4)))) ^ (max((((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((unsigned char) var_8))))))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    {
                        var_18 += ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_4))))));
                        var_19 = ((/* implicit */signed char) max(((~(var_0))), (((/* implicit */unsigned int) ((short) var_4)))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_8 = 2; i_8 < 7; i_8 += 1) 
    {
        for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                {
                    arr_28 [i_8] [i_9] [i_10] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                    var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((signed char) var_6)))));
                }
            } 
        } 
    } 
}
