/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200294
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] &= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_1] [i_0 - 1] [(signed char)2] = ((/* implicit */unsigned short) (-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2600302402U)))))) : (1694664894U)))));
                            var_19 = ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                            arr_19 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_16)) : (var_6)))))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) <= (var_14))))) % (((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) ? (var_1) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7)))))))));
                        }
                        var_21 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_10)))) : (((((/* implicit */long long int) var_0)) + (var_11)))));
                    }
                    for (short i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                    {
                        var_22 *= var_17;
                        var_23 = ((((/* implicit */unsigned long long int) ((var_6) << (((var_14) - (4171387296U)))))) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_6)) : (var_1))));
                        arr_22 [i_0] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_17)) << (((((/* implicit */int) var_7)) - (194)))))))) ? (((((/* implicit */_Bool) var_6)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15))))) && (((/* implicit */_Bool) (-(var_3))))))))));
                    }
                    arr_23 [(short)3] [i_1] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_7))))));
                    var_24 = ((/* implicit */signed char) (+((~((~(2600302402U)))))));
                }
            } 
        } 
        var_25 += ((/* implicit */long long int) (~((((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((~(((/* implicit */int) var_15))))))));
    }
    for (int i_6 = 1; i_6 < 19; i_6 += 3) 
    {
        arr_26 [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_2))) <= (((((/* implicit */long long int) (+(((/* implicit */int) var_4))))) | (var_6)))));
        arr_27 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) var_3)) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) ? ((~((+(((/* implicit */int) var_5)))))) : (((((/* implicit */int) var_4)) | (var_3)))));
    }
    var_26 &= ((/* implicit */_Bool) var_10);
}
