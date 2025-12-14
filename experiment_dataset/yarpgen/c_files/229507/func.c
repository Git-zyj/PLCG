/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229507
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-108)) + (2147483647))) << (((((/* implicit */int) var_11)) - (2858))))))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (((long long int) arr_1 [i_0]))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_3] [i_2] [i_3])))) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) (short)-31468))));
                        arr_11 [i_1] = ((signed char) min(((unsigned short)8190), (((/* implicit */unsigned short) (signed char)-21))));
                        var_17 += ((/* implicit */unsigned int) (((+(((/* implicit */int) var_15)))) >> (((long long int) min((((/* implicit */unsigned short) var_14)), ((unsigned short)57345))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57345)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22737)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))) : (min((4088339012U), (((/* implicit */unsigned int) (signed char)108)))))))));
                            var_19 = ((((/* implicit */_Bool) ((signed char) 2493599009U))) || (var_15));
                        }
                        for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            arr_17 [i_5] [i_1] [i_1] [i_0] [i_5] = ((/* implicit */int) arr_9 [i_1] [i_1]);
                            var_20 = ((/* implicit */long long int) arr_9 [i_0] [i_1]);
                        }
                    }
                    for (short i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) max((((unsigned short) arr_15 [i_0])), (((unsigned short) ((((/* implicit */int) (signed char)72)) & (((/* implicit */int) (_Bool)1)))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_0] [i_6])))))))) ? ((+(arr_5 [i_0] [i_1] [i_6]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)120)), ((unsigned char)91)))) ? (((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_0] [i_6] [i_6])) : (((((((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_2] [i_2] [i_0])) + (2147483647))) << (((((-494846649) + (494846673))) - (24))))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_23 -= ((/* implicit */short) (-(((/* implicit */int) (signed char)72))));
                        arr_25 [i_1] [i_2] [i_2] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (var_1)))) ? (max((((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_7] [i_2] [10U])), (arr_24 [i_1]))) : (((/* implicit */int) ((_Bool) (unsigned short)11622)))))) ? (((/* implicit */int) ((unsigned char) 524287ULL))) : (min((((/* implicit */int) (_Bool)1)), ((+(201326592)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_0])) ? (var_13) : (((/* implicit */int) var_7))))) ? (arr_5 [i_8] [i_1] [i_2]) : (4924373528381286932LL)));
                            arr_29 [i_0] [i_1] [i_1] [i_7] [i_0] = ((/* implicit */signed char) (+(arr_9 [i_8] [i_2])));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_24 |= (unsigned short)65535;
                        var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max(((signed char)-116), (arr_6 [i_1] [i_0])))), (min((((/* implicit */unsigned int) var_4)), (var_3)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) (+((((_Bool)1) ? (arr_38 [i_1]) : (arr_38 [i_0])))));
                                var_27 ^= ((/* implicit */long long int) max((((((/* implicit */int) (short)15164)) | (((((/* implicit */_Bool) (unsigned short)57351)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (signed char)-95)))))), (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_10] [i_11] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_10] [i_2] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_15))))));
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) min((((((/* implicit */_Bool) min((arr_31 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_1))))) ? (((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8975))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_22 [i_2] [i_0])) ? (((/* implicit */int) var_15)) : (arr_19 [i_10] [i_0] [i_2] [i_0])))))))))));
                                arr_40 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) & (((/* implicit */int) arr_6 [i_1] [i_10]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */signed char) var_4);
}
