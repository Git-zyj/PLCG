/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209028
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [(_Bool)1] [i_0] = ((/* implicit */int) (_Bool)1);
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] = ((/* implicit */short) var_3);
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_4 [(_Bool)1] [i_3] [i_3]);
                                arr_17 [i_0] [(_Bool)1] = ((/* implicit */short) min((((/* implicit */int) (_Bool)1)), ((((((_Bool)1) ? (((/* implicit */int) (short)4642)) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                                arr_18 [i_2] = min((((/* implicit */unsigned long long int) var_5)), (18446744073709551605ULL));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        for (unsigned char i_6 = 2; i_6 < 17; i_6 += 4) 
        {
            {
                arr_25 [i_5] [i_5] [i_6] = ((/* implicit */short) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_1))) - (((/* implicit */unsigned long long int) 450550465U)))), (((/* implicit */unsigned long long int) var_2))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
                            {
                                arr_35 [i_5] [i_5] [i_5] [i_5] [i_7] [i_5] = (_Bool)1;
                                arr_36 [i_6] [12] [i_6] = ((/* implicit */unsigned long long int) ((short) var_2));
                                arr_37 [i_5] [i_5] [(_Bool)1] [i_7] = ((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))));
                                arr_38 [14LL] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_28 [i_8] [i_6 - 1] [i_9] [i_8] [i_9] [(_Bool)0]))) | (((/* implicit */int) (_Bool)0))));
                                arr_39 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) ((450550489U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            }
                            for (unsigned short i_10 = 2; i_10 < 16; i_10 += 4) /* same iter space */
                            {
                                arr_42 [i_10] [i_10] [i_7] [i_10] [i_10] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) var_0)), (max((var_4), (((/* implicit */long long int) arr_27 [i_5] [i_7] [i_10 - 2])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_33 [i_5] [i_10 - 2] [i_7] [i_8] [i_6 - 1])))))));
                                arr_43 [i_5] [i_5] [i_6] [i_5] [(_Bool)1] = ((_Bool) ((((/* implicit */_Bool) arr_28 [i_10 + 2] [i_6 + 1] [i_6] [i_8] [i_10 - 2] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (((long long int) var_2))));
                                arr_44 [i_7] [i_7] [i_6 - 2] [i_7] [(_Bool)1] [i_6 + 1] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_33 [16ULL] [i_8] [i_7] [(signed char)0] [i_5])))), (((/* implicit */int) max((arr_32 [i_5] [i_6 + 1] [i_7] [i_8] [17LL]), (arr_29 [i_5] [i_7] [(_Bool)1] [i_10]))))));
                                arr_45 [i_5] [(short)6] [i_7] [i_6] [(short)6] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) ^ (arr_19 [i_6 - 1]))) : (((/* implicit */int) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4ULL)))))))))));
                            }
                            for (unsigned short i_11 = 2; i_11 < 16; i_11 += 4) /* same iter space */
                            {
                                arr_48 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 450550478U)) || ((_Bool)1)))), (((((/* implicit */long long int) ((/* implicit */int) var_5))) + (1963168207325675370LL))))));
                                arr_49 [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) min(((short)22875), (((/* implicit */short) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 18261286665266585179ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_1)))));
                            }
                            for (unsigned short i_12 = 2; i_12 < 16; i_12 += 4) /* same iter space */
                            {
                                arr_53 [i_5] [i_6] [i_5] [i_5] [i_7] = ((/* implicit */long long int) ((((_Bool) (_Bool)1)) && (((/* implicit */_Bool) (-(var_8))))));
                                arr_54 [i_7] = ((/* implicit */unsigned long long int) arr_28 [i_6] [i_6] [i_7] [i_12 + 3] [i_12 + 1] [i_12 + 3]);
                                arr_55 [i_6] [i_7] [i_7] [i_6] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_47 [(_Bool)1] [(_Bool)1] [i_6 - 2] [(signed char)13] [i_12 - 1] [i_12 + 3]))))));
                                arr_56 [i_5] [i_6] [i_12] [i_8] [i_8] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_28 [i_6 + 1] [i_6] [i_12] [(_Bool)1] [i_12 - 2] [i_6 + 1]))))))) : (((((/* implicit */_Bool) ((unsigned long long int) (signed char)35))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)32078))))));
                            }
                            arr_57 [i_7] [i_7] [i_7] [12ULL] [i_5] = ((/* implicit */_Bool) var_1);
                            arr_58 [i_7] [i_7] [i_7] [(_Bool)1] = ((((/* implicit */_Bool) (unsigned short)0)) || ((_Bool)1));
                            arr_59 [8U] [i_6] [i_6] [i_6 - 1] [i_6] [i_6] = ((/* implicit */short) var_8);
                        }
                    } 
                } 
            }
        } 
    } 
}
