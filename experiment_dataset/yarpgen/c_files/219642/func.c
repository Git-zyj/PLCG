/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219642
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
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((signed char) (short)-25524))) <= (((var_15) % (((/* implicit */int) (unsigned char)121))))))) < (((/* implicit */int) arr_7 [i_0])))))));
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((min((arr_6 [i_0] [(short)15] [(_Bool)1] [i_3] [i_4]), (((/* implicit */unsigned int) var_0)))) + (((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 2] [i_1 + 2] [i_2]))) * (arr_6 [i_0] [i_0] [i_0] [i_3 - 2] [i_4]))) - (((/* implicit */unsigned int) ((var_4) + (((/* implicit */int) arr_5 [i_0 - 4] [(unsigned short)1] [(unsigned short)18]))))))))))));
                                var_21 = ((/* implicit */unsigned char) var_3);
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-81))))) < (((int) arr_5 [(short)17] [i_2 - 3] [i_1 + 1])))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) <= (arr_6 [i_1] [i_2 - 1] [i_2] [i_1 - 1] [i_0 - 2])))), ((((~(((/* implicit */int) (unsigned char)127)))) | (((/* implicit */int) var_6))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_24 = ((/* implicit */short) (~(min((var_15), (((/* implicit */int) arr_7 [i_5]))))));
        arr_13 [i_5] [i_5] = var_1;
    }
    for (int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        arr_16 [i_6] = (((+(((/* implicit */int) arr_1 [i_6])))) / (((((/* implicit */int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)121)))) & (min((((/* implicit */int) var_13)), (var_15))))));
        var_25 |= ((/* implicit */unsigned char) min((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_9)))))), (max((arr_10 [i_6] [i_6] [i_6] [i_6] [(short)8]), (-2126451469)))));
        arr_17 [i_6] = ((((/* implicit */_Bool) ((signed char) (signed char)81))) || (((min((-1185464220), (((/* implicit */int) arr_8 [i_6])))) < (((int) var_18)))));
    }
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((((/* implicit */_Bool) (signed char)81)) || (((/* implicit */_Bool) (signed char)-81)))))))));
}
