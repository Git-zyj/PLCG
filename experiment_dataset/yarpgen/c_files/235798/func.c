/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235798
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
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max(((unsigned short)19), (((/* implicit */unsigned short) var_9)))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) (signed char)1))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (min((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_13)))), ((+(((/* implicit */int) arr_2 [i_0] [i_1])))))) : (((/* implicit */int) ((((1053710021055565509ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)7))))))))));
                var_17 = ((/* implicit */long long int) ((min((((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (short)13099)) - (13089))))), (((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))) == ((+(((/* implicit */int) (unsigned short)19))))));
                var_18 = ((/* implicit */unsigned char) 1053710021055565509ULL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (long long int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            {
                arr_9 [i_3 + 1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_3]))) & (667504583U)))) ? ((+(1125899902648320ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (min(((-(((/* implicit */int) (_Bool)1)))), (arr_6 [(unsigned char)9] [i_2]))) : (((((/* implicit */_Bool) arr_6 [0U] [(_Bool)1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 - 1] [(signed char)21]))) <= (9007199254740991ULL)))) : (((/* implicit */int) (_Bool)1))))));
                arr_10 [i_2] [(_Bool)1] = ((arr_5 [i_2]) ? ((-(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_6 [(signed char)13] [i_3]) : (((/* implicit */int) (_Bool)1)))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146))) <= (3301410515U))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((unsigned char) arr_1 [i_2]))))));
            }
        } 
    } 
}
