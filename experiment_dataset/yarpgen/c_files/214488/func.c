/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214488
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? ((~(var_8))) : (((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) ((unsigned int) arr_3 [5LL] [i_1 + 1]))) ? (((/* implicit */int) ((_Bool) (signed char)-4))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)9)))))))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((int) var_15)))));
                            var_19 = ((/* implicit */_Bool) var_9);
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? ((~(((var_4) ? (var_1) : (0ULL))))) : ((~(arr_1 [i_1 + 1] [i_1 + 1])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 541877302U)) ? (((/* implicit */int) arr_6 [i_0 - 3] [i_1])) : (((/* implicit */int) (unsigned short)61160))))));
                arr_11 [i_0] = ((/* implicit */unsigned short) var_14);
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (((!(((/* implicit */_Bool) ((unsigned int) 2895789939U))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [i_0] [8U] [i_5]))))) : (3021603007U))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_4] [i_5]))))) ? (((var_15) ? (var_8) : ((+(((/* implicit */int) var_9)))))) : (((var_4) ? (-179050870) : (((/* implicit */int) (!(arr_2 [i_1]))))))));
                            var_24 ^= ((/* implicit */unsigned int) (short)-25112);
                        }
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)33);
            }
        } 
    } 
}
