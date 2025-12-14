/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42755
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) var_10);
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_12)))) * (((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1]))))))) ? (((int) (+(var_3)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) (signed char)30))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(var_4))) & (((/* implicit */long long int) ((-868027006) & (((/* implicit */int) var_2)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) : (((/* implicit */int) ((_Bool) ((_Bool) var_10)))))))));
        var_16 = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)27)) - (((/* implicit */int) var_6))))))), (max((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (var_4))), (((/* implicit */long long int) var_2))))));
        arr_4 [(short)3] [(short)3] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_9)) != ((+(1942327588))))) ? ((+(((((/* implicit */_Bool) 868026995)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0])))))) : (min((((/* implicit */int) ((short) var_2))), ((-(((/* implicit */int) arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            arr_22 [i_5] [i_1] [(_Bool)1] [5] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_1])) % (((/* implicit */int) var_11))));
                            arr_23 [i_1] [i_1] [i_3] [i_4] [i_1] [10LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_2] [i_1])) || (((/* implicit */_Bool) var_13)))))) : ((~(var_1)))));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(short)3] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_20 [3] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_21 [12ULL] [i_2] [i_5] [18U]))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_4] [(_Bool)1] [i_4])) ? (((/* implicit */int) arr_15 [i_3] [4ULL] [i_3])) : (((/* implicit */int) arr_12 [i_1] [18U]))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((int) ((long long int) var_2))))));
                            arr_26 [i_1] [i_2] [i_1] [0] [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) arr_21 [i_2] [i_2] [i_4] [i_1])) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_18 [i_1] [i_2])) : (((((((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1] [i_3] [i_3])) + (2147483647))) >> (((868026995) - (868026968)))))));
                        }
                        arr_27 [(signed char)1] [(signed char)1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_1]))));
                        var_20 = ((/* implicit */int) ((short) 7304370136236610326ULL));
                        var_21 = ((/* implicit */_Bool) (~(868026989)));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    for (long long int i_9 = 2; i_9 < 20; i_9 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6159))) | (12542369707840264466ULL)))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */unsigned int) 868026974)) : (arr_25 [i_1] [i_1] [(_Bool)1] [i_9 - 2] [i_9 - 1] [i_7] [i_7])));
                            var_24 = (+(((/* implicit */int) arr_30 [19] [i_2] [i_7] [i_8] [i_9 - 2] [i_9])));
                        }
                    } 
                } 
            } 
            arr_37 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
        }
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) -868026995))));
    }
    var_26 = ((/* implicit */short) var_3);
}
