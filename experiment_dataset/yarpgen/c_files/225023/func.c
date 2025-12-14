/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225023
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
    var_13 = ((/* implicit */unsigned int) 8646911284551352320LL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_9 [(signed char)4] [i_1] [i_2] [i_2 - 1] = ((/* implicit */_Bool) (unsigned char)81);
                    var_14 = var_6;
                    arr_10 [i_2] = (i_2 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_1])))))) << (((((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_8 [0LL] [i_0] [i_2] [0LL])) : (((/* implicit */int) var_2)))) - (61303)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_1])))))) << (((((((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_8 [0LL] [i_0] [i_2] [0LL])) : (((/* implicit */int) var_2)))) - (61303))) + (44047))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) arr_8 [i_3] [i_3] [i_3] [i_0]))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((var_9), ((unsigned char)0)))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 3] [i_2 + 1] [i_2])) ? (var_0) : (((/* implicit */int) (signed char)14)))))))))));
                        var_16 = ((/* implicit */unsigned char) (signed char)-2);
                        arr_13 [i_2] [i_2] [i_2] [i_0] = ((signed char) min(((unsigned char)10), (((/* implicit */unsigned char) (signed char)-14))));
                    }
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (unsigned char)203);
                        var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) var_0)) ? (arr_11 [i_1 - 3] [i_2 - 1] [1ULL] [i_2 + 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)14))))), (((arr_11 [i_1 - 3] [i_2 - 1] [i_4] [i_4] [i_4]) ^ (arr_2 [i_1 - 3] [i_2 - 1])))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((short) var_2));
    var_19 = ((/* implicit */short) max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-15))))), (var_3)));
}
