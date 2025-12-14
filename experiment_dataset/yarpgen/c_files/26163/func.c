/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26163
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            arr_8 [i_0] = arr_3 [i_1];
            var_14 = ((/* implicit */unsigned char) (+(var_11)));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                var_15 = ((((/* implicit */_Bool) var_12)) ? (arr_2 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))));
                var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned long long int) arr_5 [i_2] [i_1] [i_2])) : (var_8)))) ? (((/* implicit */int) (unsigned short)57084)) : (((/* implicit */int) arr_7 [i_1] [(_Bool)1])))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) ((13490274211957839174ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57085))) : (arr_2 [i_0]))))));
                var_19 = (+(((0ULL) % (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551601ULL)) && (((/* implicit */_Bool) 16027300904832460819ULL))));
                            var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) 9052530503258676167ULL)) ? (arr_9 [i_5] [14ULL] [i_3]) : (arr_9 [i_0] [0ULL] [i_3])));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_5 + 1])) && (((/* implicit */_Bool) (+(arr_14 [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        {
                            arr_26 [i_0] [i_1] [14ULL] [i_6] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_1 + 1] [i_0] [i_0]))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0]))) : (arr_16 [i_0] [i_0])))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) var_4)))));
                        }
                    } 
                } 
            }
            for (int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_1] [i_1 + 1] [i_1 - 2])) ? (((/* implicit */int) arr_23 [i_0] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_23 [i_0] [i_1 - 1] [i_1])))))));
                var_25 = ((/* implicit */unsigned int) ((arr_16 [i_1 - 1] [i_1 + 1]) / (arr_16 [i_1 + 1] [i_1 - 1])));
            }
        }
        arr_29 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (_Bool)1))))), (arr_21 [i_0])))) ? (((/* implicit */unsigned long long int) (-((~(var_9)))))) : ((+(((((/* implicit */_Bool) (unsigned short)8432)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_13 [i_0] [i_0] [i_0])))))));
        var_26 -= ((/* implicit */_Bool) 459001866842644862ULL);
        arr_30 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_14 [i_0])) ? (arr_11 [i_0] [i_0]) : (arr_11 [i_0] [9U]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_0])))))));
    }
    for (unsigned short i_9 = 4; i_9 < 15; i_9 += 2) 
    {
        arr_33 [9ULL] = ((/* implicit */unsigned long long int) var_4);
        arr_34 [i_9] |= ((/* implicit */unsigned long long int) arr_31 [i_9 - 4]);
    }
    var_27 = ((/* implicit */unsigned short) var_7);
    var_28 = max((((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (((/* implicit */unsigned long long int) (-(var_9)))) : (min((var_10), (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) ((max((var_5), (var_6))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (2464239669U)))))))));
}
