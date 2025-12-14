/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209645
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((signed char) var_1);
                    arr_8 [i_0] [6] [i_0] [i_0] &= ((/* implicit */long long int) max((var_9), (arr_4 [(_Bool)1])));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */_Bool) (short)-217);
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            arr_15 [i_3] [i_4] &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) (short)216))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_2))))) : (((unsigned long long int) (short)-7444)))), (((18307910536991644985ULL) + (((/* implicit */unsigned long long int) max((arr_3 [i_0] [i_3]), (((/* implicit */unsigned int) var_0)))))))));
                            arr_16 [i_0] [i_1] [i_1] [i_1] [(unsigned short)16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)216)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) (short)12747))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1160430336617664250LL) < (((/* implicit */long long int) 2727710574U)))))) : (max((arr_2 [i_2]), (((/* implicit */unsigned long long int) arr_14 [i_0] [(unsigned short)2] [i_3]))))))) ? (((/* implicit */int) (short)-217)) : (((((/* implicit */_Bool) 2755634662U)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) ((((/* implicit */_Bool) -1190916860)) || (((/* implicit */_Bool) 1160430336617664256LL)))))))));
                            var_14 = ((/* implicit */unsigned char) max((((2646083169U) << (((-1160430336617664251LL) + (1160430336617664262LL))))), (((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned long long int) 643948292U)), (arr_2 [i_0])))))));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_15 ^= ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] [i_5 - 1]);
                            var_16 = ((/* implicit */unsigned short) (-(((long long int) arr_18 [i_0] [i_1] [i_1] [13LL] [i_5 - 1]))));
                            var_17 ^= ((/* implicit */unsigned short) arr_9 [i_2] [i_5 - 1]);
                        }
                        arr_20 [i_0] [i_1] [i_3] [i_3] |= ((/* implicit */signed char) arr_19 [i_3] [(short)12] [i_1] [(short)0] [i_1] [i_3] [i_3]);
                    }
                    /* vectorizable */
                    for (short i_6 = 2; i_6 < 16; i_6 += 4) 
                    {
                        arr_25 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_24 [i_1])) : (((/* implicit */int) (short)17512))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (arr_19 [i_1] [i_2] [i_6 - 1] [i_6] [i_2] [i_6] [3ULL])));
                        var_19 = ((/* implicit */long long int) (short)-12750);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_7 = 2; i_7 < 13; i_7 += 4) 
    {
        var_20 ^= ((/* implicit */long long int) ((short) arr_7 [i_7] [i_7 + 3]));
        /* LoopNest 3 */
        for (short i_8 = 2; i_8 < 12; i_8 += 4) 
        {
            for (short i_9 = 1; i_9 < 14; i_9 += 2) 
            {
                for (unsigned short i_10 = 4; i_10 < 14; i_10 += 4) 
                {
                    {
                        arr_35 [i_10 - 4] [i_8] [(unsigned char)13] = ((/* implicit */unsigned long long int) ((unsigned int) ((short) arr_30 [i_8 + 3] [i_7 - 1])));
                        var_21 += ((/* implicit */signed char) var_8);
                        var_22 = ((/* implicit */int) ((long long int) (short)12749));
                    }
                } 
            } 
        } 
        arr_36 [i_7] [(unsigned short)10] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) 3674121960U))) + (((/* implicit */int) (short)-217))));
        var_23 = (!(((/* implicit */_Bool) var_11)));
    }
}
