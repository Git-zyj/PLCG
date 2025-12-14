/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240999
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
    var_17 = ((/* implicit */short) min((((/* implicit */int) var_2)), (min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((int) (signed char)68));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-69)) / ((-(((/* implicit */int) (short)127))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */short) 4903328227459400478LL);
        var_18 = ((/* implicit */int) arr_6 [i_1]);
    }
    for (long long int i_2 = 1; i_2 < 10; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) (short)-153);
        arr_12 [i_2] = ((/* implicit */long long int) (unsigned short)47868);
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_20 = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (signed char)-19))))) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) ((_Bool) (unsigned short)15726)))));
                            var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-110))))) ? (((/* implicit */int) (signed char)-68)) : (((((var_0) + (2147483647))) << (((((((/* implicit */int) var_7)) + (22238))) - (13)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (signed char i_8 = 2; i_8 < 17; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            {
                                arr_28 [(unsigned char)13] [i_7] [i_8] [i_8] [i_3] [i_7] [i_3] = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) (unsigned short)38075)))));
                                arr_29 [i_9] [i_9] [(_Bool)1] [i_9] [i_7] [i_9] [6LL] &= ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)31)), ((-(((/* implicit */int) ((((/* implicit */int) (short)32704)) <= (var_12))))))));
                                arr_30 [i_3] [i_3] [i_3] [i_7] [i_3] [i_3] [i_3] = ((/* implicit */short) arr_22 [i_7] [i_4] [i_4] [i_7]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
