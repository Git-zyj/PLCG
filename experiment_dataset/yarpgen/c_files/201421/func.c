/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201421
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((((((((/* implicit */_Bool) arr_5 [(short)3] [10U])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))) | (((/* implicit */int) ((signed char) var_6))))), (((/* implicit */int) ((unsigned short) max((arr_0 [(unsigned short)3]), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0]))))))));
                    var_18 = ((/* implicit */signed char) ((4095LL) >> (((unsigned long long int) (unsigned short)0))));
                    var_19 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) ((_Bool) arr_6 [i_0] [0U]))), (arr_0 [i_0])))));
                }
            } 
        } 
        var_20 &= ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [5U] [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_3 = 3; i_3 < 8; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    var_21 -= ((/* implicit */short) (!(((((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_6)) + (28577)))))) && (((/* implicit */_Bool) ((unsigned char) 4080LL)))))));
                    arr_13 [i_3] [i_3] = ((/* implicit */signed char) arr_6 [i_4] [i_3 + 3]);
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */short) (-((-((+(arr_9 [5LL] [i_3 + 2])))))));
                        var_23 = ((((/* implicit */_Bool) ((arr_1 [i_3 - 3] [i_4]) - (arr_1 [i_3 - 3] [i_5])))) ? ((+(arr_1 [i_3 - 3] [i_3 - 3]))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)26))))));
                        arr_16 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] |= ((/* implicit */_Bool) var_4);
                    }
                    for (short i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        arr_20 [i_3] = ((/* implicit */unsigned short) arr_1 [i_3] [(unsigned char)5]);
                        arr_21 [i_0] [i_3] [i_4] [(_Bool)1] = ((arr_0 [i_0]) ^ (((max((arr_0 [i_6]), (((/* implicit */unsigned long long int) var_9)))) >> (((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) 2198754820096LL)))) - (2198754820073ULL))))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned int i_7 = 1; i_7 < 11; i_7 += 2) 
    {
        arr_25 [(unsigned char)8] [i_7] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_15))))))));
        var_24 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_24 [i_7] [i_7])) : (((/* implicit */int) arr_22 [1LL])))) : (min((1640994522), (((/* implicit */int) var_12))))))));
        arr_26 [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? ((-(var_5))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-19))))))) - (((/* implicit */long long int) (-(((((/* implicit */_Bool) 9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_24 [i_7] [i_7])))))))));
    }
    for (short i_8 = 0; i_8 < 22; i_8 += 1) 
    {
        arr_30 [i_8] = ((/* implicit */unsigned long long int) arr_29 [i_8]);
        arr_31 [i_8] [i_8] = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) var_6)), ((+(3032805132U)))))));
    }
}
