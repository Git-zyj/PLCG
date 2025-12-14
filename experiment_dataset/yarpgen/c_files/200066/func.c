/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200066
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
    var_18 = ((/* implicit */short) min((((var_4) ? (var_12) : (((/* implicit */unsigned long long int) (+(var_17)))))), (((/* implicit */unsigned long long int) (-(((1580049828) << (((((/* implicit */int) (signed char)59)) - (59))))))))));
    var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_2))))))));
    var_20 = ((/* implicit */short) ((((/* implicit */int) max((var_4), ((!(((/* implicit */_Bool) var_14))))))) ^ (((/* implicit */int) ((short) var_9)))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_2 - 3] [i_0] = (((!(arr_2 [i_1]))) ? ((((-(((/* implicit */int) (unsigned short)0)))) + (((/* implicit */int) var_16)))) : (((((-2032171604) + (2147483647))) >> (((((/* implicit */int) (short)-31658)) + (31686))))));
                                arr_14 [i_0] [i_0] [i_0] [(short)1] [i_0] = ((/* implicit */signed char) (+(((((var_12) % (((/* implicit */unsigned long long int) 2032171600)))) | (((/* implicit */unsigned long long int) ((int) arr_2 [i_0])))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)65535)))) / (((/* implicit */int) ((signed char) var_2)))))) / (var_1)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 21; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_9 [11] [i_1] [9ULL]) : (((/* implicit */int) var_16)))));
                        arr_18 [i_5] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_1);
                        var_23 = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) arr_3 [i_0 + 1] [i_1])))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((_Bool)0), ((_Bool)1)))), (((((/* implicit */_Bool) (+(var_12)))) ? (min((var_12), (((/* implicit */unsigned long long int) (unsigned short)2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6] [(_Bool)1] [i_6 + 2])))))));
                        /* LoopSeq 2 */
                        for (int i_7 = 1; i_7 < 19; i_7 += 4) 
                        {
                            arr_25 [i_0] = ((/* implicit */short) (+((-(max((((/* implicit */unsigned long long int) var_13)), (var_1)))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)75))))) ? (((/* implicit */long long int) (-(arr_3 [i_2] [i_2])))) : (var_17))) | (((/* implicit */long long int) ((/* implicit */int) max((((_Bool) 50331648)), ((!(var_11)))))))));
                            arr_26 [i_7] [i_0] [i_2 - 2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_0] [i_0]))))), (min((((var_5) ? (arr_20 [i_7] [i_6] [i_6] [i_2] [i_1] [i_0]) : (0LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_7] [i_6 + 2] [i_2 + 1] [i_2] [(unsigned char)3] [(_Bool)1])) ? (((/* implicit */int) var_5)) : (var_0))))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            arr_30 [i_0] [i_1] [i_2 - 2] [i_6 + 2] [i_0] = (!(((/* implicit */_Bool) arr_9 [(short)1] [i_1] [i_2])));
                            arr_31 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) arr_15 [i_0] [i_0])))), (((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_6] [i_8])))))));
                            var_26 = ((/* implicit */unsigned char) ((unsigned long long int) var_11));
                            arr_32 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                        }
                        arr_33 [i_2] [i_0] = (~(((/* implicit */int) var_13)));
                    }
                    var_27 = ((/* implicit */short) var_12);
                    arr_34 [i_0] [i_0] [i_1] [i_0] = (!(((/* implicit */_Bool) arr_21 [i_2] [i_0] [i_0] [i_1] [i_0 + 1] [i_2 - 2])));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */unsigned long long int) var_13)), (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3489116508056401624LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) ? (var_14) : (((/* implicit */int) (signed char)1))));
}
