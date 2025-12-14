/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4912
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
    var_13 *= ((/* implicit */unsigned char) var_5);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((4688629165493769318ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1120496225)), (arr_1 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_0])))) : (min((((/* implicit */long long int) arr_0 [i_0])), (4380866641920LL))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) var_6))))))) : ((-(arr_1 [i_0])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) -244480575);
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((arr_4 [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0])))))));
            arr_6 [i_0] [i_1] = (-(((/* implicit */int) var_7)));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_9 [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2])) / (((int) 4688629165493769339ULL))));
            arr_10 [i_0] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_11)))) % (var_12));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned int i_4 = 1; i_4 < 23; i_4 += 4) 
                {
                    {
                        arr_15 [i_4] = ((/* implicit */unsigned char) arr_4 [i_2]);
                        arr_16 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) var_6);
                        arr_17 [i_4] [i_3] [i_4] = ((/* implicit */long long int) arr_0 [i_3]);
                    }
                } 
            } 
            arr_18 [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2])) + (arr_14 [i_2] [i_2] [i_0] [i_0])))) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_0] [i_0])))));
            var_17 = ((((/* implicit */unsigned long long int) (-(arr_12 [i_0] [i_0] [i_0])))) >= (arr_1 [i_0]));
        }
        /* vectorizable */
        for (unsigned int i_5 = 3; i_5 < 23; i_5 += 4) 
        {
            var_18 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) var_6)))));
            /* LoopSeq 1 */
            for (int i_6 = 2; i_6 < 23; i_6 += 3) 
            {
                var_19 = ((/* implicit */unsigned short) ((var_11) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 0U))))));
                arr_24 [i_6] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1099511103488ULL)) ? (arr_20 [i_5] [i_0] [i_5 - 1]) : (arr_20 [i_6] [i_0] [i_5 - 1])));
                arr_25 [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13758114908215782323ULL))) != (((/* implicit */unsigned long long int) var_12))));
                var_20 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_1)))));
            }
            arr_26 [i_5] = ((/* implicit */unsigned char) (unsigned short)6630);
            arr_27 [i_5] [i_0] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (var_0)))));
        }
    }
    for (int i_7 = 1; i_7 < 11; i_7 += 3) /* same iter space */
    {
        var_21 -= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) arr_3 [22]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28126))) % (var_0))))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_8))))))))));
        var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -2090054899)), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) + (((((/* implicit */_Bool) (unsigned char)182)) ? (7046546205253519150ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7] [i_7] [i_7])))))))));
        var_23 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)42471))))) ? (((int) var_11)) : (((arr_4 [i_7]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_7] [i_7] [i_7]))))))) ? (((/* implicit */int) arr_8 [i_7] [i_7] [i_7])) : ((-(((int) 2859658662U)))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 11; i_8 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) ((arr_4 [i_8]) ? (((/* implicit */int) arr_21 [i_8] [i_8] [(_Bool)1])) : (((/* implicit */int) arr_28 [i_8 + 3] [i_8]))));
        arr_33 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_22 [i_8] [i_8] [(unsigned char)16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_8] [i_8] [(unsigned char)12])))))) ? (arr_19 [i_8 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_8 + 1])))));
    }
    var_25 = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)0));
}
