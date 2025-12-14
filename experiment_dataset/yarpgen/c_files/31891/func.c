/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31891
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
    var_11 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        var_12 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~(var_1)));
        var_13 = ((/* implicit */long long int) (~(var_10)));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 8; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        arr_16 [i_3] [(unsigned short)6] [(unsigned short)7] [i_4] [i_4] [i_1] = ((/* implicit */unsigned char) (-((+((-(((/* implicit */int) var_8))))))));
                        arr_17 [i_1] [i_4] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_7))))));
                        var_14 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                        arr_18 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
                    }
                } 
            } 
        } 
        arr_19 [i_1] = ((/* implicit */unsigned char) var_6);
        arr_20 [i_1] = (~(-1481839338438523127LL));
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
    }
    /* LoopSeq 3 */
    for (long long int i_5 = 1; i_5 < 22; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(var_1))))));
                    arr_30 [i_5] [(signed char)2] = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
                    arr_31 [i_5] [i_6] [4ULL] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) var_3);
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (-((-(((/* implicit */int) var_9)))))))));
    }
    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
    {
        arr_34 [i_8] [5ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
        arr_35 [i_8] = ((/* implicit */unsigned short) var_4);
    }
    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~((+(var_1))))))));
        var_20 |= ((/* implicit */unsigned long long int) (~((~(var_1)))));
        arr_40 [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
        arr_41 [i_9] = ((/* implicit */unsigned long long int) var_8);
        var_21 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_0))))));
    }
}
