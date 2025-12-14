/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206479
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
    var_16 = ((/* implicit */_Bool) 9223372036854775802LL);
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        var_18 ^= ((/* implicit */_Bool) (short)15433);
                        arr_12 [i_0 + 1] [i_1] [i_2 + 1] [i_0] = ((/* implicit */_Bool) max((((unsigned short) arr_4 [i_0])), (max((((/* implicit */unsigned short) var_11)), (arr_9 [i_0 + 1] [4ULL] [i_2 + 1] [i_3 + 1])))));
                        var_19 = ((/* implicit */long long int) (-(((arr_3 [i_0] [i_0 + 1] [i_3 - 2]) | ((-(((/* implicit */int) var_14))))))));
                    }
                    for (unsigned short i_4 = 3; i_4 < 16; i_4 += 2) 
                    {
                        arr_17 [i_0 + 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)128), (((/* implicit */unsigned char) (signed char)123))))) && (((/* implicit */_Bool) ((min((arr_6 [i_0 + 1] [i_0] [i_2 + 1] [i_4]), ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_1 + 1] [i_2 + 1] [i_0])), ((unsigned char)8))))) : (var_4))))));
                        arr_18 [i_0] [i_0] = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-5925)) : (arr_3 [i_0] [i_0] [i_2 + 1]))) + (((((/* implicit */_Bool) var_7)) ? (var_1) : (arr_3 [i_0] [i_0] [i_0]))))), (((/* implicit */int) var_3))));
                        var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)5924)) ? (((/* implicit */int) (short)-5921)) : (((/* implicit */int) (unsigned short)3976))))));
                    }
                    var_21 = ((((/* implicit */int) var_10)) | (((/* implicit */int) max((max((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_11)))), (max(((unsigned short)54645), (((/* implicit */unsigned short) arr_0 [i_0 + 1]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 17; i_5 += 3) 
    {
        for (unsigned int i_6 = 3; i_6 < 17; i_6 += 2) 
        {
            {
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) (short)15433)) && (((/* implicit */_Bool) (unsigned char)236))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_12))))))) ^ (max((((/* implicit */int) (unsigned short)14544)), (-1214146542))))))));
                var_23 = ((/* implicit */unsigned short) ((int) min((((/* implicit */unsigned short) (unsigned char)0)), (arr_7 [i_5 - 1]))));
                var_24 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_9))))))));
            }
        } 
    } 
}
