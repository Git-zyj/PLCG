/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43740
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) (~(arr_2 [i_0] [i_0])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            var_14 = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_4 [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned int i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 3])) ? ((~(-1))) : (((arr_0 [(unsigned char)4] [i_1 + 4]) ? (arr_5 [i_0] [i_0]) : (arr_9 [(unsigned short)13] [i_0] [i_0])))));
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1])) ? (arr_2 [23] [i_1 + 2]) : (arr_9 [(_Bool)1] [11] [11]))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned char) arr_1 [i_1 + 1] [i_1 + 3]);
        }
        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_4] [i_0])) : (arr_9 [i_5] [i_5] [i_5])))))) ? ((+((-(-704213291))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [17] [i_0] [i_4] [i_5] [i_0] [i_4]))))) ? (((((/* implicit */_Bool) arr_10 [(unsigned char)5])) ? (arr_7 [i_0] [i_0] [22LL] [16ULL]) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_5])))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (-24) : (-24)))))));
                        var_19 += ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [(unsigned short)20] [i_4]);
                        var_20 = ((/* implicit */unsigned int) arr_12 [i_0] [i_5] [i_6]);
                    }
                } 
            } 
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4] [i_0])) ? (((/* implicit */int) arr_0 [i_4] [i_4])) : (((/* implicit */int) arr_1 [21U] [i_4]))))) ? (((((/* implicit */_Bool) arr_4 [i_4] [i_0])) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_13 [(_Bool)1] [i_0] [6U] [i_0])))) : (((arr_14 [4ULL] [4ULL] [i_4] [i_4]) ? ((-(arr_5 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_4] [i_4] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_4] [i_0] [i_4])) : (((/* implicit */int) arr_8 [(unsigned char)21] [(unsigned char)21] [(signed char)18] [i_0]))))))));
            var_22 |= ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [17] [i_4]);
        }
        var_23 = ((/* implicit */short) (~((~(arr_5 [i_0] [i_0])))));
    }
    var_24 = ((/* implicit */unsigned short) var_3);
    var_25 = ((/* implicit */signed char) var_2);
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) -55)) ? (4477079815339149996ULL) : (13969664258370401620ULL)))));
    var_27 -= (-(var_9));
}
