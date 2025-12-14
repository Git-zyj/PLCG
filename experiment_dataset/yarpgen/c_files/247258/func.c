/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247258
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
    var_10 = ((/* implicit */int) var_0);
    var_11 = ((/* implicit */signed char) (-(var_8)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((7471326205935182474LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_0))))) / (((/* implicit */long long int) var_2))))) ? (((/* implicit */int) min((arr_7 [i_0] [i_1] [i_2]), (((/* implicit */short) var_0))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_9))))) : (56)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_1 [i_1])) : (-1579691048)))) ? ((((!(((/* implicit */_Bool) 1579691065)))) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_5)) : (1699365162))) : (((/* implicit */int) ((9120623320213123168ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) : (((/* implicit */int) ((((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1))) != (var_4))))));
                        var_13 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2] [i_3]))) : (3630922369U)))) ? (((/* implicit */int) (!((_Bool)0)))) : (((1579691065) ^ (((/* implicit */int) (unsigned char)119))))))), (((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (var_6) : (((/* implicit */unsigned int) var_2)))));
                        arr_11 [i_0] [i_0] = ((/* implicit */long long int) var_6);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                    {
                        var_14 &= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((9326120753496428451ULL) * (((/* implicit */unsigned long long int) var_6)))))))) != (((/* implicit */int) ((min((((/* implicit */unsigned long long int) 934217835U)), (var_1))) <= (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) var_0))))))))));
                        var_15 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)-6576)) ? (((/* implicit */int) arr_3 [i_1] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17861)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (signed char)-17)))))));
                        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_2] [i_4]))) != (var_1))))));
                        arr_15 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((max((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])), ((-(((/* implicit */int) (unsigned short)1920)))))) + (1942)))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 24; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) -1699365166);
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_6))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))))) ? (((/* implicit */int) (short)17860)) : (558999821)));
                                var_20 &= ((/* implicit */long long int) ((((((/* implicit */int) var_3)) > (((/* implicit */int) (!(arr_16 [i_6 - 1] [i_5] [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-537502113), (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (short)-10)) ? (arr_9 [i_0] [i_1] [i_5] [i_6 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (var_8))) ? (((/* implicit */unsigned long long int) ((unsigned int) (short)-10))) : (var_4)))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) 2629763925U))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
