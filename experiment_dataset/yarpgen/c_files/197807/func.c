/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197807
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 += ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_3 [i_0 - 1])))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_12 *= ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_4)))));
                            arr_10 [i_2] [i_3 - 1] [i_1] [i_2] [i_1 - 1] = ((/* implicit */unsigned int) min((arr_8 [9ULL] [i_1] [3LL] [(short)10] [(unsigned char)13]), (max((((/* implicit */unsigned long long int) (unsigned short)7723)), (arr_4 [i_0 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_12 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_11 [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))) : (max((arr_12 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_13 [i_4]))))));
        arr_14 [i_4] [i_4] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4]))) : (112670762U)))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 1) 
                {
                    {
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (unsigned short)7723))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)51918))))) ? (((/* implicit */unsigned int) ((int) (unsigned short)57813))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_6])) ? (((/* implicit */int) arr_13 [i_4])) : (var_2)))), (max((var_0), (((/* implicit */unsigned int) var_10))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_8 = 4; i_8 < 21; i_8 += 4) 
        {
            for (long long int i_9 = 1; i_9 < 21; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        arr_29 [(short)10] [i_9] [5ULL] = var_10;
                        arr_30 [i_10] [i_9] [i_9] [i_4] = ((/* implicit */short) var_0);
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */short) var_9);
}
