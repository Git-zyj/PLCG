/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245961
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_18 |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_12)) << (((((/* implicit */int) (short)12708)) - (12683)))))))));
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 - 1] [i_1] [i_0]))) ^ (((((/* implicit */_Bool) 650159250U)) ? (164359736U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))))) ? (((/* implicit */int) (unsigned short)21729)) : (((/* implicit */int) ((short) max((((/* implicit */short) (_Bool)1)), (var_3)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                {
                    for (short i_6 = 4; i_6 < 13; i_6 += 4) 
                    {
                        {
                            arr_21 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((signed char) var_15));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))) : (arr_16 [i_6])))) ? (((((/* implicit */int) (unsigned short)63)) >> (((var_13) - (410759243U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)126))))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_26 [i_7] [(unsigned char)0] [i_3] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-12718)) ? (((/* implicit */int) arr_24 [(_Bool)1] [i_4])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) arr_24 [(unsigned char)14] [i_7])))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_4] [i_3] [i_4])) * (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) var_10)) == (arr_22 [i_3] [i_4])))))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (unsigned char)207))));
                }
                var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3] [i_4])) ? (((/* implicit */int) (short)-13287)) : (((/* implicit */int) (unsigned char)207))))));
            }
        } 
    } 
}
