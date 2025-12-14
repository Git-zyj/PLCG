/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206341
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])))) << (((((/* implicit */int) max((var_4), (((/* implicit */short) var_11))))) - (47)))));
                    arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) (signed char)62)) - (39))))))))) << ((((+((-(((/* implicit */int) var_13)))))) - (4899)))));
                    arr_8 [i_1] [i_1 - 1] [i_1] [i_1 + 1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((/* implicit */int) (short)2048)) - (2048))))) << (((((/* implicit */int) arr_1 [i_0 + 3])) - (109)))))) ? (((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 3] [i_1])) + (1957))))) : (((/* implicit */int) ((short) ((((((/* implicit */int) (short)-9)) + (2147483647))) << (((((/* implicit */int) var_6)) - (221)))))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((/* implicit */int) (short)2048)) - (2048))))) << (((((/* implicit */int) arr_1 [i_0 + 3])) - (109)))))) ? (((((/* implicit */int) var_10)) << (((((((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 3] [i_1])) + (1957))) - (11342))))) : (((/* implicit */int) ((short) ((((((/* implicit */int) (short)-9)) + (2147483647))) << (((((/* implicit */int) var_6)) - (221))))))))));
                    arr_9 [i_0] [i_1] [i_2] = var_11;
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_17 ^= ((/* implicit */short) ((signed char) min((arr_10 [i_3]), (arr_10 [i_3]))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (signed char i_5 = 1; i_5 < 9; i_5 += 2) 
            {
                for (short i_6 = 4; i_6 < 10; i_6 += 4) 
                {
                    {
                        var_18 = ((/* implicit */short) var_10);
                        var_19 *= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_0))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)120)), ((unsigned char)255)))) : (((/* implicit */int) (short)21568)))), ((((!(((/* implicit */_Bool) arr_19 [i_3] [(signed char)10] [i_3] [i_6])))) ? (((/* implicit */int) min((var_4), (((/* implicit */short) arr_12 [i_3] [i_3]))))) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) var_0)))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((arr_6 [i_3] [i_3] [(signed char)16]), (var_8)))) : (((((/* implicit */int) var_15)) << (((((/* implicit */int) var_5)) - (18)))))))) ? ((((((-(((/* implicit */int) var_0)))) + (2147483647))) << (((((((((/* implicit */_Bool) (short)8334)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))) + (22706))) - (31))))) : ((+(((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_20 [(signed char)0] [i_7])) : (((/* implicit */int) var_5))))))));
            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)251)))))));
            var_22 += ((/* implicit */short) ((((((/* implicit */int) (short)-8335)) + (2147483647))) << (((((/* implicit */int) (signed char)90)) - (90)))));
        }
    }
}
