/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28488
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) ((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [9LL])))));
        var_15 |= ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_1 [i_0]))) << (((((((/* implicit */int) (unsigned short)24055)) & (var_6))) - (1039)))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) + (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (long long int i_1 = 3; i_1 < 8; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1 - 1])) | (((/* implicit */int) arr_1 [i_1]))))) ^ ((+(7730310454646692788LL))))), (((/* implicit */long long int) min((arr_2 [i_1] [i_1]), (((((/* implicit */_Bool) var_9)) ? (-1676777244) : (((/* implicit */int) (signed char)2)))))))));
        var_18 = ((/* implicit */long long int) min((var_18), (6266959986413531228LL)));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_1 - 3])) ? (7730310454646692788LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) | ((~(6613677451584207566LL)))))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (var_7))))) : (4096733345U))))));
    }
    for (int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 8; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_10 [i_4] = ((/* implicit */int) ((long long int) (unsigned short)6313));
                    var_20 = (signed char)2;
                }
            } 
        } 
        arr_11 [i_2] = ((/* implicit */unsigned int) arr_0 [i_2]);
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [(unsigned short)1]))))), (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [3LL])) ? (arr_9 [i_2] [i_2]) : (0U))))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_6 = 3; i_6 < 10; i_6 += 2) 
        {
            var_22 = ((/* implicit */short) (+(arr_9 [i_6 - 1] [i_5])));
            var_23 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_6 - 3] [i_6 + 1]))));
            /* LoopNest 2 */
            for (long long int i_7 = 3; i_7 < 7; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_24 += ((/* implicit */long long int) (-((~(((/* implicit */int) var_8))))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((arr_9 [i_6 + 1] [i_5]) >> (((arr_13 [i_6 - 3] [i_7 + 4]) + (6140544371956987153LL))))))));
                        var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
        var_27 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1660154042))));
        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [10ULL]))));
    }
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) var_8)))) : (max((((/* implicit */int) var_3)), (((14) | (((/* implicit */int) (unsigned short)26860))))))));
    var_30 = ((/* implicit */unsigned int) (!((_Bool)0)));
}
