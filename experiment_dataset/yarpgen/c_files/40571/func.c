/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40571
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
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_12 += ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) max((var_8), (arr_6 [(unsigned char)4])))) ? (((/* implicit */unsigned int) arr_6 [(unsigned short)2])) : (max((((/* implicit */unsigned int) arr_0 [i_3] [i_3])), (2245989138U))))));
                        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))) == (arr_3 [0ULL]))) || (((/* implicit */_Bool) max((min((2245989125U), (((/* implicit */unsigned int) arr_6 [10])))), (((/* implicit */unsigned int) var_8))))))))));
                        var_14 = ((/* implicit */unsigned short) (+(var_9)));
                    }
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) (~(((((((/* implicit */int) var_1)) == (var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2245989135U)))) : (1527877387330392570ULL)))));
                        arr_13 [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned char) 2245989138U))), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (max((2048978180U), (var_9)))))));
                        var_16 ^= ((/* implicit */unsigned short) var_6);
                    }
                    for (signed char i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        arr_17 [i_0] [i_2] [i_0] [i_5 + 1] = ((/* implicit */unsigned short) ((10428672037476291487ULL) >= (((((/* implicit */unsigned long long int) 2048978180U)) * (10428672037476291506ULL)))));
                        var_17 ^= ((/* implicit */_Bool) var_7);
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 9; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_1])) ? (min((((/* implicit */unsigned long long int) min((2048978180U), (2733589177U)))), (((10428672037476291510ULL) + (arr_8 [i_0] [i_1] [i_2 - 1] [i_6]))))) : (((((((/* implicit */int) var_10)) == (((/* implicit */int) var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) : ((-(var_6))))))))));
                                var_19 = (-(((/* implicit */int) (short)-13384)));
                                var_20 = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_14 [i_7 - 2] [i_7 - 2] [i_2 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned short) (+(var_9))))) : (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44030))) == (var_9)))), ((unsigned char)128))))));
}
