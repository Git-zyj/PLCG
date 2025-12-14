/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241310
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
    var_16 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58691)) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_2])) : (((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1]))))) ? (((/* implicit */int) max((arr_3 [i_2 + 1] [(_Bool)0]), (arr_3 [i_2 + 1] [11ULL])))) : ((+(((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((int) max((arr_2 [i_0] [i_3]), (arr_2 [i_0] [i_1]))));
                                var_19 = ((/* implicit */unsigned short) (signed char)-99);
                                var_20 = var_0;
                                var_21 = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) ((short) (unsigned short)6844));
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 1; i_6 < 13; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    {
                        var_23 = ((/* implicit */long long int) (unsigned short)127);
                        var_24 = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-79))))), (0U))));
                    }
                } 
            } 
            var_25 = ((/* implicit */short) (signed char)-99);
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) ((int) ((int) (_Bool)1)));
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                var_27 = ((/* implicit */_Bool) 0U);
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0] [i_8])) ? (((/* implicit */int) arr_18 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))));
            }
        }
    }
    var_29 = ((/* implicit */short) var_7);
}
