/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51326
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
    var_19 *= ((/* implicit */unsigned long long int) var_17);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) max(((~(((/* implicit */int) (unsigned short)40668)))), (((/* implicit */int) (!(((/* implicit */_Bool) -1524117839)))))));
        var_21 = ((/* implicit */signed char) min(((unsigned short)40668), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)40675)) || ((_Bool)0))) || (((/* implicit */_Bool) min(((unsigned char)251), (((/* implicit */unsigned char) arr_3 [i_0]))))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_22 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1] [i_1 - 1])) && (((/* implicit */_Bool) (unsigned short)40696)))) ? (((arr_0 [i_1] [i_1 - 1]) ? (arr_8 [i_1 - 1] [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_6)) ? (arr_8 [i_1 - 1] [(unsigned char)7] [i_1 - 1]) : (arr_8 [i_1 - 1] [i_1] [i_1 - 1])))));
                    var_23 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_16)), ((unsigned short)24867)))), ((-(arr_7 [i_3]))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)40696)), (1900725913))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned short)40675))))))) ? (((((/* implicit */_Bool) -1900725914)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_4 [i_1 - 1])))) : ((-(((/* implicit */int) (unsigned short)40675)))))) : (((/* implicit */int) var_16))));
        /* LoopSeq 1 */
        for (int i_4 = 3; i_4 < 8; i_4 += 1) 
        {
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) -1900725915)) ? (max((max((arr_12 [i_4 - 2] [i_1]), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)40688)), ((-(((/* implicit */int) (signed char)15))))))))))));
            var_26 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (short)8268)) : (((/* implicit */int) (signed char)58))))) : (3057939585935510395ULL))) - (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned char)127)) / (((/* implicit */int) (unsigned short)32303)))), ((~(-1900725932))))))));
            var_27 = ((/* implicit */_Bool) (unsigned short)24842);
        }
        var_28 = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) arr_11 [6ULL])), (9823785436946422438ULL)))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_14 [i_5] [i_5]))));
        var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_5]))))) || (((/* implicit */_Bool) 1900725933))));
    }
}
