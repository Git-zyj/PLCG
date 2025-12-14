/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241482
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_4 [0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)18641))))) || (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122)))))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 + 3]))))) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 2])) <= (((/* implicit */int) arr_3 [i_0 + 3])))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_7 [i_1] [i_0 + 1] [i_0] &= min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((16297883841015690651ULL) | (arr_0 [i_1])))) || (((/* implicit */_Bool) arr_3 [i_0 - 2]))))), (max((max((5U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (signed char)-83)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                arr_11 [i_0] = ((/* implicit */long long int) ((short) var_11));
                arr_12 [i_0] [(short)2] [i_2] [i_1] = ((/* implicit */unsigned int) ((short) arr_5 [i_2] [i_2] [i_2]));
                arr_13 [i_1] = ((/* implicit */_Bool) ((arr_0 [i_0 + 2]) / (var_6)));
            }
            arr_14 [i_0] [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_6 [i_0 + 4] [i_0 + 4]) > (arr_6 [i_0 + 1] [i_0 + 4])))), ((((!(((/* implicit */_Bool) arr_1 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-17522))))) : (arr_0 [i_0])))));
            var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) arr_0 [8U])) ? (arr_8 [(_Bool)1] [(short)1] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))))) : (((/* implicit */long long int) min((arr_1 [i_1]), (arr_1 [i_1]))))))) ? (((unsigned long long int) ((((/* implicit */int) (unsigned short)53548)) + (arr_6 [i_0] [i_0])))) : (((unsigned long long int) (+(((/* implicit */int) var_15)))))));
        }
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0] [i_3] [i_0]))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)75))))) ? (arr_8 [i_0 + 3] [i_0 + 1] [i_0 - 2] [i_0 - 1]) : (min((((/* implicit */long long int) 1373914998U)), (arr_18 [(signed char)2] [i_0 + 3]))))))))));
            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4294967294U)))), (((((/* implicit */long long int) 202076423U)) | (arr_8 [10] [i_0] [10] [i_3]))))))));
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                for (unsigned char i_5 = 3; i_5 < 11; i_5 += 3) 
                {
                    {
                        var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4]))) : (((((/* implicit */_Bool) (-(0U)))) ? (4294967267U) : (0U))));
                        var_21 &= ((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) - (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? ((~(-65151393))) : ((-(((/* implicit */int) arr_5 [i_0] [4U] [3LL])))))))));
                    }
                } 
            } 
        }
        for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            var_22 = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_2)))));
            arr_27 [i_0 + 2] [i_6] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) 17071035616589476728ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (4294967284U))))) : (arr_1 [i_0 - 1]))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114)))));
        }
        var_23 = ((/* implicit */short) ((unsigned char) (~(arr_23 [i_0 + 2] [7U]))));
    }
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8785))) : (4033340448U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))) : (3040264426069304314ULL)))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 7670381269325221047ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_0))))) : ((+(3901338212U)))));
}
