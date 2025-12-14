/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243236
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
    var_20 ^= ((/* implicit */signed char) ((1740417784) ^ (var_5)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 520192ULL)) ? (arr_2 [i_0] [i_0]) : (-1740417784)))));
        var_22 += ((/* implicit */unsigned char) (+(arr_1 [i_0] [2])));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_23 = (+(((/* implicit */int) arr_0 [i_1])));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((short) 16458517890128346571ULL)))));
        arr_5 [i_1] [8] = ((/* implicit */unsigned int) (unsigned char)96);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        for (signed char i_3 = 1; i_3 < 8; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_5] [i_2])), (1040076195U)));
                            var_26 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) arr_7 [(unsigned char)8] [i_3 + 4])) <= (520193ULL))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) (~(2305772640469516288ULL)));
                            var_28 = ((/* implicit */long long int) max(((~(arr_18 [i_2]))), (((/* implicit */unsigned int) arr_4 [i_2] [i_7]))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [i_3 + 4])) ? ((~((~(1040076195U))))) : (((/* implicit */unsigned int) arr_21 [i_3]))));
            }
        } 
    } 
    var_30 += ((/* implicit */signed char) min((((max((8505788571545390386ULL), (8505788571545390386ULL))) ^ (((520191ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) (~(2801868240U))))));
}
