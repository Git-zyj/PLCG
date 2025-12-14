/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50622
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (signed char)53))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65503)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-5581727987609301411LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0]) : (((/* implicit */int) var_5))))) : (((((/* implicit */unsigned int) arr_0 [i_0])) & (var_1)))));
        var_14 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_1 [i_0]))))));
    }
    var_15 &= ((/* implicit */signed char) min(((-((+(((/* implicit */int) var_7)))))), (((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_6))))) * (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_4)))))))));
    /* LoopSeq 4 */
    for (long long int i_1 = 1; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_2 [i_1 + 1]))));
        var_17 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((/* implicit */int) var_7)) & (((/* implicit */int) var_7))))))) > (((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_3))))) ? (((arr_3 [24U] [24U]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7))))))))));
        arr_4 [i_1 + 1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
        arr_5 [12U] &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_6)) & (arr_2 [i_1]))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-8309))) <= (-7065746884709013742LL)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_6))))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 23; i_2 += 4) /* same iter space */
    {
        var_18 = var_9;
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(short)8] [i_2 + 1]))))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 23; i_3 += 4) /* same iter space */
    {
        var_20 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [6LL] [6LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_1)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0))))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((-4136208921123440469LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_8 [i_4] [i_4])) ? (arr_8 [i_4] [i_4]) : (arr_8 [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (arr_3 [(unsigned char)24] [(unsigned char)24])))))))))))));
        var_23 = ((/* implicit */signed char) ((min((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_6 [i_4])), (var_10)))), (min((((/* implicit */long long int) var_2)), (var_8))))) + (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        arr_13 [i_4] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_10 [i_4] [i_4])))) ? (((var_4) ? (((/* implicit */long long int) var_1)) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65521)) || (((/* implicit */_Bool) (unsigned short)65522)))))))));
    }
}
