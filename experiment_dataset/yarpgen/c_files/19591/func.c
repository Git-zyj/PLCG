/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19591
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((unsigned short) (unsigned char)210))));
    var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16450739208860899733ULL)) && (((/* implicit */_Bool) max((16450739208860899748ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (unsigned char)210);
        arr_4 [i_0] = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) (short)(-32767 - 1)))))) ? (((/* implicit */int) ((unsigned short) 1996004864848651871ULL))) : (((/* implicit */int) (unsigned short)23664))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_7 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210))) : (2542796197U));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) -6714167263617594227LL);
            var_15 = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)13234));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_11 [i_0] [i_0] [i_2]))));
            var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_2])) || (((/* implicit */_Bool) -602099074))));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 14; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) (+(-1436142560)));
                            arr_20 [i_2] [i_2] [i_2] [i_3 - 2] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) 4278934732654355696LL);
                        }
                    } 
                } 
            } 
            arr_21 [i_0] [i_0] [10] |= ((/* implicit */unsigned int) (-(arr_17 [(short)0] [i_0] [i_0] [i_0] [i_2])));
        }
    }
    /* vectorizable */
    for (unsigned short i_6 = 1; i_6 < 24; i_6 += 4) 
    {
        var_19 -= ((/* implicit */short) arr_22 [i_6] [i_6]);
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                {
                    arr_29 [i_6] [i_6] = ((/* implicit */unsigned short) ((-600199584) / (-1)));
                    arr_30 [i_6 + 1] [(unsigned char)16] [21ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16450739208860899733ULL)) ? (156189101U) : (9440189U))))));
                    var_20 = arr_26 [i_6 - 1];
                    arr_31 [i_8] = ((/* implicit */_Bool) arr_26 [i_6]);
                    var_21 = ((/* implicit */unsigned short) arr_27 [i_6 - 1]);
                }
            } 
        } 
        var_22 = ((((/* implicit */_Bool) var_12)) ? (156189101U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_22 [i_6] [i_6])))));
        var_23 = ((/* implicit */unsigned long long int) var_1);
    }
}
