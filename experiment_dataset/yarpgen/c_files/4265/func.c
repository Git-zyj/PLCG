/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4265
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
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        arr_3 [(unsigned char)4] = var_17;
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */short) min((((/* implicit */int) arr_10 [i_0 - 1] [i_1] [6U] [20LL] [i_3])), (((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? ((~(((/* implicit */int) arr_1 [i_0 - 2])))) : (((/* implicit */int) arr_4 [i_0 + 3]))))));
                        var_20 *= ((/* implicit */_Bool) min((((((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [15ULL]))))) / (arr_2 [i_0 - 2] [i_0 - 1]))), (((/* implicit */long long int) arr_5 [(unsigned char)17] [(unsigned char)17] [(unsigned char)17]))));
                        var_21 -= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [(signed char)12])) && (((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)0] [i_1] [(unsigned short)5] [i_2] [(unsigned char)18])))));
                        arr_11 [i_3] [(short)16] [i_2] [i_2] [i_0] [i_0 + 3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (13831368017908357006ULL) : (var_1)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_7 [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) != (((/* implicit */int) var_9))))) : (((/* implicit */int) arr_8 [i_3] [i_2] [(_Bool)1])))) : (((((min((-1), (((/* implicit */int) var_7)))) + (2147483647))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_0 + 2] [i_0 + 2] [i_2] [i_0 + 2] [i_3] [i_3])), ((unsigned short)16128)))) - (16099))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-27749))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((1422860946) != (((/* implicit */int) arr_13 [i_4] [i_4]))))) ^ (var_8)))) : (((((/* implicit */_Bool) ((arr_2 [i_4] [i_4]) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))) ? ((-(var_17))) : (((/* implicit */unsigned long long int) min((-1422860946), (var_2))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 20; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            {
                var_23 = ((/* implicit */_Bool) var_13);
                var_24 |= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_17 [i_5] [i_5 - 1])) ? (arr_17 [i_5 + 2] [i_5 - 1]) : (var_0))));
                arr_22 [i_6] [i_5] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) 1422860931)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) + (arr_17 [i_5 + 2] [i_5 + 2]))))), (((/* implicit */long long int) ((var_18) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_5] [i_5])))))));
                arr_23 [i_5] [i_6] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)21401))));
                arr_24 [i_5] [(_Bool)1] = ((/* implicit */int) min((max(((short)22942), (((/* implicit */short) var_18)))), (((/* implicit */short) ((_Bool) arr_18 [i_5 + 1] [i_5 - 1])))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44150)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (short)(-32767 - 1)))))), (min((var_4), (((/* implicit */unsigned long long int) var_12))))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) var_10)) ^ (((/* implicit */int) max(((short)15914), (((/* implicit */short) (unsigned char)0)))))))));
    var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)28704)) && (((/* implicit */_Bool) 2147483647))))))))));
}
