/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40184
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) arr_3 [i_0]))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_4 [i_0]));
                arr_6 [10ULL] [14U] &= ((max((((/* implicit */int) var_8)), (min((((/* implicit */int) var_0)), (var_4))))) <= (((/* implicit */int) var_0)));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (!((((~(((/* implicit */int) arr_2 [i_0])))) > (((/* implicit */int) max((var_2), ((_Bool)0))))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) == (600554830U))) ? (((((/* implicit */_Bool) 3857269969U)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))))) : (2979105244102267020ULL)));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_11 &= (((!(((/* implicit */_Bool) (unsigned char)128)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2]))) : (arr_12 [i_2])))) : (arr_1 [i_2]));
        var_12 += var_5;
        arr_13 [(unsigned char)3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
        arr_14 [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (1U));
        arr_15 [20U] [i_2] = ((/* implicit */signed char) ((((437697329U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2]))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2])))));
    }
    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((unsigned int) ((((/* implicit */_Bool) arr_19 [i_3] [i_3])) ? (arr_17 [(unsigned char)16]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */int) arr_4 [18U])) : (((/* implicit */int) arr_9 [i_3] [i_3]))))))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 2; i_6 < 14; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_28 [i_6] [i_4] = ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_26 [i_6 - 1] [i_6 + 1])));
                                var_14 *= ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (unsigned short)38747))))))))) == ((~(1966080U))));
                            }
                        } 
                    } 
                    arr_29 [i_3] [i_4] = ((/* implicit */unsigned int) arr_20 [15U] [i_4]);
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_4 [i_3]), (((/* implicit */unsigned char) arr_2 [i_5])))), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (arr_17 [i_3]))))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)32256)))))));
                }
            } 
        } 
        var_16 ^= ((/* implicit */int) ((short) (_Bool)1));
    }
}
