/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41000
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
    var_13 = ((/* implicit */unsigned int) (unsigned char)130);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2992051875U))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2769938744U)) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((14U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) << (((max((var_4), (((/* implicit */unsigned int) var_3)))) - (2917060689U)))))) : ((+(var_9)))));
        var_16 = ((/* implicit */unsigned char) var_12);
        var_17 = ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17)))));
    }
    var_18 = max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((1302915414U), (var_1))))), (((((/* implicit */_Bool) (unsigned char)54)) ? (2992051886U) : (2175119933U))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), ((-(var_7)))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
                {
                    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 1) 
                    {
                        {
                            var_20 = 1302915414U;
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) var_5)))))) ? (((/* implicit */int) ((((2992051884U) << (((2992051889U) - (2992051879U))))) < (arr_10 [i_4 + 1] [i_4] [(unsigned char)14] [i_4 + 1] [i_4] [i_4 + 2])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) < (1302915425U))))));
                            var_22 *= ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_9 [i_4 + 2] [i_4 - 1] [i_3 - 2] [i_1])))), (((/* implicit */int) ((unsigned char) var_2)))));
                            var_23 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1302915420U))))), ((+(1302915414U))));
                            var_24 = ((((/* implicit */_Bool) ((unsigned char) (+(var_1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 3996090855U)))))) ^ (((((/* implicit */_Bool) 2992051861U)) ? (2992051860U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))) : (max((((1302915418U) >> (((((/* implicit */int) arr_6 [(unsigned char)2] [(unsigned char)2] [3U])) - (232))))), (((unsigned int) var_2)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
