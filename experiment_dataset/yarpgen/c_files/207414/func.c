/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207414
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
    var_13 = ((/* implicit */unsigned short) var_1);
    var_14 *= ((/* implicit */short) ((((/* implicit */int) (signed char)-31)) * (((/* implicit */int) var_9))));
    var_15 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_16 = ((short) ((((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_2 [i_0] [i_0 - 2] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_7)))))) : (max((arr_1 [i_0 - 3]), (((/* implicit */unsigned long long int) arr_0 [(signed char)17] [i_0]))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) (signed char)18);
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56353)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (short)3)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        {
                            arr_15 [i_5] [i_6] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (signed char)-18)))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                            arr_16 [(unsigned char)8] [i_0] = ((/* implicit */unsigned int) (+((-(arr_12 [i_0] [i_1] [i_5] [i_6])))));
                            arr_17 [(short)5] [15ULL] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_8 [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_0] [i_0] [i_0 + 1])) - (((/* implicit */int) arr_8 [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 1])))) / (((/* implicit */int) ((_Bool) arr_8 [i_0] [4U] [i_0] [i_0 - 1] [i_0] [(_Bool)0] [i_0 - 2])))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)62)) < (((/* implicit */int) (short)-13018))))), (var_5)))) ? (((/* implicit */unsigned int) arr_11 [i_0 - 2] [i_0 - 2])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_11 [i_1] [i_0])) : (arr_5 [i_0] [i_0 - 3] [i_1])))) ? (((/* implicit */unsigned int) var_5)) : (var_4)))));
                var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */int) (signed char)109)) * (((/* implicit */int) (short)3)))) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) var_12)))))))));
            }
        } 
    } 
}
