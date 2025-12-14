/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231421
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */int) ((max(((+(18446744073709551598ULL))), (((17293822569102704640ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))));
            /* LoopSeq 3 */
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) -2552241619793845112LL)) ? (4294967295U) : (3324532052U))))))))));
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 4256630044U)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) arr_7 [i_0])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_4 [7U] [(short)5])))) * (((((/* implicit */_Bool) (unsigned short)59919)) ? (18446744073709551585ULL) : (((/* implicit */unsigned long long int) 21U)))))) : (((/* implicit */unsigned long long int) (+(max((3623510839U), (((/* implicit */unsigned int) (unsigned char)202)))))))));
            }
            for (short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((short)-3469), (((/* implicit */short) (signed char)-31))))) + (((-883111122) + (-418760930)))));
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) min((-9223372036854775806LL), (((/* implicit */long long int) (_Bool)1))))) ? (max((3ULL), (((/* implicit */unsigned long long int) 444027392U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_6 [3U] [i_1] [2] [(signed char)10])) / (6U)))))) << (((/* implicit */int) (_Bool)0)))))));
                var_15 = ((/* implicit */_Bool) ((max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-3680))))), (((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */int) (signed char)-7)) : (990358959))))) << ((((+(((((/* implicit */int) (_Bool)1)) | (arr_6 [i_0] [i_0] [i_0] [i_3]))))) + (1010848434)))));
            }
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                arr_16 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 20ULL)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) 332650671U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49804))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) (short)-5029)))))));
                var_16 = (-(((/* implicit */int) (_Bool)1)));
                var_17 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_4])) >= (((/* implicit */int) ((((/* implicit */int) (short)3445)) != (-883111122))))));
            }
            var_18 = ((/* implicit */unsigned int) (((+(((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_1])) / (2089351330368465957ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)32))))))));
        }
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (signed char)-7))));
        arr_17 [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (short)-3469))))));
    }
    var_20 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))) ? (990358959) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -990358940)) > (11511332469612846098ULL)))))));
}
