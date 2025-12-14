/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38312
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((unsigned char) var_2)))));
    var_14 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) var_8)))))))), (((unsigned int) -446302549338711270LL)));
    var_15 = ((/* implicit */long long int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 1]))));
        var_17 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9554))) >= (16250785334215536851ULL)));
        arr_4 [i_0] = ((/* implicit */long long int) ((arr_3 [i_0 + 1]) + (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) (-2147483647 - 1)))))));
        arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0])))));
        arr_6 [i_0] = ((/* implicit */unsigned char) (unsigned short)54272);
    }
    for (int i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        arr_16 [i_4] [i_2] [i_2] [7] = ((/* implicit */unsigned short) ((long long int) ((int) arr_13 [i_1] [i_2] [i_3] [i_1 - 1])));
                        arr_17 [i_4] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_10 [i_1 + 1])) ? (((/* implicit */int) arr_15 [i_1 + 1] [i_1])) : (((/* implicit */int) arr_15 [i_1 + 1] [i_1 + 1])))));
                        arr_18 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)9585)))) > (((/* implicit */int) min((arr_15 [i_1 - 1] [i_1 - 1]), (arr_15 [i_1 - 1] [i_1 + 1]))))));
                    }
                } 
            } 
        } 
        arr_19 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (arr_9 [(_Bool)1] [i_1 + 1])))) ? (((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_9 [i_1] [i_1])) : (-9223372036854775802LL)))) : (((/* implicit */unsigned int) -2147483641))));
        arr_20 [i_1] = ((/* implicit */short) ((((/* implicit */int) var_10)) % (max((((/* implicit */int) (signed char)89)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1])) : (((/* implicit */int) var_7))))))));
        /* LoopSeq 2 */
        for (long long int i_5 = 2; i_5 < 15; i_5 += 1) 
        {
            arr_23 [(_Bool)1] [i_5 + 3] [i_5] = (~(9223372036854775807LL));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    {
                        arr_29 [i_1] [i_5] [i_6] [(unsigned char)11] [(short)3] [i_1 - 1] = ((/* implicit */unsigned long long int) 33488896U);
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((arr_26 [i_5 - 1]) > (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_1] [i_5 + 1] [i_1 + 1] [i_7])) % (((/* implicit */int) arr_13 [i_1] [i_5 + 3] [i_1 - 1] [i_7]))))))))));
                        arr_30 [i_1] [i_5] [i_6] [i_7] [i_7] [(short)3] = 2147483645;
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (+(((9223372036854775807LL) + (-2921889529746112328LL))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_8 = 4; i_8 < 15; i_8 += 3) 
        {
            arr_34 [i_1] &= ((/* implicit */unsigned int) -2147483639);
            var_20 = ((/* implicit */unsigned long long int) (~(arr_9 [i_1 - 1] [i_1 - 1])));
        }
    }
    var_21 = ((/* implicit */long long int) var_0);
}
