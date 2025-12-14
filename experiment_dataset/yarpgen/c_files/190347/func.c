/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190347
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
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */int) ((signed char) var_7))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) min(((unsigned short)65505), (((/* implicit */unsigned short) var_8)))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-12067)) : (1741398278))), (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) var_8)))))))) ? ((-(((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 3] [i_0] [i_0] [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (16326545340039113397ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_0 + 2]))))));
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_2] [i_2] [i_3])) : (((/* implicit */int) var_4))))) ? (max((arr_6 [i_0] [(short)12] [i_2] [i_3]), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_5))))))))))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned char) arr_7 [i_0 + 1]);
    }
    for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned short) ((min((arr_4 [i_4 + 1] [i_4]), (((/* implicit */int) var_0)))) % (((/* implicit */int) (_Bool)1))));
        var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [i_4 - 1]) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-112)), (arr_9 [i_4 + 2] [i_4 - 1] [i_4 + 1] [(_Bool)1] [i_4 + 1])))) : (((((/* implicit */_Bool) arr_8 [i_4 + 2] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)100))))))) ? (arr_3 [i_4]) : ((-(max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_11 [i_4])))))));
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned char) var_7);
    }
    var_16 = ((/* implicit */short) var_0);
    var_17 = ((/* implicit */_Bool) (short)18799);
}
