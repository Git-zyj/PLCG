/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194213
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 |= ((/* implicit */_Bool) ((((/* implicit */int) var_14)) >> (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32544))) & (var_9))) - (9975LL)))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)-18))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_9)))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (short)7)) != (((/* implicit */int) var_0)))));
                /* LoopSeq 4 */
                for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    arr_10 [i_2] [i_2] = ((/* implicit */signed char) (short)0);
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_16)))))))));
                }
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-120))))))))));
                                var_23 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)0))))) ? ((-(((/* implicit */int) var_3)))) : (((((/* implicit */int) (short)0)) ^ (((/* implicit */int) var_15)))))) | (((((/* implicit */_Bool) (-(var_13)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) max(((short)-18), (((/* implicit */short) var_0)))))))));
                            }
                        } 
                    } 
                    var_24 |= ((/* implicit */signed char) (unsigned char)120);
                }
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) var_14))))) ? (((var_2) % (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) var_9))))))));
                                var_26 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))));
                            }
                        } 
                    } 
                    arr_27 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (short)-10)) : (((/* implicit */int) (unsigned char)161))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((_Bool) (unsigned char)0)))));
                                var_28 = ((/* implicit */long long int) (unsigned char)0);
                                var_29 = ((/* implicit */unsigned char) var_7);
                                var_30 = ((_Bool) -5614563572336990619LL);
                            }
                        } 
                    } 
                    arr_32 [i_2] [i_2] [i_3] [i_8] = ((/* implicit */unsigned long long int) ((unsigned short) max((var_11), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))));
                }
                for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
                {
                    var_31 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(var_1)))) * (((((/* implicit */_Bool) var_1)) ? (0ULL) : (var_11)))));
                    var_32 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) ((long long int) var_6))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0))))))));
                    var_33 = ((/* implicit */unsigned long long int) ((signed char) ((short) (short)17)));
                    arr_35 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)17))))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                }
            }
        } 
    } 
}
