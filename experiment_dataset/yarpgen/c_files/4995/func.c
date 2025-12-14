/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4995
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 1144406224))) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_7))))) : (-7039631091177588640LL)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((max(((-(((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (signed char)113)))))) / (((/* implicit */int) arr_1 [i_0]))));
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    arr_7 [i_1] [i_0] = ((/* implicit */short) 1144406224);
                    var_18 ^= ((/* implicit */short) (-(-7039631091177588650LL)));
                }
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    arr_12 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (short)-13694)))), (((/* implicit */int) ((unsigned short) (short)-25946)))));
                    arr_13 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)2)) / (((/* implicit */int) arr_1 [i_3]))))) ? (min((((/* implicit */int) arr_1 [i_0])), (arr_9 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0]))))))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */short) arr_6 [i_0] [i_0] [i_0]);
                                arr_19 [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(-765508640)));
                                var_20 = (-(1940499466U));
                                var_21 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (short)-20821)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)247)), (arr_18 [i_3]))))) : ((~(arr_16 [i_5] [i_1] [i_1] [i_4] [i_4] [i_3]))))));
                            }
                        } 
                    } 
                }
                var_22 ^= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34561))) <= (1367319988U))));
                arr_20 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            {
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_7])) && (((/* implicit */_Bool) ((signed char) ((long long int) arr_25 [i_6] [i_6]))))));
                var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_7] [i_7]))));
                arr_26 [i_6] = ((/* implicit */long long int) -1144406208);
                var_26 *= ((/* implicit */signed char) ((unsigned char) arr_24 [i_7]));
                var_27 ^= ((/* implicit */signed char) min((arr_23 [i_6] [i_6]), (((/* implicit */long long int) (~(min((((/* implicit */int) (short)-17335)), (1144406224))))))));
            }
        } 
    } 
}
