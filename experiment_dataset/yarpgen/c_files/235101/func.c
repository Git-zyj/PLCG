/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235101
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) var_4);
        var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0 - 1]))) - (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_1 [12U]))))))));
        var_16 = ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (_Bool)1)))) << (((arr_0 [i_0 - 1] [i_0]) - (652512072U))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (3633024583158092666LL) : (((/* implicit */long long int) var_12))))))))));
        arr_2 [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1])) * (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) (-(var_6)))) : ((-(arr_0 [i_0] [i_0 + 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)46))))) : ((+(3154592563299169233ULL))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) (_Bool)1);
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_1] [i_1]))));
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) 1044480U))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */unsigned long long int) var_6)) : (max((arr_5 [i_2]), (arr_8 [i_2] [(signed char)7]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3)))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (arr_5 [i_2])))) ? (min((arr_3 [i_2]), (arr_3 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                arr_15 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) arr_10 [i_2] [i_3] [i_2]);
                var_20 = ((/* implicit */short) var_8);
                var_21 = ((/* implicit */signed char) arr_13 [(unsigned short)9] [(unsigned short)9] [i_2]);
            }
            arr_16 [i_3] = ((/* implicit */signed char) (+(1532913766238331439ULL)));
            arr_17 [i_2] [i_3] [i_3] |= ((/* implicit */unsigned short) (((~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)48)), ((unsigned short)0)))))) <= (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (unsigned short)1621))))));
            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((1501884727), (((/* implicit */int) arr_12 [i_2] [(signed char)5] [i_2] [i_2]))))))) ? (min((((unsigned int) (unsigned short)5731)), (((/* implicit */unsigned int) ((unsigned char) arr_3 [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        }
        for (short i_5 = 3; i_5 < 12; i_5 += 3) 
        {
            var_23 = (_Bool)1;
            arr_21 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_20 [i_5 - 3] [i_5 + 4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5] [i_2] [i_5 + 1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)-25037)))))) : (((max((((/* implicit */unsigned long long int) var_0)), (var_5))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
            var_24 = ((((/* implicit */_Bool) 8388607U)) && (((/* implicit */_Bool) (short)25036)));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6] [i_6] [i_6])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (10074600519079570712ULL))) < (((((/* implicit */_Bool) 8388627U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1311278093)) && (((/* implicit */_Bool) var_10)))))) : (min((arr_3 [i_6]), (((/* implicit */unsigned long long int) var_1))))))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)4801)) : (((/* implicit */int) (signed char)(-127 - 1)))));
    }
    var_27 = ((/* implicit */signed char) 3982299723U);
    var_28 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (((~(((/* implicit */int) var_1)))) & (var_6)))), (var_10)));
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)14256))) <= (((((/* implicit */_Bool) var_3)) ? (6220221893876371240LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) != ((-(((/* implicit */int) ((short) (unsigned short)61581)))))));
}
