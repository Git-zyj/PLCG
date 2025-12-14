/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25333
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
    var_12 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) & (min((((/* implicit */unsigned long long int) (unsigned char)161)), (var_9)))))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_3)), (var_1))) >= (var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (var_10)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 10; i_2 += 3) 
            {
                for (signed char i_3 = 4; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3]))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)172))));
                        var_14 ^= var_2;
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_4 = 2; i_4 < 11; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)17250)) * (((/* implicit */int) (unsigned short)17253))));
                            arr_19 [i_0] [i_4] [i_0] [(unsigned char)8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [9U] [i_1] [i_1] [i_1] [i_1]))) : (var_9)));
                            var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17451448556060672ULL)) ? ((-(var_3))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-77)))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */long long int) var_7);
            arr_20 [i_0] [i_1] = ((/* implicit */long long int) var_10);
        }
        var_18 *= ((/* implicit */signed char) arr_0 [i_0] [(unsigned char)5]);
        arr_21 [(unsigned char)6] = ((/* implicit */long long int) ((arr_18 [i_0] [i_0] [5LL] [i_0] [11] [i_0] [1ULL]) & (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [2ULL])));
        arr_22 [i_0] = ((/* implicit */unsigned int) var_2);
        var_19 &= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)56247)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))));
    }
}
