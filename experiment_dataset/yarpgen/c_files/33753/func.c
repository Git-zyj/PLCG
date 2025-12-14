/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33753
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
    var_13 *= var_5;
    var_14 = ((/* implicit */short) var_3);
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_1)) : (max((-8702156517251018986LL), (((/* implicit */long long int) (signed char)-24)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)24)) + (((/* implicit */int) arr_3 [(short)8]))))) / (-2518173926349981140LL))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_16 = 16U;
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 32U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [(unsigned char)6]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (var_0))))))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (short)-2)) * (((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_3]))) : (arr_6 [7LL] [i_1] [i_2])));
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) var_3))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((arr_6 [i_1] [i_2] [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) 2518173926349981139LL)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_6))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (unsigned short i_6 = 2; i_6 < 14; i_6 += 1) 
            {
                for (unsigned short i_7 = 2; i_7 < 11; i_7 += 1) 
                {
                    {
                        var_19 ^= (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (min((((/* implicit */unsigned long long int) arr_14 [i_6] [i_5 + 1])), (var_0)))))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (4294967280U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */int) ((signed char) var_9))) : (((int) arr_14 [i_7] [i_7 + 4])))))));
                    }
                } 
            } 
        } 
        arr_22 [i_4] = ((/* implicit */int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_0))))))));
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_19 [i_4] [i_4 - 1] [i_4]))));
    }
}
