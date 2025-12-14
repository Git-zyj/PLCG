/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230455
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
    var_20 &= ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_18))))) >= ((+(var_15))))) ? (((/* implicit */unsigned int) (~(var_13)))) : ((~(2941005670U)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_21 += ((/* implicit */unsigned int) arr_4 [i_0]);
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~(arr_4 [i_0 - 1]))))));
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (((~(var_18))) << ((((((~(arr_1 [(signed char)14]))) + (7238705316863296941LL))) - (8LL))))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((arr_5 [i_1] [i_1] [i_1] [i_1]) + (((/* implicit */unsigned int) var_17)))) - (((/* implicit */unsigned int) arr_0 [i_2])))))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_9 [i_0 - 1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */int) var_8)))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 2; i_4 < 21; i_4 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned int) arr_0 [i_1]);
                        var_26 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_5 [i_0] [i_0] [i_0] [i_0])))));
                        var_27 &= ((/* implicit */short) ((2977674698U) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                    }
                    arr_12 [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned char) var_14);
                }
            }
            for (unsigned short i_5 = 1; i_5 < 21; i_5 += 3) 
            {
                var_28 = ((/* implicit */signed char) (+(var_16)));
                var_29 = ((/* implicit */_Bool) (~((~(592231988)))));
            }
        }
        for (short i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            var_30 = var_12;
            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((1317292587U) << (((var_10) + (392322775))))) : (((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) var_5)) : (-592231989)))))))));
        }
        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17983)) ? (2977674698U) : (((/* implicit */unsigned int) -262144)))))));
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) -592231989)) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) (_Bool)0)))))));
        var_34 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0 + 2] [i_0] [i_0 + 1] [i_0] [i_0] [6U]))));
    }
    var_35 &= var_6;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_7] [i_7] [i_7] [i_7])) ? ((-(((/* implicit */int) (unsigned char)255)))) : ((-(((/* implicit */int) (unsigned short)17983)))))))));
        arr_22 [12U] = ((/* implicit */unsigned int) 1296609066);
        arr_23 [(_Bool)1] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [(signed char)0] [i_7]))));
        var_37 = ((/* implicit */_Bool) max((var_37), (((_Bool) var_7))));
        arr_24 [i_7] = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_7)) + (2147483647))) >> (((/* implicit */int) (_Bool)0)))) % ((+(871337755)))));
    }
}
