/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211140
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
    var_14 = ((/* implicit */unsigned short) ((long long int) max((((5332566084043614772LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-66))))), (((/* implicit */long long int) var_2)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_0])))))) <= (((((/* implicit */long long int) var_1)) & (arr_4 [i_0] [i_0] [i_2 - 1] [i_0])))))) : (((/* implicit */int) (!(((_Bool) (_Bool)1)))))));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((long long int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) var_10))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) var_1)) : (arr_4 [i_0] [8LL] [i_1] [2ULL]))) : (var_13)));
                    var_16 &= ((/* implicit */_Bool) var_7);
                    var_17 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8074))) : ((-(arr_0 [1U])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [(_Bool)1] [i_2] [i_3] [i_3] [i_3] = ((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1830))) : (((((((/* implicit */_Bool) (short)-30890)) && (((/* implicit */_Bool) 4655025962561416230LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8090))) : (max((5332566084043614769LL), (((/* implicit */long long int) (_Bool)1)))))));
                                arr_13 [i_0] [i_2] [2U] [(unsigned short)6] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(1281034320U)))) ? (((((/* implicit */_Bool) (signed char)62)) ? (14391741813133535466ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (_Bool)1)))))))) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned short) (short)-14748)), (arr_8 [i_0] [i_1] [i_2 + 1] [i_3])))), (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))) : (-8674807722051728518LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
