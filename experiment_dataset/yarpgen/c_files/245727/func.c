/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245727
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_18 = 809876560U;
        var_19 ^= ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), ((-(809876562U)))))) : (18218513051798968751ULL))))));
    }
    for (short i_1 = 2; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_21 ^= -1013891321;
            var_22 = ((/* implicit */unsigned char) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_3 [i_1 - 2]))));
        }
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(996717515)))) ? ((-2147483647 - 1)) : ((-(((/* implicit */int) arr_4 [i_1])))))) < (max((var_7), (arr_6 [i_1 + 1])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 2; i_4 < 24; i_4 += 1) 
            {
                arr_14 [i_3] [14] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_13 [i_1 + 1])), (8706492990850962188LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_10 [i_1 - 1] [i_1 - 1])))) : (((arr_13 [i_1 - 2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 2])))))));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1]))) : (min((((/* implicit */long long int) ((-1859799902) - (((/* implicit */int) var_1))))), (126100789566373888LL)))));
            }
            var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)94)), (18218513051798968761ULL)));
        }
        var_26 = ((/* implicit */long long int) min((var_26), ((+(((((/* implicit */long long int) arr_10 [i_1] [i_1 - 2])) % ((-(7604185333191241890LL)))))))));
        var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min(((-(809876560U))), (((/* implicit */unsigned int) min(((unsigned char)156), (((/* implicit */unsigned char) (signed char)94)))))))) % ((((!(((/* implicit */_Bool) 17844173269071896018ULL)))) ? (((67108863ULL) * (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_5)) : (996717503))))))));
    }
    var_28 = ((/* implicit */int) -6617412880384473945LL);
    var_29 = ((/* implicit */unsigned short) var_1);
    var_30 = var_5;
}
