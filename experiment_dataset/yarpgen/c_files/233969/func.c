/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233969
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (unsigned char)12)))))) >= (arr_0 [i_0])));
        var_15 = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) (unsigned char)137)) ? (arr_0 [i_0]) : (var_7))) | (((/* implicit */unsigned long long int) var_2))))));
    }
    for (int i_1 = 3; i_1 < 18; i_1 += 4) 
    {
        arr_6 [9] = ((/* implicit */short) (~((+(9223372036854775807LL)))));
        arr_7 [i_1 - 2] [i_1 - 1] = ((/* implicit */signed char) min((arr_2 [i_1 + 1] [i_1 - 1]), ((~(arr_5 [i_1 + 2])))));
        var_16 += ((/* implicit */short) max((((/* implicit */long long int) min((arr_2 [i_1] [i_1 - 3]), (142938992)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) 4235285545U)) : (arr_3 [i_1])))) ? (9223372036854775799LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(signed char)4])) ? (417330215) : (arr_5 [i_1]))))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_18 = 417330204;
                                var_19 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_12)), (var_10))), (((/* implicit */unsigned long long int) (short)-22513)))))));
                                var_20 ^= ((/* implicit */unsigned int) -9223372036854775798LL);
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_3] = ((/* implicit */unsigned char) max((12505151179212271741ULL), (((((/* implicit */_Bool) 4110905982U)) ? ((-(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -254189347))))))));
                    var_21 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) 9223372036854775798LL)));
                    var_22 = ((/* implicit */int) var_9);
                    arr_22 [(_Bool)1] [(unsigned short)8] [i_3] [i_4] = ((/* implicit */short) (~(-1304334277)));
                }
            } 
        } 
    } 
    var_23 ^= ((int) min((((((/* implicit */_Bool) (short)3968)) ? (((/* implicit */unsigned long long int) var_2)) : (var_7))), (((/* implicit */unsigned long long int) ((short) var_10)))));
}
