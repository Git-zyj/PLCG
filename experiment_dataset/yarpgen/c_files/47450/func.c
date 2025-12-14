/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47450
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
    var_19 = 3152021908U;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (!(var_10)))) : (((/* implicit */int) arr_4 [i_0] [i_1])))) % (((/* implicit */int) min((((/* implicit */signed char) var_8)), (((signed char) var_1)))))));
            var_21 = ((/* implicit */short) min((((((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_0 [(unsigned char)22]))) * (((/* implicit */long long int) arr_5 [i_1] [i_0])))), (((/* implicit */long long int) ((min((((/* implicit */long long int) 2147483645)), (var_18))) == (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)0)), (arr_5 [i_1] [i_1])))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) min((min((max((-1), (((/* implicit */int) var_2)))), (((/* implicit */int) (signed char)62)))), (((/* implicit */int) (short)32754))));
        }
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned short) ((((_Bool) (unsigned char)247)) ? (((((/* implicit */unsigned long long int) -1LL)) / (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_8 [i_2] [i_0])) / (var_16))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 1888160458U)) ? (((/* implicit */int) (signed char)79)) : (2147483645))), (((((/* implicit */int) arr_14 [i_3 + 2] [i_0] [i_4] [i_4])) / (((/* implicit */int) min((((/* implicit */signed char) var_11)), (var_3))))))));
                        arr_15 [18U] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_11 [i_4] [i_0])), (((int) arr_1 [i_2] [i_2]))));
                    }
                } 
            } 
            arr_16 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_17) : (((/* implicit */int) arr_4 [i_0] [i_0])))) : (((int) arr_14 [i_2] [i_0] [i_0] [4ULL]))))));
            arr_17 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)210)) ? (2147483629) : (((/* implicit */int) (_Bool)1))));
        }
        for (int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_5] [i_5] [i_5])) == (((/* implicit */int) var_4)))))))))));
            arr_20 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)79)) ? (((((/* implicit */_Bool) max((arr_10 [i_0] [i_0]), (((/* implicit */long long int) arr_18 [i_5] [8LL] [i_5]))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26206))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_5])))))));
            arr_21 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_5])))) ? (max((((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0] [i_5]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)1)))) ? (((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)254)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_5] [i_0])) : (var_17))))))));
            var_24 = ((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */long long int) max((((arr_1 [i_0] [i_0]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))), (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])))))));
        }
        var_25 -= ((/* implicit */long long int) ((short) arr_7 [(unsigned char)0]));
        var_26 = ((/* implicit */_Bool) ((min((((/* implicit */int) arr_19 [i_0] [i_0])), (((((/* implicit */_Bool) 634187810)) ? (((/* implicit */int) arr_19 [i_0] [(unsigned char)13])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])))))) % (((((/* implicit */int) arr_11 [i_0] [i_0])) * (((/* implicit */int) arr_11 [i_0] [i_0]))))));
    }
}
