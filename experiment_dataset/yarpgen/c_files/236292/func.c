/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236292
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_0] &= ((/* implicit */long long int) arr_3 [i_0] [i_0]);
            arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_4 [i_0])) ? (6940245941340514463ULL) : (((/* implicit */unsigned long long int) 1025022414))))))) ? (((/* implicit */int) (unsigned short)28023)) : (((/* implicit */int) ((_Bool) arr_2 [i_0 + 1] [i_0 - 1])))));
            arr_9 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) 1025022401);
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_13 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((short) -1027609248))), (((((/* implicit */_Bool) ((arr_3 [i_0 + 1] [2U]) >> (((-1025022414) + (1025022436)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
            var_14 *= ((/* implicit */unsigned short) (+(2926286852U)));
        }
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (long long int i_4 = 2; i_4 < 13; i_4 += 3) 
            {
                {
                    arr_19 [i_3] = ((/* implicit */unsigned char) arr_12 [i_4 - 1] [i_4 - 1] [i_0 + 1]);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_15 -= min((((/* implicit */int) ((((/* implicit */_Bool) min((-1025022422), (-1025022390)))) && (((/* implicit */_Bool) (unsigned char)141))))), (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) 453113485)) && (((/* implicit */_Bool) (unsigned char)0))))) : (((/* implicit */int) (unsigned char)245)))));
                                arr_25 [i_0] [i_3] [i_4] [i_3] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_24 [i_3] [2ULL] [i_4] [i_4 - 1] [i_3]), (arr_12 [i_4] [i_4 + 1] [i_3]))))));
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)243)) >= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) (_Bool)1))))))) : (((min((arr_3 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) (_Bool)1)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (short)-26538)) : (1025022405)))))))))));
                                arr_26 [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_17 [(signed char)5] [i_3])), (arr_5 [i_6] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (3018033550U)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-99)), (min((arr_5 [i_4] [i_6]), (((/* implicit */unsigned short) (signed char)111))))))) : (min((2147483647), (((/* implicit */int) min(((signed char)-103), ((signed char)51))))))));
                                arr_27 [i_6] [i_3] [i_3] [i_0 - 1] = 2435967288U;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 *= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (signed char)105)) || (((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_9)))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                {
                    arr_33 [i_0 - 1] [(unsigned char)10] [6ULL] = ((/* implicit */unsigned long long int) ((int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))));
                    var_18 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [2])) ? (((/* implicit */int) (unsigned short)29971)) : (((/* implicit */int) (unsigned short)1252))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)6), (((/* implicit */signed char) var_1)))))) : (min((((/* implicit */unsigned int) var_5)), (4270102556U))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) + (((2U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */_Bool) var_11);
}
