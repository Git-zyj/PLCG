/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220312
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
    var_18 -= ((/* implicit */unsigned char) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) (~(1073741823U)));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_2)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_0 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (1073741812U))))));
                    var_21 = ((/* implicit */signed char) var_13);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-2161)))))));
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        var_23 *= ((/* implicit */unsigned short) (-((+(min((var_8), (var_2)))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 14; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_19 [i_3] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) (~((((_Bool)1) ? (1073741823U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2181)))))));
                                var_24 = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) min((arr_15 [(signed char)7] [i_5] [i_4] [i_3]), ((~(((/* implicit */int) var_14))))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */int) (short)-2159))))) | (((((/* implicit */_Bool) var_15)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        arr_23 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_3))))), (min((1073741823U), (((/* implicit */unsigned int) arr_22 [i_3] [12LL] [i_3] [i_3] [i_3])))))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)35237)) : ((~((-(((/* implicit */int) arr_22 [i_3] [i_4] [i_4] [i_4] [(_Bool)1]))))))));
                        var_26 ^= var_2;
                    }
                    var_27 |= ((/* implicit */int) (unsigned short)30306);
                }
            } 
        } 
        arr_24 [i_3] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) (short)2160)), (1870565016U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)15429)))));
        arr_25 [(unsigned char)10] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((631586975673972759ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-392))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30283)) / (((/* implicit */int) (unsigned char)113)))))));
        var_28 = arr_0 [i_3];
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 3) 
    {
        var_29 = arr_27 [i_9] [i_9];
        arr_28 [i_9] = ((/* implicit */unsigned short) ((_Bool) (short)2159));
    }
}
