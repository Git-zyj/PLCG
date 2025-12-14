/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47329
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
    var_18 = ((/* implicit */long long int) var_10);
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((arr_1 [i_0 + 1]) != ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0 - 1] [i_3] [8ULL] [i_0] = ((/* implicit */_Bool) min(((-(var_11))), (((/* implicit */unsigned long long int) ((_Bool) var_15)))));
                        arr_11 [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_3)), (min((arr_8 [i_3]), (arr_8 [i_3])))));
                    }
                    arr_12 [i_0 + 1] [i_1] [i_1] [3U] = max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_0])) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_9 [10] [i_0 - 3] [i_0 - 1] [i_0] [i_0 - 2])) : (((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (signed char)114))))))), ((~(min((((/* implicit */long long int) var_8)), (2297140847205341677LL))))));
                }
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_19 = ((/* implicit */signed char) (unsigned char)255);
        var_20 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_13 [i_4])) && (((/* implicit */_Bool) arr_13 [i_4])))), (((((/* implicit */_Bool) arr_14 [i_4] [i_4])) && (((/* implicit */_Bool) var_12))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            {
                arr_23 [i_6] [i_5] = ((/* implicit */unsigned char) ((max((arr_19 [i_5 + 2] [i_6]), (arr_19 [i_6] [i_5 + 2]))) | ((~(((/* implicit */int) arr_17 [i_5 + 1]))))));
                arr_24 [i_6] &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5 - 1] [i_5 - 1] [i_5 + 2])))))) < (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5 + 1]))) ^ (arr_13 [i_5 + 2])))));
                var_21 = (-(((/* implicit */int) (unsigned char)0)));
                arr_25 [i_5] [i_6] [i_6] = ((/* implicit */signed char) ((((((/* implicit */int) ((var_3) >= (379210551)))) > (arr_22 [i_5 + 1] [i_5 + 1] [i_5 - 1]))) ? (max((arr_19 [i_5 + 1] [i_5 + 3]), (arr_19 [i_5 + 1] [i_5 + 3]))) : (((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (arr_13 [i_5])))) < ((-(34359738336LL))))))));
                arr_26 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_19 [i_5 - 1] [i_5 - 1])))) ? (((/* implicit */unsigned int) arr_19 [(signed char)19] [i_5])) : (arr_15 [i_5])));
            }
        } 
    } 
}
