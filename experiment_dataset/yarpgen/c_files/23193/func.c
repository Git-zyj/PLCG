/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23193
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
    var_20 = ((/* implicit */unsigned short) ((207840868U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)2047)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)82))) > (((arr_5 [i_0 - 2] [i_0 + 1] [i_0 - 4]) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 1] [i_0 - 4])))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2047))) : (arr_3 [i_1] [i_1])))) ? (((/* implicit */long long int) 4294967295U)) : (((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */long long int) (-(-1843509355)))) : (((arr_9 [i_0 - 2] [i_0 + 3]) - (var_9)))))));
                    var_23 = arr_7 [i_0] [i_1] [i_1] [i_2];
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_0 - 1] [i_1] [i_1] [i_0 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)216))));
                        arr_13 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) != (((/* implicit */int) arr_1 [i_3])))))));
                        arr_14 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) max((8U), (((/* implicit */unsigned int) 1946587693)))))) ? (((arr_9 [i_0 + 1] [i_0 + 2]) | (((/* implicit */long long int) max((4036317393U), (((/* implicit */unsigned int) 853479180))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (-1946587694) : (((/* implicit */int) var_16)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        arr_18 [i_0 - 3] [i_1] [i_1] = ((/* implicit */signed char) arr_11 [i_0 + 2]);
                        arr_19 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((short) (_Bool)1));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_22 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 1843509354))));
                        var_24 = ((/* implicit */int) (unsigned char)195);
                        var_25 = ((/* implicit */unsigned short) max((min((4112292453572249819ULL), (((/* implicit */unsigned long long int) 1600763006)))), (((/* implicit */unsigned long long int) ((arr_9 [i_0 - 3] [i_5 - 1]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))))))));
                        var_26 = (~(var_2));
                    }
                }
                for (unsigned char i_6 = 1; i_6 < 10; i_6 += 2) 
                {
                    var_27 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 - 4])))));
                    var_28 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) & (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_11 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3767)))));
                }
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) ((unsigned int) -1187755017596248340LL));
                                var_30 = ((/* implicit */unsigned int) ((unsigned short) 1499723233));
                            }
                        } 
                    } 
                } 
                arr_31 [i_1] [i_1] [i_1] = ((/* implicit */int) 4294967279U);
                var_31 ^= ((/* implicit */unsigned short) max((min((arr_16 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1]), (arr_16 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]))), (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) max(((unsigned short)64287), (((/* implicit */unsigned short) (_Bool)1))));
}
