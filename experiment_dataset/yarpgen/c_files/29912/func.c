/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29912
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_5)))) / (var_2)));
        var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((var_13) <= (var_14)))) : (((/* implicit */int) var_8))))));
        arr_3 [(unsigned char)11] [i_0] = ((/* implicit */signed char) (_Bool)1);
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    var_19 *= ((unsigned char) (-(min((((/* implicit */unsigned long long int) var_5)), (var_4)))));
                    arr_12 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((var_14) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)206)))))))), (1192433338U)));
                    arr_13 [i_1] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) max((var_12), ((unsigned char)149)))) : (((((/* implicit */int) var_1)) % (((/* implicit */int) var_6))))))));
                }
            } 
        } 
        var_20 |= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (signed char i_4 = 3; i_4 < 9; i_4 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 859100931358413084ULL)) ? (-420103743) : (((/* implicit */int) (unsigned short)44185))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-82)) ? (-1339127881) : (((/* implicit */int) (_Bool)1))));
        }
        for (signed char i_5 = 3; i_5 < 9; i_5 += 2) /* same iter space */
        {
            var_23 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (arr_0 [i_1] [i_5 - 3]) : (arr_0 [i_1] [i_5 - 1])))) | (((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [9U]))) : ((-(arr_18 [i_1] [i_1] [(_Bool)1]))))));
            arr_20 [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(var_3)))), (min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) arr_5 [i_1] [(signed char)11])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
        }
    }
    for (int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)43395)) ? (859100931358413075ULL) : (10798449729681206553ULL)));
        var_25 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (859100931358413077ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((unsigned char) var_8))))), (max((((((/* implicit */int) var_7)) / (((/* implicit */int) arr_15 [(unsigned short)7])))), (((/* implicit */int) arr_15 [i_6]))))));
        arr_23 [(short)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44871)) ? (((/* implicit */unsigned long long int) 2787614983U)) : (min((859100931358413096ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((((/* implicit */_Bool) arr_6 [i_6] [(_Bool)1])) ? (((/* implicit */int) arr_6 [i_6] [i_6])) : (((/* implicit */int) arr_7 [i_6])))) : (min((((((/* implicit */int) (short)-18384)) - (((/* implicit */int) arr_6 [i_6] [i_6])))), (((/* implicit */int) var_0))))));
    }
    var_26 = ((/* implicit */short) min((max((min((var_15), (var_2))), (((/* implicit */int) var_10)))), (((((/* implicit */int) (unsigned short)6208)) & ((~(((/* implicit */int) (short)-176))))))));
}
