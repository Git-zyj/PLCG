/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196285
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
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_9)), (min((min((var_17), (((/* implicit */unsigned long long int) 3043973136246629402LL)))), (var_11)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0 + 1] [i_1 + 2] [(short)4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)127))) ? ((~(((/* implicit */int) (unsigned char)128)))) : (((/* implicit */int) ((short) ((((/* implicit */int) arr_3 [6U] [i_2] [i_4])) == (((/* implicit */int) arr_6 [i_1 + 3] [i_2]))))))));
                                arr_14 [i_4] &= ((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0] [i_1 - 1] [i_2] [i_2] [i_3] [i_4]);
                                var_19 = (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [(signed char)17] [i_2] [i_4])), (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]))))))));
                                var_20 ^= ((/* implicit */long long int) var_15);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) (-(min((arr_1 [i_2] [i_1 - 2]), (((/* implicit */int) arr_2 [i_2]))))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_1 - 1])) ? ((~(arr_12 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_1 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_1 + 2]) < (arr_12 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_1 - 2])))))));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) (signed char)(-127 - 1))))));
    }
    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_16))));
        arr_19 [4U] = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_5]))));
    }
    for (unsigned char i_6 = 2; i_6 < 20; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) arr_24 [i_6] [i_7] [i_8]);
                    var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_21 [i_6 - 1]), (((/* implicit */unsigned short) var_5))))), (((((/* implicit */int) arr_21 [i_6 + 1])) & (((/* implicit */int) var_14))))));
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2867637174U)) || (((/* implicit */_Bool) (unsigned char)231))));
        var_27 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_26 [i_6 + 2] [(signed char)10] [i_6 - 2]))))) * (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (0U)))));
        arr_27 [20U] = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_6] [i_6 - 1] [(_Bool)1])) && (arr_23 [i_6 + 1] [i_6 + 2])))))));
    }
    for (unsigned char i_9 = 2; i_9 < 20; i_9 += 1) /* same iter space */
    {
        arr_31 [12ULL] [i_9 - 2] = ((/* implicit */long long int) arr_23 [2LL] [14U]);
        arr_32 [i_9 + 2] = ((/* implicit */unsigned int) (~(((2305843009213693951ULL) | (((/* implicit */unsigned long long int) arr_24 [i_9 + 3] [i_9] [i_9 + 1]))))));
    }
}
