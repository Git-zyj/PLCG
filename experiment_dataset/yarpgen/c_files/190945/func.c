/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190945
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
    var_20 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)11528)) <= (631402255)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0]);
                    arr_9 [i_1] [i_1] [i_2] = -1154618107;
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_16);
                }
            } 
        } 
        arr_11 [(unsigned char)3] = ((/* implicit */unsigned short) (+((~(var_1)))));
        arr_12 [i_0] |= ((/* implicit */long long int) arr_5 [i_0] [i_0] [(unsigned short)10]);
        arr_13 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (1591527662)))) ? (((max((((/* implicit */long long int) var_11)), (-3138493115089789778LL))) >> (((((/* implicit */int) var_11)) - (51049))))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-21168)))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
    {
        arr_17 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)243))))) || (((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3]))));
        arr_18 [i_3] = (~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))));
        var_23 = ((/* implicit */unsigned short) (~(arr_15 [i_3])));
        arr_19 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_3])) | (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                {
                    var_24 = ((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned short)7029))))));
                    var_25 = ((/* implicit */unsigned short) (+((((+(((/* implicit */int) var_18)))) + (((/* implicit */int) arr_6 [i_4] [10] [i_5] [i_6]))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (+(var_19)))) || (((/* implicit */_Bool) (unsigned short)28054))))) / (((/* implicit */int) min((((unsigned short) arr_27 [i_4] [i_4])), ((unsigned short)20178))))));
        var_27 = var_10;
    }
    var_28 = ((/* implicit */short) ((((/* implicit */int) var_13)) != (((/* implicit */int) ((min((((/* implicit */long long int) var_13)), (var_4))) != (((long long int) var_5)))))));
}
