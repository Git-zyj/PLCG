/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218644
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((var_0), (var_16)))))) ? (((/* implicit */int) var_5)) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_11))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_13)))) : (((/* implicit */int) (short)21746))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) (unsigned char)54);
                    arr_7 [i_2] [i_0 - 1] [i_2] [(signed char)15] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) max((((/* implicit */short) var_6)), ((short)-1508)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))), (((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned char)54)))), (((((/* implicit */int) var_14)) < (((/* implicit */int) (short)-32139)))))))));
                }
            } 
        } 
        arr_8 [i_0 + 3] [i_0] = ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-11))))) ^ ((-(var_11))));
    }
    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 2; i_6 < 10; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(596074937U)))) ? (((((/* implicit */_Bool) (short)-105)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-30409)))) : (((/* implicit */int) ((signed char) var_16)))));
                            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_6))) & (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_8)))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_3);
                            arr_26 [i_3] [i_4] [i_5] [i_6 - 2] [i_8] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) var_15)), (var_13)))));
                            arr_27 [i_8] [i_6 - 1] [(unsigned char)10] [(unsigned char)10] [i_4] [i_3] = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) var_15)), (var_11)))));
                        }
                        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) var_1))))) ? (min((((/* implicit */unsigned int) var_9)), (var_16))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) var_4))))))) / (((/* implicit */unsigned int) min((((/* implicit */int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (((((/* implicit */int) (signed char)-38)) + (((/* implicit */int) (short)-12238)))))))));
                    }
                    arr_28 [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)21746)) + (((/* implicit */int) var_4))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                    var_21 &= ((/* implicit */signed char) (-(((/* implicit */int) min((min((((/* implicit */short) (unsigned char)190)), (var_14))), (((/* implicit */short) (!(((/* implicit */_Bool) var_11))))))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)21748)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)21381)))))))) ? (((/* implicit */int) ((short) (short)-14172))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_12))))))))));
                }
            } 
        } 
        arr_29 [(unsigned char)7] = ((/* implicit */signed char) (~((-(((/* implicit */int) ((unsigned char) var_16)))))));
        arr_30 [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((3395879919U) == ((+(2042152280U)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (max((var_0), (var_16)))))));
    }
    var_23 = ((unsigned int) ((((/* implicit */int) var_4)) > ((-(((/* implicit */int) (short)(-32767 - 1)))))));
    var_24 = ((/* implicit */signed char) (((-(((/* implicit */int) min((((/* implicit */short) var_12)), (var_5)))))) * (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (signed char)-32)) / (((/* implicit */int) var_6)))) : ((-(((/* implicit */int) var_4))))))));
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) (unsigned char)253)))))) && (((/* implicit */_Bool) (+((-(1255278489U))))))));
}
