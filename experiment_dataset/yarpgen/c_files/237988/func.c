/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237988
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (~(var_9))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) (+(min((var_14), (((/* implicit */long long int) min((((/* implicit */int) var_8)), (arr_0 [i_0]))))))));
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_3 [i_0] [i_1] [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 4; i_2 < 23; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) << (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_7 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_6 [24U])))))))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 2]))) : (arr_7 [i_2 + 1])))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 4; i_3 < 24; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    {
                        var_19 += ((/* implicit */short) var_9);
                        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (-(arr_12 [i_2] [i_2])))))));
                        var_21 = ((/* implicit */long long int) min(((+(arr_9 [i_3 - 3] [i_2] [i_4]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)49)))))));
                        var_22 = ((/* implicit */long long int) var_9);
                        var_23 &= ((/* implicit */_Bool) ((long long int) ((arr_7 [i_2 + 2]) + (arr_10 [i_2] [i_2 + 2] [i_5]))));
                    }
                } 
            } 
        } 
        arr_17 [i_2] [i_2] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (short)-20206)))), (((((/* implicit */int) min(((unsigned char)205), ((unsigned char)193)))) << (((((/* implicit */int) ((unsigned short) var_8))) - (53333)))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        var_24 ^= ((/* implicit */unsigned char) min((((max((arr_13 [i_6] [i_6] [i_6]), (arr_18 [i_6] [i_6]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6]))))), (((/* implicit */unsigned long long int) ((short) arr_9 [22] [22] [i_6])))));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            for (unsigned char i_8 = 1; i_8 < 15; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    {
                        arr_27 [(signed char)3] [i_9] = ((/* implicit */signed char) var_1);
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) arr_21 [i_8 + 2] [i_7]))) + (min((((/* implicit */unsigned long long int) (+(arr_26 [i_6] [i_7] [i_8] [(unsigned char)7] [i_9])))), (((6023680723654942785ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6] [i_6]))))))))))));
                    }
                } 
            } 
        } 
    }
}
