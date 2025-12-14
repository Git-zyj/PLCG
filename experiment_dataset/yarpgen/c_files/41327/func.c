/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41327
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0 + 1]);
                        var_17 &= ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) 2047U))))), (2147483647)));
                    }
                } 
            } 
        } 
        arr_11 [i_0 + 2] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != ((((+(var_12))) / (((/* implicit */long long int) (+(((/* implicit */int) (short)-20666)))))))));
        var_18 = ((/* implicit */long long int) arr_7 [i_0]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_4 = 2; i_4 < 17; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
                arr_17 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!((_Bool)0)));
            }
            var_20 = var_12;
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_21 = ((/* implicit */unsigned char) min((((int) (unsigned char)64)), (((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            arr_20 [i_0 + 2] [i_0] = ((/* implicit */unsigned short) max((((unsigned int) max((arr_7 [i_0]), ((_Bool)1)))), (((/* implicit */unsigned int) ((signed char) arr_3 [i_0] [i_0 - 1])))));
            arr_21 [i_0] [i_0 + 2] = ((/* implicit */short) (-(((((/* implicit */_Bool) max((-9223372036854775796LL), (((/* implicit */long long int) var_6))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78))) / (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))))));
            var_22 += ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) (_Bool)0)))));
            var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 4398046511103LL)))) || (((/* implicit */_Bool) arr_12 [i_0])))))));
        }
        arr_22 [(signed char)4] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)127))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_14 [8U] [i_0] [i_0 - 2] [i_0 - 2])), (var_10))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)36560))))))) || ((!(((((/* implicit */_Bool) (signed char)-97)) && (((/* implicit */_Bool) (unsigned char)107)))))));
    }
    var_24 += ((/* implicit */long long int) var_0);
    var_25 = var_3;
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_33 [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) arr_9 [i_7] [i_8] [i_9]);
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-20742)) | ((-2147483647 - 1)))))));
                    arr_34 [i_7] [i_7] = (!(((/* implicit */_Bool) max((3295340234U), (0U)))));
                }
            } 
        } 
    } 
}
