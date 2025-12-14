/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209473
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(67108864U)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_2] [i_0])))) : (((((/* implicit */int) arr_1 [i_0] [(short)18])) ^ (0)))))) ^ (((((((/* implicit */_Bool) 3875442269U)) ? (arr_3 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54295))))) & (arr_3 [i_1] [i_2 - 3] [i_2])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned short) (+(arr_3 [i_1 + 1] [i_3] [(signed char)6])));
                        arr_8 [i_0] [i_1] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2]))))) * (((/* implicit */int) arr_5 [i_1 - 1] [i_2] [i_2 - 2] [i_3]))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_4 = 2; i_4 < 12; i_4 += 3) 
    {
        arr_12 [i_4] = ((/* implicit */unsigned char) (+((-(arr_9 [i_4])))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) ((_Bool) (!(((((/* implicit */_Bool) (unsigned short)11249)) && ((_Bool)0))))));
            var_14 = ((/* implicit */unsigned long long int) (+((+(((((/* implicit */int) arr_14 [i_4])) | (((/* implicit */int) (unsigned short)6547))))))));
            var_15 -= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) arr_5 [i_4] [i_4] [i_4] [i_4 - 2])))));
            var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_5] [i_5])), (arr_6 [12U])))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_21 [i_6] [i_6] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)116))))) ? (((arr_9 [i_6]) ^ (-1463787225))) : (((/* implicit */int) (unsigned char)121))))), (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_6] [i_6] [i_4]))))) : (((((/* implicit */unsigned long long int) 0)) / (arr_16 [i_4] [10ULL] [i_4])))))));
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_24 [i_6] [i_6] [i_7] [i_6] = (i_6 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_6])) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -1)) > (15949886981465877491ULL)))) >> (((((/* implicit */int) arr_23 [i_6] [(unsigned char)9] [i_6])) - (14098))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_6])) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -1)) > (15949886981465877491ULL)))) >> (((((((/* implicit */int) arr_23 [i_6] [(unsigned char)9] [i_6])) - (14098))) + (8328)))))))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned char i_9 = 1; i_9 < 11; i_9 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) arr_13 [i_6] [i_7] [(short)10]);
                            arr_32 [i_6] [i_6] [i_7] [i_8] [i_8] [i_9] = min((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (2496857092243674143ULL))) && (((_Bool) -1852707805))))), (2147483647));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 3) 
                {
                    var_18 = ((/* implicit */long long int) arr_28 [i_4 - 1] [i_6] [i_4 - 1] [i_4 + 1] [i_4 + 1]);
                    var_19 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_0 [i_4] [9LL])) | (((/* implicit */int) arr_0 [i_4] [i_4])))));
                    var_20 += ((/* implicit */unsigned long long int) ((short) (signed char)56));
                }
            }
            for (unsigned short i_11 = 4; i_11 < 11; i_11 += 4) 
            {
                arr_39 [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_11 - 3] [i_11 - 2])))))));
                var_21 = ((/* implicit */_Bool) (-(((unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                var_22 &= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)136))));
            }
        }
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (-((-(((/* implicit */int) (short)23735)))))))));
        var_24 = (((+(((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) (unsigned short)0)));
    }
}
