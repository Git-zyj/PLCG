/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46775
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) arr_1 [i_0 - 1]);
                    var_21 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_0] [i_0] [i_2] [i_2])))) * (582600738601158822ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233)))));
                    arr_8 [(signed char)2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7636286237965807105LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)194))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-116))) : (((((/* implicit */_Bool) (+(-1694198858)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_18))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) -8010616252402526066LL)) : (12804274063602273399ULL)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 3) 
    {
        for (int i_4 = 3; i_4 < 15; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 3) 
            {
                {
                    var_22 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_6 [i_3] [i_4 + 1] [1LL] [i_4 - 3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)9))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) (((_Bool)0) ? (12804274063602273413ULL) : (var_3)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))));
                        var_24 = ((/* implicit */unsigned short) 2995745679U);
                        var_25 += ((/* implicit */signed char) arr_10 [i_3]);
                        var_26 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_6] [i_5 - 3] [i_4 - 1] [i_3 - 3]))));
                    }
                }
            } 
        } 
    } 
}
