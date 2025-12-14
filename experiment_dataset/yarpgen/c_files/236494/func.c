/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236494
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_19 &= ((/* implicit */unsigned long long int) min((((short) var_0)), (((/* implicit */short) var_9))));
        var_20 -= ((/* implicit */unsigned char) var_10);
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            var_21 += ((((unsigned long long int) (unsigned short)2715)) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))));
            var_22 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)19)) : (((/* implicit */int) (short)2546)))))) - (((/* implicit */int) arr_4 [i_1]))));
            var_23 = ((/* implicit */short) ((unsigned char) ((unsigned int) ((var_13) << (((((/* implicit */int) var_16)) - (168)))))));
            var_24 = ((/* implicit */unsigned char) arr_5 [i_1]);
        }
        for (short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 3; i_4 < 20; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) var_3)))));
                            var_26 = (~(max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)0)), (arr_8 [i_4 - 2] [i_5])))), (min((var_13), (((/* implicit */unsigned long long int) var_3)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (unsigned short i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)19)) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) (unsigned short)12933))));
                        var_28 = ((((/* implicit */unsigned long long int) var_7)) - ((+(arr_11 [i_1] [i_8 - 1] [i_8 + 2] [i_8 + 1]))));
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((max((arr_12 [i_3] [i_3] [i_8]), (((/* implicit */unsigned long long int) var_5)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                    }
                } 
            } 
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            arr_29 [i_1] [i_9] = min(((~(var_17))), ((-(873591469353293517ULL))));
            var_30 += ((/* implicit */long long int) min((((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_9 - 1])), ((+(((/* implicit */int) arr_25 [i_9 - 1]))))));
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_1] [10ULL] [i_1]))) ? (((((/* implicit */int) (unsigned short)55427)) << (((var_5) - (1454094322811210013LL))))) : (((/* implicit */int) (short)-4055)))))));
            arr_33 [i_10] [(short)18] = ((/* implicit */unsigned char) ((unsigned long long int) 5676001761883375449ULL));
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned char)20))))) : (((/* implicit */int) (!((_Bool)0))))));
        }
        var_33 -= min((((/* implicit */unsigned long long int) var_9)), (arr_24 [i_1] [(short)14] [i_1] [i_1]));
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
    {
        arr_37 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) arr_2 [i_11]))));
        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))) : (arr_15 [i_11] [i_11] [i_11] [(unsigned char)11] [i_11] [(signed char)4])));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 3; i_12 < 18; i_12 += 2) 
    {
        arr_40 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)52596))) ? (var_5) : (((/* implicit */long long int) arr_8 [i_12 + 1] [i_12 + 2]))));
        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))) - (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_26 [i_12])) : (((/* implicit */int) var_14))))) : (var_13)))));
        arr_41 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_7 [i_12] [i_12])))) && (((/* implicit */_Bool) (~(var_1))))));
        var_36 = ((/* implicit */unsigned short) arr_5 [i_12 + 1]);
    }
    var_37 = ((/* implicit */int) var_9);
    var_38 = ((/* implicit */unsigned char) max((var_38), ((unsigned char)58)));
    var_39 = ((/* implicit */unsigned short) var_3);
}
