/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225145
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
    var_16 = ((/* implicit */unsigned int) var_1);
    var_17 = ((/* implicit */int) min((((/* implicit */long long int) (short)(-32767 - 1))), (max((((/* implicit */long long int) (unsigned short)0)), (-7794488189773213719LL)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) -7794488189773213719LL);
        var_18 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                {
                    var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1LL))));
                    var_20 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1] [i_1]))));
                }
            } 
        } 
        var_21 -= ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [3])) + (((/* implicit */int) arr_4 [i_1]))));
        arr_11 [i_1] [i_1] |= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [i_1]))));
        arr_12 [i_1] = var_13;
    }
    for (int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_14 [i_4] [i_4])) : (((/* implicit */int) (short)0))))) ? ((-(2657345212U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_11))))));
        var_23 += ((/* implicit */signed char) var_13);
        arr_15 [i_4] [i_4] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_14 [i_4] [5])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_4]))))) + (((/* implicit */unsigned int) ((/* implicit */int) max((arr_14 [i_4] [i_4]), (arr_13 [i_4])))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (signed char i_6 = 3; i_6 < 22; i_6 += 3) 
            {
                {
                    arr_20 [i_4] [i_4] [(unsigned char)12] [i_6] |= ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) arr_14 [i_6 + 1] [i_6 - 1])), ((~(var_5)))))));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)24)) / (((/* implicit */int) (unsigned short)1)))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_4])))))));
    }
    for (int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            for (unsigned short i_9 = 1; i_9 < 21; i_9 += 4) 
            {
                {
                    arr_30 [i_7] [i_7] [i_7] = ((/* implicit */short) var_1);
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) -7794488189773213727LL))));
                }
            } 
        } 
        var_27 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_7] [i_7])) ? ((-(((/* implicit */int) arr_18 [i_7] [i_7] [0U])))) : (((/* implicit */int) arr_27 [i_7]))));
    }
    var_28 |= ((/* implicit */unsigned int) (unsigned char)141);
    var_29 = ((/* implicit */long long int) var_3);
}
