/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4252
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) max(((signed char)85), (min(((signed char)-33), ((signed char)-104)))))) * (((/* implicit */int) (signed char)33))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-84)) + (2147483647))) << (((((/* implicit */int) ((signed char) arr_5 [i_0] [i_1]))) - (26)))));
                var_15 *= min(((signed char)63), (min(((signed char)-67), ((signed char)107))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        var_16 *= ((/* implicit */signed char) (-((((~(((/* implicit */int) arr_4 [i_1])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                        var_17 = ((/* implicit */signed char) (-(((((/* implicit */int) (signed char)67)) | (((/* implicit */int) (signed char)90))))));
                        var_18 = arr_4 [i_3];
                        arr_13 [i_0] [(signed char)0] [i_0] = var_14;
                    }
                    for (signed char i_4 = 2; i_4 < 15; i_4 += 3) 
                    {
                        arr_16 [i_1] [i_0] = var_10;
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-18)) ? (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (signed char)-113)))) : (((/* implicit */int) (signed char)-87)))))));
                        var_20 = ((signed char) (~(((/* implicit */int) var_2))));
                    }
                    var_21 *= min(((signed char)113), ((signed char)115));
                    var_22 *= max((var_6), (max((var_10), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_23 |= ((signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) arr_5 [i_0] [i_0]))));
                }
                for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) max(((signed char)7), ((signed char)-102)))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) var_1)))))))));
                    arr_19 [i_5] [i_5] = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])))), ((~(((/* implicit */int) (signed char)86)))))), ((~(((/* implicit */int) ((signed char) var_0)))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_5))))))) >> (((((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_4))))) | (((/* implicit */int) var_10)))) + (8)))));
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            {
                var_26 += max((((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)29))))) && (((/* implicit */_Bool) arr_23 [i_7]))))), (arr_21 [i_6]));
                var_27 = ((/* implicit */signed char) min((var_27), (((signed char) ((((/* implicit */int) ((signed char) (signed char)103))) & (((/* implicit */int) var_3)))))));
            }
        } 
    } 
}
