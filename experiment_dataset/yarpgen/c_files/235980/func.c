/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235980
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
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_13)) + (((/* implicit */int) var_15)))) : (((((/* implicit */int) var_11)) + (((/* implicit */int) var_18))))))) ? (((((/* implicit */int) ((unsigned char) 1564527689))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))) : (min((((((/* implicit */int) var_2)) + (((/* implicit */int) var_7)))), (((/* implicit */int) var_9)))));
    var_20 += ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [i_0] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned char)2] [(unsigned char)2])) ? (204638616331436616LL) : (204638616331436616LL)))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)5253), (((/* implicit */unsigned short) arr_9 [i_1] [i_1] [i_0]))))))))));
                    var_22 = ((/* implicit */int) ((((((-204638616331436638LL) ^ (((/* implicit */long long int) arr_1 [i_0])))) % (min((((/* implicit */long long int) arr_3 [i_0])), (arr_2 [i_0] [i_0]))))) / (max((arr_0 [i_0]), (((/* implicit */long long int) arr_4 [i_2] [i_0]))))));
                }
            }
        } 
    } 
}
