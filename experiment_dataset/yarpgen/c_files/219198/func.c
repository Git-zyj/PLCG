/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219198
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-4451964385185023350LL)))) < (max((((/* implicit */unsigned long long int) (_Bool)1)), ((+(var_0)))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned long long int) ((long long int) var_3)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (2147483647)))) < (max((((/* implicit */unsigned long long int) var_2)), (4185869935072609985ULL)))))) : (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) (_Bool)1);
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 1U))) ? (((/* implicit */unsigned long long int) ((var_1) / (((/* implicit */int) (unsigned short)21643))))) : ((-(2994144672228646505ULL)))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)54193)) || (((/* implicit */_Bool) var_10))))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (arr_0 [i_0]))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (_Bool)1))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_1])) : (-1983885129)))));
        arr_5 [i_1] = ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6)));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))) ? ((~(558446353793941504ULL))) : (((arr_3 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
        /* LoopSeq 1 */
        for (int i_2 = 4; i_2 < 17; i_2 += 1) 
        {
            arr_9 [i_2] [i_1] |= ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) (unsigned short)43892)))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (unsigned short)4032))) ? (var_3) : (arr_3 [i_1])));
        }
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_8))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [i_3])), (min((((/* implicit */unsigned int) (unsigned short)41617)), (3092010831U)))))) ? (((((((/* implicit */_Bool) (unsigned short)21643)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41642))) : (2994144672228646507ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61516))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-122)), (var_10)))))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((max((arr_13 [i_3]), (((/* implicit */unsigned long long int) (unsigned char)207)))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2994144672228646505ULL))))) : ((((+(arr_11 [11]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2)))))));
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 7U)) ? (1459923080283311654LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (-2147483638) : (((/* implicit */int) (unsigned short)41629))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (unsigned char)179)) & (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) (_Bool)1)))))))));
}
