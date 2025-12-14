/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192280
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
    var_12 -= ((/* implicit */unsigned short) max((max((((/* implicit */short) (!(((/* implicit */_Bool) (short)-16026))))), ((short)-16026))), (((/* implicit */short) ((signed char) (-(((/* implicit */int) var_7))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (-5255387267036564054LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)16025)) ? (((/* implicit */int) var_11)) : (984112371))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */unsigned int) ((((((/* implicit */int) (short)16026)) + (((/* implicit */int) (short)16026)))) | (((/* implicit */int) var_4))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_0] [(short)7] [i_4] = ((/* implicit */long long int) ((short) var_11));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_4 + 3] [i_4 + 1] [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_4 + 1] [i_4])) ? (arr_7 [i_0] [i_4 + 3]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                                var_16 = ((/* implicit */unsigned short) ((unsigned long long int) var_11));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0]))));
        var_17 = ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0] [i_0]);
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_11))));
    }
    for (signed char i_5 = 1; i_5 < 15; i_5 += 4) 
    {
        var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(var_6)))) && (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-16027)) : (((/* implicit */int) var_9)))) <= (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_14 [i_5 + 3])) : (((/* implicit */int) arr_13 [i_5 - 1] [i_5]))))))));
        arr_15 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) < (((((/* implicit */_Bool) min((((/* implicit */int) (short)16026)), (286949860)))) ? (((/* implicit */int) arr_14 [i_5 + 3])) : (((/* implicit */int) min(((short)21148), ((short)21148))))))));
    }
    /* vectorizable */
    for (signed char i_6 = 1; i_6 < 15; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 16; i_7 += 2) 
        {
            for (unsigned char i_8 = 2; i_8 < 16; i_8 += 4) 
            {
                {
                    arr_25 [i_8] [(unsigned char)15] [(signed char)15] = ((/* implicit */signed char) var_0);
                    arr_26 [i_6] [i_7 + 2] = (~(((/* implicit */int) arr_14 [i_6 + 2])));
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) var_7);
    }
}
