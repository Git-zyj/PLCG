/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210872
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
    var_11 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned char)222)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_11 [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_8 [11U] [i_1] [(_Bool)1])) | ((+(((/* implicit */int) (short)17896))))));
                        arr_12 [i_3] = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) arr_10 [i_0])))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 4; i_4 < 21; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned char) var_2);
                            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)33)))));
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_3] [(unsigned char)22] [i_2])) * (((/* implicit */int) (signed char)-113))))) ? (((/* implicit */unsigned long long int) arr_13 [i_3] [i_4 + 3] [i_3] [i_4] [i_4] [i_4])) : (arr_2 [i_4 + 1]))))));
                            arr_18 [i_4] [i_1] [i_1] [i_1] [(unsigned char)23] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)229));
                        }
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_15 = ((signed char) (signed char)-78);
                            var_16 = ((/* implicit */unsigned int) (unsigned char)255);
                            var_17 = ((/* implicit */unsigned char) arr_10 [i_1]);
                        }
                    }
                } 
            } 
        } 
        arr_22 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned char)12]))))) ? (arr_16 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [(_Bool)1]) : (((/* implicit */long long int) ((((arr_5 [i_0]) + (2147483647))) << (((((/* implicit */int) arr_1 [14])) - (22))))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_0])) + (((/* implicit */int) var_0))));
    }
}
