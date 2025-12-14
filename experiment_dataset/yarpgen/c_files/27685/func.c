/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27685
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
    var_13 = ((/* implicit */_Bool) var_8);
    var_14 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 2809816285673599070LL))))))))) ? (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (signed char)-70)))))) : (((/* implicit */int) min(((signed char)119), (max(((signed char)119), ((signed char)-119)))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min(((+(((var_3) << (((arr_0 [i_0]) - (9443048174415764452ULL))))))), (arr_0 [i_0])));
        arr_3 [i_0] = ((((/* implicit */_Bool) (-((~(((/* implicit */int) (short)13874))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
    }
    for (short i_1 = 4; i_1 < 23; i_1 += 2) 
    {
        arr_6 [i_1] [23] = ((((/* implicit */int) ((short) arr_4 [i_1 - 4]))) << (((var_9) - (2071448090225428937LL))));
        arr_7 [i_1 + 2] [i_1] = ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (_Bool)1)), (var_1))), (((/* implicit */long long int) (~(-1259209446))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (short)22657)) ? (((/* implicit */int) var_6)) : (var_2))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) 127LL)))))))) : (-8940980490835153951LL));
        arr_8 [i_1 - 1] [i_1] = ((/* implicit */int) var_5);
        var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) -2092185436)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_4 [i_1])) > (805306368))))) : (((/* implicit */int) arr_4 [i_1]))));
        var_16 &= ((/* implicit */signed char) 9216651696915652030LL);
    }
    for (int i_2 = 1; i_2 < 17; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    var_17 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) arr_12 [i_3] [14LL])) ? (arr_16 [(_Bool)1] [(unsigned short)0]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((-1146805671905352224LL) + (1146805671905352236LL)))))) < (arr_16 [i_2 - 1] [(short)4]))))) : (((((/* implicit */unsigned long long int) ((int) -831738052))) ^ (max((var_3), (((/* implicit */unsigned long long int) arr_5 [i_3]))))))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2 + 2] [i_2]))) < (min((((/* implicit */unsigned long long int) ((arr_17 [i_4] [i_3] [i_2]) | (((/* implicit */int) arr_18 [i_2] [i_3] [(unsigned char)6] [i_4]))))), (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 1]))) : (var_3)))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) ((arr_23 [0LL] [i_3] [(_Bool)1] [0LL] [(unsigned char)18]) == (var_12))))), (min((arr_22 [8LL] [i_2 + 1] [i_2] [i_2 - 1]), (arr_11 [i_2 + 2]))))))));
                                arr_24 [i_4] [i_5] [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 805306368)) % (var_3)))) ? (((/* implicit */int) (signed char)119)) : (-1107170690)))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_3] [i_2]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 602032851)) : (-8940980490835153951LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_34 [i_2] = ((/* implicit */short) ((-8940980490835153946LL) == (((/* implicit */long long int) ((/* implicit */int) (short)-16260)))));
                        arr_35 [i_2] [i_2 - 1] [i_2] [i_2] [i_2] = ((max((((/* implicit */long long int) (unsigned char)232)), (arr_11 [i_2]))) / (((/* implicit */long long int) ((int) arr_20 [i_2] [i_2 + 2]))));
                        arr_36 [i_8] [i_2] = ((/* implicit */unsigned char) ((((max((var_12), (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) ((unsigned char) var_10))) - (176))))) / ((-(((/* implicit */int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) var_11)))))))));
                    }
                } 
            } 
        } 
    }
}
