/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54336
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_10 += ((/* implicit */short) (~((-(arr_11 [i_3 - 1] [i_3 - 2] [5] [i_3 - 2])))));
                                var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_3)))))), (max((((/* implicit */unsigned int) ((_Bool) (signed char)3))), (arr_11 [(unsigned short)6] [i_1] [i_2] [i_0])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (((~((+(var_5))))) * (((/* implicit */unsigned long long int) (((+(arr_6 [8]))) * (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [i_1])))))))))))));
                        arr_17 [3LL] [i_1] [i_2] [3LL] [(unsigned char)8] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_12 [i_0] [i_2 + 2] [(_Bool)1] [i_5 - 1] [i_0]))) ? (((((/* implicit */_Bool) (-(var_7)))) ? ((+(arr_16 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))));
                        var_13 = ((/* implicit */_Bool) ((unsigned short) arr_7 [i_5]));
                    }
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        arr_21 [i_1] [12LL] [i_6] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1]))))) ? ((+(((/* implicit */int) (short)-11353)))) : (((arr_2 [i_0]) ? (var_7) : (((/* implicit */int) arr_5 [i_6] [(short)0])))))));
                        arr_22 [i_0] [i_1] [i_6] [i_6] [i_2] = arr_14 [i_0] [i_1] [i_2 + 1] [i_6] [i_2];
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_16 [5LL] [i_1] [i_2] [i_6]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [3U] [i_0]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) * (var_3)))))) ? ((+((-(((/* implicit */int) var_8)))))) : (((/* implicit */int) (((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))) >= (((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_2 [i_0]))))))))));
                        var_15 = ((/* implicit */short) (-(((/* implicit */int) arr_13 [(unsigned short)4] [i_1] [i_2] [i_2] [i_2] [i_6]))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_19 [i_0] [i_0] [i_6] [(short)10]) : (((var_3) % (arr_11 [i_0] [i_6] [i_0] [i_6])))));
                    }
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_10 [i_2] [i_2 + 1] [i_2 - 1] [10])) / (arr_0 [i_0] [i_0]))))) ? (((unsigned int) (unsigned char)234)) : (((/* implicit */unsigned int) max(((~(arr_18 [i_0] [i_1] [i_2] [i_2] [5]))), ((-(arr_0 [i_0] [i_0]))))))));
                    arr_23 [i_0] [i_0] [i_1] [i_2] = ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_0]))))) - ((~(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0])))))) <= (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) arr_13 [(_Bool)0] [i_2] [(unsigned char)3] [i_1] [(unsigned char)3] [i_0])))) : (((((/* implicit */int) arr_8 [11LL] [i_0] [i_1] [i_2])) + (((/* implicit */int) arr_4 [i_0])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_4);
    var_19 = ((/* implicit */short) var_4);
}
