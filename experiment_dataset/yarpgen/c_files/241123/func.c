/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241123
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (signed char)-94)))) | (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_11 -= ((/* implicit */_Bool) var_4);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            for (int i_3 = 4; i_3 < 17; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_2))))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_2 - 1] [i_3 - 4]))))));
                                arr_17 [i_2] = ((/* implicit */int) (short)0);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_6 = 2; i_6 < 16; i_6 += 4) 
                    {
                        arr_22 [i_2] [i_2] [i_3 - 1] [i_6 + 1] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))), (max((((/* implicit */long long int) (short)0)), (var_10)))))) && (((/* implicit */_Bool) var_2)));
                        arr_23 [i_2] [i_3 - 4] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) ((_Bool) arr_2 [i_1]));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_30 [i_2] = ((/* implicit */_Bool) ((short) (short)0));
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) max((((/* implicit */int) var_7)), (arr_28 [i_3] [i_3]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max(((short)0), (((/* implicit */short) (signed char)94))))) : ((+(((/* implicit */int) var_8))))))) : (((var_2) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-94)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_31 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-94))));
        arr_32 [i_1] = ((/* implicit */int) ((signed char) (short)9));
        arr_33 [i_1] [i_1] |= ((/* implicit */long long int) var_4);
    }
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((var_6) != (var_6))))))), (((unsigned int) (-(((/* implicit */int) var_5))))))))));
    var_15 = ((/* implicit */unsigned char) var_0);
}
