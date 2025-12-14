/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222241
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_10 |= ((/* implicit */signed char) var_2);
                            var_11 = max(((-(9223372036854775807LL))), ((-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775792LL) : (-9223372036854775807LL))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_12 -= ((/* implicit */short) (~(((((((/* implicit */_Bool) (short)1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5]))) : (-9223372036854775805LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))))));
                                arr_21 [i_1] [(signed char)9] [8ULL] [1U] [i_6] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) -5363938864091783177LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (9223372036854775807LL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 2; i_10 < 20; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            {
                                arr_35 [i_7] [(signed char)0] [i_9] [i_7] [i_11] [i_11] = ((((/* implicit */_Bool) arr_33 [16ULL] [i_10 - 2] [i_10] [(_Bool)1] [i_10 + 1])) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) 3168695655U)) || (((/* implicit */_Bool) var_5))))), (9223372036854775792LL))) : (((((/* implicit */_Bool) arr_30 [5U] [i_10 + 1] [i_11])) ? (((((/* implicit */_Bool) 377368508580429144LL)) ? (-9223372036854775807LL) : (((/* implicit */long long int) 1706102775U)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)120))))));
                                arr_36 [i_7] [i_11] [i_9] [i_11] [14U] [i_8] [i_9] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)166)), ((unsigned short)0)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        for (unsigned long long int i_13 = 4; i_13 < 22; i_13 += 3) 
                        {
                            {
                                var_13 = max((-9223372036854775807LL), (565437509386641069LL));
                                var_14 = ((/* implicit */unsigned int) (unsigned char)194);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 2) 
    {
        for (short i_15 = 3; i_15 < 15; i_15 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_16 = 0; i_16 < 17; i_16 += 2) 
                {
                    for (long long int i_17 = 1; i_17 < 13; i_17 += 3) 
                    {
                        for (int i_18 = 0; i_18 < 17; i_18 += 4) 
                        {
                            {
                                arr_54 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_33 [i_18] [i_17] [i_16] [(unsigned short)4] [i_14])), (-1LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)233))))) : (((((/* implicit */_Bool) 1877410847U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))) : (9223372036854775807LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_15 - 2])) ? (((/* implicit */int) arr_45 [i_14])) : (((/* implicit */int) arr_45 [i_18])))))));
                                var_15 = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 16; i_19 += 3) 
                {
                    for (signed char i_20 = 0; i_20 < 17; i_20 += 4) 
                    {
                        {
                            arr_60 [i_14] [i_15 + 1] [i_19] [i_14] = ((/* implicit */unsigned short) ((long long int) 9223372036854775807LL));
                            arr_61 [i_14] [i_14] [i_19] [i_20] [i_19 + 1] [i_20] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_42 [i_15 - 1] [i_19])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)10)))))) ? (-3044829421187965185LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((3044829421187965185LL), (((/* implicit */long long int) var_4))))) ? ((~(arr_32 [i_14] [23ULL] [i_15 - 1] [i_20] [i_19] [i_20]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
