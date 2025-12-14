/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38577
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
    var_19 = ((/* implicit */signed char) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) 1845046982))))))), (((/* implicit */int) (unsigned short)65535))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_20 |= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_1])), (var_7))))))), (((arr_0 [i_2] [i_1]) ? (min((((/* implicit */int) var_8)), (arr_2 [i_0]))) : ((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_2]))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        arr_8 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) arr_4 [i_0] [i_2] [i_3]);
                        arr_9 [i_2] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((unsigned char) var_14)), (((/* implicit */unsigned char) arr_6 [i_3 - 4] [i_3 + 1] [i_3 + 1] [i_3]))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (min((((int) var_17)), ((~(arr_3 [i_0])))))));
                    }
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) ((((arr_0 [i_2] [i_1]) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (arr_3 [i_1]))) - (((((/* implicit */_Bool) arr_3 [i_4])) ? (arr_3 [i_1]) : (((/* implicit */int) arr_0 [i_4] [i_1]))))));
                        arr_12 [i_2] [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) var_4)), (((((/* implicit */int) var_13)) % (((/* implicit */int) arr_4 [i_0] [i_2] [i_2]))))));
                        arr_13 [i_2] = ((/* implicit */_Bool) (+(arr_10 [i_0] [i_2] [i_2] [i_4])));
                    }
                    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */int) var_15);
                        arr_18 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0]);
                        arr_19 [i_2] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) >> (((var_17) - (7613165)))))), (max((arr_15 [i_0]), (((/* implicit */unsigned long long int) var_13)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_7 [i_5] [i_1] [i_5] [i_1] [i_0] [i_5])), (((((/* implicit */_Bool) var_1)) ? (arr_14 [i_0] [i_0] [i_2] [i_5] [i_5 - 2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))))))))));
                    }
                    arr_20 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [i_0])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min(((unsigned short)1), (((/* implicit */unsigned short) var_12)))))));
}
