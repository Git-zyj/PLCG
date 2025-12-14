/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206135
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
    var_17 ^= ((/* implicit */short) ((((/* implicit */int) var_16)) << (((((min((((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_5)))), ((~(((/* implicit */int) var_9)))))) + (6175))) - (3)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */short) var_12);
                    arr_8 [i_0] &= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max(((unsigned char)0), ((unsigned char)28)))))) ? (max((max((arr_1 [i_1] [i_1]), (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)255)))))) : ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) == (arr_0 [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_14 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_0 [i_0])))))) ? (((((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (unsigned char)255)))) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) : ((-(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [(unsigned short)4] [i_4] [(short)9])) : (((/* implicit */int) var_10))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) (-(((max((arr_1 [i_2] [12ULL]), (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) & (((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (signed char)63))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) var_9))))))));
}
