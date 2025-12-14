/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232499
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
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_2))))) ? ((-(((/* implicit */int) var_3)))) : (((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)192)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), (var_5)))))))));
    var_16 = ((/* implicit */int) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = var_0;
                    arr_10 [i_1] [i_1] = (~((+(min((((/* implicit */long long int) (short)-24669)), (14680064LL))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) | (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 3; i_4 < 15; i_4 += 2) 
            {
                {
                    arr_19 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_22 [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (max((((((/* implicit */int) var_7)) / (var_13))), (((/* implicit */int) (!(arr_14 [i_4] [i_3])))))) : (((/* implicit */int) var_4))));
                        arr_23 [8] [i_3 - 1] [8] = var_6;
                        arr_24 [10LL] [i_4] [i_4] [i_3 - 1] [10LL] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) max(((unsigned short)8184), (((/* implicit */unsigned short) var_12))))), (var_11))) << (((((((/* implicit */_Bool) arr_5 [i_5] [i_4 - 1])) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_4] [i_4 - 2]))) - (645708042U)))));
                        arr_25 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_3)), (((var_11) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (38))))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (unsigned short)57351)) : (((/* implicit */int) (signed char)-51)))))))) : (((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_3)), (((var_11) >> (((((((/* implicit */int) arr_0 [i_0] [i_0])) - (38))) - (178))))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (unsigned short)57351)) : (((/* implicit */int) (signed char)-51))))))));
                        arr_26 [i_0] [i_5] [(unsigned char)14] [(unsigned char)8] [i_0] = ((/* implicit */signed char) max((max((max((((/* implicit */unsigned char) var_7)), (arr_12 [i_0] [i_3] [i_4]))), (((/* implicit */unsigned char) var_1)))), (((/* implicit */unsigned char) max((var_12), (((arr_5 [i_0] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_30 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8184))) * (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (arr_13 [i_0] [i_3 - 1])))))) ? (((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_20 [i_6] [(_Bool)1] [i_6] [(_Bool)1] [i_6] [i_0])))) / (((((/* implicit */int) arr_8 [i_0] [i_3] [(unsigned char)10])) / (((/* implicit */int) arr_8 [i_0] [i_3 - 1] [i_4 - 3]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * ((-(var_11)))))));
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_5))))) <= ((+(((/* implicit */int) arr_18 [i_0] [i_0]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4 + 1] [i_4 - 3])))))));
                        arr_32 [(unsigned short)8] [i_4] [i_3] [i_0] [i_0] [(unsigned short)8] = (((((((_Bool)1) ? (((/* implicit */int) arr_16 [i_0] [i_6] [(short)6] [i_6])) : (((/* implicit */int) var_0)))) >> (((max((((/* implicit */unsigned int) var_3)), (arr_5 [i_6] [i_0]))) - (645708033U))))) <= (((/* implicit */int) max(((_Bool)1), (((((/* implicit */int) var_14)) <= ((-2147483647 - 1))))))));
                    }
                    arr_33 [0] [(_Bool)1] [i_4] [i_4] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_27 [4LL] [14]))))) : (min((((/* implicit */long long int) var_5)), (var_10)))))) ? (((((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_0))))) * (((/* implicit */int) ((_Bool) (short)14579))))) : (((var_1) ? (((/* implicit */int) arr_20 [i_0] [i_3] [i_4 - 1] [i_4] [i_4 - 1] [4LL])) : (((/* implicit */int) arr_20 [i_0] [i_3] [i_4 - 1] [i_4 + 1] [i_0] [(unsigned short)14])))));
                }
            } 
        } 
        arr_34 [i_0] [(signed char)2] = ((short) var_14);
        arr_35 [i_0] [i_0] = ((_Bool) ((((/* implicit */int) ((_Bool) var_6))) << (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_17 = ((/* implicit */unsigned char) var_4);
}
