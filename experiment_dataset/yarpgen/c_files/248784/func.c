/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248784
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
    var_20 = ((/* implicit */unsigned int) ((signed char) ((((_Bool) 6336204001725811508LL)) ? (((/* implicit */int) (unsigned short)1436)) : (((/* implicit */int) (signed char)-76)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (short)0)), (16887574713840114618ULL))), (((/* implicit */unsigned long long int) ((_Bool) (signed char)-91)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] = (signed char)71;
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 3; i_4 < 12; i_4 += 1) 
                            {
                                arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [5] [11] [i_0] = ((/* implicit */_Bool) ((short) (signed char)41));
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((33554400U) << (((33554400U) - (33554369U))))))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 357610144))));
                                var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((((/* implicit */unsigned long long int) 2039748929U)) * (6512938806069539550ULL)))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 3) 
                            {
                                var_24 &= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) (short)-1)))));
                                arr_21 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned short) 3145728U)));
                                var_25 = ((/* implicit */int) (signed char)-79);
                                arr_22 [i_0 - 3] [(unsigned short)11] [1U] [i_0] [i_6 + 2] [i_2] [i_2] = ((/* implicit */signed char) (_Bool)1);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
