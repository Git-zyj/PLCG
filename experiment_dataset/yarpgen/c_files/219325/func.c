/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219325
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)132), ((unsigned char)153)))) ? (((((/* implicit */_Bool) (signed char)106)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3915))))) : (var_6))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_12 |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1])) ? (var_0) : (((/* implicit */int) (unsigned short)37284))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_2 [i_0] [i_1] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-32759), ((short)3889)))))))));
                                var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_2 [i_2 - 1] [i_1] [i_1]) <= (arr_2 [i_2 + 1] [7U] [7LL])))), (((((/* implicit */_Bool) arr_2 [i_2 - 1] [(signed char)3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))) : (33554176U)))));
                                arr_12 [i_4] [i_3] [7] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) (unsigned char)0))));
                                arr_13 [i_1] [i_1] [i_4] [i_4] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(-226366895)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)10413)) > (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_6 [i_0] [(short)7] [i_0] [11])) ? (var_6) : (((/* implicit */unsigned long long int) arr_9 [i_0])))))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_5), ((unsigned char)220)))), (arr_0 [7ULL] [i_1]))))));
                                var_14 = ((/* implicit */unsigned long long int) min((((arr_9 [i_2 - 1]) | (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_3])) ? (((/* implicit */int) (short)-6368)) : (((/* implicit */int) (unsigned short)16383)))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4] [i_1 - 1])) && (((/* implicit */_Bool) arr_0 [i_2] [i_1 - 1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */short) var_1);
                            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_0)), (var_8))) >> (((((/* implicit */int) var_7)) - (57))))))));
                            arr_19 [i_1] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_17 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])))) & (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (signed char)111))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(short)2])) ? (5233949415400134221LL) : (((/* implicit */long long int) arr_5 [i_1] [i_0] [i_0]))))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_5 [i_0] [(signed char)11] [i_0])))) : (arr_2 [i_0] [7LL] [i_0]))) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1] [(short)0] [i_1] [i_0] [i_0]))) : (var_8)))) ? (((/* implicit */int) ((unsigned char) var_4))) : ((~(((/* implicit */int) arr_7 [i_0] [5ULL])))))))));
                var_18 = ((/* implicit */long long int) max((var_18), (arr_2 [i_1 - 2] [i_1 + 1] [i_1 + 1])));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned long long int) var_8);
}
