/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50827
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
    var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) var_4)), ((short)27099)))) - ((~(((/* implicit */int) (unsigned char)14))))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63392))))) : ((-(((/* implicit */int) (signed char)39))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [(unsigned short)13] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (arr_8 [i_0] [i_0] [i_1] [i_2]) : (((((/* implicit */_Bool) arr_6 [i_0] [i_2 - 1] [i_2 - 2] [i_2])) ? (arr_8 [i_2 - 1] [i_2 - 3] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40)))))));
                    var_17 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_2] [i_2 - 2] [i_2 - 2])) == (((/* implicit */int) arr_6 [9LL] [i_2 - 2] [i_2 - 2] [i_2 + 1])))))));
                    var_18 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) (signed char)99)))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-((-(((/* implicit */int) ((short) var_6))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            for (unsigned short i_5 = 1; i_5 < 8; i_5 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) (unsigned char)154);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 4; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (((~(((/* implicit */int) (_Bool)1)))) & ((-((+(((/* implicit */int) var_1))))))));
                                var_22 = ((((/* implicit */_Bool) arr_3 [i_7])) ? (((((/* implicit */int) (signed char)39)) & (((/* implicit */int) arr_1 [i_3] [i_4])))) : (((int) arr_6 [i_4] [i_7 + 1] [i_7] [(signed char)9])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) -2222386723165788614LL);
    var_24 = ((/* implicit */long long int) var_11);
}
