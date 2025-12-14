/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240445
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) max((((long long int) (~(((/* implicit */int) (short)-32757))))), (((/* implicit */long long int) var_7)))))));
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65514)) >> (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : (((/* implicit */int) min((var_10), (var_10))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (-(((((((/* implicit */int) var_9)) < (var_1))) ? ((~(((/* implicit */int) var_3)))) : ((~(((/* implicit */int) var_8)))))))))));
        var_14 = ((/* implicit */int) max((var_14), (((max((min((((/* implicit */int) var_7)), (arr_0 [i_1] [i_1]))), (arr_0 [i_1] [i_1]))) ^ (((((/* implicit */_Bool) min((arr_0 [i_1] [i_1]), (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))))));
    }
    for (long long int i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 20; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                {
                    var_15 -= ((/* implicit */int) ((unsigned int) min((((((/* implicit */_Bool) var_1)) ? (arr_10 [i_4] [18LL] [18LL] [i_2]) : (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_8 [i_3] [i_3] [i_4]))))))));
                    arr_12 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (var_0)))) > (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_4 + 3]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                }
            } 
        } 
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((((/* implicit */unsigned int) ((signed char) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 2]))), (min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)63)), (var_3)))), (max((var_0), (((/* implicit */unsigned int) var_10)))))))))));
        arr_13 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_6 [i_2 + 2])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1099955058U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((395096151U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) arr_10 [i_2] [i_2 + 1] [16LL] [i_2])) ? (var_0) : (((/* implicit */unsigned int) var_1))))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 2; i_5 < 20; i_5 += 3) 
        {
            for (unsigned int i_6 = 1; i_6 < 19; i_6 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (signed char)0)), (var_0)))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        for (int i_8 = 1; i_8 < 20; i_8 += 1) 
                        {
                            {
                                var_18 ^= ((/* implicit */short) ((long long int) var_0));
                                var_19 -= ((unsigned char) (~(arr_6 [i_6 + 2])));
                            }
                        } 
                    } 
                    arr_26 [i_6] = (~(var_0));
                }
            } 
        } 
        arr_27 [i_2] = ((/* implicit */unsigned int) ((int) arr_7 [i_2]));
    }
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((unsigned int) (~(arr_4 [i_9]))));
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_4), (var_10)))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_9))))) : (((/* implicit */int) (signed char)83)))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))), (var_5)))) - (14949)))));
        /* LoopNest 3 */
        for (unsigned int i_10 = 2; i_10 < 18; i_10 += 1) 
        {
            for (long long int i_11 = 1; i_11 < 18; i_11 += 3) 
            {
                for (short i_12 = 4; i_12 < 18; i_12 += 3) 
                {
                    {
                        var_22 = ((/* implicit */int) max((((unsigned int) var_0)), ((-(min((arr_36 [i_12]), (((/* implicit */unsigned int) arr_28 [(unsigned char)1]))))))));
                        arr_39 [8LL] [i_9] [i_10] [i_10] [i_12] [i_9] = ((/* implicit */int) ((((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) != (((/* implicit */unsigned int) ((int) var_0)))));
                    }
                } 
            } 
        } 
        var_23 *= ((/* implicit */unsigned short) (~(min((((/* implicit */int) var_5)), (var_1)))));
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_1)) >= (max((((unsigned int) var_0)), (((/* implicit */unsigned int) var_5))))));
}
