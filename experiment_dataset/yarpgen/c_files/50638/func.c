/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50638
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((int) ((unsigned short) var_7)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (var_8)))) : (var_10))) : (((/* implicit */unsigned long long int) var_1)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [2ULL] = ((/* implicit */int) (((-(min((((/* implicit */unsigned long long int) var_7)), (arr_2 [i_0]))))) | (((((/* implicit */_Bool) (unsigned short)64377)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20145))) : (16140901064495857664ULL)))));
        var_16 = ((/* implicit */unsigned long long int) (unsigned short)1157);
        var_17 ^= (+(0));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1] = ((/* implicit */short) ((long long int) (short)5));
                        arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned short)1142))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_13)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_1] [i_0])) ? (var_1) : (arr_1 [i_3])))))) : ((~((~(arr_2 [i_3])))))));
                    }
                } 
            } 
            arr_15 [i_0] [i_0] [6LL] = 1603497685;
            var_18 = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]);
        }
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            var_19 = ((unsigned long long int) (+(arr_2 [i_0])));
            var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
            arr_20 [i_4] = ((/* implicit */long long int) ((((((/* implicit */int) (short)-5691)) + (2147483647))) << (((((/* implicit */int) (short)21452)) - (21452)))));
            var_21 += ((/* implicit */short) arr_4 [i_0]);
        }
    }
    var_22 -= ((/* implicit */short) ((((unsigned long long int) var_8)) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_13)) < (var_4)))))))));
}
