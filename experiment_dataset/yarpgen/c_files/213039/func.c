/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213039
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
    var_12 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((max((var_5), (var_7))) == (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (signed char)116)))))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_0))))) == (((/* implicit */int) var_10))))));
    var_13 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)58)), (0)))) ? (var_8) : (((((/* implicit */int) (unsigned char)211)) / (-2133011437)))))) || (((/* implicit */_Bool) (unsigned char)192))));
    var_14 = ((/* implicit */short) min((max((((((/* implicit */int) (unsigned char)1)) + (((/* implicit */int) (short)255)))), (((/* implicit */int) (unsigned char)245)))), (((/* implicit */int) (signed char)88))));
    var_15 ^= var_2;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 = max(((short)-256), (((/* implicit */short) (signed char)-25)));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) arr_5 [i_0] [i_0]);
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                            {
                                arr_12 [i_2] [i_1] [i_1] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_2] [i_1] [i_0])) ? (arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]) : (var_8)))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_1] [i_4])) ? (arr_11 [i_4] [(signed char)8] [(signed char)8] [(signed char)8] [i_4]) : (((/* implicit */int) (signed char)-115)))) : (((/* implicit */int) ((arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]) == (((/* implicit */int) (unsigned char)161))))));
                                var_18 = ((/* implicit */short) max((((int) max((((/* implicit */int) arr_2 [i_1])), (var_7)))), (((((/* implicit */_Bool) var_2)) ? (var_4) : ((-(arr_3 [i_4] [i_3])))))));
                                var_19 = ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) min((((/* implicit */short) (signed char)-25)), (var_6)))))) | (((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_4 [i_1] [i_3] [i_4])))));
                                var_20 += ((/* implicit */short) ((int) ((min((var_4), (arr_7 [i_0] [i_1] [i_2]))) - ((+(var_8))))));
                                var_21 = ((/* implicit */short) ((min((min((2147483633), (((/* implicit */int) arr_5 [i_2] [i_2])))), (1982544037))) >= (((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (var_7) : (((/* implicit */int) max((arr_2 [i_1]), (var_6))))))));
                            }
                            for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                            {
                                var_22 ^= var_0;
                                var_23 -= var_10;
                            }
                            for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                            {
                                arr_19 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) min(((!(((/* implicit */_Bool) var_1)))), (((((/* implicit */int) arr_5 [i_6] [i_2])) == (((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) (unsigned char)116)) : (-1132864138)))))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((((((/* implicit */int) min(((unsigned char)17), (((/* implicit */unsigned char) (signed char)-79))))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (short)-17870)))))), ((~(((/* implicit */int) var_9)))))))));
                                var_25 = ((/* implicit */unsigned char) ((signed char) arr_9 [i_1] [i_1] [i_1] [i_1]));
                                var_26 = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_6])) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */int) var_9)))) : (arr_8 [i_6] [i_0]))) : (((((/* implicit */_Bool) ((arr_11 [(unsigned char)18] [i_1] [i_6] [i_1] [i_6]) / (arr_3 [i_6] [i_1])))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            }
                            var_27 = ((/* implicit */int) ((signed char) min(((unsigned char)17), (((/* implicit */unsigned char) var_1)))));
                            var_28 = max((((((/* implicit */_Bool) 33554432)) ? (((/* implicit */int) ((short) (unsigned char)200))) : (arr_3 [i_0] [i_3]))), (((/* implicit */int) (((~(((/* implicit */int) (short)-17221)))) > (((/* implicit */int) (unsigned char)114))))));
                            var_29 += ((/* implicit */signed char) arr_8 [i_3] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
}
