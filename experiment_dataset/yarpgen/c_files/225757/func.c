/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225757
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
    var_19 = ((/* implicit */unsigned long long int) var_2);
    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2502150713381221959LL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10650)))));
    var_21 = ((/* implicit */_Bool) (+(max((max((var_17), (((/* implicit */int) var_12)))), (((/* implicit */int) (_Bool)1))))));
    var_22 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_23 = ((/* implicit */short) arr_0 [18ULL]);
        var_24 ^= ((/* implicit */unsigned short) arr_0 [i_0]);
        var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned short) (_Bool)1))), ((~(((long long int) (unsigned char)216))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (min((((/* implicit */int) var_5)), (var_9))) : (((((/* implicit */int) arr_1 [i_0])) ^ ((+(((/* implicit */int) var_5))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
        arr_7 [i_1] = ((unsigned short) (signed char)91);
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
    {
        arr_10 [10ULL] [i_2] = ((/* implicit */unsigned int) (signed char)-91);
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (unsigned short i_4 = 3; i_4 < 18; i_4 += 2) 
            {
                for (signed char i_5 = 2; i_5 < 18; i_5 += 3) 
                {
                    {
                        var_26 ^= ((/* implicit */unsigned int) (-(arr_12 [i_4 + 1] [i_4 - 3] [i_4 + 1])));
                        arr_18 [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 - 1]))) : (arr_15 [i_4 - 2] [i_2 + 1])));
                        var_27 = ((/* implicit */_Bool) arr_0 [i_3]);
                        arr_19 [i_2] [i_2] [i_4] [i_4] [i_5 + 2] = (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_15 [14LL] [i_4 - 3]))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (+(arr_0 [i_2 + 1]))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((unsigned char) arr_5 [i_6] [i_6])))));
        var_30 = ((/* implicit */int) arr_1 [i_6]);
        var_31 = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_6] [i_6])) << (((((/* implicit */int) arr_20 [i_6] [i_6])) - (43)))));
    }
}
