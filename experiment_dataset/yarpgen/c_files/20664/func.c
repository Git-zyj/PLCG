/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20664
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_17 &= ((((/* implicit */int) ((_Bool) arr_0 [10U]))) > (((((/* implicit */_Bool) (unsigned short)52234)) ? (((/* implicit */int) arr_0 [8U])) : (((/* implicit */int) (unsigned short)52239)))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)13302))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_12)))) : (((((unsigned long long int) arr_1 [13U])) << (((/* implicit */int) arr_1 [i_0 - 3]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_19 |= ((/* implicit */unsigned char) min(((unsigned short)13284), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [(short)18]))) <= (var_15))) && (arr_1 [i_2]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52248))) ^ (var_8))))))));
                                var_21 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_3 + 3])) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((((/* implicit */_Bool) (short)-6358)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)13301)) && (((/* implicit */_Bool) var_4))))))) : ((+(var_1))));
                                var_22 = ((/* implicit */long long int) 2058299951U);
                                arr_10 [i_3] [i_3] [(unsigned short)16] [i_1 - 2] [i_4] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) ((unsigned char) (unsigned char)255)))))) ^ (302297201U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned long long int) (unsigned short)52210)), (((((/* implicit */_Bool) var_11)) ? (var_15) : (var_15))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) - (max((3045122990U), (var_2))))))));
}
