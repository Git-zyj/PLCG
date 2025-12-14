/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210182
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
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((arr_0 [i_0]), (((/* implicit */unsigned char) arr_1 [8ULL]))));
                    var_16 = ((/* implicit */short) max((var_16), ((short)10)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        arr_12 [8] [i_1] [8] [i_2 - 2] [i_0] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 - 3] [i_3 + 1]))) : (15U)));
                        var_17 = ((/* implicit */long long int) (+(21U)));
                        var_18 -= ((/* implicit */unsigned char) 16U);
                    }
                    for (unsigned short i_4 = 2; i_4 < 8; i_4 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) (_Bool)1);
                            arr_19 [i_0] [i_1] [i_2 + 1] [i_4] = arr_3 [i_0] [8U];
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            arr_22 [i_4] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_4])) + (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)12)))) || ((!(((/* implicit */_Bool) 841180)))))))));
                            arr_23 [i_4] [i_4] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 4] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_10 [i_0] [i_4 - 1] [i_2])))) ? (1535350505) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            arr_24 [i_2] |= ((/* implicit */signed char) arr_21 [i_0] [i_1] [i_2 + 2] [i_4] [i_4] [i_1]);
                        }
                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 8; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_0] [i_0] [(unsigned char)6] [i_7] &= ((/* implicit */unsigned int) (((~(var_12))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_4 + 1])))));
                            arr_28 [i_0] [i_0] [i_4] [(short)4] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((+(var_1)))));
                        }
                        var_20 = ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (short)-15925)))))) * (((((/* implicit */_Bool) (-(arr_15 [i_0] [i_2] [i_0] [i_2] [i_1] [(unsigned short)1] [i_2])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((signed char) (short)-10482))))));
                        arr_29 [i_4] [5LL] [5LL] [(_Bool)1] = ((/* implicit */int) ((signed char) ((((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_10)))) != (((((((/* implicit */int) arr_4 [i_4] [i_4])) + (2147483647))) >> (((((/* implicit */int) (short)-32765)) + (32792))))))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) ((int) 16U))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)30))))))));
    var_22 ^= var_12;
}
