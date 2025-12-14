/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233487
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_2))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) (+(max((((/* implicit */int) var_14)), (var_15)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))));
            arr_5 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))));
        }
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_7) : (var_7)))) ? (((/* implicit */int) min((var_0), (((/* implicit */signed char) var_4))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))))), ((+(((/* implicit */int) var_6)))))))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))));
            var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((var_6), (((/* implicit */signed char) (!(var_8))))))) : (((/* implicit */int) var_1))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)34))) : (-5029151587154230010LL)));
                    arr_19 [i_4] &= ((/* implicit */signed char) var_15);
                }
                /* LoopSeq 1 */
                for (signed char i_6 = 1; i_6 < 16; i_6 += 1) 
                {
                    arr_22 [i_6] [i_3] [i_4] [i_0] [i_4] [i_6] = ((/* implicit */_Bool) ((var_8) ? (var_15) : (((/* implicit */int) var_10))));
                    arr_23 [i_4] [i_6] [i_0] [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                    arr_24 [i_0] [i_3] [i_0] [i_0] [i_6 - 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
                }
                var_23 = ((/* implicit */signed char) var_8);
                arr_25 [i_0] [i_3] [i_4] = ((/* implicit */signed char) var_3);
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 4) 
                {
                    arr_29 [i_0] [2U] [2U] [i_0] [(signed char)14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_5)) : (var_13)));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_11))))));
                }
            }
            for (signed char i_8 = 1; i_8 < 16; i_8 += 2) 
            {
                var_25 = ((/* implicit */long long int) var_15);
                var_26 |= ((/* implicit */signed char) (+(((/* implicit */int) var_14))));
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_34 [i_8] [i_8] [i_8] [i_8] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                    var_27 += ((/* implicit */unsigned char) ((var_9) ? ((~(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))))));
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_28 = ((/* implicit */long long int) var_0);
                        var_29 *= ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_8))))));
                        arr_38 [(unsigned char)4] [(unsigned char)4] [i_8] [i_0] [i_8] = ((/* implicit */unsigned short) var_7);
                    }
                }
                /* LoopSeq 2 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_30 = ((/* implicit */unsigned char) (~(var_13)));
                    arr_41 [i_0] [i_3] [(_Bool)1] = ((/* implicit */signed char) (~((-(((/* implicit */int) var_14))))));
                }
                for (unsigned long long int i_12 = 2; i_12 < 15; i_12 += 3) 
                {
                    arr_44 [i_0] [i_3] [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)90))));
                    arr_45 [i_0] [i_0] [i_8] [i_12] = ((/* implicit */unsigned short) var_8);
                    var_31 = (+(var_7));
                    arr_46 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (signed char)-31)) ? (17129007753670729982ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                    var_32 = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
                }
            }
        }
        arr_47 [i_0] [i_0] = ((/* implicit */unsigned char) (-((+(var_13)))));
        var_33 = ((/* implicit */unsigned long long int) max(((+(var_15))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))))));
    }
    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_0)))))));
    var_35 = ((/* implicit */unsigned short) var_6);
}
