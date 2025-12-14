/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47933
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((short) ((unsigned int) var_6)));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)94))))), (var_11)))) ? (((/* implicit */int) ((4194300U) >= (4194319U)))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0])))));
        var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (((((/* implicit */_Bool) 3944491814U)) ? (4290772995U) : (4290772995U))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_15 = (-((~(((/* implicit */int) (signed char)-1)))));
        var_16 |= ((/* implicit */_Bool) max((1U), (0U)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_17 ^= ((/* implicit */_Bool) ((signed char) arr_2 [i_2] [i_2]));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (int i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    {
                        var_18 -= 4194300U;
                        var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4])) ? (4290772990U) : (arr_10 [i_4 - 1] [i_4] [i_4] [i_4] [i_4] [i_4])));
                        arr_12 [i_1] [i_2] [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) | (arr_13 [i_1] [i_5])))) & (arr_9 [i_5]))))))));
            arr_15 [i_1] [i_5] [i_5] = ((/* implicit */unsigned int) arr_2 [i_1] [i_5]);
            arr_16 [i_1] = ((/* implicit */unsigned int) max((var_2), (((/* implicit */long long int) ((signed char) arr_6 [i_1] [i_1] [i_1])))));
        }
    }
    for (long long int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
    {
        arr_20 [i_6] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_19 [i_6])))) ? (((((var_2) - (((/* implicit */long long int) arr_17 [i_6])))) | (((/* implicit */long long int) ((arr_17 [i_6]) >> (((var_0) - (4190779789246968242LL)))))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6]))) : (var_4))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(var_4))))));
        var_22 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 4294967295U)))));
    }
    for (long long int i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) max((var_23), (((unsigned int) ((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */int) var_9)) : (arr_18 [i_7]))))));
        /* LoopNest 3 */
        for (long long int i_8 = 1; i_8 < 20; i_8 += 1) 
        {
            for (signed char i_9 = 1; i_9 < 19; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_24 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (signed char)125)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) % (4194301U))) : (4294967293U))));
                        var_25 = ((((/* implicit */_Bool) max((((unsigned int) 3905205296U)), (arr_17 [i_9])))) ? (((((/* implicit */_Bool) arr_28 [i_8] [i_8 - 1] [i_9] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_10] [i_9 + 1] [i_8] [i_7])))))) : (((((/* implicit */_Bool) 4194276U)) ? (arr_17 [i_7]) : (((/* implicit */unsigned int) -1222706073)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((4194325U) - (arr_30 [i_7] [i_8 - 1] [i_9 - 1] [i_10])))))))));
                        var_26 ^= var_1;
                    }
                } 
            } 
        } 
        arr_32 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_7] [i_7] [i_7])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4290772994U)) || (((/* implicit */_Bool) 4194332U)))))) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 1222706080)) : (arr_23 [i_7])))))) : (((/* implicit */int) ((_Bool) arr_21 [i_7])))));
    }
    var_27 ^= ((/* implicit */int) ((((/* implicit */unsigned int) var_5)) == (((((((/* implicit */_Bool) var_10)) ? (4294967281U) : (var_8))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967286U))))))))));
}
