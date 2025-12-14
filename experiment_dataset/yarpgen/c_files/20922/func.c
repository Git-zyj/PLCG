/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20922
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
    var_16 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_13)), (var_3)));
    var_17 = var_10;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_18 ^= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_0))));
                var_21 ^= ((/* implicit */unsigned short) arr_4 [i_0] [i_2] [i_2]);
                var_22 &= ((/* implicit */unsigned char) (-(var_10)));
            }
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                arr_11 [(unsigned short)14] [i_0] = ((/* implicit */unsigned char) var_2);
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_3 + 1]), (3119282273320501181LL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_4 [i_3] [i_3 + 1] [i_3 + 1])), (var_1)))) : (((((/* implicit */_Bool) arr_7 [i_1] [(_Bool)1] [i_3] [i_3 + 1])) ? ((+(var_3))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-29714)))))))));
            }
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((unsigned int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_1])))))));
            var_25 = ((/* implicit */long long int) var_3);
            var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_1 [1LL] [11LL])), (((((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) var_10)), (arr_9 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13)))))))));
            arr_12 [i_0] [i_1] [(unsigned short)5] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_8 [i_0] [i_0])) << (((((/* implicit */int) arr_8 [i_1] [i_0])) - (144))))));
        }
    }
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_27 ^= min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29724)) ? (((/* implicit */unsigned long long int) var_10)) : (var_3)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_4] [i_5]))))) : (min((((/* implicit */unsigned int) (short)29705)), (838283423U)))))), (((((/* implicit */_Bool) ((unsigned int) (unsigned short)57434))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4]))) : (var_1))));
                        var_28 = ((/* implicit */short) arr_20 [i_6] [i_6] [(unsigned char)4] [i_6]);
                        var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32752)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7] [i_7]))) : (var_1)))))))));
                        var_30 = 521415231U;
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) arr_6 [i_4] [i_4]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_5)) : (arr_10 [i_4] [i_4] [i_4])))))))));
        arr_22 [i_4] = ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50301))));
    }
    var_32 += ((/* implicit */unsigned int) var_14);
}
