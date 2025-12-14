/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49922
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
    var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_13)))) % (((unsigned int) var_4))));
    var_17 = ((/* implicit */_Bool) var_14);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 ^= (!(((/* implicit */_Bool) ((var_13) ^ (((/* implicit */int) (_Bool)1))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_1 [i_0]))));
    }
    for (int i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 342013526U))) ? (((/* implicit */int) max((((((/* implicit */int) (_Bool)1)) != (arr_5 [i_1]))), ((!((_Bool)0)))))) : (((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) == (((/* implicit */int) (_Bool)1))))) * (arr_5 [i_1])))));
        arr_7 [i_1] = (((!(((/* implicit */_Bool) arr_3 [i_1 - 2])))) ? ((((!(((/* implicit */_Bool) (unsigned char)7)))) ? ((-(((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) (_Bool)1)))) : (225460468));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((((((/* implicit */_Bool) 8907567094440161049LL)) ? (((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */unsigned int) arr_9 [i_1] [i_2] [i_2]))))) : (((((/* implicit */_Bool) 12730489U)) ? (13431822149809353600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-25587), (((/* implicit */short) (!((_Bool)1))))))))))));
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) max((arr_3 [i_2]), (((/* implicit */short) var_3))))), (min((((/* implicit */unsigned int) var_15)), (var_11))))))));
            arr_11 [i_2] &= ((/* implicit */int) ((short) (((+(((/* implicit */int) (_Bool)1)))) - (((var_12) - (((/* implicit */int) var_1)))))));
            arr_12 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) min((-1903750981), (var_14)));
        }
        for (short i_3 = 2; i_3 < 14; i_3 += 2) 
        {
            arr_16 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1])) ? (max((((unsigned int) arr_10 [i_1])), (min((((/* implicit */unsigned int) (_Bool)1)), (var_4))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(2179623565492535060LL)))) ? (((/* implicit */int) ((4901348852302514829ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) : (((/* implicit */int) ((_Bool) (_Bool)1))))))));
            var_22 = (~(((((/* implicit */_Bool) 520192U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)13776)))));
        }
    }
    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) min((var_23), ((-(max((((/* implicit */unsigned long long int) ((var_14) % ((-2147483647 - 1))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551608ULL)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 2; i_5 < 22; i_5 += 3) 
        {
            arr_22 [i_4] [i_5] = ((/* implicit */unsigned int) var_8);
            var_24 = ((((/* implicit */int) (!(((/* implicit */_Bool) -3))))) <= (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_8)), (arr_18 [i_4]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_4] [i_5])))))));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((_Bool) (short)4785)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((long long int) ((((/* implicit */_Bool) (unsigned short)55966)) ? (((/* implicit */unsigned long long int) 2147483635)) : (arr_18 [8LL])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9559)))));
            var_26 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 7627538340463707595LL))))))))));
        }
    }
    var_27 = ((/* implicit */unsigned long long int) var_3);
}
