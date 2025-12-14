/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26781
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((var_13) ^ (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((var_0) | (var_6)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_15)))))));
                    var_18 = ((/* implicit */unsigned int) max((10041202560527835752ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) var_4);
                        var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_5))))) : (((unsigned int) var_1))))));
                        arr_20 [4LL] [4LL] [i_4] [(unsigned short)3] = ((/* implicit */long long int) (~(min((8405541513181715864ULL), (10041202560527835745ULL)))));
                        arr_21 [i_0] [i_3] [i_4] [i_5] = ((/* implicit */short) min(((+(max((((/* implicit */long long int) var_4)), (var_0))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_5 [i_0])))) || (((/* implicit */_Bool) var_11)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_2))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_10))) : (((long long int) var_2)))) >= (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))))))));
            var_22 = ((/* implicit */_Bool) var_16);
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) var_15);
                        arr_28 [i_8 + 1] [i_6] [i_6] [i_8] [i_7] = ((/* implicit */long long int) ((max(((!(((/* implicit */_Bool) var_11)))), ((!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_7] [i_0])))))) || ((!(((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_10))))))));
                        var_24 = ((unsigned int) var_4);
                        var_25 = ((/* implicit */_Bool) ((var_12) ? (max((max((((/* implicit */unsigned long long int) (short)511)), (8405541513181715864ULL))), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) var_10))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((long long int) var_2))) * (((var_1) & (((/* implicit */unsigned long long int) var_13)))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
        }
        var_27 = var_4;
    }
    for (long long int i_9 = 2; i_9 < 7; i_9 += 4) 
    {
        var_28 = ((/* implicit */unsigned int) arr_10 [i_9] [i_9] [i_9 - 2] [i_9]);
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((var_12) ? (var_0) : (arr_5 [i_9]))), (((/* implicit */long long int) var_5))))) ^ ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [10LL] [i_9] [i_9] [i_9 + 3] [i_9] [10LL]))) + (8405541513181715856ULL)))))));
    }
    var_30 = ((/* implicit */short) (+(((/* implicit */int) var_4))));
    var_31 = ((/* implicit */long long int) var_8);
}
