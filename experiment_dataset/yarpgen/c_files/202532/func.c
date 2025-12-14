/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202532
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
    var_14 = var_7;
    var_15 = ((/* implicit */unsigned short) ((unsigned int) max((min((14368762730737944156ULL), (((/* implicit */unsigned long long int) var_5)))), (((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)123)) ? (2383632052U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)12396)))))));
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-114)) + (2147483647))) << ((((((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12404))) >= (var_3)))))) + (19))) - (18))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 12; i_3 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) (((~(16ULL))) << (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-112)) && (((/* implicit */_Bool) (signed char)-8)))))));
                        arr_9 [i_1 + 3] [i_1] [(signed char)4] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16ULL))) % (((unsigned long long int) (_Bool)1))));
                    }
                    for (short i_4 = 1; i_4 < 12; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_2] [i_0] [i_2] [i_1 + 1] [i_0] [i_0] = ((/* implicit */_Bool) 8ULL);
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (((1629972754U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-103)))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)23334)) + (((/* implicit */int) (signed char)-126))))) ? (924955219) : ((((_Bool)0) ? (var_0) : (((/* implicit */int) (short)-23057))))));
                        var_20 = ((/* implicit */signed char) (short)(-32767 - 1));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_5] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_5] [i_0])))));
                        var_21 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)98)) ? (((/* implicit */int) (short)-23085)) : (((/* implicit */int) arr_8 [i_1]))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                    {
                        var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (8403305874240041513LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_0 - 3] [i_1 + 1])))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((17608597850054340450ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6)))))) >> (((((/* implicit */int) ((signed char) var_0))) - (74)))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        arr_25 [(short)10] [i_0] [i_0 - 3] [(_Bool)1] = ((/* implicit */signed char) (-(9866533091182305901ULL)));
                        var_24 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0 - 3]))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 - 1] [i_2])))))));
                    }
                    var_26 *= ((/* implicit */signed char) var_3);
                    arr_26 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 559375221)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))) ? (var_13) : (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10329544727243891225ULL)))));
                }
            }
        } 
    } 
}
