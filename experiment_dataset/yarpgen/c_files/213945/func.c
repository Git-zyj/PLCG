/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213945
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) 13388296716144860983ULL);
        var_12 -= ((/* implicit */long long int) (short)2910);
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)2910))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_1]))));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2910)) ? (((/* implicit */int) (short)7311)) : (((/* implicit */int) arr_11 [i_1 - 1] [i_2 + 1] [i_2] [i_4]))))) == (4ULL)));
                        var_15 = ((/* implicit */unsigned char) 26ULL);
                    }
                } 
            } 
        } 
        arr_16 [i_1] &= ((/* implicit */long long int) ((short) min((((/* implicit */unsigned int) ((unsigned short) arr_7 [i_1]))), (4021436497U))));
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (26ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)-2906)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (short)-2911))))))) : (max((((/* implicit */unsigned long long int) (unsigned short)48381)), (13ULL)))));
            var_17 = ((/* implicit */signed char) max((var_17), (((signed char) ((unsigned int) (short)-2911)))));
            var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)34480))));
            var_19 = (signed char)118;
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            arr_21 [i_1] [(_Bool)1] &= ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) (unsigned short)65510)))));
            var_20 = ((/* implicit */unsigned int) 18446744073709551612ULL);
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_7 = 2; i_7 < 9; i_7 += 2) 
    {
        arr_24 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)2894)) ? (((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17257))) : (arr_23 [i_7]))) : (((/* implicit */unsigned long long int) 273530786U))));
        arr_25 [i_7] = ((/* implicit */unsigned short) 18446744073709551611ULL);
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)17231)) ? (1219769980) : (((/* implicit */int) (short)-2655))));
            arr_30 [i_8] [7] = ((/* implicit */unsigned short) ((arr_19 [i_7 + 1] [i_7 - 2]) != (arr_19 [i_7 - 1] [i_7 + 1])));
        }
        var_22 ^= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
    }
    for (signed char i_9 = 4; i_9 < 23; i_9 += 1) 
    {
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((short) ((unsigned long long int) 4294967295U))))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_34 [i_9 - 1] [(short)10]) : (arr_34 [i_9 - 4] [(signed char)18])))), (((((/* implicit */_Bool) 1219769970)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2665))) : (4ULL)))))));
        var_25 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)34500)))));
    }
}
