/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195457
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (((unsigned char) (_Bool)1)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [(unsigned short)9] [i_3] [i_4 - 1] = ((/* implicit */long long int) ((unsigned int) ((short) var_8)));
                                var_12 -= ((/* implicit */short) 4160749568U);
                                arr_15 [i_0] [i_0] [5ULL] [i_3] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_2]))))), (max((var_9), (((/* implicit */short) var_6)))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_1)))))) ? (2422237577U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [(signed char)6] [i_0] = var_9;
                arr_18 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        var_13 = ((/* implicit */long long int) arr_20 [i_5]);
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_14 = ((/* implicit */short) ((signed char) (_Bool)1));
                        var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0))))), (((long long int) var_6))))) ? (arr_24 [i_5] [14LL] [14LL] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_28 [i_8] = ((/* implicit */short) ((max((((/* implicit */long long int) arr_23 [i_5] [i_5] [i_7] [i_8])), (var_0))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)0))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)10572))) | (3700740535U))) : (594226760U))))));
                        var_16 = ((/* implicit */short) max((min((arr_25 [i_5] [i_6] [i_7] [i_8] [i_5] [i_6]), (arr_25 [i_5] [i_6] [i_6] [i_6] [(unsigned char)4] [i_6]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-10566)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            arr_32 [6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) | (min((((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_31 [i_5] [6ULL] [6ULL])))))))));
            arr_33 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) (_Bool)1)))));
        }
        arr_34 [i_5] = ((/* implicit */short) min((1857650833934900194LL), (((((/* implicit */_Bool) min((((/* implicit */long long int) 545455106)), (4743183545505052176LL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_3)) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5])))))));
    }
}
