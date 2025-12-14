/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27425
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
    var_17 = ((/* implicit */long long int) (short)-22987);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (arr_7 [i_1]) : (0U))) << (((((var_16) * (arr_7 [i_1]))) - (136294228U)))));
                arr_8 [i_0] [i_0] &= (+(((((/* implicit */_Bool) 53058365U)) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_6 [i_1] [i_1])))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_19 [i_2] [i_3] [0U] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) max((-1959730989597810099LL), (var_2)));
                                var_19 ^= (+(var_7));
                                var_20 ^= ((/* implicit */long long int) var_16);
                                var_21 = ((/* implicit */short) 3621476635U);
                            }
                        } 
                    } 
                } 
                var_22 += ((/* implicit */unsigned int) (short)32749);
                /* LoopSeq 3 */
                for (unsigned int i_5 = 3; i_5 < 10; i_5 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((unsigned int) ((-3864109360510724192LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-32739))))));
                                arr_28 [i_5] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) 576320014815068160LL);
                                var_24 = ((/* implicit */short) ((unsigned int) var_15));
                                arr_29 [i_0] [(short)9] [i_5] [(short)9] [i_6] = ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                    arr_30 [i_5] [i_5] [i_5 - 2] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5 + 2])))))) & ((~(((2019086414U) * (4293918720U))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 2; i_8 < 10; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 11; i_9 += 2) 
                        {
                            {
                                arr_36 [i_0] [i_1] [i_5] [i_8 + 2] [i_8 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((-27LL) < (((/* implicit */long long int) ((/* implicit */int) (short)32744)))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_9 - 1] [i_5 + 1] [i_8 + 1] [i_5 + 1] [i_5])) && (((/* implicit */_Bool) arr_3 [i_5 + 1])))))));
                                arr_37 [(short)3] [(short)3] [i_5] [i_8 + 3] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 750181588133268475LL)) && (((/* implicit */_Bool) (short)-26482))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_10 = 3; i_10 < 10; i_10 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-29026))))), (arr_32 [i_0] [i_10 + 1] [i_0] [i_10] [i_10])))) ? (((var_12) % (3864109360510724186LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_1] [i_0] [i_10 + 3] [i_0] [i_1]))) - (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                    var_26 = ((/* implicit */long long int) var_8);
                }
                for (unsigned int i_11 = 1; i_11 < 10; i_11 += 4) 
                {
                    arr_43 [i_1] &= ((((arr_34 [i_11 - 1] [i_11 - 1] [i_11 + 2] [i_11 - 1] [i_11 + 3] [i_11 + 1] [i_11 + 2]) % (arr_34 [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11 + 3] [i_11 + 2] [i_11 + 1] [i_11 - 1]))) << (((((arr_34 [i_11 + 2] [i_11 - 1] [i_11 + 1] [i_11 + 3] [i_11 + 1] [i_11 + 3] [i_11 - 1]) * (arr_34 [i_11 + 1] [i_11 + 2] [i_11 + 3] [i_11 + 3] [i_11 + 2] [i_11 + 2] [i_11 + 1]))) - (1498775823U))));
                    arr_44 [i_11] [0U] = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_11]))) - (3363637712678424402LL)))));
                    var_27 -= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32765))) / (arr_6 [i_11 + 2] [i_11 + 2])))) ? (((max((var_16), (var_7))) - (var_1))) : ((+(((((/* implicit */_Bool) 3864109360510724184LL)) ? (4294967295U) : (4294967290U))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) (short)-32733);
}
