/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244838
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
    for (int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */signed char) min((((2047944932) | (((/* implicit */int) arr_7 [i_1])))), (((/* implicit */int) ((((unsigned long long int) var_1)) == (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))))))))));
                    var_10 *= ((/* implicit */unsigned long long int) ((((arr_4 [i_1 - 1] [19ULL] [i_2] [i_2]) > (((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (_Bool)1)))))) ? ((-(-7558197635562937218LL))) : (((/* implicit */long long int) min((arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 1]), (arr_4 [i_1 - 3] [i_0 + 1] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */signed char) arr_10 [i_3]);
        var_11 ^= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)146)))) > ((-(-1625082128)))));
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            arr_18 [i_3] = ((/* implicit */unsigned int) (+((+(var_9)))));
            arr_19 [i_3] [i_3] = ((/* implicit */unsigned char) (-(arr_0 [i_3])));
        }
        for (unsigned short i_5 = 3; i_5 < 14; i_5 += 4) 
        {
            var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [16] [i_5 - 3] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [4LL] [i_5 + 3]))) : (5253589956334427569LL)));
            var_13 -= ((/* implicit */int) ((((/* implicit */_Bool) -375168039)) || (((/* implicit */_Bool) (unsigned short)30482))));
            var_14 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_20 [i_5 + 1] [i_3] [i_5 + 1]))));
        }
        for (int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_7 = 1; i_7 < 15; i_7 += 3) 
            {
                arr_29 [i_3] [i_6] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)9))));
                arr_30 [i_3] [i_3] [i_3] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_7] [i_7] [i_7] [i_7 - 1]))));
                arr_31 [i_3] [i_3] [i_6] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) % (((/* implicit */int) arr_20 [i_7] [i_7 + 1] [(unsigned short)0]))));
            }
            for (long long int i_8 = 2; i_8 < 15; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        {
                            var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_9] [i_8] [i_8] [i_8 - 2] [i_8] [i_9] [i_9])) ? (((/* implicit */unsigned int) arr_38 [i_9] [i_9] [i_3] [i_8 + 1] [i_8] [i_8 + 1] [i_9])) : (arr_32 [i_8 + 2] [i_6] [i_8 + 2] [i_10])));
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_3] [i_9] [i_3])))))));
                            arr_39 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_4)) ? (var_0) : (3849013637708804183ULL)))));
                            var_17 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_6] [i_3] [i_3] [i_9])) + (((/* implicit */int) var_4))));
                        }
                    } 
                } 
                arr_40 [i_3] [i_6] [i_3] = ((((/* implicit */_Bool) -1625082139)) ? (581307227540432064LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))));
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) (_Bool)0);
                            arr_47 [i_3] [i_6] [i_8] [i_3] [i_6] = (+(((/* implicit */int) (unsigned char)118)));
                        }
                    } 
                } 
            }
            var_19 = (signed char)19;
        }
    }
    var_20 -= ((/* implicit */short) (+((+(max((7438064441369457493LL), (((/* implicit */long long int) (_Bool)1))))))));
}
