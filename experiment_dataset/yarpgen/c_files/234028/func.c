/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234028
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) (_Bool)0)))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-123)) - (((/* implicit */int) (unsigned short)65505)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                arr_10 [i_3] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (signed char)-100)) ? (arr_8 [i_2]) : (-5426697096399283467LL))));
                arr_11 [i_3] [i_1 + 4] [i_1 + 4] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)14665))) == (var_1))))));
            }
            arr_12 [0LL] = ((/* implicit */long long int) (~((+(1698913526959744649ULL)))));
            arr_13 [i_1] = ((/* implicit */signed char) ((unsigned long long int) (~(13ULL))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                var_13 = ((/* implicit */_Bool) (+(((int) arr_4 [i_1]))));
                arr_18 [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (-2412687454183998986LL) : (((/* implicit */long long int) var_7)))));
            }
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((long long int) ((signed char) (_Bool)1))))));
        }
        arr_19 [i_1] = ((/* implicit */long long int) var_9);
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 4; i_5 < 11; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    arr_24 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6] = ((/* implicit */short) (+((+(((/* implicit */int) arr_4 [i_1]))))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(arr_22 [i_6 + 1] [i_6] [i_5] [i_1]))))));
                    arr_25 [i_5 - 1] [i_5 - 1] = (-((-(((/* implicit */int) (short)198)))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */_Bool) min(((unsigned short)62493), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(var_10)))))))));
    var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (short)-22665))) ? (((((/* implicit */_Bool) ((long long int) 4449037091918116202ULL))) ? (((/* implicit */int) (unsigned short)65489)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))) : ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) var_0))))))));
}
