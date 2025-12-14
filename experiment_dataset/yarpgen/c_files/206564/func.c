/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206564
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((-91179746) % (((1995288850) / (((((/* implicit */_Bool) 463059891U)) ? (((/* implicit */int) (short)26147)) : (-1329735107)))))));
        var_10 = ((/* implicit */unsigned char) var_1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) min((((int) 2147483647)), (min((((/* implicit */int) (unsigned short)23317)), (1995288850)))));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) arr_6 [i_0] [i_1] [i_2]))));
                    arr_8 [i_2] = ((/* implicit */unsigned char) var_4);
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) 1995288840)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (unsigned char)24)))))))) || (((/* implicit */_Bool) ((int) arr_9 [i_3])))));
        var_13 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_11 [i_3])))));
        arr_13 [i_3] = ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) (short)14414)))));
    }
    var_14 = ((/* implicit */int) max((max((((unsigned int) -6283870401979918652LL)), (((((/* implicit */_Bool) var_4)) ? (var_6) : (var_6))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)23329)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 4; i_5 < 11; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 11; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((max(((-(((/* implicit */int) (short)-14419)))), (((/* implicit */int) (unsigned char)3)))), (2147483647)));
                            /* LoopSeq 2 */
                            for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((-9223372036854775805LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)27158)))))))) & (((/* implicit */int) (unsigned char)86))));
                                var_17 = ((/* implicit */_Bool) (-(((-965915781058548256LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23317)))))));
                            }
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                arr_28 [i_4] [i_5] [i_6] [i_7] [i_9] [i_5] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_4])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4 + 1]))))) | (min((5885982793918077755ULL), (((/* implicit */unsigned long long int) var_1))))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max(((short)-14414), (((/* implicit */short) (unsigned char)137)))))));
                                var_19 = ((/* implicit */int) var_5);
                            }
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */unsigned char) ((signed char) var_9));
                var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28494)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14438))) : (611876928U)))) ? (((((/* implicit */_Bool) (unsigned char)62)) ? (min((((/* implicit */long long int) var_2)), (8767989039499541241LL))) : (((/* implicit */long long int) 2715528108U)))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)16565)) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) (short)1344)))))))));
                arr_29 [i_4] [i_5] [i_5] = (~(((/* implicit */int) var_0)));
            }
        } 
    } 
}
