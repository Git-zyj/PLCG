/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36022
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-23)) + (36)))))) : (min((473279912616720363ULL), (((/* implicit */unsigned long long int) (unsigned char)91))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) (~(((((/* implicit */int) var_1)) & (((/* implicit */int) (!(var_10))))))));
        var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62692)) + (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (482882908U)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_2])) > (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) || (((/* implicit */_Bool) arr_1 [i_2])))))));
            var_21 = ((/* implicit */unsigned short) 3476906830U);
            var_22 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_7 [i_1] [i_2])) ^ (var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10934689323989914735ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) : (arr_0 [i_2])))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) var_7))))) : (((long long int) ((7U) / (((/* implicit */unsigned int) -2044684726)))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [i_3] [i_3 - 1] [i_4]);
                        var_24 = ((long long int) var_5);
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)127)))) / (((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_3 - 1] [i_4]))) : (arr_6 [i_3 - 1]))))))))));
                        arr_13 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (((~(max((((/* implicit */unsigned int) var_0)), (3569609333U))))) >> ((((+(((/* implicit */int) var_1)))) + (52)))));
                        var_26 = ((/* implicit */signed char) var_16);
                    }
                } 
            } 
            var_27 = ((/* implicit */long long int) (-(-2044684731)));
        }
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_6 = 1; i_6 < 17; i_6 += 1) 
            {
                var_28 = ((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) != ((+(((/* implicit */int) (short)17986))))));
                /* LoopSeq 2 */
                for (unsigned int i_7 = 4; i_7 < 15; i_7 += 1) 
                {
                    var_29 *= ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_7 + 3] [i_5] [i_1] [i_6 + 1]))));
                    arr_21 [i_6] [i_6] [i_6 - 1] [(short)14] [i_6] [i_5] = ((/* implicit */unsigned int) var_2);
                }
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    arr_25 [i_1] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (473279912616720385ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
                    var_30 = ((/* implicit */unsigned short) arr_4 [i_6 + 1] [i_8]);
                }
            }
            var_31 += min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) (unsigned short)16688))))), (arr_19 [i_1] [i_1] [(unsigned short)16] [i_5]));
        }
        var_32 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) % ((-(((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_1] [i_1])), (var_8))))))));
        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (-(5804559728071377788ULL)))) ? (((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) arr_24 [i_1] [i_1] [(unsigned short)0] [(signed char)16] [i_1] [i_1])))) : (((((/* implicit */_Bool) -1)) ? (-6) : (((/* implicit */int) arr_5 [i_1])))))) : (((/* implicit */int) max((((unsigned short) arr_6 [i_1])), (max((var_8), (((/* implicit */unsigned short) var_0)))))))));
        var_34 -= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (~((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1] [0LL] [i_1]))) : (4186609835U))))))));
    }
}
