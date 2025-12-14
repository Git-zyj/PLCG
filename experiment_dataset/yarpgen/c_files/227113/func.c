/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227113
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
    var_16 &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_14)), (((max((var_7), ((_Bool)0))) ? (((var_9) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((unsigned int) 0U))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        var_17 -= ((/* implicit */unsigned char) var_10);
        arr_3 [5ULL] &= ((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), (((((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (short)-27722)) : (((/* implicit */int) (short)-27722)))) - (((/* implicit */int) arr_2 [i_0] [i_0 - 3]))))));
        var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max(((short)-1), ((short)32756)))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) ((short) var_6))))), (((/* implicit */int) (short)27709))));
        var_19 += ((/* implicit */signed char) max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) max((((/* implicit */signed char) var_10)), (arr_1 [i_0] [i_0 - 3])))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 3])) ? (((/* implicit */int) (short)-27722)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))), (max((4224186361U), (((var_3) ? (1392230357U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        var_20 -= ((/* implicit */short) max((max((var_10), ((_Bool)1))), (max((max((arr_2 [i_0] [i_0]), ((_Bool)1))), (arr_0 [i_0 - 3])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) (unsigned char)250)) + (((/* implicit */int) var_9))))));
                        var_22 = ((/* implicit */signed char) var_4);
                        arr_15 [i_3] = ((/* implicit */short) (~(arr_12 [i_2 - 1] [i_3 - 1] [i_3] [i_3])));
                        var_23 = ((/* implicit */signed char) ((unsigned int) arr_12 [i_3] [i_3 - 2] [i_3 - 2] [i_2 - 1]));
                    }
                } 
            } 
        } 
        arr_16 [i_1] = ((_Bool) (+(arr_5 [i_1] [i_1])));
    }
    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned int) arr_7 [i_5] [i_5]);
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_25 [i_5] [i_6] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_14 [i_5] [i_6] [i_6] [i_7] [i_7])))) & ((-((((_Bool)0) ? (4875906861937356233ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    var_24 *= ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (arr_5 [i_5] [i_7])))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_15)))) : (((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)29407)) ^ (((/* implicit */int) (short)-19684))))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5]))) + (11724620364347751887ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27722))) : (((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5])))))))) ? ((-(arr_5 [i_5] [i_5]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))));
    }
    for (short i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        arr_29 [i_8] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_27 [i_8])), (var_2)))), (((max((16777504164265611702ULL), (0ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_8 [i_8] [i_8] [i_8])))))))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_14 [i_8] [(_Bool)1] [i_8] [i_8] [i_8]))));
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_8])) ? (((((/* implicit */int) arr_26 [i_8] [i_8])) + (((/* implicit */int) var_6)))) : (((/* implicit */int) ((_Bool) (_Bool)0)))))) ? (((/* implicit */int) max((arr_26 [i_8] [i_8]), (arr_26 [i_8] [i_8])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((signed char) arr_8 [i_8] [i_8] [i_8])))))));
        arr_30 [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */short) arr_27 [i_8])), ((short)-24479))))));
    }
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-56))))) : (max(((+(var_13))), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_2)))))))));
    var_29 = ((/* implicit */unsigned char) var_8);
    var_30 = max((((_Bool) max((var_2), (((/* implicit */short) (_Bool)1))))), ((!(var_6))));
}
