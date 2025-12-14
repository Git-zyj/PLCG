/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42722
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_1 [(short)4]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_0] = (~(var_3));
                        arr_14 [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_2 - 4]))));
                        arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_3 [i_0] [i_0] [i_0]));
                        arr_16 [i_0] [i_0] [i_2] = arr_10 [i_0] [i_1] [i_0] [i_3];
                    }
                    for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        var_14 = ((/* implicit */signed char) var_8);
                        var_15 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) arr_18 [(unsigned short)3] [i_2 - 1] [i_1 + 1] [i_1 + 1] [i_1])), (var_4))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_11))))));
                        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */int) (unsigned char)115)))), (min((arr_5 [i_0] [i_0]), (((/* implicit */int) (_Bool)0)))))))));
                        var_17 = arr_1 [i_0];
                    }
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_2 [(unsigned char)10]))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_8))));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) 4391273583792547633ULL);
    }
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)93), (((/* implicit */unsigned char) arr_22 [i_5])))))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_7)))))) ? (((/* implicit */int) (unsigned short)61046)) : (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) arr_19 [i_5])), (3670016U))))))))));
        var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_21 [i_5])) & (((/* implicit */int) arr_21 [i_5])))) % ((-(((/* implicit */int) (signed char)26))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        arr_26 [i_6] [i_6] = ((long long int) (+(max((((/* implicit */long long int) var_11)), (463863596300747976LL)))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (~(((((/* implicit */int) ((signed char) -1777839288))) + (((/* implicit */int) arr_24 [i_6])))))))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) var_8))), (var_3)))))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                {
                    arr_34 [i_7] [i_9] [i_7] [i_9] = ((/* implicit */signed char) ((unsigned char) (-(arr_7 [i_7] [i_7] [i_7] [i_9]))));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -1818962130)))) : (((unsigned int) arr_28 [i_7])))))));
                        var_26 = ((/* implicit */signed char) min((var_26), ((signed char)115)));
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_4))));
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) max((((unsigned int) (~(var_1)))), (((/* implicit */unsigned int) ((signed char) (_Bool)1))))))));
    }
}
