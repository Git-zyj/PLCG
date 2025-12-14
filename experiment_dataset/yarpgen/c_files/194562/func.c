/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194562
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((arr_0 [4U]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) >> ((((-(((/* implicit */int) (unsigned short)65531)))) + (65557))))))));
        var_17 = ((/* implicit */int) arr_2 [i_0]);
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 + 2])) | (((/* implicit */int) arr_2 [i_0 + 1])))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)65531)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65531)))))))) ? (((/* implicit */unsigned int) (~((+(((/* implicit */int) var_13))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2262823476U)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65531))))) : ((+(arr_1 [14U] [(unsigned char)16])))))));
        var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)4), (((/* implicit */unsigned short) (signed char)-72)))))) <= (arr_1 [i_1] [(unsigned char)12])));
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            for (unsigned short i_3 = 2; i_3 < 7; i_3 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) min(((-(((((/* implicit */_Bool) (unsigned short)65532)) ? (arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3]) : (((/* implicit */long long int) arr_1 [i_1] [i_2])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_2 + 1])) ? (-1LL) : (((/* implicit */long long int) var_1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (var_10)))) : ((+(((/* implicit */int) (signed char)50)))))))));
                    var_22 = ((/* implicit */unsigned long long int) arr_6 [i_1]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967295U))));
                    arr_16 [i_1] [i_1 - 1] [i_1 - 1] [i_5] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_8 [i_4] [i_5 + 1])) ? (arr_8 [i_4] [i_5 + 1]) : (arr_8 [i_4] [i_5 + 1])))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1224544886)) ? (((/* implicit */unsigned int) 609676022)) : (4294967282U)));
                    arr_17 [i_4] = ((/* implicit */unsigned int) ((2662542898U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        arr_20 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_19 [i_6] [i_6])) / (arr_18 [i_6])));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_5))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_18 [i_6]))) ? (((/* implicit */unsigned int) ((var_15) ? (arr_19 [8LL] [8LL]) : (arr_19 [3LL] [(unsigned char)13])))) : ((~(arr_18 [i_6])))));
        var_27 = ((((/* implicit */_Bool) arr_18 [i_6])) ? ((~(((/* implicit */int) (unsigned short)5)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_6] [i_6])) || (((/* implicit */_Bool) arr_18 [i_6]))))));
    }
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)57)), ((unsigned short)2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (576425567931334656ULL)))))) ? (min(((+(var_2))), (((/* implicit */long long int) (-(((/* implicit */int) var_3))))))) : (((/* implicit */long long int) 231532125U))));
    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) var_4)) > (((((/* implicit */_Bool) -2147483625)) ? (17870318505778216967ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5)))))))))));
}
