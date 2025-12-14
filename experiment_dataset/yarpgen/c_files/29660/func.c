/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29660
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
    var_11 |= (signed char)127;
    var_12 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)255))))))) || (((/* implicit */_Bool) min((399087234), (((/* implicit */int) (signed char)0)))))));
                    arr_8 [i_0] [(unsigned short)13] [i_2] = ((/* implicit */int) var_5);
                    var_14 = ((/* implicit */unsigned short) var_7);
                }
                /* vectorizable */
                for (short i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    arr_11 [i_0] [(_Bool)1] [i_3] = ((/* implicit */unsigned int) (unsigned short)26448);
                    arr_12 [(signed char)7] [(signed char)7] [i_3] = ((/* implicit */short) -399087235);
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 3; i_4 < 20; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned char)186)))) / (((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) arr_5 [i_4 - 1])) : (((/* implicit */int) (unsigned char)148))))));
                        arr_17 [i_4] [19LL] [(unsigned char)10] [(unsigned char)10] [i_1] [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_3 - 1] [(unsigned short)20] [i_0] [i_4] [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_3 + 2] [(signed char)17] [i_1] [i_1] [i_1])))));
                        var_16 = var_0;
                    }
                }
                /* vectorizable */
                for (unsigned char i_5 = 1; i_5 < 21; i_5 += 4) 
                {
                    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 2] [i_1] [i_1] [i_5 + 3] [i_5])) && (arr_9 [i_1] [i_1])))) : (((/* implicit */int) arr_16 [i_0 + 1] [i_0] [i_0 + 1] [(_Bool)1]))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26467))) * (arr_1 [i_0])));
                    var_19 *= ((/* implicit */signed char) (unsigned char)74);
                }
                var_20 = ((/* implicit */_Bool) ((((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (signed char)37)))) ? (arr_6 [i_0] [21] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [12U] [i_0 + 1] [12U]))))) << (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-29104))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)68))));
}
