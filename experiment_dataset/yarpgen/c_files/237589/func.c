/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237589
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned short) ((((((/* implicit */int) max(((unsigned short)23528), (var_7)))) > (((/* implicit */int) (unsigned short)23525)))) ? (((((/* implicit */int) (unsigned short)7168)) & (((/* implicit */int) (unsigned short)41994)))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42007))))) | (((/* implicit */int) (!(((/* implicit */_Bool) 3502405678U)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_4 [i_1] [i_1] [i_0] = arr_1 [i_0];
            arr_5 [i_0] [i_0] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)23527)) ? (arr_1 [i_0]) : (arr_1 [i_0])));
            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)42031)) ? (((/* implicit */int) (unsigned short)42010)) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) : (arr_1 [i_1])));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (var_5)));
        }
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)41987)) | (((/* implicit */int) (unsigned short)23524))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                var_12 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)65514)) >= (((/* implicit */int) (unsigned short)41983)))))))));
                var_13 ^= (~(var_4));
            }
            /* LoopNest 3 */
            for (unsigned short i_4 = 4; i_4 < 14; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_14 = var_9;
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)15872)) / (((/* implicit */int) (unsigned short)65511)))))));
                        }
                    } 
                } 
            } 
            arr_20 [10U] [10U] = (unsigned short)65408;
        }
        for (unsigned int i_7 = 1; i_7 < 14; i_7 += 3) 
        {
            arr_24 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)32736))))) < (((((/* implicit */_Bool) 989005275U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24209))) : (0U)))));
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15890)) ? (((/* implicit */int) (unsigned short)156)) : (((/* implicit */int) (unsigned short)42007)))))));
        }
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)5723)) : (((/* implicit */int) (unsigned short)34612))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29941)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41328))) : (3343863893U)))))))) : (10U)));
}
