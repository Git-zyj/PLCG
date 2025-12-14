/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37988
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)253)), ((short)-24388)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_1 - 1] [i_2])))), (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))), (min((902305360), (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_19 -= (+(arr_1 [i_0] [6]));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (var_14)));
                        var_21 = ((/* implicit */unsigned char) min(((short)24387), (((/* implicit */short) (unsigned char)255))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (short)-24393))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_1] [i_0])), (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((var_16) % (((/* implicit */int) arr_2 [i_1 - 1] [i_3]))))) : (((unsigned int) (short)24387))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_8 [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1]))))));
                    }
                    for (signed char i_4 = 2; i_4 < 9; i_4 += 4) 
                    {
                        var_24 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((1597593904) / (((/* implicit */int) (short)24398))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (max(((-9223372036854775807LL - 1LL)), (3634118788009697850LL)))))));
                        var_25 = ((/* implicit */short) min((max((arr_8 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */signed char) ((_Bool) (signed char)12))))), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) == ((~(((/* implicit */int) arr_11 [i_4] [i_0] [i_2] [0LL] [i_0] [i_0])))))))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_1 + 1]))));
                        var_27 *= ((/* implicit */unsigned char) 12015472887171979460ULL);
                    }
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_3 [i_0] [9U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] [i_2]))) : (7826912475298609480LL)))))) ? (min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [(unsigned short)4] [i_0] [(_Bool)1] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_0]))))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */unsigned int) 2147483647))))) - (192430437879821667LL)))));
}
