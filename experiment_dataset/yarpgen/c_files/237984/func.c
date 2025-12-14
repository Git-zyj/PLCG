/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237984
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_14 *= ((/* implicit */unsigned long long int) ((min((576460735123554304LL), (((/* implicit */long long int) arr_1 [i_0 - 1])))) <= (((long long int) 14720176134468997732ULL))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) 3726567939240553900ULL));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((min((var_1), (((/* implicit */long long int) arr_1 [i_0 + 3])))) + (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0 + 4]))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 8; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_11))));
                    arr_11 [i_1] [i_3] [i_1] |= (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_3] [i_2])) ? (arr_3 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                    arr_12 [i_1] [1] [2LL] [i_1] = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */long long int) arr_1 [i_1])) : (arr_9 [i_1] [i_1] [i_1]))) < (arr_3 [i_1])))) >= (((((/* implicit */_Bool) ((arr_7 [i_1] [i_1] [(unsigned short)0]) / (var_10)))) ? (((/* implicit */int) arr_0 [i_2] [i_2 + 2])) : ((+(((/* implicit */int) var_2))))))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [5LL] [5LL] [i_1]))));
        arr_14 [i_1] [i_1] = var_13;
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((4178827335U) >= (2841710549U)));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) arr_0 [i_4] [i_4])) : (arr_15 [i_4])));
        var_19 = ((/* implicit */unsigned long long int) ((arr_1 [i_4]) != (((/* implicit */int) arr_16 [i_4]))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        arr_19 [i_5] = ((/* implicit */long long int) var_2);
        /* LoopNest 3 */
        for (long long int i_6 = 1; i_6 < 24; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_7] [i_6 + 1] [i_5] [i_5])) >> (((((/* implicit */int) arr_27 [i_8] [i_6 + 1] [i_6 + 1] [i_6 + 1])) - (235)))))), (((unsigned int) (-2147483647 - 1))))))));
                        /* LoopSeq 2 */
                        for (int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) arr_25 [i_5] [i_5]);
                            var_22 = ((/* implicit */long long int) arr_27 [i_5] [i_6] [i_7] [i_9]);
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 24; i_10 += 4) 
                        {
                            arr_34 [i_5] [i_6] [i_7] [i_8] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2147483647)))) ? (((/* implicit */int) ((arr_26 [i_5] [i_6 - 1] [i_7] [i_6 + 1]) != (arr_24 [6] [9])))) : (((/* implicit */int) var_13)))))));
                            arr_35 [i_5] [11ULL] [i_7] [21U] [i_7] = ((/* implicit */unsigned int) var_8);
                        }
                        var_23 = ((/* implicit */long long int) max((var_23), (((255LL) << (((max((114688), (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))) - (114670)))))));
                    }
                } 
            } 
        } 
        var_24 = (-(var_11));
        var_25 *= ((/* implicit */unsigned short) (~(max((arr_29 [i_5] [3LL] [i_5] [i_5] [i_5]), (arr_29 [(unsigned char)9] [i_5] [i_5] [i_5] [(unsigned char)0])))));
    }
    var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (3726567939240553913ULL))) <= (((((/* implicit */_Bool) var_8)) ? (var_7) : (var_8)))))) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (var_10))) - (198)))));
    var_27 = ((/* implicit */long long int) (-(((/* implicit */int) var_9))));
    var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) 4178827330U)) ? (((/* implicit */long long int) 2147483647)) : (255LL)))))) ? ((-2147483647 - 1)) : (14336));
}
