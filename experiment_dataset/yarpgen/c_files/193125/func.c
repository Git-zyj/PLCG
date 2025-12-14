/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193125
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (signed char i_4 = 2; i_4 < 10; i_4 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 4049057967769015275LL)) || (((/* implicit */_Bool) -227621366))))) / (((/* implicit */int) ((unsigned short) max((-260151813), (((/* implicit */int) var_13))))))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (arr_4 [i_0])));
                            arr_14 [2LL] [12] [0ULL] [7LL] [i_3] [12LL] = ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (525871935) : (((/* implicit */int) max(((short)-1956), ((short)-1956))))))) & (var_12));
                            arr_15 [9] [11ULL] [6U] [i_3] [(unsigned char)12] [2LL] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4 + 1])))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_1] [i_0] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -8238556558134435683LL))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */int) (signed char)0);
            /* LoopNest 2 */
            for (unsigned char i_6 = 4; i_6 < 10; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_28 [4U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */long long int) arr_0 [(signed char)11] [i_6 - 1]))));
                        arr_29 [i_7] [i_7] [i_6] [1LL] [6U] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_11)) > (((/* implicit */int) ((((/* implicit */_Bool) 4945893916113742844LL)) || (((/* implicit */_Bool) var_17)))))));
                        arr_30 [i_0] [i_5] [i_6] [i_6] [(unsigned char)3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_12 [i_0] [4U] [i_6] [i_6 - 2] [i_6]) : (((/* implicit */long long int) ((unsigned int) var_1)))));
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */long long int) (-(-423247118)));
        arr_31 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))) : (4945893916113742844LL))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)7676)) > (((/* implicit */int) (unsigned short)7676))));
        arr_32 [i_0] = ((/* implicit */long long int) ((signed char) (unsigned char)0));
    }
    for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) ((unsigned short) var_3));
        arr_35 [i_8] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) arr_33 [i_8 + 1])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
    {
        arr_38 [i_9] = ((/* implicit */unsigned char) ((signed char) ((9205173611271708448LL) < (8662484842256632913LL))));
        var_24 = ((unsigned long long int) (!(((/* implicit */_Bool) var_5))));
    }
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */long long int) var_10)), (var_12))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)37)))));
}
