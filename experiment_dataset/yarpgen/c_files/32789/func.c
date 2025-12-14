/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32789
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
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_0]))), (((((/* implicit */_Bool) (signed char)104)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))))))), (arr_0 [i_0 + 1])));
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((unsigned char) var_12));
        var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (signed char)51)), ((+(arr_1 [(short)2])))));
        var_17 = ((/* implicit */unsigned char) var_14);
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0] [i_1] [(unsigned short)8] [i_3] = ((/* implicit */unsigned int) min((min((arr_7 [i_2 + 2] [i_2] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1603012794U)) || (((/* implicit */_Bool) var_12))))))), (((/* implicit */unsigned long long int) 917635492U))));
                        var_18 = ((/* implicit */unsigned char) (signed char)-69);
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_8)), (((unsigned int) (!(((/* implicit */_Bool) (unsigned short)19928)))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)-48)), (var_11)));
                        arr_17 [i_0 - 3] [i_1 - 1] [i_2] [i_4] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) min(((signed char)-104), (arr_8 [i_2 + 3] [i_2 - 1] [i_2 + 3] [i_2 + 3]))))));
                        var_20 = ((/* implicit */unsigned char) min(((-(var_13))), (((/* implicit */unsigned long long int) var_8))));
                        arr_18 [i_0] = ((/* implicit */unsigned short) (~(((((var_5) ? (var_14) : (((/* implicit */unsigned long long int) var_10)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) (signed char)104)) : (834603229))))))));
                        arr_19 [(unsigned short)14] [i_1] = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) >= (arr_1 [i_0])))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) (signed char)104);
                        arr_23 [8U] [i_5] [i_5] [i_5] = ((/* implicit */int) (~(var_6)));
                    }
                }
            } 
        } 
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-7785)) | (((/* implicit */int) (unsigned char)251)))))))) ? (9822544201869741800ULL) : (((/* implicit */unsigned long long int) ((max((var_11), (((/* implicit */long long int) var_5)))) >> (((((unsigned int) (signed char)-60)) - (4294967233U))))))));
}
