/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204977
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))))));
        var_15 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (short)7130)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_3)))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_0 [i_0]))))) << (((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)232))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_5)))) - (1394842917893131877ULL)))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0]))), ((~(arr_0 [i_0]))))))));
    }
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) 7480304698507177569LL))));
    var_18 = ((/* implicit */unsigned short) -1LL);
    /* LoopSeq 2 */
    for (signed char i_1 = 4; i_1 < 21; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1])) <= (((/* implicit */int) arr_2 [i_1] [i_1 - 1]))))) >> (max((((/* implicit */long long int) (_Bool)1)), (-8913320203927661598LL))))) / (((/* implicit */int) arr_2 [i_1] [i_1 - 3]))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1)))))));
        arr_5 [i_1] [i_1 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2602577553U)) ? (((/* implicit */int) (unsigned short)37864)) : (((/* implicit */int) (unsigned char)228))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 21)) ? (((/* implicit */int) (!((_Bool)1)))) : ((+(((/* implicit */int) (unsigned char)99))))));
    }
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (unsigned short)17802))));
        arr_9 [i_2] = ((/* implicit */unsigned short) arr_7 [i_2] [i_2]);
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)8191)))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                {
                    arr_15 [i_2] [i_3 - 2] [i_3 - 2] [i_4] = ((/* implicit */long long int) arr_2 [i_2] [i_3 + 2]);
                    arr_16 [i_2] [i_3] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2356492912U)))), (((1632054444730587139LL) / (-2134968600930254138LL)))))));
                }
            } 
        } 
    }
}
