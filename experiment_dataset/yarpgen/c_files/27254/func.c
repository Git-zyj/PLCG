/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27254
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
    var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) + (0ULL)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)125)) ? (min((((/* implicit */int) arr_1 [i_0] [i_0])), ((-(((/* implicit */int) arr_1 [i_0] [i_0])))))) : ((~(((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0])))))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-15481))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_1 [i_0] [i_0 + 2]))))), (((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) << (((var_4) - (4212334320U)))))))) : (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 3]))) : (659701374U))))))));
    }
    for (unsigned char i_1 = 3; i_1 < 20; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((long long int) ((arr_2 [i_1 + 3] [i_1 - 2]) + (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)254)), (3635265903U))))))))));
        arr_6 [i_1] [i_1 - 3] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned char) max((arr_4 [i_1]), (var_0))))), (arr_2 [i_1] [i_1 + 3])));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (short)31802);
    }
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) 305831624U)) | (var_5)))))) ? (min((((/* implicit */long long int) arr_9 [i_2])), (max((((/* implicit */long long int) var_12)), (arr_11 [4LL] [i_2]))))) : ((-(max((((/* implicit */long long int) (unsigned char)0)), (var_14)))))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) var_7))))))));
        /* LoopNest 3 */
        for (long long int i_3 = 1; i_3 < 8; i_3 += 4) 
        {
            for (unsigned int i_4 = 1; i_4 < 8; i_4 += 3) 
            {
                for (long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2])) <= (((/* implicit */int) max(((unsigned char)255), ((unsigned char)0))))));
                        var_24 = ((/* implicit */long long int) max((var_24), (arr_20 [i_5] [i_3 + 2] [i_3 + 2] [i_2])));
                    }
                } 
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        var_25 |= ((/* implicit */unsigned char) var_15);
        var_26 = ((/* implicit */unsigned int) max((((long long int) (~(var_14)))), (((/* implicit */long long int) 305831624U))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)181)))))));
        arr_27 [i_7] = ((/* implicit */unsigned char) (short)-26346);
    }
    var_28 = ((/* implicit */unsigned short) 4294967295U);
    var_29 = ((/* implicit */unsigned int) ((((((-5082598290925151996LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130))))) ? (var_10) : (min((var_13), (((/* implicit */long long int) var_11)))))) != (((((/* implicit */_Bool) min((-3866580882901775591LL), (((/* implicit */long long int) (unsigned char)232))))) ? (min((var_10), (((/* implicit */long long int) var_4)))) : (min((var_15), (((/* implicit */long long int) var_0))))))));
}
