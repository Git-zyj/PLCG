/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193346
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [14ULL] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_0 [(signed char)2])) ? (((/* implicit */int) arr_0 [14])) : (((/* implicit */int) arr_0 [(unsigned short)12])))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_0])) ? ((-(arr_5 [i_0] [i_0] [i_2] [1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))))))) ? (((((((/* implicit */long long int) ((/* implicit */int) var_8))) + (arr_6 [i_2]))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (short)-8550)) : ((-(-1042826991))))))));
                    arr_8 [i_0] [i_1] [(unsigned short)12] [i_0] = ((/* implicit */unsigned short) (-(arr_1 [i_0] [i_2])));
                    arr_9 [i_0] [i_1] [i_2] = (+(((((/* implicit */_Bool) 1295404760)) ? (((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */unsigned int) -900355234)) : (2413372584U))) : (((/* implicit */unsigned int) ((532573025) - (((/* implicit */int) (unsigned short)65535))))))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) - (arr_6 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : ((-(((/* implicit */int) var_7)))))));
    }
    var_15 = ((/* implicit */short) var_11);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_1) : (((/* implicit */long long int) var_4))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1295404761)) - (4057119219U)))) ? (((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)11))))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4057119219U)) || (((/* implicit */_Bool) (short)31615)))))) : (-3253389725102390249LL)))));
}
