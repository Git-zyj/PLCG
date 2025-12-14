/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220249
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
    var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))) : (2147483647))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) (~(arr_1 [i_0] [i_0])));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))));
        var_21 = ((/* implicit */int) ((unsigned long long int) 0U));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((+(var_2))) : (((((_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (((((/* implicit */_Bool) 1411854810)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_23 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])), (var_2)))) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [9U])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? ((~(((/* implicit */int) arr_3 [i_1] [i_1])))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))));
        var_25 = ((((/* implicit */_Bool) max((1411854815), (arr_4 [i_1])))) ? ((~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_12)))))) : ((~((~(2147483647))))));
    }
    for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (short i_3 = 3; i_3 < 16; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    {
                        var_26 = ((/* implicit */short) var_7);
                        arr_16 [i_2] = ((int) var_8);
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned int) ((_Bool) ((_Bool) 2147483619)));
        arr_17 [i_2] = ((/* implicit */_Bool) arr_8 [i_2]);
        /* LoopSeq 1 */
        for (unsigned int i_6 = 2; i_6 < 14; i_6 += 4) 
        {
            arr_20 [i_2] = (+(((int) arr_8 [i_6 - 1])));
            var_28 = ((/* implicit */unsigned char) max((((int) -283833705)), (max((1411854810), (-1597344522)))));
            arr_21 [i_2] [i_6] [14ULL] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_12 [i_6] [i_6] [i_2]), (((/* implicit */int) arr_2 [i_6 + 1]))))) || ((!(((/* implicit */_Bool) var_10))))));
        }
        var_29 = arr_7 [i_2];
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_28 [i_8] [i_8] = ((/* implicit */int) ((short) var_12));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((int) 2251549853112536305LL)) : ((-(-2147483639)))));
                    arr_29 [i_9] [i_9] [i_9] = ((/* implicit */short) ((long long int) arr_27 [i_7] [i_8] [i_8] [i_8]));
                    var_31 = (+(((/* implicit */int) ((((/* implicit */int) var_6)) >= (arr_23 [i_9])))));
                    arr_30 [i_7] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_22 [i_8] [i_7]))));
                }
            } 
        } 
        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_16))));
    }
}
