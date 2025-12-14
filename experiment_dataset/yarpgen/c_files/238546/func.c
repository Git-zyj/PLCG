/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238546
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
    var_15 = ((/* implicit */signed char) (unsigned short)45764);
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)45737)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19771))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-64)) ? (6875829253795498483ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28478)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64707))) : (7702753725253731617ULL)))));
    var_17 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-25)), ((unsigned short)45782)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-65)), (2903583712772639856LL)))) : (min((7119961216024708699ULL), (((/* implicit */unsigned long long int) -8876737130604069492LL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) (~((-((+(((/* implicit */int) arr_3 [i_0]))))))));
                arr_7 [(unsigned short)3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) (short)-26801)) : (((/* implicit */int) (short)-26801))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) ((unsigned short) 2863413690U))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1 + 1]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 988874140U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26801))) : (-8876737130604069492LL)))), (((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */unsigned long long int) 493175438U)) : (11570914819914053134ULL)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (signed char)-98);
}
