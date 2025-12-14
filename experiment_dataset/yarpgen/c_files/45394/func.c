/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45394
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
    var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)60012)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)60012))))))) ? ((+(((((/* implicit */_Bool) (unsigned short)52288)) ? (var_8) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [(unsigned short)0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))))), ((unsigned short)59983)));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 262112ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_6))))))) ? (((((/* implicit */_Bool) 2107265678U)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)13233))))) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_12 [1ULL] [i_3] [1ULL] [i_0] [14U] [i_0])), (arr_7 [i_2 + 1] [i_2 + 1] [i_1 + 3] [i_0])));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_7))));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_0] [i_1 + 3] [(unsigned short)14] [(unsigned short)14] [i_0] [i_3])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_5);
                                var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)32512)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (7247109536825614674ULL)))));
                                arr_19 [i_6] [14U] [i_5] [i_2 + 1] [i_2 + 1] [14U] [(unsigned short)1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */int) var_11)))), (min((arr_9 [i_1 - 1] [i_1 + 1]), (((/* implicit */int) var_5))))));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (arr_14 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(unsigned short)15])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1] [(_Bool)1]))))))))));
                            }
                        } 
                    } 
                    arr_20 [(_Bool)1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)106);
                    arr_21 [i_0] = ((((/* implicit */_Bool) arr_3 [i_2 + 1] [11U] [11U])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)));
                }
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)60038)) : (arr_14 [i_7] [i_7] [i_7])))));
        var_21 ^= ((/* implicit */unsigned char) arr_5 [i_7]);
    }
}
