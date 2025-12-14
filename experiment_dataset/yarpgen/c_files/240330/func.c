/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240330
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) ((_Bool) arr_1 [i_0]))) : (((/* implicit */int) (_Bool)1))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) != (929188653U)))))))) ? (((unsigned int) (_Bool)1)) : (((((/* implicit */_Bool) (((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_1 [i_0])))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 4; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 |= ((/* implicit */signed char) 12149047039927515540ULL);
            var_20 ^= var_0;
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) /* same iter space */
            {
                var_21 -= ((/* implicit */unsigned short) ((signed char) var_4));
                var_22 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_1 + 3]))));
                var_23 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (1320614489U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((unsigned char) arr_0 [i_1 - 4]))));
                            var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_5] [i_5])) : (((/* implicit */int) (_Bool)1))));
                            arr_17 [i_1] [17U] [i_1 - 1] [i_3] [i_3] [1ULL] [i_1] = ((/* implicit */unsigned long long int) ((short) 4294967295U));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_6 - 1])) || (((/* implicit */_Bool) arr_4 [i_1]))));
                var_27 = ((/* implicit */_Bool) arr_7 [i_6]);
                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) var_13))))))));
            }
            for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7] [i_7 + 1] [i_7] [i_7]))) : (arr_18 [i_1 - 3])));
                var_30 = ((/* implicit */unsigned int) var_13);
                arr_25 [i_1] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_1 + 1] [i_1 - 3] [i_1 + 3] [i_1 - 2])) ^ (((/* implicit */int) arr_11 [i_1 + 4] [i_1 + 2] [i_1 - 4] [i_1 + 3]))));
            }
            arr_26 [i_1 + 2] = ((/* implicit */unsigned int) (_Bool)1);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_31 = ((/* implicit */unsigned long long int) arr_16 [i_1 + 2] [i_8] [i_8]);
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_16), (var_1)))) ? (((/* implicit */int) ((short) arr_11 [i_1] [i_1] [i_1] [8U]))) : ((-(((/* implicit */int) arr_11 [16U] [i_1 + 4] [2ULL] [i_1]))))));
            var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))) : ((-((-(((/* implicit */int) arr_10 [i_1 + 3] [i_1] [i_8]))))))));
        }
        arr_30 [14U] [(_Bool)1] &= ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) (signed char)-1)), (((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_1] [i_1 - 2] [i_1])))))))));
    }
    var_34 = ((/* implicit */_Bool) min(((unsigned char)143), (((/* implicit */unsigned char) (_Bool)1))));
    /* LoopSeq 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_11 = 1; i_11 < 15; i_11 += 2) 
            {
                for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    {
                        var_35 = ((/* implicit */_Bool) (+(6631658834264116880ULL)));
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) <= (((/* implicit */int) ((11815085239445434735ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_10] [i_9] [i_9]))) : (((((var_7) ^ (var_2))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_21 [i_9] [i_9]), (((/* implicit */unsigned char) (_Bool)1))))))))));
        }
        var_38 = ((/* implicit */_Bool) arr_15 [i_9] [i_9] [i_9] [i_9] [6U] [i_9]);
        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_6)))))))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_42 [i_13] = ((/* implicit */unsigned long long int) arr_14 [i_13] [(signed char)14]);
        var_40 = ((/* implicit */unsigned int) arr_4 [i_13]);
        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (~(((((/* implicit */int) arr_7 [i_13])) ^ (((/* implicit */int) arr_7 [i_13])))))))));
        arr_43 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_13] [i_13])) && (((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_8 [i_13] [i_13] [i_13]))))));
        arr_44 [i_13] [i_13] &= ((/* implicit */signed char) var_16);
    }
    var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((signed char) min((((/* implicit */unsigned int) var_5)), (var_8))))) : ((~((+(((/* implicit */int) var_14)))))))))));
}
