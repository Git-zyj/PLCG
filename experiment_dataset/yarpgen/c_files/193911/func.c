/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193911
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)0)), ((-(((/* implicit */int) var_11))))))) ? ((+(((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), ((short)16382)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) min(((short)-32742), (var_14)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)16379)), ((unsigned short)65535))))))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) == ((-9223372036854775807LL - 1LL)))) ? (((((/* implicit */int) arr_5 [i_1])) / (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(short)18] [(short)18] [i_2] [(short)18] [i_2 + 1] [i_2]))))) << (((arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned char)8] [i_0]) - (5154153182574784085LL)))));
                            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_0] [(unsigned short)5] [i_0]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (short i_5 = 3; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)7)), (max((((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (unsigned short)4)))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)7936)), ((unsigned short)448))))))));
                            arr_20 [i_0] [i_0] [i_1] = (-(((((/* implicit */_Bool) arr_12 [i_5 - 3] [(unsigned short)8] [i_5 + 1] [i_5 + 1] [i_5])) ? (min((((/* implicit */long long int) (unsigned short)0)), (arr_16 [i_0]))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned short)1)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)29))))))))));
}
