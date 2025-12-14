/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51796
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
    var_10 = ((/* implicit */long long int) max(((_Bool)1), (var_4)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_11 += ((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2)))) + (((((/* implicit */unsigned long long int) var_0)) + (arr_6 [i_2] [i_1]))))));
                        var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_4))))), (var_7)));
                        var_13 = ((/* implicit */int) ((unsigned long long int) (!(var_4))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] [i_0] = (-(((/* implicit */int) ((unsigned short) (_Bool)1))));
        arr_16 [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) max((arr_4 [i_0] [i_0 - 1]), (((/* implicit */short) (_Bool)1)))))))));
    }
    for (int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            arr_21 [4ULL] = ((/* implicit */unsigned short) ((unsigned int) (((+(var_5))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-23329), (((/* implicit */short) (_Bool)0)))))))));
            var_14 ^= ((/* implicit */unsigned long long int) (((-(arr_10 [i_5] [i_4] [i_4] [i_4]))) != (((/* implicit */unsigned long long int) (+((~(var_9))))))));
            /* LoopSeq 3 */
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                arr_25 [i_4] [i_4] [i_6] [i_5] &= ((/* implicit */unsigned long long int) ((((arr_7 [i_5] [i_5]) / (arr_7 [i_4] [i_4]))) * (((arr_5 [i_4] [i_6]) / (var_7)))));
                arr_26 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_6] [i_5]))))) || (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) var_4)))))));
                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned int) var_2)), (var_8)))))));
            }
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
            {
                arr_29 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) > (((unsigned long long int) arr_14 [i_4] [i_7] [i_5] [i_7] [i_7]))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((min((var_1), (((/* implicit */int) var_2)))) > (((/* implicit */int) arr_4 [i_4] [i_7]))))) <= ((((+(((/* implicit */int) var_4)))) - (((/* implicit */int) var_4))))));
            }
            for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */long long int) (((~(((/* implicit */int) (short)23322)))) == (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (arr_14 [i_4] [i_4] [i_8] [i_4] [i_4]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) (-(((/* implicit */int) var_4))))) | (var_0))))))));
                            arr_37 [i_4] [i_5] [i_4] [i_9] [i_9] = ((/* implicit */int) max((var_6), (((/* implicit */long long int) max((var_1), (((/* implicit */int) ((((/* implicit */long long int) var_8)) == (var_0)))))))));
                        }
                    } 
                } 
                arr_38 [4LL] [i_4] [i_4] |= ((/* implicit */unsigned char) ((long long int) (_Bool)1));
            }
            var_19 = ((/* implicit */int) (+(((var_4) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4] [i_5]))) : (((var_7) >> (((var_7) - (9211967694632740786LL)))))))));
            arr_39 [i_4] [i_4] [i_5] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) | (((arr_0 [i_4] [i_4]) | (arr_17 [i_5] [i_4]))));
        }
        arr_40 [i_4] [i_4] = ((/* implicit */short) ((9223372036854775790LL) / (var_0)));
        arr_41 [i_4] [i_4] &= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_4)), (var_5))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4] [(unsigned short)0] [i_4] [i_4])) || (((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4] [i_4])))))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_11]))) >= (var_8)));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (-(min((var_1), (((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    }
}
