/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20326
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_12 |= ((/* implicit */unsigned short) ((((/* implicit */int) (short)7795)) == (((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 134217727)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30965)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9))))) ? (((((/* implicit */int) (unsigned short)65519)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_0 [i_0]))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) 2154739963526086700LL)) ? ((+(((/* implicit */int) max(((unsigned short)65519), (var_6)))))) : (((((/* implicit */_Bool) (unsigned short)20406)) ? (((-134217727) & (((/* implicit */int) (signed char)-62)))) : (((/* implicit */int) (unsigned short)65519)))))))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_2 + 2]))) : (var_10)))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_2 + 2] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) arr_9 [i_4] [i_1] [i_1]))));
                            var_17 -= ((/* implicit */long long int) var_3);
                            arr_13 [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)19905)) && (((/* implicit */_Bool) var_9)))))));
                        }
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned short) arr_3 [i_2 + 1])))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_19 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1309563267)) ? (-825733735) : (((/* implicit */int) (signed char)12)))) > (((int) arr_2 [i_1 - 2]))));
                            var_20 |= ((max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (-2824711049117616652LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1594959046)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (_Bool)1))))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_2 + 2] [i_2 - 1] [i_2])) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_1] [i_5] [i_2])) != (((/* implicit */int) (unsigned short)39))))) : (arr_4 [i_6] [i_0] [i_2 + 1] [i_0])))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_4 [i_1 + 1] [i_2] [i_5] [i_6]))));
                        }
                        for (long long int i_7 = 1; i_7 < 14; i_7 += 2) 
                        {
                            arr_21 [i_2] [i_1 - 2] [i_1] [i_1 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_5] [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_16 [i_1 - 1] [i_1] [i_2 + 1] [i_7 + 3] [i_7] [i_2])) ? (-5034246898254115084LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max(((short)-18916), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) arr_16 [i_2] [i_7] [i_5] [i_2] [i_1 - 2] [i_2])) : (((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_2)))))))));
                            arr_22 [i_0] [i_2] [i_5] [i_2 + 2] [i_2] [i_0] = ((/* implicit */int) arr_0 [i_0]);
                        }
                        var_22 |= ((/* implicit */unsigned int) (signed char)-8);
                        arr_23 [i_0] [i_0] [i_2] [i_2] [i_5] [i_5] = ((/* implicit */signed char) var_8);
                    }
                    arr_24 [i_2] = ((/* implicit */_Bool) 8912172831484205958LL);
                    var_23 += ((/* implicit */long long int) -134217728);
                }
            } 
        } 
    }
    var_24 = ((/* implicit */int) var_9);
    var_25 = ((((1132424270) & (134217724))) % (((/* implicit */int) var_5)));
    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)45130)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) | (((/* implicit */int) max((var_1), (var_1)))))))));
}
