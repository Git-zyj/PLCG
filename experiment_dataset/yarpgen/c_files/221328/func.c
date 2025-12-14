/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221328
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
    var_10 = ((/* implicit */_Bool) ((var_2) - ((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) var_5)) : (min((((/* implicit */unsigned int) var_0)), (var_6)))))));
    var_11 = ((/* implicit */unsigned short) var_2);
    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) -2036011152))));
        arr_4 [i_0] &= ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)21)), (7078363800652638095LL)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */short) (-(((/* implicit */int) arr_8 [7] [(unsigned short)9] [i_2]))));
                                var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (_Bool)1)))))) ? (max((((/* implicit */int) (unsigned short)3)), (((((/* implicit */int) (unsigned short)63)) / (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((_Bool) arr_1 [i_0])))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) ((unsigned char) arr_0 [i_0]));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned int) arr_3 [i_0]);
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [i_0] [1] [i_0] [i_0])) ? ((~(((/* implicit */int) (short)-29149)))) : (((/* implicit */int) arr_11 [(unsigned char)0] [i_0] [(_Bool)1] [i_0] [(_Bool)1])))) / (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned short)3)) : (-2088006948))))))));
    }
}
