/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194142
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
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63970)) | (((/* implicit */int) (unsigned short)63996))))) ? (((int) var_14)) : ((~(((/* implicit */int) (short)-32767)))))) == (((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_16 *= ((/* implicit */unsigned int) (-2147483647 - 1));
        var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)63996), ((unsigned short)1548)))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((_Bool) arr_0 [i_0])))));
    }
    var_18 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) 3063281662U)) || (((/* implicit */_Bool) (unsigned short)1548)))) || (((var_13) && (((/* implicit */_Bool) (unsigned short)1571)))))), (((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_12)))) == (((/* implicit */int) ((signed char) (unsigned short)1579)))))));
    var_19 = ((/* implicit */short) var_9);
    /* LoopNest 3 */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        for (unsigned short i_2 = 3; i_2 < 22; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    arr_10 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) arr_2 [i_1]))))) - (((((/* implicit */_Bool) (unsigned short)1537)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)63997))))))) ? (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)37)) : (arr_6 [(_Bool)1]))), (((/* implicit */int) arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 2])))) : (max((((((/* implicit */_Bool) arr_3 [9])) ? (arr_6 [(_Bool)1]) : (((/* implicit */int) (unsigned short)0)))), (1658317247)))));
                    arr_11 [i_2] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) ((77429307U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1590)))))), (4217537963U)))));
                }
            } 
        } 
    } 
}
