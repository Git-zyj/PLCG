/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220414
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
    var_11 |= ((/* implicit */_Bool) ((unsigned int) ((((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15316))) : (var_2))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) 0ULL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                arr_6 [(_Bool)1] [(signed char)2] [i_0] &= ((/* implicit */int) (!(((arr_5 [i_0] [(_Bool)1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [(signed char)4] [i_1 + 1])))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_4 [(short)7] [0ULL])))) - (((/* implicit */int) arr_3 [i_2] [i_0] [i_2]))));
                    var_13 = ((/* implicit */unsigned short) -1010846622);
                }
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 2; i_4 < 11; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned int) (short)-16202);
                        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_4 - 1] [i_1]))));
                    }
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)6])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)15316)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_6))));
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                {
                    arr_15 [(unsigned char)11] [i_0] = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) var_10);
                                var_18 = ((/* implicit */_Bool) var_0);
                                arr_21 [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) (signed char)15);
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)28)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 3]))));
                }
                var_19 = ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned short) var_1)), (max((((/* implicit */unsigned short) (signed char)-127)), ((unsigned short)1))))));
                var_20 = ((/* implicit */_Bool) var_9);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) max(((unsigned short)63488), (((/* implicit */unsigned short) var_5))))) ^ (((/* implicit */int) max(((short)4064), (((/* implicit */short) (signed char)117))))))) % (((/* implicit */int) var_9))));
    var_22 = ((/* implicit */unsigned char) var_6);
}
