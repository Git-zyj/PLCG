/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43897
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_1) : (var_9)))), (var_6))))))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) (unsigned short)8))))))));
        var_12 = ((/* implicit */int) var_0);
    }
    var_13 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (var_1)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) var_4))))))));
    /* LoopSeq 2 */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((max((((/* implicit */unsigned int) 1161755439)), (arr_5 [i_1]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) arr_13 [i_1] [i_1] [i_1]);
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((var_7) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4831)) ? (-1069265859) : (((/* implicit */int) arr_6 [i_1]))))) ? (max((var_7), (((/* implicit */long long int) 1161755444)))) : (((/* implicit */long long int) (-(-1161755440)))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_18 [(_Bool)1] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) (~(max((((/* implicit */int) var_4)), (-1069265859)))));
                                var_16 = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_1] [i_2])) << ((((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))) : (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_4] [i_1] [i_1]))) : (var_5))))) - (4294967266U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_19 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_1])) || (((/* implicit */_Bool) arr_7 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [(unsigned char)0]) != (arr_7 [i_1]))))) : (arr_7 [i_1])));
        arr_20 [i_1] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) arr_14 [i_1] [i_1] [i_1] [i_1])), ((-(var_5)))))));
    }
    for (short i_6 = 1; i_6 < 20; i_6 += 2) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_6])) == (((/* implicit */int) var_0)))))));
        arr_25 [i_6] [i_6] = ((/* implicit */_Bool) 1023);
        arr_26 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_6 - 1] [i_6 + 2]))))) : ((-((~(var_3)))))));
    }
}
