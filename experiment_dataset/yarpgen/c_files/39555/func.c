/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39555
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
    var_15 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((_Bool) arr_0 [i_0 - 1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)27)) / (((/* implicit */int) (signed char)4))))) ? (((((/* implicit */int) var_13)) | (((/* implicit */int) (unsigned short)16870)))) : (((/* implicit */int) ((unsigned char) (unsigned char)0)))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (short)8783))))) : ((~(17236384722372075862ULL)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned char) ((short) (unsigned char)0));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (min((var_5), (((/* implicit */unsigned int) (signed char)-121)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))))));
                                arr_14 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)25012))))) : ((-(max((((/* implicit */unsigned int) (unsigned char)40)), (var_0)))))));
                            }
                        } 
                    } 
                    arr_15 [i_0 - 1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8805)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_8))))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))), ((~(((/* implicit */int) var_1)))))))));
                    arr_16 [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)252)) : (arr_9 [i_0 - 2] [i_1] [i_2])))), ((-(4253866014U)))));
                }
            } 
        } 
    }
    for (short i_5 = 3; i_5 < 23; i_5 += 4) 
    {
        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-8784)) ? (arr_17 [i_5 - 1] [i_5 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((arr_17 [i_5 - 3] [i_5 - 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8)))))))) ? (((((1618050756U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) << (((arr_17 [i_5 - 3] [i_5 - 1]) - (1587697319159042148ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 2744604892386689350ULL)) ? (41101282U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8805))))))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)79)))))));
        var_19 *= ((/* implicit */short) max(((+(((/* implicit */int) (signed char)-32)))), ((-(((/* implicit */int) (signed char)-68))))));
        arr_19 [i_5 + 1] [i_5 - 3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_17 [i_5 - 1] [i_5 + 1]))) >= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)252)), (1304555979U))))));
    }
}
