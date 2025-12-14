/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194807
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
    var_10 = ((/* implicit */unsigned int) ((((((var_2) >> (((((/* implicit */int) var_1)) - (120))))) * (max((((/* implicit */int) var_1)), (var_4))))) + (min(((-(((/* implicit */int) (unsigned char)14)))), (((((/* implicit */int) var_9)) << (((((/* implicit */int) var_1)) - (119)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) (unsigned char)248)) + (84048005))) : (max((arr_0 [i_0 + 2]), (arr_1 [i_0 - 2])))));
        var_11 = ((/* implicit */int) (~(((arr_2 [i_0]) % (((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) var_2))))))));
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_1 [i_0 + 3])))) ? (((/* implicit */unsigned int) min((var_0), (arr_1 [i_0 + 3])))) : (var_8)));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)248));
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (arr_5 [i_1 - 1]))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((max((var_6), (var_4))) >> (((((((/* implicit */unsigned long long int) 2063158819)) & (arr_5 [i_1]))) - (137379814ULL))))), (((/* implicit */int) ((unsigned char) max((((/* implicit */int) (_Bool)1)), (var_6)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_3)));
                arr_15 [i_1] = ((/* implicit */int) arr_13 [i_1]);
            }
            for (int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                arr_18 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) 134217728);
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        {
                            var_13 *= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_2]))))));
                            var_14 = ((/* implicit */unsigned char) var_5);
                        }
                    } 
                } 
                arr_26 [i_1] [i_2] [i_1] = arr_25 [i_4] [i_4] [i_2] [i_1] [i_1];
            }
            for (int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                var_15 = ((/* implicit */unsigned int) ((arr_16 [i_1 - 1] [i_1] [i_1 - 1] [i_1]) / (arr_16 [i_1 - 1] [i_1] [i_1 - 1] [i_1])));
                arr_29 [i_1] [i_1] [i_2] [i_7] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (var_5)))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        {
                            arr_36 [i_1] [i_2] = ((/* implicit */int) arr_24 [i_2]);
                            arr_37 [i_1] [i_2] [i_1] [i_8] [i_9] = ((/* implicit */unsigned char) (!(var_7)));
                            arr_38 [i_1] [i_2] [i_7] [i_1] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((unsigned int) arr_34 [i_9] [i_8] [i_7] [i_2] [i_1])) % (((/* implicit */unsigned int) var_2))));
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((2063158819) / (-789947377))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    for (int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        {
                            arr_43 [i_11] [i_1] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) var_2);
                            var_17 = ((/* implicit */int) ((((arr_22 [i_11] [i_10] [i_10] [i_7] [i_2] [i_1] [i_1]) + (((/* implicit */unsigned int) var_4)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (unsigned char)246))))))));
                            var_18 = ((/* implicit */int) ((arr_40 [i_1] [i_1 - 1] [i_1 - 1]) % (((/* implicit */unsigned int) arr_41 [i_1 - 1] [i_1] [i_1] [i_10] [i_11] [i_11]))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                arr_47 [i_1] = ((/* implicit */unsigned int) 2551564942012970469ULL);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    for (int i_14 = 2; i_14 < 18; i_14 += 2) 
                    {
                        {
                            arr_54 [i_1] [i_1] [i_12] [i_14] = ((/* implicit */unsigned long long int) arr_33 [i_1 - 1] [i_2] [i_12] [i_12] [i_13] [i_14 + 1] [i_14]);
                            var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_1 - 1])) && (((/* implicit */_Bool) var_2))));
                            var_20 = ((/* implicit */unsigned long long int) arr_39 [i_1] [i_1 - 1] [i_14 - 1]);
                        }
                    } 
                } 
            }
        }
        for (int i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) min((arr_31 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)223))));
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                for (int i_17 = 0; i_17 < 20; i_17 += 3) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_22 = max((((((/* implicit */_Bool) var_3)) ? (arr_24 [i_1 - 1]) : (arr_24 [i_1 - 1]))), (((((/* implicit */_Bool) arr_24 [i_1 - 1])) ? (arr_24 [i_1 - 1]) : (arr_24 [i_1 - 1]))));
                            arr_64 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((2063158818) >> (((((((/* implicit */_Bool) 18134094777235908086ULL)) ? (-1908680242) : (((/* implicit */int) (unsigned char)174)))) + (1908680247))));
                            arr_65 [i_18] [i_1] [i_16] [i_17] [i_18] = ((/* implicit */int) min(((unsigned char)241), (((/* implicit */unsigned char) (_Bool)1))));
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1475574664))));
                        }
                    } 
                } 
            } 
        }
    }
}
