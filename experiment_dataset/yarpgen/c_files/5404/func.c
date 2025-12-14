/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5404
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : ((+(-9223372036854775781LL))))) * (((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0] [i_0])), ((-(((/* implicit */int) var_10)))))))));
        var_13 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (1295881687))))) <= (((((/* implicit */_Bool) 2091284461U)) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_14 = ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (short)-20288)) : (((/* implicit */int) (short)-32745)))) + (2147483647))) << ((((((~(((/* implicit */int) arr_3 [i_1])))) + (76))) - (22)))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 3; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_15 = (i_2 % 2 == 0) ? (((min((((((/* implicit */int) arr_6 [i_1] [i_1])) / (((/* implicit */int) arr_6 [i_2] [i_2])))), ((-(((/* implicit */int) arr_12 [i_2] [i_2])))))) >> (((unsigned int) min((((/* implicit */unsigned short) var_1)), (arr_0 [i_1] [i_1])))))) : (((((min((((((/* implicit */int) arr_6 [i_1] [i_1])) / (((/* implicit */int) arr_6 [i_2] [i_2])))), ((-(((/* implicit */int) arr_12 [i_2] [i_2])))))) + (2147483647))) >> (((unsigned int) min((((/* implicit */unsigned short) var_1)), (arr_0 [i_1] [i_1]))))));
                        var_16 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_1] [i_3 - 1]))));
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_2] [i_3 - 1] [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)167))) : (arr_13 [i_1] [i_1] [i_3 - 1] [i_1] [i_4 - 2]))), ((+(arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))) : (var_9)))));
    /* LoopSeq 1 */
    for (unsigned short i_5 = 4; i_5 < 16; i_5 += 4) 
    {
        arr_19 [i_5] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_5 - 1] [i_5 - 1])) / (((/* implicit */int) arr_16 [i_5 + 2] [i_5]))))), (((((/* implicit */_Bool) arr_0 [i_5 + 1] [i_5 + 3])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_5])) + (((/* implicit */int) (short)26816))))) : (((((/* implicit */_Bool) arr_1 [i_5])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251)))))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) max((((/* implicit */long long int) (_Bool)1)), (2199023255551LL))))))))));
        arr_20 [i_5] = ((/* implicit */_Bool) arr_1 [i_5]);
    }
}
