/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224655
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
    var_10 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_0))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        var_11 = (-(((/* implicit */int) ((((/* implicit */_Bool) 6846934541373067401ULL)) && (((/* implicit */_Bool) var_1))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [(unsigned char)4] [i_1] [i_0] = ((((/* implicit */int) (signed char)32)) / (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (-238443050) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0] [i_2 - 1])))));
                    var_12 *= ((/* implicit */signed char) arr_0 [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_13 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
                                var_14 ^= ((/* implicit */short) min((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) arr_0 [i_0] [i_1])), (max((var_3), (((/* implicit */long long int) arr_1 [i_0]))))))));
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0 + 1]))) ? (((((((/* implicit */_Bool) -5)) ? (((/* implicit */long long int) 16777215U)) : (8149082955253630370LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)15967)) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_4])))))) : (((((/* implicit */_Bool) (signed char)18)) ? (var_3) : (var_3)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_0] [i_0 + 2] [i_0 - 2])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0] [(signed char)1] [i_0 - 1] [i_0]))))) ? (((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])))) : (((/* implicit */int) var_6))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) max((max((((/* implicit */int) arr_15 [i_5] [i_5])), (((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (arr_14 [i_5]) : (((/* implicit */int) arr_15 [i_5] [i_5])))))), (((/* implicit */int) arr_15 [i_5] [i_5]))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((((/* implicit */int) arr_15 [i_5] [i_5])) & (((/* implicit */int) arr_15 [i_5] [i_5])))), (((((/* implicit */int) arr_15 [i_5] [i_5])) | (((/* implicit */int) arr_15 [i_5] [i_5])))))))));
        arr_16 [i_5] = ((/* implicit */unsigned char) arr_15 [i_5] [i_5]);
    }
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        arr_20 [i_6] = ((/* implicit */signed char) ((14099269046222496927ULL) << (((/* implicit */int) (short)0))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (min((arr_3 [i_6] [i_6]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((8149082955253630387LL), ((-9223372036854775807LL - 1LL))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-14690))))))))))));
        arr_21 [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6]))) : (arr_11 [7LL] [i_6]))) + (((/* implicit */long long int) min(((+(1002542946U))), (4050261070U))))));
        var_19 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-18168))));
    }
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) % (((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) | (max((var_3), (((/* implicit */long long int) var_7)))))))))));
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        for (int i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            {
                var_21 ^= ((/* implicit */unsigned char) arr_23 [i_7]);
                var_22 = ((/* implicit */unsigned char) var_8);
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_27 [(short)4])))))) + (((((((/* implicit */_Bool) var_9)) ? (arr_23 [i_7]) : (var_3))) % (((((/* implicit */_Bool) (unsigned char)81)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7] [i_8]))))))))))));
            }
        } 
    } 
}
