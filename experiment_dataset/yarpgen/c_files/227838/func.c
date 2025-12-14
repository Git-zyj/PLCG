/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227838
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) -238362272)) ? (-2112151903706748784LL) : (((/* implicit */long long int) -1092578786))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((1063008389) << (((var_2) - (1666321770)))))) ? (max((max((var_0), (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))), (((arr_0 [i_0]) - (((/* implicit */int) arr_5 [i_0])))))) : (((/* implicit */int) var_9))));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6652836976517430571LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)13244)) >> (((-6652836976517430593LL) + (6652836976517430598LL)))))) ? (((/* implicit */long long int) ((-1092578790) / (-1092578789)))) : (-6652836976517430554LL))))));
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))) / (-6652836976517430553LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_3 = 2; i_3 < 12; i_3 += 3) 
    {
        var_15 = ((/* implicit */signed char) (_Bool)1);
        arr_12 [i_3] = ((((((/* implicit */_Bool) 467886708)) ? (((/* implicit */long long int) 16352)) : (var_1))) << (((((/* implicit */int) min((var_8), (((/* implicit */signed char) (!((_Bool)1))))))) + (158))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) min((max((var_1), (((/* implicit */long long int) var_9)))), (var_7)));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_7) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? ((+((-(((/* implicit */int) arr_15 [i_4] [i_3])))))) : (((/* implicit */int) ((_Bool) arr_10 [i_3 - 1])))));
                }
            } 
        } 
    }
    for (signed char i_6 = 2; i_6 < 17; i_6 += 3) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((int) arr_18 [i_6])))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6]))))) * ((+(((/* implicit */int) arr_21 [(signed char)7] [i_6])))))) : (((((/* implicit */_Bool) 1092578796)) ? (1092578784) : (-1159433507)))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (int i_8 = 2; i_8 < 18; i_8 += 4) 
            {
                for (long long int i_9 = 1; i_9 < 17; i_9 += 4) 
                {
                    {
                        arr_31 [i_6] [14] [(_Bool)1] [i_6] [i_6] [i_9] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [(signed char)3] [(signed char)3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))) ? (arr_23 [i_8 - 2] [i_8 - 2]) : (((/* implicit */int) var_5))))), (min((((((/* implicit */_Bool) (short)30622)) ? (-6652836976517430559LL) : (((/* implicit */long long int) 1092578781)))), (((/* implicit */long long int) var_6))))));
                        arr_32 [i_6] [(_Bool)1] [i_9] [i_9] [(_Bool)1] = ((/* implicit */_Bool) 467886701);
                        arr_33 [i_6] [i_7] [i_6] [i_9] [9LL] [i_6] = ((((/* implicit */_Bool) 6652836976517430571LL)) && (((/* implicit */_Bool) 467886727)));
                        arr_34 [i_9] [1LL] [i_9] [13LL] [i_9] = ((/* implicit */long long int) max(((~(((/* implicit */int) var_6)))), (min((arr_30 [i_9]), (arr_30 [i_9])))));
                    }
                } 
            } 
        } 
    }
}
