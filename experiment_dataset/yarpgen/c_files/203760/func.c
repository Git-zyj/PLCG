/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203760
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
    var_12 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242)))))) ? (max((var_9), (((/* implicit */long long int) var_7)))) : (var_2)))));
    var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1234038778)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned char) (_Bool)0)))))) : (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) var_7))))))));
    var_14 = ((/* implicit */unsigned char) ((((min((var_2), (var_9))) % (((/* implicit */long long int) (~(((/* implicit */int) var_6))))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_4)))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) ((_Bool) var_5))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 ^= ((/* implicit */int) ((arr_1 [i_0]) << (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)42821)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) - (42805)))));
        arr_3 [i_0] [i_0] = ((arr_1 [i_0]) <= (arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1]))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) min((((/* implicit */short) min((((/* implicit */unsigned char) arr_5 [i_4])), ((unsigned char)242)))), (var_5)))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) (_Bool)1)) : (0)))), (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4] [i_3])))))))));
                        var_16 = ((/* implicit */signed char) var_0);
                    }
                } 
            } 
        } 
        arr_16 [i_1] = ((/* implicit */int) 10178559114275618280ULL);
        var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(978125367)))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) arr_6 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_1]))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
    {
        var_18 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0))));
        arr_21 [i_5] = ((/* implicit */unsigned char) ((arr_13 [i_5] [i_5]) & (((/* implicit */int) ((unsigned char) var_3)))));
        arr_22 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_13 [i_5] [i_5])) & (var_3)));
    }
    var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) var_8)), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (1040187392)))) - (((long long int) var_9))))));
}
