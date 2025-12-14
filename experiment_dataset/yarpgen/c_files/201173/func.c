/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201173
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
    var_16 -= ((/* implicit */int) ((short) ((unsigned char) var_3)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) var_10);
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(min((((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36777))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (~(((/* implicit */int) var_12))))))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))), (((/* implicit */int) max((var_12), (var_13))))))))))));
                        var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) var_3)) : (((int) (+(((/* implicit */int) var_4)))))));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) ((signed char) (short)-32751));
                            var_22 ^= max((((/* implicit */unsigned char) var_3)), ((unsigned char)0));
                            var_23 = ((/* implicit */unsigned short) ((long long int) max(((~(var_14))), ((+(var_14))))));
                            var_24 += ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)7))));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [(unsigned char)2] [(unsigned char)2] [i_2] [i_0] [(unsigned char)2] [7ULL] = ((/* implicit */long long int) ((unsigned short) var_0));
                            var_25 = ((/* implicit */int) var_3);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_26 = ((int) (~(((/* implicit */int) var_7))));
                            var_27 -= ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) var_4)))));
                            arr_20 [i_0] [i_0] [i_2] [(_Bool)1] = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned short)0)))))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (short)-16819))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (max((((/* implicit */unsigned short) var_4)), (var_8))))))) : (min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) var_8))))));
                            var_29 = ((/* implicit */_Bool) min(((~(((/* implicit */int) var_12)))), (min((min((((/* implicit */int) var_5)), (var_2))), (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_6)))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_30 &= (-(((/* implicit */int) (signed char)-123)));
                            var_31 = ((/* implicit */signed char) min(((+(((/* implicit */int) ((signed char) var_15))))), (((/* implicit */int) var_6))));
                        }
                        var_32 = ((/* implicit */short) var_13);
                    }
                    arr_24 [i_2] [5] = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */int) var_13)))))), (((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
}
