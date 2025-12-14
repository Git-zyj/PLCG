/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42909
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
    var_13 = ((/* implicit */int) ((unsigned char) var_0));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)60)) ? (min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)125))))), (1829281791993215166LL))) : ((~(1829281791993215166LL)))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_14 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_7 [i_0])) ? (((((/* implicit */_Bool) -1829281791993215166LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_2 [i_2]))) : (((arr_0 [i_0] [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2]))))) >> (((max((((/* implicit */long long int) arr_2 [(unsigned char)21])), (1829281791993215182LL))) - (1829281791993215159LL))))))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+(-5974444728548363386LL))))));
                    arr_8 [i_2] [5LL] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((unsigned int) var_6))))));
                }
                for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    var_16 = ((5974444728548363381LL) ^ (((/* implicit */long long int) 1485262101U)));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_5 [i_1 + 3] [i_1 - 2] [i_1 - 3]) & (arr_5 [i_1 + 2] [i_1 + 3] [i_1 - 2])))))))));
                }
                /* vectorizable */
                for (short i_4 = 4; i_4 < 21; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_17 [i_4] [i_5] = ((/* implicit */short) arr_5 [i_4 - 3] [i_4 - 3] [i_4]);
                                var_18 = ((/* implicit */unsigned char) 5974444728548363383LL);
                            }
                        } 
                    } 
                    var_19 = (((~(134217727U))) <= (arr_13 [i_4] [18U] [i_1 + 4] [i_4 - 2]));
                }
            }
        } 
    } 
    var_20 -= (~(((unsigned int) var_12)));
}
