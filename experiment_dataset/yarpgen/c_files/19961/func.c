/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19961
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) var_3);
        arr_2 [(short)13] = ((/* implicit */unsigned int) ((((288230376151711744LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */long long int) ((((/* implicit */int) (short)0)) - (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((long long int) arr_1 [i_0])) : ((+(8745324733012225707LL)))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_5 [i_2]))) || (((/* implicit */_Bool) ((arr_5 [i_1 - 1]) % (((/* implicit */int) (short)24)))))));
            arr_9 [i_1 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)6), (((/* implicit */short) var_3))))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)64)), ((short)0)))) : ((-(((/* implicit */int) (signed char)-112))))))) ? (((/* implicit */unsigned long long int) 134217696)) : ((~(arr_7 [i_1 - 1] [i_1 - 1])))));
            arr_10 [i_1] = ((long long int) max((((/* implicit */unsigned int) ((-1932312371) < (arr_6 [i_2] [i_1])))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (var_2)))));
            arr_11 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-118)) ? (arr_1 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) * (((arr_8 [i_1]) ? (7351721692709038309ULL) : (((/* implicit */unsigned long long int) var_4))))))) ? (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (arr_7 [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-1)) * (((/* implicit */int) (unsigned short)8145)))) * (min((var_1), (((/* implicit */int) var_7)))))))));
            var_14 -= ((/* implicit */int) (short)22564);
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) var_11)) : (arr_7 [i_1 - 1] [i_1])));
            var_16 = ((/* implicit */unsigned long long int) (unsigned char)255);
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_17 ^= ((int) ((unsigned char) min((1053929466554756410ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
            /* LoopSeq 1 */
            for (short i_5 = 3; i_5 < 13; i_5 += 2) 
            {
                var_18 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (arr_12 [i_1 - 1]) : (arr_0 [i_1 - 1]))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_1] [i_1 - 1] [i_4 + 1] [i_5])))))) | ((-(var_5)))));
            }
            arr_19 [i_4] [9LL] [i_1] = ((_Bool) var_7);
            var_20 = ((/* implicit */short) min((min((var_4), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */int) (short)-22567)) | (((/* implicit */int) (short)-14712)))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_22 [i_1] [i_6] = ((((/* implicit */int) ((((arr_18 [i_1] [4U] [i_1]) & (((/* implicit */long long int) 3856124161U)))) == (((/* implicit */long long int) arr_5 [i_1 - 1]))))) / (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (arr_5 [i_1 - 1]) : (arr_5 [i_1 - 1]))));
            var_21 = ((/* implicit */signed char) ((5252220542832243996ULL) ^ (17ULL)));
            var_22 = arr_8 [i_6];
            var_23 -= ((/* implicit */_Bool) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) 1053929466554756414ULL)) ? (((/* implicit */int) arr_17 [i_1 - 1] [i_6] [i_6] [i_6])) : (1977363163)))))));
            var_24 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) arr_15 [i_1 - 1] [i_1 - 1])) - (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (var_4))))));
        }
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_25 = ((long long int) max((203597061900897327LL), (((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_7 - 1])))))));
        var_26 = ((/* implicit */long long int) (((-(-203597061900897336LL))) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_26 [i_7] = ((/* implicit */int) arr_23 [i_7] [i_7 - 1]);
    }
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) 808221715)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */int) (unsigned char)144))))))))) : (((long long int) ((((/* implicit */_Bool) (short)17969)) ? (281474976710655LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)121))))))));
    var_28 = var_1;
}
