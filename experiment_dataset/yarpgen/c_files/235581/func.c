/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235581
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) ((((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_6)))))) : (arr_6 [i_0] [i_1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) <= ((~(((/* implicit */int) var_9))))))))));
                arr_7 [i_1] [i_1] = min((((((arr_3 [i_0] [i_0] [i_1]) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) >> (((min((((/* implicit */int) var_5)), (arr_2 [i_0]))) - (89))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_1) : (var_2)))) ? (var_11) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_13)))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */signed char) (~(((int) arr_4 [i_1] [i_1]))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_5), (var_8)))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_4) == (var_0))))) == (var_6))))));
    /* LoopSeq 4 */
    for (int i_2 = 1; i_2 < 8; i_2 += 2) /* same iter space */
    {
        var_16 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) var_3)))))));
        var_17 = ((/* implicit */long long int) var_6);
        arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((arr_3 [i_2 - 1] [i_2 - 1] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)42))))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) <= (arr_6 [i_2 + 1] [i_2])))) : (((/* implicit */int) arr_10 [i_2]))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 8; i_3 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_6)) ? (arr_9 [i_3]) : (((/* implicit */unsigned long long int) var_3))))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((var_7) && (((/* implicit */_Bool) var_3))))) : (((((/* implicit */int) var_5)) - (((/* implicit */int) var_13))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) - (var_3)));
        var_20 *= ((/* implicit */short) ((var_13) ? (arr_5 [i_4] [i_4] [i_4]) : (((/* implicit */int) arr_4 [i_4] [i_4]))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(signed char)2])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (arr_0 [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5]))))))));
        arr_20 [i_5] [(unsigned short)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1731722427)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10)))) : (var_2)));
        arr_21 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_4) : (var_6))))));
    }
    var_22 = ((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_3)) == (var_11))))) : (var_4))) == (((/* implicit */unsigned int) ((/* implicit */int) var_12))));
}
