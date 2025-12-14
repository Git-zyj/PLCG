/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207260
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-31543))));
                            var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)31542)) && (((/* implicit */_Bool) (short)-31543)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-31543)))))) : ((~((~(var_3)))))));
                            arr_10 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (short)-31530))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_4] [i_5])))))))));
                            arr_17 [i_0] [5ULL] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned char) (((-(((/* implicit */int) (short)-31549)))) + (((/* implicit */int) (short)-31543)))));
                            var_16 = ((/* implicit */unsigned int) (-((-(arr_2 [i_0])))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(arr_0 [i_0] [i_0]))))));
                            var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)31531), ((short)31540)))) ? ((-(((/* implicit */int) arr_15 [(unsigned char)1] [(signed char)6] [i_1 - 1] [i_5])))) : ((~(((/* implicit */int) arr_14 [i_1 + 2] [6] [i_1 - 1] [i_1 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned short i_7 = 1; i_7 < 12; i_7 += 3) 
        {
            for (signed char i_8 = 1; i_8 < 12; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) min(((short)31531), ((short)31542))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)31549)) ? (((/* implicit */int) (short)31540)) : (((/* implicit */int) (short)31531))))))) ? ((-(((/* implicit */int) (short)-31550)))) : (((/* implicit */int) min(((short)-31528), (((/* implicit */short) arr_12 [i_8 - 1] [i_7 - 1] [i_7 + 1])))))));
                                var_21 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)31527)))))));
                                var_22 = ((/* implicit */long long int) (~(((/* implicit */int) (short)31527))));
                                arr_31 [0U] [i_7] [(unsigned char)12] [(_Bool)0] [i_10] = ((/* implicit */signed char) ((short) (short)-31542));
                            }
                        } 
                    } 
                    arr_32 [i_8] [i_7] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)31541))));
                    var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((unsigned char) (short)-31565))) ? ((+(((/* implicit */int) (short)31531)))) : (((/* implicit */int) (short)31528))))));
                }
            } 
        } 
    } 
    var_24 = var_6;
}
