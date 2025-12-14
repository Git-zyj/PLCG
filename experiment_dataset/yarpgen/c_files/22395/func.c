/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22395
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_1] = max((9223372036854775790LL), (arr_11 [i_0] [i_1] [i_2] [i_0] [i_2]));
                            var_16 *= ((((_Bool) (_Bool)1)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [(short)10]))))))));
                            arr_14 [(_Bool)1] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((short) (short)-7728));
                            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (arr_10 [i_0] [(short)0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (2556894037U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [21LL] [i_0])))))))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_18 = min((((/* implicit */long long int) (-(((/* implicit */int) (!(arr_7 [1] [i_3] [1]))))))), ((-(((((/* implicit */_Bool) arr_9 [i_4] [i_1] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_2] [i_4] [i_3] &= ((/* implicit */short) max(((!(((/* implicit */_Bool) arr_8 [i_0])))), ((!(((/* implicit */_Bool) arr_2 [i_0]))))));
                                arr_18 [i_0] [i_1] [i_0] [23LL] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((9223372036854775790LL), (((/* implicit */long long int) 2940508352U))))) ? ((((!(((/* implicit */_Bool) arr_8 [21])))) ? (((/* implicit */int) ((((/* implicit */long long int) 444511083)) != ((-9223372036854775807LL - 1LL))))) : ((-(((/* implicit */int) (short)-4557)))))) : ((+(((/* implicit */int) (unsigned short)44192))))));
                            }
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) (((!((!(((/* implicit */_Bool) arr_2 [i_0])))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (((+(arr_9 [i_0] [i_0] [i_0]))) <= (((/* implicit */long long int) min((((/* implicit */int) (short)10214)), (761485418)))))))));
                arr_19 [10LL] [i_0] [i_1] = ((/* implicit */unsigned long long int) 3678568748061934711LL);
                var_20 += ((/* implicit */int) (!(((/* implicit */_Bool) 2784516070989852527LL))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 16; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_24 [i_5] [5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_9 [8] [i_5] [i_5]))) % (((/* implicit */int) arr_3 [i_5]))));
                var_21 &= ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_5 + 1])) << (((((/* implicit */int) arr_3 [i_5 + 2])) - (16362)))))) || (((((/* implicit */int) arr_3 [i_5 + 2])) != (((/* implicit */int) arr_3 [i_5 + 2])))));
                var_22 &= ((/* implicit */short) (-(((((/* implicit */_Bool) ((long long int) 917175228))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_5 + 2] [i_5] [i_5] [i_5] [i_5] [6ULL] [i_6])))) : (-2320470982777906927LL)))));
            }
        } 
    } 
}
