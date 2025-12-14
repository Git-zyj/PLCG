/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229432
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))));
    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (unsigned char)254))))) ? (min((var_5), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(var_0))), (var_5)))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (var_7))))))) : ((+(((arr_1 [i_0]) + (arr_1 [i_0])))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_0])))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_16)), (-1700399174)))) ? (((/* implicit */unsigned long long int) var_9)) : ((~(15715307798634999615ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            var_22 = ((/* implicit */signed char) (+(min((min((arr_2 [i_0 + 1] [17U] [(_Bool)1]), (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_3 [20ULL] [i_0] [i_1])))))))));
            var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) min(((unsigned short)56655), (((/* implicit */unsigned short) var_3))))) : ((~(((/* implicit */int) var_17))))))), ((~(min((var_5), (((/* implicit */unsigned long long int) var_14))))))));
            var_24 = (_Bool)1;
            arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (((((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (min((((/* implicit */long long int) (_Bool)1)), (288230376151711744LL)))))));
            /* LoopSeq 2 */
            for (int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                arr_9 [i_0] [i_1] [i_2 - 3] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-32757))));
                var_25 = min((((((/* implicit */_Bool) arr_8 [i_2 - 3] [i_2] [i_2] [i_0 + 1])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) 854915760)))), (((/* implicit */unsigned int) arr_5 [i_0 + 1] [i_1 - 1] [i_2])));
                arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1]);
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43196)) * (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_2 + 1]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1 - 1]))) * (arr_4 [i_0 - 1] [18ULL]))))));
                var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)11] [(_Bool)1] [i_2 + 2]))))), (var_0)));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_28 = ((/* implicit */unsigned short) ((var_5) | (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-21559)) - (2114283262))) - (((((/* implicit */int) var_14)) * (((/* implicit */int) arr_7 [4U] [i_1 + 1] [i_3] [i_3])))))))));
                arr_13 [i_0] [19] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((min((854915760), (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_11 [i_0] [i_0] [i_1 - 1] [i_1 - 1])))))));
            }
        }
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    {
                        arr_22 [i_0] = ((/* implicit */int) var_15);
                        var_29 = arr_16 [i_0 + 1] [i_0 + 1];
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                arr_25 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) min((var_16), ((!(((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 0ULL))))))));
                /* LoopNest 2 */
                for (signed char i_8 = 1; i_8 < 19; i_8 += 4) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
                            arr_32 [i_0] [20] [i_7] [i_8] [i_8] = ((/* implicit */long long int) arr_21 [i_0]);
                            arr_33 [i_0] [i_0] [i_7] [21] [i_0] [21] [21] = ((((/* implicit */_Bool) ((min((arr_26 [i_0] [i_0]), (var_0))) << (((((((/* implicit */int) arr_14 [(short)7])) - (((/* implicit */int) (unsigned short)43196)))) + (43250)))))) ? (var_4) : (((/* implicit */unsigned long long int) var_13)));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                var_31 = ((/* implicit */unsigned char) (-(var_6)));
                var_32 = ((/* implicit */short) arr_30 [i_0] [15ULL] [15ULL] [i_4] [(short)6] [i_4] [(unsigned short)17]);
            }
        }
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_12 = 3; i_12 < 9; i_12 += 4) 
        {
            var_33 = ((((/* implicit */_Bool) arr_24 [i_12] [20U] [20U] [i_11])) ? (arr_21 [16]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)100)) - (((/* implicit */int) (signed char)52))))));
            var_34 = ((/* implicit */_Bool) ((unsigned short) (+(arr_36 [10ULL]))));
            arr_44 [i_12] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29093))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))) - (arr_23 [i_11] [19] [i_12 + 3] [i_12])))));
        }
        arr_45 [i_11] [i_11] = ((/* implicit */signed char) (short)21527);
    }
    var_35 = ((/* implicit */int) (+(min((min((var_7), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((var_6) << (((((-295044047531671627LL) + (295044047531671647LL))) - (19LL))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_13 = 3; i_13 < 16; i_13 += 3) 
    {
        arr_50 [(unsigned short)7] = var_2;
        var_36 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_3)), (min((2731436275074552001ULL), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
    }
}
