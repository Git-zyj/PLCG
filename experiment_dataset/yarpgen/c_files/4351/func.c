/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4351
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
    var_19 &= ((/* implicit */long long int) max((((/* implicit */int) var_9)), (max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), ((+(((/* implicit */int) var_7))))))));
    var_20 = ((/* implicit */signed char) (+(((((/* implicit */int) min((var_13), (var_13)))) + (((/* implicit */int) (unsigned char)244))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (short)(-32767 - 1)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((34359738367LL), (((/* implicit */long long int) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-15)), ((short)-19577))))) : (var_8)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_12);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((max((min((((/* implicit */unsigned long long int) (unsigned char)20)), (arr_5 [i_1] [(unsigned short)11]))), (((/* implicit */unsigned long long int) var_9)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
            arr_11 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_1] [i_2]))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) (-(981517757511656692LL)));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) -2089188819)) : (-1001829205388769983LL)))) ? (((((/* implicit */int) arr_12 [13LL])) << (((((/* implicit */int) (unsigned char)192)) - (177))))) : (((((/* implicit */int) (unsigned char)63)) % (((/* implicit */int) arr_9 [i_1] [i_3]))))));
        }
        for (int i_4 = 3; i_4 < 23; i_4 += 1) 
        {
            var_26 &= ((/* implicit */unsigned char) (short)19589);
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (arr_7 [i_1] [i_4 - 3]) : (arr_7 [i_1] [18ULL]))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) var_6))))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) 181086423066323466ULL))))), (max((((/* implicit */short) arr_6 [i_4 + 1])), ((short)-13128))))))) : (((arr_7 [i_1] [10U]) / (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4 + 1])))))));
        }
        for (signed char i_5 = 3; i_5 < 24; i_5 += 2) 
        {
            var_28 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6328006170898766097LL)))))) % (max((arr_5 [14U] [i_5]), (((/* implicit */unsigned long long int) (short)32764)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_5] [i_5 - 1])))))));
            var_29 = ((/* implicit */_Bool) max((var_29), ((!(((/* implicit */_Bool) 386739471))))));
            arr_18 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2011493039)) ? (((/* implicit */int) (unsigned char)12)) : (-2107678679)));
            /* LoopNest 3 */
            for (unsigned short i_6 = 3; i_6 < 22; i_6 += 4) 
            {
                for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    for (signed char i_8 = 4; i_8 < 24; i_8 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4336764390050068257ULL)) ? (((/* implicit */int) arr_17 [(unsigned char)20])) : (((/* implicit */int) arr_17 [(unsigned short)16]))))))))));
                            var_31 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-3741509468573719185LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_24 [i_1] [i_5 - 2] [i_6 - 2] [i_7] [i_8 - 2])) : (((/* implicit */int) arr_13 [i_5 + 1] [i_8 - 4])))))));
                        }
                    } 
                } 
            } 
        }
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_1]))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))) : (-1LL))) : (((((/* implicit */_Bool) max(((unsigned short)65080), (((/* implicit */unsigned short) var_1))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)455))) / (3747017158551945905LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [(_Bool)1])))))))));
        var_33 = ((/* implicit */unsigned char) (((-(((/* implicit */int) max(((signed char)-122), (((/* implicit */signed char) arr_22 [i_1] [14LL] [(short)18] [i_1] [i_1] [i_1]))))))) >> (((((/* implicit */int) ((((/* implicit */int) arr_13 [i_1] [(unsigned char)3])) == (((/* implicit */int) (signed char)105))))) / (((/* implicit */int) (unsigned char)191))))));
    }
}
