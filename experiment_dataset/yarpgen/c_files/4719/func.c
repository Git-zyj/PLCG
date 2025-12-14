/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4719
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
    var_20 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_7)), ((+(((/* implicit */int) (_Bool)1)))))) / (((var_2) / (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)2047))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_21 = ((/* implicit */_Bool) (unsigned char)31);
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_5 [(short)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) var_2)) : (max((((/* implicit */unsigned long long int) (signed char)9)), (17309000879844283213ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_18)))))));
            arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((_Bool) (-(6150690275735633809ULL))))) : ((~(((/* implicit */int) (short)11879)))));
            var_22 = (!(((/* implicit */_Bool) ((((int) (signed char)3)) >> (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-5942382810837891821LL))) + (5942382810837891851LL)))))));
            var_23 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned int) var_1)))))), (((max((-5942382810837891817LL), (var_15))) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)127))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_24 *= ((/* implicit */int) ((max((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)48)), (-1360810989)))), (((unsigned int) (short)25619)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) (unsigned short)65535)), (arr_7 [i_0] [i_0]))))))));
            /* LoopSeq 3 */
            for (unsigned char i_3 = 2; i_3 < 23; i_3 += 3) 
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (((_Bool)1) || (((/* implicit */_Bool) (short)15479)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_3]))))) : (arr_11 [i_3 - 1] [i_3] [i_3 - 1] [i_3 + 2])));
                var_26 = ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */long long int) min((max((((/* implicit */int) arr_12 [i_0] [i_2] [i_3])), (var_16))), (((/* implicit */int) (short)15480))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (arr_7 [i_0] [(unsigned char)11]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)157)))))));
                arr_13 [i_3] [19U] [i_3] [i_0] = min((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) (_Bool)1)), (var_4))));
                var_27 = min((((unsigned int) min((arr_11 [i_0] [i_3] [i_3] [i_2]), (((/* implicit */long long int) 1217174435))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_4 [i_3 + 2])))));
                var_28 = ((/* implicit */short) ((((/* implicit */int) (short)32767)) >= (((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) arr_1 [i_2])), (-9167497113795201194LL)))))));
            }
            /* vectorizable */
            for (unsigned int i_4 = 1; i_4 < 22; i_4 += 4) 
            {
                var_29 = ((/* implicit */long long int) var_7);
                var_30 |= ((((/* implicit */unsigned int) (((-2147483647 - 1)) / (var_16)))) | (0U));
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4 + 3] [i_2])) ? (((((/* implicit */_Bool) 0U)) ? (8180715159397897405LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
            }
            for (int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    arr_24 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */signed char) arr_9 [i_0] [i_0] [(unsigned char)22])), (var_10))))));
                    arr_25 [i_0] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (1619896561U)))) ? (((/* implicit */int) arr_12 [i_2] [i_5] [i_6])) : (((((/* implicit */int) (unsigned short)8521)) * (((/* implicit */int) (short)-6051)))))), (((/* implicit */int) ((arr_18 [i_0] [i_2] [i_6]) && (((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) (unsigned char)109)))))))));
                }
                for (unsigned char i_7 = 1; i_7 < 24; i_7 += 3) 
                {
                    arr_29 [i_7] [i_2] [i_5] [(unsigned char)23] = ((/* implicit */long long int) arr_19 [i_2]);
                    arr_30 [i_0] [i_0] [i_7] [(short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 10694297686229709660ULL)) ? (arr_21 [i_0] [i_2] [i_5]) : (((/* implicit */unsigned int) 2131441039))))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_16 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])), ((unsigned char)9))))));
                }
                for (short i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    arr_33 [(short)10] [(short)10] [i_5] = ((/* implicit */signed char) ((arr_19 [i_8]) ? (max(((~(arr_1 [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)34747)) >= (((/* implicit */int) (unsigned short)65535))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))));
                    var_32 = ((/* implicit */unsigned char) arr_10 [i_0] [i_0]);
                }
                var_33 = ((/* implicit */short) max((((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-41)), (var_4)))) > (var_17))))));
            }
        }
    }
}
