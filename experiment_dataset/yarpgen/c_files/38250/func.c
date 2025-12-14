/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38250
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
    var_18 = ((/* implicit */unsigned short) max((var_13), (min((((var_5) | (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) var_17))))));
    var_19 ^= ((/* implicit */unsigned int) var_6);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) var_2);
        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)-22367)))) | (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) % (((/* implicit */int) (short)25149))))) : (((((/* implicit */_Bool) var_15)) ? (var_8) : (var_8)))))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) (unsigned char)159)))))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_23 = ((/* implicit */_Bool) arr_2 [i_0]);
            var_24 = ((/* implicit */signed char) var_10);
            var_25 = ((/* implicit */unsigned long long int) ((unsigned char) max((((((/* implicit */unsigned long long int) 31U)) | (5378594294066449478ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14459))) : (var_15)))))));
            var_26 += ((/* implicit */signed char) max((((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 536868864U)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)65472)) | (((/* implicit */int) (short)-17737)))) | (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
        }
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_27 = ((/* implicit */unsigned char) ((long long int) ((((((/* implicit */int) arr_6 [i_2])) % (((/* implicit */int) arr_3 [i_2] [i_2])))) | (((/* implicit */int) min((arr_1 [i_2]), (var_9)))))));
        var_28 = ((/* implicit */int) ((unsigned char) min((((/* implicit */int) arr_2 [i_2])), (((((/* implicit */_Bool) (unsigned char)255)) ? (var_12) : (((/* implicit */int) var_17)))))));
        arr_8 [i_2] = ((/* implicit */signed char) max((((((/* implicit */int) arr_7 [i_2] [(signed char)12])) % (((((/* implicit */int) arr_6 [i_2])) | (((/* implicit */int) arr_2 [i_2])))))), (((/* implicit */int) min((max((arr_1 [i_2]), ((unsigned char)129))), (((/* implicit */unsigned char) (_Bool)0)))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            arr_11 [(signed char)10] [i_2] [i_2] = ((/* implicit */signed char) max(((~(((/* implicit */int) (signed char)-126)))), ((~(((/* implicit */int) arr_4 [i_2] [i_3] [i_2]))))));
            var_29 = ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_5 [i_3]), (arr_5 [i_2])))), (((((/* implicit */_Bool) 11519288844818737243ULL)) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_5 [i_3]))))));
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_0 [i_2] [i_3]), (arr_10 [i_2])))))))));
        }
    }
    for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2143383629U)), (((9223372036854775807LL) | (((/* implicit */long long int) var_10))))));
        var_31 -= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_13 [i_4] [i_4]))) | (max((((/* implicit */int) max(((unsigned short)29196), (((/* implicit */unsigned short) (signed char)0))))), ((+(((/* implicit */int) (unsigned short)65472))))))));
        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) 5693930603190593640ULL))));
        arr_15 [i_4] &= ((/* implicit */unsigned long long int) min((arr_12 [i_4]), (((/* implicit */unsigned int) ((signed char) arr_13 [i_4] [i_4])))));
        var_33 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [i_4] [i_4]), (arr_13 [i_4] [i_4]))))) : (arr_12 [i_4])))) ? (((((/* implicit */unsigned int) 1459313897)) | (((((/* implicit */_Bool) (unsigned char)213)) ? (arr_12 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_4]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [i_4] [i_4]), (arr_13 [i_4] [i_4])))))));
    }
    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (!(((/* implicit */_Bool) 0ULL)))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            {
                var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) ((unsigned char) var_7))))));
                var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) var_5))));
            }
        } 
    } 
}
