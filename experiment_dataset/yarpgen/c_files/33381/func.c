/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33381
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
    var_19 = ((/* implicit */short) var_17);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_5);
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (((~(((/* implicit */int) min(((_Bool)1), (arr_0 [i_0])))))) & (((/* implicit */int) arr_0 [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((/* implicit */int) arr_5 [i_1] [i_1])), (((((/* implicit */int) max(((signed char)32), ((signed char)-107)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 12; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_3] [i_2] [i_3] [i_4 - 2] [(_Bool)1])) / (((/* implicit */int) (short)17412))))) * (((min((((/* implicit */unsigned int) arr_0 [i_4])), (arr_10 [i_1]))) << (((var_16) - (3532265516U)))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_1] [i_4 - 1])) ^ (((((/* implicit */_Bool) arr_1 [i_1] [i_4 - 1])) ? (((/* implicit */int) arr_1 [i_1] [i_4 - 3])) : (((/* implicit */int) arr_1 [i_3] [i_4 + 1]))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */int) (signed char)-127)) > (min((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_3])), ((((_Bool)1) ? (((/* implicit */int) (short)17412)) : (((/* implicit */int) (short)-17413)))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (short)17412))))), (arr_16 [i_8] [i_8])))) - ((-(((((((/* implicit */int) (signed char)-48)) + (2147483647))) >> (((((/* implicit */int) (short)17412)) - (17391))))))))))));
                        var_26 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)17413))))) ? ((+(((/* implicit */int) (short)-17424)))) : (((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_3))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6]))) / (((((/* implicit */_Bool) (short)17424)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_6] [i_7] [(unsigned char)4])))))))));
                    }
                } 
            } 
        } 
    }
}
