/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192686
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) 10562308780856999478ULL))));
    var_13 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)67))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_1 [(short)1]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) * (arr_1 [i_0 - 1])))))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned long long int) ((((max((((/* implicit */unsigned long long int) arr_7 [i_1] [i_2])), (arr_4 [(unsigned char)9] [i_2]))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-11701))) | (5202799368977946595LL)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 7884435292852552138ULL)) ? (4294967284U) : (4294967273U))), (((/* implicit */unsigned int) var_7))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (((((/* implicit */_Bool) var_10)) ? (arr_5 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) 11U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((((((/* implicit */_Bool) 1270865770251006611ULL)) ? (((/* implicit */unsigned long long int) 4294967284U)) : (17175878303458545002ULL))) - (4294967280ULL))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (int i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    {
                        arr_22 [i_3] [i_4] [i_5 - 1] [i_5] [i_3] = ((/* implicit */signed char) 1270865770251006620ULL);
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3] [i_6])) && (((/* implicit */_Bool) arr_13 [i_5 + 1]))));
                        arr_23 [i_3] = 7884435292852552138ULL;
                    }
                } 
            } 
        } 
        arr_24 [i_3] [i_3] = ((/* implicit */long long int) (signed char)10);
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_18 += ((/* implicit */long long int) arr_12 [i_7] [i_7]);
        var_19 = ((/* implicit */unsigned long long int) ((((arr_20 [i_7] [(unsigned short)8] [i_7] [i_7]) + (2147483647))) >> (((((/* implicit */int) arr_25 [i_7] [i_7])) >> (((var_4) - (213668603496165347ULL)))))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (var_1))) * (((/* implicit */int) var_5))))) ? (((/* implicit */int) max(((unsigned short)7889), ((unsigned short)10)))) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (signed char)58)))))));
}
