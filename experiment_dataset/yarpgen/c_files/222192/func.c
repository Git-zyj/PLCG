/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222192
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
    var_11 = ((/* implicit */signed char) min(((_Bool)1), ((_Bool)1)));
    var_12 = var_2;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_4 [4] = ((/* implicit */unsigned char) arr_1 [i_0] [8LL]);
        var_13 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) arr_0 [(_Bool)1])), (max((arr_1 [9ULL] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (_Bool)1))));
                    var_15 += (-(((/* implicit */int) (_Bool)1)));
                    arr_10 [(signed char)5] [(short)1] [i_2] = ((/* implicit */short) var_2);
                }
            } 
        } 
        var_16 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_0]) : (arr_5 [i_0])))));
    }
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) (+(((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) arr_0 [i_3])))))));
        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_3] [i_3]))));
        arr_13 [i_3] |= ((/* implicit */_Bool) 1964877290567413812ULL);
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) arr_6 [11ULL] [i_3] [(signed char)21]);
        var_19 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (short)-16492))))) : ((+(((/* implicit */int) arr_7 [(_Bool)1] [i_3] [11LL]))))))));
    }
}
