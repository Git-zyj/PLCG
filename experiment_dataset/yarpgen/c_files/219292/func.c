/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219292
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
    var_15 = ((/* implicit */_Bool) (unsigned char)7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */unsigned char) ((short) arr_2 [(unsigned short)9] [i_0]));
        var_17 = ((/* implicit */_Bool) ((long long int) arr_1 [(signed char)4]));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (140462610448384ULL)))) && (((/* implicit */_Bool) 140462610448413ULL))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 &= ((/* implicit */long long int) (unsigned char)244);
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_5 [i_0] [i_0] [i_2] [i_3]))));
                        arr_10 [6LL] [i_1] [i_1] [i_2] [i_3 - 1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_11)) % (((/* implicit */int) (unsigned char)10))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 4) 
            {
                for (short i_6 = 2; i_6 < 8; i_6 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 115553079)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_5] [i_6]))) : (arr_8 [i_0] [i_0] [i_4] [i_5 - 2] [i_5] [i_6 - 2])))));
                        arr_20 [i_0] [i_4] [i_5 - 2] [i_6 + 2] [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_3 [i_6] [i_5])) ? (((/* implicit */unsigned long long int) arr_11 [i_5] [i_6])) : (5437756668824425333ULL)))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_3)), ((+(arr_23 [i_8] [i_8]))))))));
                var_23 = ((/* implicit */short) ((arr_21 [i_7]) ? (max((arr_23 [i_7] [i_8]), (max((0ULL), (((/* implicit */unsigned long long int) arr_24 [(short)5] [i_8])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53324)))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) min((var_24), (var_7)));
}
