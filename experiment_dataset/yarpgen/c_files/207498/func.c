/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207498
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
    var_10 ^= var_5;
    var_11 |= ((/* implicit */signed char) ((_Bool) (unsigned short)54059));
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        arr_14 [i_2] [i_2] [i_2] [(unsigned short)2] [i_2] [i_2] |= ((/* implicit */long long int) (-(3275750468U)));
                        arr_15 [i_0] [i_3] = ((/* implicit */_Bool) (+(var_7)));
                        var_13 = ((/* implicit */_Bool) (-(((int) 3275750476U))));
                    }
                    for (long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                    {
                        var_14 |= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_7 [(short)22])) ? (((long long int) 1068801846U)) : (((/* implicit */long long int) (~(var_5)))))), (((/* implicit */long long int) ((short) min((var_2), (((/* implicit */unsigned short) arr_10 [i_0] [4U] [i_2] [i_4 + 2]))))))));
                        arr_18 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((short) arr_16 [i_0] [i_1] [i_2] [i_2] [i_1]));
                        arr_19 [(signed char)17] [14LL] [i_2] [(signed char)17] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(-1LL)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_13 [i_4 + 1] [i_0] [i_2] [i_0] [i_0])))) ? (min((((/* implicit */unsigned long long int) var_3)), (arr_5 [i_0]))) : (((/* implicit */unsigned long long int) (~(var_1))))))));
                        var_15 = ((/* implicit */unsigned short) var_3);
                    }
                    arr_20 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((long long int) max((((/* implicit */long long int) var_5)), (arr_13 [i_0] [(short)5] [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) arr_2 [(short)10] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) max((arr_22 [14ULL] [i_1]), (((/* implicit */unsigned long long int) var_4))))))));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((var_7), (((/* implicit */long long int) ((unsigned short) arr_9 [i_0] [i_5] [12ULL] [9LL])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
