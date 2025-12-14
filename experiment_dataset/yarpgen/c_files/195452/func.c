/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195452
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [(unsigned short)15] [i_2] [i_1] [i_0] &= ((/* implicit */_Bool) var_7);
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_1] [i_2]))))) ? (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (short)22016)))))) : ((~(((/* implicit */int) (short)10044))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3] [(unsigned short)15] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))));
                                var_14 *= ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_2] [(signed char)7]);
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_3), ((~(((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), (var_4)))) && (((((/* implicit */_Bool) (short)8191)) && (((/* implicit */_Bool) var_9)))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)175))))) ? (((((/* implicit */_Bool) (short)22028)) ? (arr_10 [(unsigned char)6] [i_3 - 1] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 + 1])))))));
                                var_16 = ((/* implicit */long long int) (+(min(((~(((/* implicit */int) var_11)))), (((((/* implicit */_Bool) arr_11 [i_0] [i_4] [i_2] [0LL] [i_4] [i_4] [10])) ? (arr_3 [i_0] [i_1] [i_2]) : (-1181310209)))))));
                                var_17 = ((/* implicit */short) ((int) (((~(((/* implicit */int) (_Bool)0)))) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)33001)) : (((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                    var_18 &= ((/* implicit */unsigned short) ((long long int) arr_5 [11LL] [i_1] [i_1]));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)19760))))));
}
