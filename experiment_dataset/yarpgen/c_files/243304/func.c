/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243304
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_9))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) 5571102136098743091ULL))))))));
            arr_6 [(unsigned short)9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [10ULL] [i_1]))))) ? ((((!(((/* implicit */_Bool) 12875641937610808525ULL)))) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 2290531930108205929LL)) ? (2290531930108205929LL) : (2103876644279409813LL)))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 15; i_2 += 4) /* same iter space */
        {
            var_14 += (unsigned short)60721;
            var_15 = ((/* implicit */unsigned short) arr_3 [i_2 - 1]);
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 15; i_3 += 4) /* same iter space */
        {
            arr_13 [i_0 - 1] = ((/* implicit */int) arr_11 [i_0 - 2] [i_3 + 1] [i_3 + 1]);
            /* LoopSeq 1 */
            for (signed char i_4 = 4; i_4 < 14; i_4 += 4) 
            {
                arr_18 [(_Bool)1] [i_0 + 2] [2LL] [i_0] = ((/* implicit */signed char) arr_8 [i_0 - 1] [i_0] [(unsigned short)5]);
                arr_19 [i_0] [(unsigned short)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(18446744073709551614ULL)))) ? (arr_10 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)2] [i_3 - 1]))) == (5571102136098743091ULL)))))));
            }
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) (short)20842))))) == ((+(arr_17 [(signed char)10] [(_Bool)1] [i_3] [i_3]))))))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_15 [i_0 - 2] [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_27 [(unsigned char)3] [i_7] [i_5] [i_5] [9LL] [(unsigned short)12] [i_5]))));
                            var_18 &= ((/* implicit */signed char) ((unsigned char) arr_11 [i_3 - 1] [i_0 + 2] [i_3 - 1]));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_8 [i_0] [12ULL] [i_0 - 1]))));
        }
        var_20 += ((/* implicit */unsigned short) max((9113697200544352908LL), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)60721))))))));
    }
}
