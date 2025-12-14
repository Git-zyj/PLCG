/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22644
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
    var_19 = ((/* implicit */short) var_0);
    var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (var_4)));
    var_21 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((short) (+(var_16)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 1; i_4 < 9; i_4 += 2) 
                            {
                                var_23 *= ((/* implicit */short) ((min((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) arr_6 [i_3] [i_1] [i_1])) ? (var_6) : (((/* implicit */int) var_9)))))) * (((((/* implicit */_Bool) max((var_13), (((/* implicit */int) (short)-1279))))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_2 [(short)1] [i_3 + 2]))))) : (var_2)))));
                                var_24 &= (((+(((/* implicit */int) arr_3 [i_3 + 1])))) * (((((/* implicit */int) arr_3 [i_3 + 1])) * (((/* implicit */int) arr_3 [i_3 + 1])))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_3] [i_1] [i_0])) - (((/* implicit */int) arr_6 [i_0] [i_0] [i_2]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_4])) % (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))))) ^ (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_3])) || (arr_10 [i_4] [4] [4] [4] [i_0])))))));
                            }
                            var_26 *= ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_10 [i_0 + 2] [i_0] [i_0] [i_1 + 1] [i_3 + 2])))), (((int) arr_10 [i_0 + 2] [i_0] [i_1 - 1] [i_1 + 1] [i_3 + 2]))));
                            var_27 = ((/* implicit */short) min((((/* implicit */int) ((unsigned short) var_12))), (((((/* implicit */_Bool) arr_8 [i_3 + 2] [i_3 + 2] [i_1])) ? (((((/* implicit */_Bool) var_18)) ? (var_12) : (((/* implicit */int) var_18)))) : (((/* implicit */int) var_10))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_5 = 3; i_5 < 9; i_5 += 4) /* same iter space */
                            {
                                var_28 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_11 [i_3 + 1] [i_3] [i_3] [i_3 + 2] [i_3 - 1]))) == (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_3 [i_0 - 3])) : (((arr_13 [i_1]) & (var_1)))))));
                                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((((/* implicit */int) var_7)) - (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1261))))))) != (((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_0]))))) ? (var_3) : ((-(-306363906))))))))));
                                var_30 = ((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_2] [i_3] [i_5])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1278)) ? (((/* implicit */int) (_Bool)1)) : (306363905)))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)84))))));
                                arr_16 [(unsigned short)7] [i_1] [(unsigned short)7] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_3 - 1] [i_5 + 1] [i_1] [i_3 - 1] [i_5]))))) ? (((((/* implicit */int) arr_15 [i_3 + 1] [i_3] [i_1] [i_3] [i_3 + 1])) * (arr_7 [i_3] [i_3 + 2] [i_3 + 1]))) : (((arr_15 [i_3 + 3] [(unsigned char)6] [i_1] [i_5] [i_1]) ? (((/* implicit */int) arr_15 [i_3 + 2] [i_3] [i_1] [i_3 + 3] [i_3])) : (arr_7 [i_3] [i_3] [i_3 + 1])))));
                                var_31 = ((/* implicit */unsigned short) ((int) (((!(((/* implicit */_Bool) var_11)))) ? (11) : (((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [8])) * (((/* implicit */int) arr_5 [(unsigned char)4] [i_1] [i_2])))))));
                            }
                            for (unsigned char i_6 = 3; i_6 < 9; i_6 += 4) /* same iter space */
                            {
                                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)16354)) && ((_Bool)1)));
                                arr_20 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) var_1);
                            }
                            var_33 = ((/* implicit */short) ((((((/* implicit */int) arr_6 [i_0] [i_0 - 3] [(_Bool)1])) & (((/* implicit */int) arr_3 [i_1 + 2])))) + (((int) arr_11 [i_0] [i_0] [i_0 - 1] [i_1 + 1] [i_3 + 3]))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_1] = ((/* implicit */signed char) var_10);
                var_34 -= ((/* implicit */_Bool) var_16);
            }
        } 
    } 
}
