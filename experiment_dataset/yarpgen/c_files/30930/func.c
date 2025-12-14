/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30930
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
    var_15 &= ((/* implicit */_Bool) (short)-26056);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((unsigned short) max(((+(1907349185))), (((/* implicit */int) (_Bool)1))))))));
        arr_4 [i_0] = arr_1 [i_0] [i_0];
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) | (0ULL)))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) arr_2 [i_0])))))) : (((/* implicit */int) arr_0 [i_0]))));
            var_18 = ((/* implicit */int) arr_0 [i_0]);
        }
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 1133444678593760751LL)), (2ULL)));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    var_20 &= ((/* implicit */unsigned long long int) ((max((((((arr_6 [i_3] [i_4]) + (9223372036854775807LL))) >> (((/* implicit */int) var_1)))), (((/* implicit */long long int) arr_1 [i_0] [i_0])))) / (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_2] [i_3])), (var_3)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_11 [i_2])), (arr_13 [i_0])))) : (((/* implicit */int) arr_12 [(short)1] [i_2] [(_Bool)1] [i_4] [i_0])))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_0] [(unsigned short)1] [i_3] [(unsigned short)1])) + (((/* implicit */int) min((arr_5 [i_0] [i_2]), (arr_5 [i_0] [i_2]))))));
                    arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4] = ((((/* implicit */int) (!(((/* implicit */_Bool) -2795765044458410746LL))))) >= ((~(((/* implicit */int) (_Bool)1)))));
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_19 [(unsigned short)11] [i_2] [i_0])), (max((var_9), (((/* implicit */long long int) arr_12 [3] [i_2] [i_3] [3] [i_2])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-11607)) - (((/* implicit */int) (short)-30445))))))))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 2795765044458410745LL)), (18446744073709551591ULL))))));
                }
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((_Bool) max((arr_19 [i_0] [i_2] [i_0]), (arr_19 [i_0] [i_2] [i_2])))))));
                var_25 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_12)))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_18 [i_0] [i_2] [i_2] [(unsigned short)12] [i_3])))) : (((-1833081389) & (((/* implicit */int) arr_16 [i_0]))))))), (((((/* implicit */long long int) ((/* implicit */int) ((short) 738607115)))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (2795765044458410731LL)))))));
                var_26 = ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) max(((unsigned short)32665), (((/* implicit */unsigned short) (short)29292)))))))), (((signed char) arr_5 [i_0] [i_2]))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((-1819688145140542914LL), (((/* implicit */long long int) 139841683)))))));
                arr_22 [i_0] = var_6;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) arr_18 [(short)5] [i_2] [i_6] [i_2] [i_0]);
                            var_29 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(2795765044458410746LL)))), (6055732351971772229ULL)));
                        }
                    } 
                } 
                arr_28 [i_0] [13U] [i_6] = (!((_Bool)1));
            }
        }
    }
    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        arr_32 [i_9] = ((/* implicit */long long int) (((-(((/* implicit */int) (short)-23652)))) % (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [(signed char)19]))) != (arr_31 [(unsigned short)6])))) >= ((-(((/* implicit */int) (unsigned short)65517)))))))));
        var_30 *= max((min((((/* implicit */unsigned long long int) (~(arr_31 [(signed char)11])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9]))) / (var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_31 [i_9])) >= (((1936136750625928417ULL) << (((((/* implicit */int) (unsigned short)65517)) - (65485)))))))));
        var_31 |= ((/* implicit */long long int) var_6);
    }
    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((var_0) / (var_9)))))), ((+(var_3))))))));
    var_33 = ((/* implicit */signed char) max((-2795765044458410746LL), (((/* implicit */long long int) (_Bool)0))));
}
