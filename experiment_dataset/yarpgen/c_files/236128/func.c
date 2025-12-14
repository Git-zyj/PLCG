/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236128
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)31356)), (11729766937749963257ULL)));
        var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((signed char) ((short) var_3)))) : (((int) (short)-20421))));
        var_22 = ((/* implicit */long long int) var_5);
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16157))) : (4090194855U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [i_1] = ((/* implicit */long long int) var_4);
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)8191), ((unsigned short)15514))))) : (max((((/* implicit */long long int) (unsigned short)4095)), (var_16)))))) ? (((long long int) var_13)) : (((((/* implicit */_Bool) arr_5 [i_3 + 1])) ? (((/* implicit */long long int) 463442386U)) : (arr_5 [i_3 - 1]))));
                            arr_15 [i_0] [i_1] [i_0] [i_2] [i_0] [i_3] [i_3] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_1)) ? (var_12) : (var_19)))));
                            arr_16 [4] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned int) 416603105213356235LL);
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((4108103275U), (3907458859U)))) ? (arr_2 [i_3 + 1]) : (((/* implicit */long long int) ((int) var_5))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_25 -= ((/* implicit */unsigned int) (short)0);
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_15))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33314))) : (((((/* implicit */_Bool) 6863601238039546200ULL)) ? (arr_3 [i_5] [(short)0] [i_2]) : (((/* implicit */long long int) var_12))))));
                        }
                        arr_20 [i_0] [i_0] [i_0] [i_2] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_1]))))) ? (((/* implicit */long long int) arr_8 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_3 - 1])) : (min((arr_5 [i_0]), (((/* implicit */long long int) var_19))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((short) arr_14 [i_1] [i_3 + 1] [i_3 + 1] [i_3 + 1])))));
                    }
                } 
            } 
        }
        for (unsigned short i_6 = 3; i_6 < 11; i_6 += 3) 
        {
            var_27 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45117)) ? (((/* implicit */long long int) 536870656U)) : (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33414))) : ((+(7714147452530467084LL))))), (-6569183245037647000LL)));
            var_28 = ((/* implicit */long long int) ((((unsigned int) arr_1 [i_6 - 2])) + (max((((/* implicit */unsigned int) var_11)), (arr_1 [i_6 + 2])))));
        }
    }
    var_29 &= var_1;
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 13529769012233211744ULL)) ? (2113929216) : (((/* implicit */int) (short)4080))));
}
