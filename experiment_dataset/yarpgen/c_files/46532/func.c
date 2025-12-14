/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46532
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
    var_20 = ((((((/* implicit */int) var_5)) == ((~(((/* implicit */int) (signed char)-125)))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_17)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))))) : ((~(var_13))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    var_21 ^= ((/* implicit */_Bool) ((arr_0 [i_0 + 1]) % (arr_0 [i_0 + 1])));
                    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_2 - 2])) - (((/* implicit */int) (signed char)124)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) ((((arr_1 [i_0 - 1] [i_0 - 2]) >= (((/* implicit */long long int) ((/* implicit */int) var_17))))) ? (((arr_3 [i_0] [i_0]) ? (((/* implicit */int) (short)-11369)) : (((/* implicit */int) arr_3 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1])))))));
    }
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) arr_5 [i_3] [i_4] [i_3]);
            var_25 = ((/* implicit */_Bool) var_3);
        }
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 3; i_6 < 22; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_26 = ((/* implicit */signed char) arr_15 [i_6 - 3] [i_5] [i_6 - 1] [i_6 - 3]);
                        arr_18 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */short) arr_7 [i_7]);
                        arr_19 [i_5] = ((/* implicit */unsigned int) 14592872422441850242ULL);
                        arr_20 [i_3] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) 21LL);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        var_27 = ((/* implicit */unsigned long long int) ((int) max(((((_Bool)1) ? (12074186022275204501ULL) : (((/* implicit */unsigned long long int) arr_1 [i_8] [i_8])))), (((/* implicit */unsigned long long int) (~(arr_7 [i_8])))))));
        var_28 = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned short)4)), (var_11)))));
        var_29 = ((/* implicit */signed char) ((long long int) 15202914011934694951ULL));
    }
}
