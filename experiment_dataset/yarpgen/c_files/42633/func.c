/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42633
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
    for (int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (+(var_0))))) | (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) << (((((/* implicit */int) (unsigned short)4912)) - (4892)))))) > ((+(arr_1 [i_0]))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_9 [(short)6] [18ULL] [i_2 - 2] [i_3] [5] [(short)15] |= ((/* implicit */unsigned short) arr_0 [i_2] [i_2 + 1]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (5462273732106288057ULL) : (((/* implicit */unsigned long long int) arr_12 [i_0 - 2] [i_2 + 1]))));
                            arr_13 [12LL] [(unsigned char)19] [i_2 + 1] [(unsigned char)19] [(short)22] = ((/* implicit */_Bool) 13415789282180268862ULL);
                            arr_14 [5U] [15LL] [i_2 - 2] [20ULL] [(unsigned char)8] [(short)10] = ((short) arr_12 [i_0 + 1] [i_2 - 2]);
                        }
                        arr_15 [18LL] [i_2 + 1] [(short)3] [i_0] = ((/* implicit */unsigned char) max((8249408170955497659LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0] [(unsigned short)8] [(unsigned short)8] [i_0 + 1] [i_2 - 1])))))));
                        arr_16 [(_Bool)1] = ((/* implicit */long long int) max(((short)30677), (arr_11 [18U] [16] [21] [18U])));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) : (8249408170955497659LL))))) ? (((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_10 [(short)20] [(signed char)21] [i_2 + 1] [17] [(signed char)21]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        var_16 &= ((/* implicit */int) 16056764235915705271ULL);
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                {
                    arr_24 [(unsigned short)1] [i_6] [i_5] = ((unsigned short) var_1);
                    arr_25 [(short)15] = (-(1379037024884617721LL));
                    var_17 = ((/* implicit */unsigned short) 9223372036854775807LL);
                }
            } 
        } 
    }
    var_18 = ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_8 = 1; i_8 < 21; i_8 += 1) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)10))))) > (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (unsigned short)4)) : (691024365)))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(1971595720U)))) * ((-(2389979837793846356ULL))))))));
        var_21 |= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)11758))));
    }
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_2))))) ? ((~(((/* implicit */int) (signed char)-84)))) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) -1LL)))))) : (max((((/* implicit */unsigned long long int) (unsigned char)245)), ((-(5758234980187585855ULL))))));
}
