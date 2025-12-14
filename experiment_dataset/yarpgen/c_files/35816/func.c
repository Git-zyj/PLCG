/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35816
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)1944)) && (((/* implicit */_Bool) (unsigned char)95))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((long long int) arr_4 [i_1]));
                    arr_10 [i_0] [i_1] [i_0] [i_2 + 1] |= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (var_3)));
                    arr_11 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 1] [i_1] [i_2]))));
                    arr_12 [(short)8] [i_2] [i_2] [20] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)162))));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_2 [i_0 + 2])), (9747530077175145503ULL))), (((/* implicit */unsigned long long int) (~(max((arr_4 [i_0]), (((/* implicit */unsigned int) -23)))))))));
        arr_14 [(signed char)5] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (short)-1857)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32182))) : (9747530077175145489ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_14))))))) ? (((long long int) arr_0 [i_0] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16)))));
        var_18 = ((/* implicit */int) ((long long int) max((((/* implicit */unsigned long long int) (-(2220414862359003065LL)))), (min((15739715464641356595ULL), (((/* implicit */unsigned long long int) 2116907463U)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 2) 
            {
                {
                    arr_23 [i_3] [i_4] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 - 1]))));
                    var_19 -= var_15;
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_20 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_3 - 1]))));
            arr_26 [i_3] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) arr_16 [10U])))));
            var_21 -= ((/* implicit */unsigned short) ((long long int) arr_19 [i_3 - 1]));
        }
        var_22 ^= ((/* implicit */long long int) ((unsigned int) 588390730));
        var_23 = ((/* implicit */unsigned int) arr_24 [i_3] [i_3] [i_3]);
    }
    var_24 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26309)) ? (6991790906034308207LL) : (((/* implicit */long long int) 13))))) : (max((var_6), (((/* implicit */unsigned long long int) (unsigned short)26298)))))), (((/* implicit */unsigned long long int) min(((-(68959492U))), (((/* implicit */unsigned int) var_5)))))));
    var_25 = ((/* implicit */_Bool) var_9);
}
