/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23187
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
    var_14 = ((/* implicit */_Bool) (~(var_13)));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~(var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
                var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_5 [i_0]) : (arr_3 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (max((arr_3 [i_1 + 2] [i_1 - 1] [i_1 + 1]), (arr_3 [i_1 + 2] [i_1 - 1] [i_1 + 1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 4 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        arr_8 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-32)))) : (((var_10) ^ (((/* implicit */unsigned long long int) -1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_6 [i_2]))))))) : ((~(var_4))));
        var_19 = ((/* implicit */signed char) ((unsigned short) var_12));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */int) (+(var_5)));
        var_20 = ((/* implicit */unsigned char) arr_4 [i_3]);
    }
    for (long long int i_4 = 2; i_4 < 16; i_4 += 4) 
    {
        var_21 *= ((/* implicit */unsigned int) ((((_Bool) (+((-2147483647 - 1))))) ? ((-(arr_13 [i_4 - 2] [i_4 + 4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) | ((+(((/* implicit */int) (_Bool)1)))))))));
        arr_14 [i_4 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_10)))) ? (938005654088941471LL) : (((/* implicit */long long int) var_3))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_4 + 3] [i_4]) == (arr_12 [i_4 + 2] [i_4 + 2])))))));
    }
    for (unsigned int i_5 = 1; i_5 < 16; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_22 = ((/* implicit */signed char) var_1);
            var_23 |= ((/* implicit */int) (unsigned char)34);
        }
        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            arr_25 [i_5] [i_7] [i_5 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_22 [i_5 - 1] [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) arr_22 [i_5 + 1] [i_5 - 1] [i_5 + 1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_1))) : (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_5 + 1] [i_5 - 1] [i_5 + 1])) * (((/* implicit */int) arr_22 [i_5 + 1] [i_5 - 1] [i_5 - 1])))))));
            var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) min((arr_24 [i_5] [i_5 + 1] [i_5 + 1]), (arr_24 [i_5 + 1] [i_5 + 1] [i_5 + 1])))) <= (((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135)))))));
            arr_26 [(_Bool)1] [(_Bool)1] = ((/* implicit */int) arr_23 [i_5 - 1] [i_5] [i_5 - 1]);
        }
        arr_27 [i_5] = ((/* implicit */_Bool) var_12);
    }
}
