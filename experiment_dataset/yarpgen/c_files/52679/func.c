/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52679
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned char) (((-(((((/* implicit */int) (unsigned short)62750)) ^ (-44636741))))) >= (((/* implicit */int) (signed char)-31))));
        var_11 ^= ((/* implicit */unsigned short) arr_1 [(unsigned short)7] [(unsigned short)7]);
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1891264725U)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (unsigned short)62750))));
                        arr_12 [i_1] [i_3] [i_2] [i_2] [i_1] |= ((/* implicit */_Bool) (+((+(-6287456421824420448LL)))));
                    }
                } 
            } 
        } 
        arr_13 [i_1] |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)255)) ? (-1213175755977784236LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62750)))))));
        var_13 = ((/* implicit */_Bool) (unsigned char)255);
        var_14 = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_1 [i_1] [i_1]), (arr_1 [i_1] [i_1]))))));
    }
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (var_8)));
}
