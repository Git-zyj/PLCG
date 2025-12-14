/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202953
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
    var_11 = ((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (var_8)))) == (var_9))) && (((/* implicit */_Bool) (((+(((/* implicit */int) var_10)))) ^ (((/* implicit */int) max((var_0), (((/* implicit */short) (signed char)-107)))))))));
    var_12 *= ((/* implicit */unsigned short) ((signed char) max((max((4161266551U), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) var_6)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 1])))))) < (((((/* implicit */_Bool) arr_10 [i_1] [i_3] [i_3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 3]))) : (var_8)))));
                        var_14 *= ((/* implicit */short) ((((((/* implicit */int) (unsigned short)60163)) & (((/* implicit */int) arr_11 [i_3])))) & (((/* implicit */int) max((arr_11 [i_3]), (arr_11 [i_3]))))));
                        var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (((-(((/* implicit */int) var_2)))) * ((+(((/* implicit */int) arr_11 [i_1]))))))), ((-(arr_2 [i_0 - 1] [i_1 + 3])))));
                    }
                    for (short i_4 = 4; i_4 < 22; i_4 += 3) 
                    {
                        arr_16 [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (arr_12 [i_1]))))) ? (arr_5 [i_0 + 1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0 + 2])))));
                        var_16 = ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_3 [i_4]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_1]))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) == (2147352576)))), (min((((/* implicit */unsigned int) (+(2147352576)))), (((arr_4 [i_0] [i_1]) & (((/* implicit */unsigned int) -2147352576))))))));
                        var_18 = (unsigned short)16031;
                        var_19 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_14 [i_1 + 1] [i_0 + 1]))))));
                        var_20 = ((/* implicit */short) arr_4 [i_0 + 2] [i_1]);
                    }
                    arr_19 [i_1] [i_1] = ((/* implicit */unsigned int) min((((unsigned long long int) arr_8 [i_1])), (((/* implicit */unsigned long long int) arr_8 [i_1]))));
                    var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((signed char) (unsigned char)4)), (((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) arr_3 [(_Bool)1])))))))) ? (((((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) / (min((arr_2 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) 4095)))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) * (((/* implicit */int) var_4)))) | ((-(((/* implicit */int) arr_13 [i_0] [i_0 - 1] [(unsigned short)0] [i_2])))))))));
                }
            } 
        } 
    } 
}
