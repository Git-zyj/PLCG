/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38812
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (((+(max((((/* implicit */int) (_Bool)1)), (var_7))))) * ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (((/* implicit */int) ((var_7) > (((/* implicit */int) var_0))))) : (((/* implicit */int) arr_2 [10ULL] [i_1 + 2]))))) ? (((/* implicit */long long int) var_14)) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (max((((/* implicit */long long int) var_0)), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))))));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (var_7) : (((/* implicit */int) var_3)))))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483620)) ? (10133302222566406679ULL) : (((/* implicit */unsigned long long int) 2U))));
    /* LoopSeq 1 */
    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 4) 
    {
        var_18 = ((/* implicit */int) ((short) var_8));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */signed char) arr_12 [i_3]))))) ? (min((arr_13 [i_5] [i_4]), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_5]))))))));
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4294967293U))));
                    var_21 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)39981))))));
                }
            } 
        } 
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)40001)) && (((/* implicit */_Bool) (unsigned short)25556))));
        var_23 = ((/* implicit */unsigned int) min((max((arr_10 [i_3 + 2]), (arr_10 [i_3 - 2]))), ((((!(((/* implicit */_Bool) var_12)))) ? (((var_8) ? (arr_11 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25555))))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3 + 3] [i_3 - 1])))))));
        var_24 |= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)25534)))) | (2U)))) ? (min((((/* implicit */unsigned long long int) ((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40001)))))), ((~(14316103015785308113ULL))))) : (((/* implicit */unsigned long long int) arr_11 [i_3])));
    }
}
