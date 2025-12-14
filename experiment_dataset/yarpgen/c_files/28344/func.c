/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28344
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((max((-1275700321), (((/* implicit */int) var_3)))) >> (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) var_3)))))));
    var_18 = ((/* implicit */signed char) ((((((/* implicit */int) min((((/* implicit */short) var_13)), ((short)-10467)))) ^ (((/* implicit */int) (_Bool)1)))) & (((((/* implicit */int) (_Bool)1)) & (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_19 = var_9;
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) arr_7 [i_0] [i_2] [i_1] [i_0])) - (248))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -7409848265471354049LL)))))) < ((((!(((/* implicit */_Bool) var_10)))) ? (arr_4 [i_0] [i_0 - 1]) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_13 [i_1])), (-324061363))))))));
                            var_22 = ((/* implicit */unsigned long long int) (+(7931204986809713317LL)));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_7)))), ((+(((/* implicit */int) arr_1 [i_0] [i_0 - 1])))))))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_1] = ((/* implicit */short) min((((((/* implicit */int) max(((unsigned char)251), (((/* implicit */unsigned char) arr_0 [5ULL] [i_1]))))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)15872)))))), (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1]))));
                var_24 += ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)18689)));
                var_25 = ((/* implicit */unsigned short) min((var_25), (max((min((((/* implicit */unsigned short) (short)-22064)), ((unsigned short)0))), (((/* implicit */unsigned short) (_Bool)1))))));
            }
        } 
    } 
    var_26 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) ((unsigned char) var_10))) : (min((((/* implicit */int) var_8)), (var_5))))))));
}
