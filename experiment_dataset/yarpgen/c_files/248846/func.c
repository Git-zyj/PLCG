/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248846
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
    var_10 = ((/* implicit */int) (unsigned char)0);
    var_11 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)21349))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) var_2)) << (((((var_6) + (2061687256))) - (19)))))));
                        var_13 = var_7;
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] &= ((/* implicit */_Bool) var_7);
                            var_14 = ((/* implicit */short) (unsigned short)21349);
                            var_15 -= ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)21349)) : (((/* implicit */int) (_Bool)1)));
                            var_16 = ((/* implicit */short) -1492113412);
                        }
                    }
                    arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44186))) & (0U)))) ? (((/* implicit */int) (unsigned short)21349)) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_3))))));
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min(((~((~(((/* implicit */int) (_Bool)1)))))), ((~(((/* implicit */int) var_7)))))))));
                }
            } 
        } 
    } 
}
