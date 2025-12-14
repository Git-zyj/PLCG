/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221490
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
    var_15 = ((/* implicit */long long int) var_3);
    var_16 = ((/* implicit */long long int) (((-(((/* implicit */int) var_6)))) & (((/* implicit */int) (unsigned char)25))));
    var_17 |= ((/* implicit */unsigned char) var_8);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = var_10;
        arr_5 [i_0] = ((/* implicit */short) (~(max((var_3), (((/* implicit */int) ((unsigned char) var_12)))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_18 = ((/* implicit */signed char) min((var_8), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_0])))))));
            arr_9 [i_0] [i_0] [(unsigned short)11] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max(((unsigned char)161), (((/* implicit */unsigned char) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_11)))))))), ((~(((((/* implicit */_Bool) var_0)) ? (arr_6 [i_0]) : (((/* implicit */long long int) var_3))))))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((var_3) & (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned int) max((var_4), (((/* implicit */int) var_2))))) : ((~(var_14))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((var_12) ? (arr_11 [i_2] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */int) (unsigned char)210)) : (1228316855)));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                arr_17 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_13 [i_3] [i_0] [i_0] [(unsigned char)7])))));
                arr_18 [i_0] [i_0] = ((/* implicit */long long int) var_0);
            }
            for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                arr_21 [i_0] [i_4] [i_0] [i_4] = var_0;
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (short i_6 = 2; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) min((((/* implicit */short) var_12)), (((short) (!(((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])))))));
                            arr_28 [i_6] [i_0] [i_5] [i_5] [i_4] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) var_0)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((_Bool) var_7));
                /* LoopSeq 3 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        var_23 = max((((long long int) ((signed char) arr_1 [i_0] [i_0]))), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_8)))))));
                        arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) var_10));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_37 [i_0] [i_2] [i_4] [i_7] [i_0] = ((/* implicit */signed char) var_0);
                        var_24 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((signed char) min((34084860461056ULL), (((/* implicit */unsigned long long int) var_5)))))), (var_2)));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((var_3) / (max((max((-1548680359), (((/* implicit */int) var_6)))), (((/* implicit */int) var_13)))))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)107))))), (((((/* implicit */_Bool) (unsigned char)94)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83)))))))));
                        var_27 = ((/* implicit */signed char) ((unsigned int) (signed char)44));
                        var_28 = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                    }
                    var_29 |= ((/* implicit */unsigned long long int) ((unsigned char) var_8));
                    arr_40 [i_0] [i_2] [i_4] [i_7 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (signed char)-15)))))) && ((!(((/* implicit */_Bool) ((long long int) var_10)))))));
                    var_30 = ((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned short) var_7)), (var_5))));
                    var_31 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_6)), (var_10)));
                }
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    var_32 = ((/* implicit */unsigned long long int) var_7);
                    var_33 = ((int) arr_15 [i_0] [i_2] [(unsigned char)8] [i_11]);
                }
                for (short i_12 = 1; i_12 < 19; i_12 += 3) 
                {
                    var_34 |= ((/* implicit */_Bool) (+(var_1)));
                    var_35 = ((/* implicit */unsigned short) ((short) (unsigned short)511));
                    var_36 = ((/* implicit */int) var_11);
                }
            }
            var_37 = ((/* implicit */int) ((unsigned long long int) ((unsigned short) max((((/* implicit */int) var_11)), (var_8)))));
        }
    }
}
