/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218709
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (short)-22431)))), (min((((/* implicit */int) (unsigned short)21418)), (var_0)))))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) -6837517261081135826LL)) ? (((/* implicit */int) (unsigned short)44129)) : (((/* implicit */int) (unsigned short)21418)))), (var_0)))) : (var_8))))));
    var_13 += ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 13ULL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((arr_0 [4U]) ^ (var_1)))))) < (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_0 [i_0]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_0 [(_Bool)1]) & (((/* implicit */int) (unsigned short)39836))));
    }
    for (int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        var_15 -= (short)9582;
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_1 + 1] [i_1 - 2]))) && (((/* implicit */_Bool) var_9))));
            var_16 = ((/* implicit */signed char) min((min((var_11), (((/* implicit */unsigned int) (unsigned char)177)))), (arr_4 [i_1])));
            arr_9 [i_2] [i_1] = ((/* implicit */unsigned char) max((1258108245U), (((/* implicit */unsigned int) (short)-25153))));
            arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(max((arr_7 [i_2] [i_2] [1ULL]), (((/* implicit */unsigned int) var_10))))))) ? (((/* implicit */int) min((arr_5 [i_1] [i_1 + 1] [i_1]), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))) > (arr_7 [i_1] [i_1] [i_2]))))))) : (arr_6 [16U] [i_1 + 1])));
        }
        var_17 = ((/* implicit */unsigned short) min((1048575ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) -2147483640))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1 + 3])) : (var_4))) : (((/* implicit */long long int) (~(var_2)))))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    {
                        arr_19 [i_1] [i_1] = (+(var_0));
                        arr_20 [i_1] [i_4] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_12 [i_1] [i_4]))))));
                        arr_21 [i_1] [i_1 + 3] [i_3 - 1] [i_1] = ((/* implicit */short) max(((unsigned char)255), (arr_18 [1LL] [i_5] [i_4] [i_3] [i_1 - 2] [i_1])));
                        arr_22 [i_1] = ((/* implicit */unsigned long long int) var_5);
                    }
                } 
            } 
        } 
    }
}
