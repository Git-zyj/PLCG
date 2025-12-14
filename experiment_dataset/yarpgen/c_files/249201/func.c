/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249201
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((~(var_3))))))));
        var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (short)31746))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */int) ((unsigned char) (short)17911))), ((-(((/* implicit */int) (short)-1)))))) : (((/* implicit */int) (short)-1))));
        var_21 ^= ((/* implicit */short) var_6);
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) var_13))))) & (min((-2412095842898355965LL), (((/* implicit */long long int) var_15))))));
        var_22 = ((/* implicit */int) min((var_22), ((((((-((+(((/* implicit */int) var_17)))))) + (2147483647))) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? ((-(((/* implicit */int) var_18)))) : (((/* implicit */int) (short)-623)))) - (13937)))))));
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min(((-((~(var_5))))), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_11)))) >= ((-(((/* implicit */int) var_6))))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        arr_20 [i_2] [i_3] [17LL] = ((/* implicit */unsigned int) var_10);
                        arr_21 [i_2] [i_5] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_16)), ((short)17911)))))))));
                    }
                }
            } 
        } 
        arr_22 [i_2] = ((/* implicit */short) (-((+(((/* implicit */int) var_17))))));
        var_24 ^= 3788247737U;
        arr_23 [i_2] [i_2] = ((/* implicit */unsigned short) (short)-9);
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (unsigned char i_7 = 3; i_7 < 22; i_7 += 4) 
            {
                {
                    arr_29 [i_2] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_3) <= (((/* implicit */long long int) ((/* implicit */int) var_16))))))) - ((~(3788247741U)))));
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((unsigned short) ((unsigned char) var_9))))));
                    var_26 ^= ((/* implicit */short) (-(((long long int) (short)-1))));
                    arr_30 [i_2] [i_2] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (3788247737U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17889)))))) ? ((~(506719558U))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) (short)1504))))) | ((-(var_4)))))));
                }
            } 
        } 
    }
    var_27 |= ((/* implicit */unsigned short) 1365504509);
    var_28 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)129))));
    /* LoopSeq 1 */
    for (int i_8 = 2; i_8 < 13; i_8 += 2) 
    {
        arr_34 [i_8] = max((((((/* implicit */_Bool) 2004647390U)) ? (var_19) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_1))))));
        arr_35 [i_8] = ((/* implicit */short) 506719558U);
    }
}
