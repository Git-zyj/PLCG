/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201443
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
    var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)164)) || (((/* implicit */_Bool) var_3)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? ((-(851607839U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    var_16 = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)212))))) == (((((/* implicit */_Bool) 21U)) ? (var_6) : (((/* implicit */unsigned int) var_4)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) min((min((((/* implicit */long long int) arr_5 [i_0] [i_1 - 2])), (max((arr_2 [i_1 + 1] [i_2]), (((/* implicit */long long int) var_4)))))), (((((var_6) <= (var_7))) ? (min((((/* implicit */long long int) (unsigned char)186)), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 2])))))));
                    arr_8 [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)94))))), ((-(arr_1 [i_0])))))) ? (((/* implicit */int) arr_5 [i_2 - 3] [i_1 + 1])) : (((/* implicit */int) var_3)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_7 [(signed char)5] [i_3]))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8358159850905753555LL)) ? (((/* implicit */long long int) ((unsigned int) var_1))) : ((~(arr_2 [(signed char)2] [i_3])))));
        arr_11 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3]))))) <= (((((/* implicit */int) arr_6 [(signed char)9] [i_3] [(signed char)9] [i_3])) / (((/* implicit */int) (unsigned char)186))))));
    }
    for (unsigned short i_4 = 1; i_4 < 8; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            arr_18 [(short)0] |= ((/* implicit */short) ((signed char) (short)-202));
            var_20 = ((/* implicit */short) var_14);
            var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4 + 2] [i_4 + 3])) ? (((/* implicit */int) arr_14 [i_4 + 2] [i_4 + 3])) : (((/* implicit */int) arr_14 [i_4 + 2] [i_4 + 3]))))) / (((((/* implicit */_Bool) arr_2 [i_4 + 2] [i_5])) ? (arr_9 [i_5] [i_5]) : (((/* implicit */unsigned long long int) arr_2 [i_4 + 1] [i_5]))))));
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~((-(var_7))))))));
        }
        var_23 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >> ((((-(arr_1 [i_4 + 2]))) - (4417557398764213448LL)))));
    }
    var_24 = ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)23)) >> (((((/* implicit */int) var_2)) - (16))))))))));
}
