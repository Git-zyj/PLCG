/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43812
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
    var_11 |= ((/* implicit */_Bool) var_6);
    var_12 = ((/* implicit */short) var_1);
    var_13 = var_3;
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) arr_0 [i_0 + 1]);
                arr_7 [i_0] [i_0] [i_0 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1 - 3])) || (var_2)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
    {
        var_15 *= ((/* implicit */unsigned short) arr_8 [i_2] [i_2]);
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    {
                        arr_19 [i_2] [i_3] [i_4] [i_5] [i_2] = ((/* implicit */short) var_1);
                        var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_4] [i_5])) ? (((/* implicit */int) arr_17 [i_2] [i_3])) : (((/* implicit */int) arr_17 [i_5] [i_5])))) >= (((((/* implicit */int) var_2)) * (((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_3])))))))) : (var_8)));
                    }
                } 
            } 
        } 
        var_17 &= ((/* implicit */unsigned char) (-(((long long int) min(((signed char)-1), ((signed char)-1))))));
    }
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
    {
        arr_24 [i_6] [i_6] = ((/* implicit */int) ((long long int) arr_12 [i_6] [i_6] [i_6]));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) max((var_18), (max(((~(((/* implicit */int) ((unsigned short) var_2))))), (((/* implicit */int) var_0))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            {
                                var_19 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_18 [i_6] [i_8] [i_9] [i_7]))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) (!(var_3))))))));
                                arr_34 [i_10] [i_9] [i_9] [i_8] [i_7] [i_7] [i_6] = ((/* implicit */signed char) (-((-(((int) var_8))))));
                            }
                        } 
                    } 
                    var_20 = ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7] [i_6]))) / (var_4))))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((_Bool) min((var_9), (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) ((var_5) << (((((/* implicit */int) arr_9 [i_7] [i_7])) - (32043)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((var_4), (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                }
            } 
        } 
        arr_35 [i_6] [i_6] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
        arr_36 [i_6] = ((/* implicit */short) (-((-(((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_6]))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))) ? ((~(arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) : (max((var_10), (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
    }
}
