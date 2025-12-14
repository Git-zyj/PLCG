/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51890
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
    var_13 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) (unsigned char)254)))) : (var_8)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_14 &= ((/* implicit */short) (((_Bool)1) || ((!(((/* implicit */_Bool) (short)-2955))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((_Bool) (~(((arr_0 [i_0] [(short)1]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))))))));
    }
    for (short i_1 = 3; i_1 < 10; i_1 += 2) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (short)-164))));
        var_16 = ((/* implicit */short) (!(var_4)));
        var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2938)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (short)2955))))) ? ((+(((/* implicit */int) (signed char)127)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(short)0]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-20105)))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 13; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */short) ((max((((/* implicit */long long int) (unsigned char)68)), (arr_13 [i_2] [i_3 + 1] [10ULL]))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2 + 1] [i_3 + 1] [(unsigned char)0])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 3; i_5 < 13; i_5 += 3) 
                    {
                        arr_18 [8LL] [i_3] [12ULL] [i_5 + 1] |= ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                        arr_19 [i_3] [i_3] [(signed char)2] [(signed char)2] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3 + 1] [i_3 - 1]))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_6 = 2; i_6 < 13; i_6 += 1) 
        {
            arr_22 [4] |= ((/* implicit */signed char) arr_8 [i_2]);
            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_12 [i_2 + 2] [i_2 + 1]), (arr_12 [i_2 - 1] [i_2 + 1]))))));
            var_20 = ((/* implicit */unsigned int) arr_11 [i_2] [(short)10] [(short)10]);
        }
        for (int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_12))));
            var_22 *= ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) ((_Bool) arr_0 [(_Bool)1] [i_7]))))));
        }
        var_23 = (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_15 [i_2 + 1])))));
    }
    var_24 = ((/* implicit */unsigned int) (unsigned char)140);
    var_25 = ((/* implicit */unsigned char) var_8);
}
