/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196371
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
    var_13 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) (signed char)6);
        var_15 = ((/* implicit */unsigned long long int) (unsigned char)46);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */_Bool) var_0);
            var_17 = ((/* implicit */int) ((unsigned long long int) 287104476244869120ULL));
            var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (((!((_Bool)1))) && (((((/* implicit */_Bool) 131071)) || (((/* implicit */_Bool) var_5))))))), (max((var_12), (((/* implicit */unsigned int) (unsigned char)46))))));
            /* LoopNest 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (~(arr_11 [i_0] [i_1] [i_3]))))) ? (((/* implicit */unsigned long long int) ((int) max((((/* implicit */int) var_11)), (640568066))))) : ((+(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_12))))))));
                            arr_14 [i_1] [i_4] [i_2] = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */long long int) var_8)), (((((/* implicit */long long int) ((/* implicit */int) var_6))) & (4017220109255821859LL))))));
                            arr_15 [i_4] [i_3] [i_4] [i_4] [i_1] [i_0] = ((/* implicit */int) var_12);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) ((1168262966) & (((/* implicit */int) (unsigned char)255))));
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_5]);
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                var_21 |= ((/* implicit */unsigned long long int) (~(579804929U)));
                var_22 = ((/* implicit */int) ((9223372036854775789LL) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9))))))));
                var_23 = ((/* implicit */int) ((_Bool) arr_16 [i_0] [i_0]));
                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_6] [i_6] [i_6] [i_5] [i_6]))));
            }
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-1)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) 13835058055282163712ULL)) && (((/* implicit */_Bool) (signed char)2))))))))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                for (int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210))) != (4294967287U)));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1787800220U)) ? (9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                        var_28 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)0))));
                    }
                } 
            } 
        }
    }
    for (int i_9 = 1; i_9 < 21; i_9 += 3) 
    {
        arr_31 [i_9] [i_9] = ((/* implicit */_Bool) var_12);
        arr_32 [i_9 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))))) == (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (4049643067U)))) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) max(((unsigned char)0), ((unsigned char)31))))))));
        arr_33 [i_9 + 1] = ((/* implicit */long long int) var_9);
    }
}
