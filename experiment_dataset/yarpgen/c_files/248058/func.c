/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248058
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
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
                    {
                        var_16 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (min((arr_6 [i_0 - 2] [i_3]), (arr_6 [i_3] [i_3])))));
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (~(((/* implicit */int) ((short) 0U))))))));
                    }
                    for (short i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
                    {
                        var_18 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) (unsigned short)28452)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_0])) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28452)))))) ? ((-(((/* implicit */int) var_14)))) : ((~(((/* implicit */int) var_4)))))));
                        arr_13 [i_4] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) >= ((+(max((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_9)))))));
                        var_19 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)255))))), (arr_0 [i_0] [i_0])));
                    }
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) + (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) var_6))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) arr_8 [i_5] [i_5] [i_5] [i_5])));
        var_22 *= ((/* implicit */unsigned char) var_0);
    }
    var_23 = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_8))) << (((var_2) - (15921384231720635546ULL)))))));
}
