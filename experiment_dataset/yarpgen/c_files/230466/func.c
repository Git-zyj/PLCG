/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230466
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)152)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)119)))))))) % (((((/* implicit */_Bool) min((var_7), ((short)32767)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)20991)))))))))));
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) var_9))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((((13733603871751127878ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2995))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (((/* implicit */short) arr_3 [(unsigned short)6] [i_0 + 1])))))))))));
                var_13 &= ((/* implicit */unsigned char) var_0);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) var_2);
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_1))))));
                                var_15 += ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_10 [i_2] [i_0 - 1] [i_3 - 1] [i_4 - 1]))))));
                                var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(arr_9 [i_0] [i_0] [i_4 - 1] [i_3 - 1] [i_0 - 1] [i_4])))), (max((((/* implicit */int) var_9)), (((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_6)) + (27521)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)34022), ((unsigned short)31513)))) ? (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-101)))), ((-(((/* implicit */int) (unsigned short)31513)))))) : (((/* implicit */int) (!(var_9))))));
}
