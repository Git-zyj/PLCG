/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197379
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((10381216075562472429ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) / (arr_0 [i_0] [i_0]))))) % (arr_0 [i_0] [i_0])));
        var_11 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)209)), (3412978035942949769LL)));
        var_12 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (min((((/* implicit */unsigned long long int) var_0)), (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((var_9) / (((/* implicit */int) var_2))))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [0U] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_1] [i_1])))) | (max((arr_0 [13LL] [i_1]), (((/* implicit */long long int) var_10))))));
        arr_8 [i_1] [14U] = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((arr_3 [i_1]), (arr_3 [i_1])))), (((min((3632064907U), (((/* implicit */unsigned int) var_5)))) >> (((/* implicit */int) ((var_8) < (((/* implicit */unsigned long long int) var_6)))))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */long long int) ((short) var_10));
        arr_12 [i_2] = ((/* implicit */unsigned int) var_2);
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
    {
        arr_15 [i_3] = ((((/* implicit */int) (unsigned short)37774)) - (((/* implicit */int) var_5)));
        var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_10 [i_3] [i_3]))));
    }
    var_14 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) (+(var_8)));
                    /* LoopNest 2 */
                    for (signed char i_7 = 4; i_7 < 22; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            {
                                var_16 *= ((/* implicit */short) ((((/* implicit */int) (short)20003)) << (((min((var_8), (((/* implicit */unsigned long long int) ((unsigned short) var_7))))) - (82ULL)))));
                                arr_32 [i_4] [i_6] |= ((/* implicit */unsigned char) var_10);
                                arr_33 [i_4] [i_4] [(short)23] = ((/* implicit */signed char) arr_24 [i_4] [i_4]);
                                var_17 = ((/* implicit */short) var_2);
                                arr_34 [i_4] [i_4] [i_5] [i_6] [i_7] [i_8] [i_8] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (-802807214)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5])) ? (((/* implicit */int) var_7)) : (var_9)))))) ? (((((/* implicit */unsigned long long int) min((1973125400U), (14U)))) + (((unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                    arr_35 [i_4] [(short)17] [i_6] [i_6] = ((/* implicit */unsigned long long int) max((((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3632064907U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)62868))))) || (((/* implicit */_Bool) var_4)))))));
                    arr_36 [i_4] [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((unsigned int) 1973125423U)) : (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62857)))))))), (((unsigned long long int) arr_25 [i_4]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) ((max((802807223), (((/* implicit */int) (signed char)48)))) < (((/* implicit */int) var_2))))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (10972312983218825628ULL))) <= (((/* implicit */unsigned long long int) var_6))))))))));
}
