/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42861
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
    var_12 *= ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [(unsigned char)2] [(signed char)1] [(unsigned char)2] = ((/* implicit */short) (!(((/* implicit */_Bool) 7213945423891509024ULL))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [(short)0] = max((((/* implicit */long long int) (short)-11137)), (max((arr_4 [i_3 - 2] [i_3 - 1]), (arr_4 [i_3 + 1] [i_3 - 1]))));
                                arr_15 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-116))) & (12706717507789305964ULL)));
                                arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] = min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-16641)) : (((/* implicit */int) (signed char)-72)))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((arr_7 [i_0] [i_0] [i_0] [10ULL]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    var_13 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)52)) ^ (((/* implicit */int) var_9))))))) ? (((/* implicit */int) ((short) arr_10 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_5])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))));
                    var_14 ^= ((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned char)3]);
                    arr_19 [8ULL] = ((/* implicit */long long int) (signed char)(-127 - 1));
                    arr_20 [i_0] [i_5] = ((/* implicit */unsigned char) ((unsigned long long int) 12706717507789305953ULL));
                }
                var_15 *= ((/* implicit */short) ((max((max((((/* implicit */long long int) arr_3 [i_0] [i_1])), (6183011212259241297LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)12401))))))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        {
                            arr_27 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)11122)), (arr_7 [(unsigned char)10] [i_1] [i_1] [i_7]))))))) != (((((/* implicit */_Bool) (short)-7709)) ? (((/* implicit */int) (short)-31889)) : (((/* implicit */int) (short)-31901))))));
                            arr_28 [i_0] = max(((short)4), ((short)-31889));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max((var_16), (var_9)));
}
