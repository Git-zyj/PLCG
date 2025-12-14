/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246646
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) max(((unsigned short)1), ((unsigned short)65533)))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_2 [i_0] [i_0] [(_Bool)1])))) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)108)))))));
                var_22 = ((/* implicit */unsigned int) ((max((((/* implicit */int) (unsigned short)65535)), (var_14))) ^ (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        var_23 ^= ((/* implicit */unsigned char) (-((-((+(((/* implicit */int) arr_6 [(_Bool)1]))))))));
        var_24 = ((/* implicit */short) min((var_24), (arr_5 [i_2])));
    }
    for (short i_3 = 2; i_3 < 14; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_4 = 3; i_4 < 14; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    for (unsigned short i_7 = 3; i_7 < 13; i_7 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (min((var_19), (((/* implicit */unsigned int) (signed char)117)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_3] [i_4 + 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [10ULL] [i_4] [i_4] [i_6] [i_7] [i_7]))) : (-5103845051847781903LL))) > (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
                            arr_22 [i_3] [i_4] [i_3] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) (((~(((((((/* implicit */int) arr_10 [i_4])) + (2147483647))) >> (((((/* implicit */int) var_17)) - (3218))))))) & ((~(((/* implicit */int) arr_16 [i_4] [i_6] [i_4] [i_4]))))));
                            arr_23 [i_4] = ((/* implicit */unsigned long long int) (short)-28552);
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_4 [i_4] [i_4] [i_4 - 3])))) ? (((((/* implicit */_Bool) arr_19 [i_4 + 1] [i_4] [i_4] [(_Bool)1] [i_4 - 2] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4] [12ULL] [i_4 - 3] [12ULL]))) : (arr_4 [i_4] [i_4] [i_4 - 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_4 [i_4] [i_4] [i_4 - 3]))))));
        }
        arr_24 [i_3] = ((/* implicit */unsigned short) var_15);
    }
    for (signed char i_8 = 1; i_8 < 11; i_8 += 2) 
    {
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)1)) | (((/* implicit */int) (signed char)39))))))) ? (((/* implicit */unsigned long long int) 2398307787U)) : (14939418559837866335ULL)));
        arr_28 [i_8] = ((/* implicit */unsigned int) ((max((arr_11 [i_8 - 1]), (arr_11 [i_8 + 3]))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((short) arr_15 [i_8] [i_8 + 4])))));
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_10))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 2) 
    {
        var_29 = ((/* implicit */long long int) ((arr_2 [i_9] [i_9] [i_9 - 2]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_9 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_9 + 1] [i_9 + 1]))) : (3910969014U))))));
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 4; i_10 < 16; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 383998281U)))) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_9] [i_9 - 1] [i_9] [i_9 - 2])) | (((/* implicit */int) arr_35 [i_9] [i_9 - 1] [i_9] [i_9 + 1]))));
                        arr_39 [i_11] [i_10] [i_10] [i_12] [i_12] = ((/* implicit */unsigned short) var_16);
                        var_32 = ((/* implicit */unsigned short) arr_29 [i_9 - 1]);
                    }
                } 
            } 
        } 
        var_33 &= ((/* implicit */_Bool) (+(((/* implicit */int) (short)-5140))));
        arr_40 [i_9 + 1] = ((/* implicit */short) (~(((/* implicit */int) arr_36 [i_9] [i_9 + 1] [i_9] [i_9 - 1]))));
        arr_41 [(short)5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)53))) + (arr_3 [i_9 - 2] [i_9 + 1] [i_9 + 1])));
    }
    var_34 = ((/* implicit */unsigned int) (_Bool)1);
}
