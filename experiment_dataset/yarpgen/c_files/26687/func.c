/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26687
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [4U] [i_1] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), ((short)17865)))), (((((/* implicit */unsigned long long int) var_16)) + (arr_6 [i_1] [(signed char)5] [i_2 - 2])))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_11 [i_0] [4] [i_1] = ((/* implicit */unsigned short) min((max((var_2), (((/* implicit */int) var_8)))), (min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)59704)))), (((/* implicit */int) var_10))))));
                        var_19 -= ((/* implicit */signed char) ((((int) (_Bool)1)) <= (var_5)));
                        var_20 = ((/* implicit */signed char) ((var_3) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)11807)))))));
                        arr_12 [(short)6] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */signed char) 1048576);
                    }
                    arr_13 [i_1] = ((/* implicit */int) (((~(min((-881566002), (((/* implicit */int) (unsigned short)59734)))))) == ((-2147483647 - 1))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        arr_18 [12U] = ((/* implicit */unsigned int) min(((short)-11808), ((short)-1)));
        arr_19 [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */_Bool) (short)4)) ? (2147483647) : (((/* implicit */int) (unsigned short)59687))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_14 [i_4] [i_4]), ((short)11808))))))) : (min((arr_17 [i_4] [i_4]), (3428088595U))));
        var_21 = (-(0U));
    }
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        var_22 ^= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 3554017927U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23067))) : (90707198U))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_26 [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_7) < (((/* implicit */int) var_18)))) ? (((/* implicit */int) arr_25 [i_5] [i_5])) : (var_6)))) ? (((/* implicit */int) var_17)) : (var_16)));
            arr_27 [i_5] = ((/* implicit */short) max((min((8267210725655235452ULL), (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) min((740949368U), (1904087030U))))));
        }
        /* vectorizable */
        for (short i_7 = 2; i_7 < 13; i_7 += 3) 
        {
            arr_31 [i_5] [i_7] = ((/* implicit */signed char) (-(2147483647)));
            arr_32 [i_5] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_16)) ^ (arr_5 [i_5])));
            arr_33 [i_5] [i_7] [i_5] = ((/* implicit */unsigned int) var_1);
            arr_34 [i_5] [i_7] [i_7] = ((/* implicit */unsigned int) var_8);
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_38 [i_8] [i_7] [i_8] = ((/* implicit */unsigned int) ((short) arr_28 [i_7 - 2] [i_7 + 1] [i_7 - 2]));
                var_23 = ((/* implicit */_Bool) (-(arr_15 [i_7 - 1] [i_7 - 1])));
            }
            for (unsigned short i_9 = 3; i_9 < 10; i_9 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) ((unsigned int) 0U));
                    arr_45 [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_7)) ^ (arr_5 [i_5])));
                    arr_46 [i_5] [i_5] [i_5] [i_7] = ((/* implicit */_Bool) (-(-246023353)));
                    var_25 ^= ((/* implicit */unsigned int) ((signed char) var_6));
                    var_26 = arr_0 [i_7 - 2];
                }
                arr_47 [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (arr_44 [i_7 - 2])));
                var_27 = ((/* implicit */signed char) arr_20 [i_7 - 2] [i_7 + 1]);
            }
        }
        arr_48 [(short)11] = 1853534116;
    }
}
