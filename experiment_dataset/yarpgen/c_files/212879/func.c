/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212879
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) 33554431);
                                arr_17 [i_1] [i_3] [i_2 - 4] [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(var_5))))));
                                arr_18 [i_3] [i_1] [i_3] [i_2 - 3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (short)27207);
                                arr_19 [i_3] [i_3] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) -1))))))));
                                arr_20 [i_0] [8LL] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) ((long long int) -5));
                            }
                        } 
                    } 
                    arr_21 [i_0] |= ((/* implicit */short) arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
    {
        arr_24 [i_5] = ((/* implicit */unsigned char) 33554431);
        arr_25 [i_5] [i_5] = ((/* implicit */short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_5] [i_5]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_5] [i_5]))))) : (arr_22 [i_5] [i_5])))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
    {
        arr_28 [(unsigned char)18] = ((/* implicit */unsigned char) -33554431);
        arr_29 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)10336)) != (((/* implicit */int) var_15))))) : ((+(-33554433)))));
        arr_30 [i_6] = ((/* implicit */unsigned char) 0);
    }
    var_17 = var_10;
    var_18 = ((/* implicit */unsigned char) (((+(var_3))) / ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)1))))))));
}
