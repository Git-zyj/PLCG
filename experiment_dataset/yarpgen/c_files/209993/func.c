/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209993
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
    var_18 |= ((/* implicit */unsigned int) var_11);
    var_19 &= ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned char)201)) ? (var_1) : (((/* implicit */long long int) (-(456705442)))))) : ((((-(8130837140052380252LL))) | (((/* implicit */long long int) var_0)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_20 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (0) : (arr_2 [i_0 - 1])))) / (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) (~(((int) arr_6 [i_0 + 1] [i_0] [i_0 + 1]))));
                        var_22 += ((/* implicit */long long int) var_13);
                        var_23 = -1859984773;
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 21; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_5 = 4; i_5 < 20; i_5 += 4) 
        {
            arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1] |= ((/* implicit */_Bool) ((unsigned int) arr_8 [i_4 + 1] [i_4] [i_5 - 1] [i_4]));
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                arr_19 [i_4] [i_5] [i_6] &= var_4;
                var_24 &= ((/* implicit */unsigned int) (~(arr_9 [i_4 + 1] [i_4] [i_5] [i_6])));
            }
            var_25 = -1859984773;
        }
        for (long long int i_7 = 2; i_7 < 20; i_7 += 1) /* same iter space */
        {
            arr_23 [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) 410194880U)))));
            var_26 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_7] [i_4 + 1] [i_4]))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    {
                        arr_29 [i_9] [i_7] [i_8] [i_9] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)161)))) : ((~(arr_26 [i_9] [i_8] [i_8] [i_8] [i_4] [i_4])))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_8))));
                        arr_30 [i_9] [i_8] [i_9] |= (~(arr_10 [i_9]));
                    }
                } 
            } 
        }
        for (long long int i_10 = 2; i_10 < 20; i_10 += 1) /* same iter space */
        {
            var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4 + 1] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)16)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (arr_6 [i_10 - 1] [i_10 - 1] [i_10])));
            arr_34 [i_10] [i_4] [i_10 + 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_4 - 1]))));
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_10 - 2])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (_Bool)1))))))));
            arr_35 [i_10] = ((/* implicit */long long int) ((_Bool) -9223372036854775792LL));
        }
        var_30 = ((/* implicit */long long int) max((var_30), (((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4] [i_4 + 1])) ? (49214417365688113LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 + 1] [i_4 + 1])))))));
    }
}
