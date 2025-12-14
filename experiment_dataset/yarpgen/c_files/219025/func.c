/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219025
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
    var_14 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) (_Bool)1))), (-80344002)));
                    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2))));
                    arr_7 [i_1] |= ((/* implicit */_Bool) (unsigned short)16711);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)33209)) ? (80344011) : (((/* implicit */int) (unsigned short)4080))));
        var_17 |= ((/* implicit */_Bool) ((int) ((arr_9 [i_3 + 2]) != (min((arr_9 [i_3]), (arr_9 [i_3]))))));
        arr_12 [i_3 + 2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_3 + 2] [i_3 + 1])), (((((/* implicit */int) (unsigned char)204)) + (((/* implicit */int) arr_8 [i_3] [i_3 + 2]))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) -768363333)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (4205603640U)))) ? (((unsigned long long int) (_Bool)1)) : (16761691136874200013ULL)))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_8 [i_3 + 2] [i_3 - 1]))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
    {
        var_18 = ((((((/* implicit */_Bool) arr_14 [i_4])) || (((/* implicit */_Bool) (unsigned short)2285)))) ? (1443766791) : (((((/* implicit */int) arr_14 [i_4])) * (((/* implicit */int) arr_14 [i_4])))));
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned short) (unsigned char)131);
        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_14 [i_4]))));
        arr_17 [3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_4])) != (((/* implicit */int) arr_15 [i_4]))));
    }
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (int i_8 = 3; i_8 < 19; i_8 += 3) 
                {
                    {
                        arr_31 [i_5] [i_5] [i_5] [i_8] [i_5] = ((/* implicit */int) (unsigned short)63250);
                        arr_32 [i_5] [i_5] [i_5] [i_5] [i_8] = ((/* implicit */unsigned int) (unsigned short)32326);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32748))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5]))) ^ (4205603633U)))))) < ((+(min((1685052936835351603ULL), (((/* implicit */unsigned long long int) (unsigned char)153)))))))))));
        arr_33 [0ULL] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)3)) : (0)))));
        arr_34 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) | ((~(((((/* implicit */int) arr_20 [(signed char)2])) - (((/* implicit */int) (unsigned char)107))))))));
    }
}
