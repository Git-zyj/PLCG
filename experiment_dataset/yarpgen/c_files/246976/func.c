/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246976
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 577225799U)) && (((/* implicit */_Bool) (unsigned char)22)))))));
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))) || (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) 577225799U))))));
    }
    for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            var_22 = ((/* implicit */signed char) ((short) var_8));
            arr_8 [(unsigned short)2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_6 [i_1] [i_2] [21U])), (3717741490U)));
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (signed char i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_23 = arr_14 [19U] [i_2] [i_2] [i_4] [i_5 - 1];
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned int) (-(3717741493U)))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                {
                    arr_23 [i_1] = arr_15 [i_7] [i_1] [i_7] [3LL] [i_7] [(unsigned short)13] [i_1 - 1];
                    var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((3717741476U), (16777216U))))));
                    arr_24 [i_7] [i_1 + 1] &= ((/* implicit */unsigned int) var_3);
                    var_26 &= ((/* implicit */signed char) max((2331176882U), (((/* implicit */unsigned int) (unsigned char)254))));
                }
            } 
        } 
        var_27 &= ((/* implicit */unsigned short) 4174727016U);
    }
    var_28 = ((/* implicit */unsigned char) var_10);
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58328))) / (((868696309879917353LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29823))))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (var_6))))));
}
