/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233247
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
    var_18 *= ((/* implicit */unsigned short) 7486681102301246924ULL);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (((+(((unsigned long long int) -1697392373)))) - (((((/* implicit */_Bool) 860493456U)) ? (10960062971408304692ULL) : (arr_1 [i_0])))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 1194274293)) ^ (10960062971408304713ULL)));
                    var_21 = ((/* implicit */long long int) (unsigned short)28603);
                }
                for (short i_3 = 2; i_3 < 9; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (signed char i_5 = 3; i_5 < 10; i_5 += 4) 
                        {
                            {
                                arr_15 [i_5 - 2] [i_1] [i_1] [i_3 + 3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) var_11);
                                arr_16 [i_5] [i_4] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((min((min((18446744073709551611ULL), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_4])) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (unsigned short)59271))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_3 + 3])))));
                                var_22 = ((/* implicit */unsigned int) (~(min((-1628458091), (1194274307)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_0)))) % (min((arr_14 [0] [i_0] [0] [0] [0] [i_3]), (var_14)))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_3 - 1] [11] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))), (arr_2 [i_0] [i_1])))) : (min((min((((/* implicit */long long int) arr_4 [i_1] [i_3])), (-2786379693469849705LL))), (((/* implicit */long long int) arr_7 [i_1] [i_0] [i_3 + 1] [i_1]))))));
                }
                /* vectorizable */
                for (short i_6 = 2; i_6 < 9; i_6 += 1) /* same iter space */
                {
                    arr_19 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_6] [i_1])) || (((/* implicit */_Bool) (unsigned short)17409)))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 9; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                arr_26 [i_0] [i_7] [i_7] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(10960062971408304713ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((805653333640620491ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))) : (((9066734310180689586ULL) >> (((var_14) - (31655378)))))));
                                var_24 += ((/* implicit */signed char) 10960062971408304726ULL);
                                var_25 = ((((/* implicit */_Bool) -1194274283)) ? (arr_4 [i_7 + 2] [i_6 - 1]) : (arr_4 [i_7 - 2] [i_6 + 2]));
                                arr_27 [i_0] [i_7] [i_0] [i_7] = var_14;
                                arr_28 [i_7] = ((((/* implicit */_Bool) (signed char)127)) ? (1333231201) : (((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                    arr_29 [i_6] [i_1] [(unsigned char)3] |= ((/* implicit */int) var_9);
                }
            }
        } 
    } 
    var_26 = (~(-2031345779));
}
