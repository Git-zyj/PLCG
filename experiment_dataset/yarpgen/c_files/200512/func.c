/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200512
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (_Bool)1))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) 1093026440)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [0U] [i_4]))) / (arr_6 [i_0] [i_0] [i_2]))) : (arr_11 [i_0] [i_0] [i_0] [i_0] [8]))))));
                            arr_14 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 20LL))));
                        }
                        for (unsigned int i_5 = 3; i_5 < 9; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_1] [i_2] [(unsigned short)9] [i_5] = arr_15 [i_5 + 3] [i_5 - 2] [i_5] [i_5 + 1] [i_1];
                            arr_20 [i_3] [i_3] = ((var_12) == (((/* implicit */long long int) arr_15 [i_5 - 3] [(short)4] [i_5 - 3] [i_5] [i_5 + 3])));
                            var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)19767))))) ? (arr_4 [i_5 + 3] [i_1]) : (((/* implicit */int) arr_3 [i_0]))));
                        }
                        arr_21 [i_0] [3LL] [i_2] [i_3] = ((/* implicit */unsigned long long int) (~(arr_16 [i_0] [i_1] [3LL] [i_3] [i_3])));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            arr_26 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
            var_23 *= ((/* implicit */signed char) ((((0LL) | (15LL))) != (((/* implicit */long long int) arr_2 [i_0] [i_6]))));
            arr_27 [i_0] [i_6] = ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_6] [i_6]);
            arr_28 [i_0] [i_0] [(short)11] = ((signed char) (signed char)74);
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    {
                        arr_33 [9LL] [i_6] [i_7] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                        arr_34 [i_0] = ((/* implicit */long long int) (short)-29454);
                    }
                } 
            } 
        }
        arr_35 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) max((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_11))))) : (min((((/* implicit */int) arr_5 [i_0])), (var_8)))))) || (((/* implicit */_Bool) max(((short)29453), ((short)29476))))));
        var_24 = ((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_25 = ((/* implicit */short) arr_2 [10] [10]);
        var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) >= ((+(((/* implicit */int) (signed char)-31))))));
    }
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        var_27 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_36 [i_9])) ? (arr_36 [i_9]) : (((/* implicit */int) arr_37 [i_9] [i_9]))))));
        arr_38 [i_9] = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((0ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (841387443)))))))));
    var_29 = ((/* implicit */unsigned long long int) var_9);
    var_30 = ((/* implicit */unsigned short) var_8);
    var_31 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_3)), (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1670183046)))) | ((((_Bool)1) ? (-6113806304675865463LL) : (((/* implicit */long long int) var_1))))))));
}
