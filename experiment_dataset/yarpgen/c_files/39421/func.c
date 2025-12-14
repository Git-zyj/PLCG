/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39421
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
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */int) ((var_10) != (((/* implicit */int) (_Bool)1))))) << (((/* implicit */int) (unsigned char)23))))) || (((/* implicit */_Bool) ((var_3) ? ((+(var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))))));
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((signed char) ((unsigned int) ((((/* implicit */int) var_3)) / (((/* implicit */int) (signed char)28)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_13 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [2ULL])), (((((/* implicit */_Bool) (signed char)-32)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) var_10))));
        var_15 = max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (short)-7407)) ? (16777215) : (((/* implicit */int) (_Bool)1)))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned int) (!((_Bool)1)));
                    var_17 = ((/* implicit */unsigned int) arr_7 [i_1] [i_2] [i_3]);
                    arr_11 [3U] [3U] [i_2] = ((/* implicit */unsigned int) (+(max((arr_7 [i_1] [i_2] [i_1]), (((/* implicit */unsigned long long int) (short)-7413))))));
                    arr_12 [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_9 [i_1] [i_2])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (16777215)))) : (arr_6 [i_3] [i_2] [i_1])));
                }
            } 
        } 
        var_18 *= ((/* implicit */_Bool) var_0);
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7412)) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))) : ((+(15479479853953672436ULL))))))));
                    var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_13 [i_5] [i_4] [i_1])))))))))));
                }
            } 
        } 
    }
}
