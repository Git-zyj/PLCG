/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215047
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
    var_13 = var_2;
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0 + 1] |= ((/* implicit */_Bool) (unsigned char)37);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((arr_0 [i_0 - 1]) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1)), (336177005776705217ULL)))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : ((~(arr_1 [(_Bool)1]))))) : (((((/* implicit */_Bool) var_9)) ? (((int) var_12)) : (((int) var_6))))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                {
                    var_14 += ((/* implicit */_Bool) (unsigned char)255);
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)207))))) : (((/* implicit */unsigned int) max((var_2), (arr_7 [i_2 + 2] [9] [i_2 - 2]))))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])), (18110567067932846399ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((18110567067932846411ULL), (((/* implicit */unsigned long long int) arr_5 [i_1])))))))));
        arr_13 [i_1] [i_1] = ((/* implicit */signed char) var_6);
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            var_17 += ((/* implicit */_Bool) max((var_12), (var_5)));
            var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) ((signed char) 336177005776705204ULL))) ? (max((((/* implicit */unsigned long long int) var_12)), (11724925511016152841ULL))) : (((/* implicit */unsigned long long int) ((arr_14 [(unsigned char)6]) / (((/* implicit */int) var_6))))))) / (((/* implicit */unsigned long long int) ((int) ((var_8) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))));
            arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_12)), (336177005776705217ULL)));
        }
        /* vectorizable */
        for (unsigned char i_5 = 3; i_5 < 13; i_5 += 1) 
        {
            var_19 |= ((/* implicit */int) ((signed char) var_3));
            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [0LL] [i_5 - 3] [i_5] [i_5 + 1])) ? (var_3) : (18110567067932846411ULL)));
            var_21 = ((/* implicit */signed char) 4294967286U);
        }
    }
}
